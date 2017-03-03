using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;
using SignatureTool.Ex;
using Microsoft.Win32;
using System.Reflection;

namespace SignatureTool
{
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]
    [Guid("E2FCCBB2-BB8C-48F9-9D1B-CECE63D99E05")]
    public interface ISTLib
    {
        void SetAdapterDllPtr(IntPtr i_AdapterDllPtr);
        void AddColumn(string colName, string colHeaderText);
        int AddRow();
        void SetCellValue(int rowIndex, int cellIndex, string value);
        void RemoveRow(int rowIndex);
        void RemoveAll();
    }

    [ProgId("SignatureTool.STLib")]
    [ClassInterface(ClassInterfaceType.None)]
    [Guid("B82B6BF8-1F00-4A02-9DDA-548B52244113")]
    public partial class STLib : UserControl, IObjectSafety, ISTLib
    {
        #region IObjectSafety 成员
        private const string _IID_IDispatch = "{00020400-0000-0000-C000-000000000046}";
        private const string _IID_IDispatchEx = "{a6ef9860-c720-11d0-9337-00a0c90dcaa9}";
        private const string _IID_IPersistStorage = "{0000010A-0000-0000-C000-000000000046}";
        private const string _IID_IPersistStream = "{00000109-0000-0000-C000-000000000046}";
        private const string _IID_IPersistPropertyBag = "{37D84F60-42CB-11CE-8135-00AA004BB851}";

        private const int INTERFACESAFE_FOR_UNTRUSTED_CALLER = 0x00000001;
        private const int INTERFACESAFE_FOR_UNTRUSTED_DATA = 0x00000002;
        private const int S_OK = 0;
        private const int E_FAIL = unchecked((int)0x80004005);
        private const int E_NOINTERFACE = unchecked((int)0x80004002);

        private bool _fSafeForScripting = true;
        private bool _fSafeForInitializing = true;

        public int GetInterfaceSafetyOptions(ref Guid riid, [MarshalAs(UnmanagedType.U4)] ref int pdwSupportedOptions, [MarshalAs(UnmanagedType.U4)] ref int pdwEnabledOptions)
        {
            int rslt = E_FAIL;
            string strGUID = riid.ToString("B");
            pdwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_CALLER | INTERFACESAFE_FOR_UNTRUSTED_DATA;
            switch (strGUID)
            {
                case _IID_IDispatch:
                case _IID_IDispatchEx:
                    rslt = S_OK;
                    pdwEnabledOptions = 0;
                    if (_fSafeForScripting == true)
                        pdwEnabledOptions = INTERFACESAFE_FOR_UNTRUSTED_CALLER;
                    break;
                case _IID_IPersistStorage:
                case _IID_IPersistStream:
                case _IID_IPersistPropertyBag:
                    rslt = S_OK;
                    pdwEnabledOptions = 0;
                    if (_fSafeForInitializing == true)
                        pdwEnabledOptions = INTERFACESAFE_FOR_UNTRUSTED_DATA;
                    break;
                default:
                    rslt = E_NOINTERFACE;
                    break;
            }

            return rslt;

        }

        public int SetInterfaceSafetyOptions(ref Guid riid, [MarshalAs(UnmanagedType.U4)] int dwOptionSetMask, [MarshalAs(UnmanagedType.U4)] int dwEnabledOptions)
        {
            int rslt = E_FAIL;

            string strGUID = riid.ToString("B");
            switch (strGUID)
            {
                case _IID_IDispatch:
                case _IID_IDispatchEx:
                    if (((dwEnabledOptions & dwOptionSetMask) == INTERFACESAFE_FOR_UNTRUSTED_CALLER) && (_fSafeForScripting == true))
                        rslt = S_OK;
                    break;
                case _IID_IPersistStorage:
                case _IID_IPersistStream:
                case _IID_IPersistPropertyBag:
                    if (((dwEnabledOptions & dwOptionSetMask) == INTERFACESAFE_FOR_UNTRUSTED_DATA) && (_fSafeForInitializing == true))
                        rslt = S_OK;
                    break;
                default:
                    rslt = E_NOINTERFACE;
                    break;
            }

            return rslt;

        }
        #endregion

        #region ISTLib 成员
        public void SetAdapterDllPtr(IntPtr i_AdapterDllPtr)
        {
            throw new NotImplementedException();
        }

        public void AddColumn(string colName, string colHeaderText)
        {
            throw new NotImplementedException();
        }

        public int AddRow()
        {
            throw new NotImplementedException();
        }

        public void SetCellValue(int rowIndex, int cellIndex, string value)
        {
            throw new NotImplementedException();
        }

        public void RemoveRow(int rowIndex)
        {
            throw new NotImplementedException();
        }

        public void RemoveAll()
        {
            throw new NotImplementedException();
        }
        #endregion

        #region 状态成员变量
        /// <summary>
        /// 记录当前搜索状态
        /// </summary>
        private bool _bSearchStatus = false;

        /// <summary>
        /// 记录当前激活的视图按钮集合位序
        /// </summary>
        private int _activeViewButton = 0;

        /// <summary>
        /// 记录当前激活的工具按钮集合位序
        /// </summary>
        private int _activeToolButton = 0;

        /// <summary>
        /// 签名图片尺寸
        /// </summary>
        private const int SignSize = 40;
        private const int SignDateImgHeight = SignSize;
        private const int SignDateImgWidth = 270;
        private const int SignDateImgMargin = 3;

        /// <summary>
        /// PDF和签名图片路径
        /// </summary>
        private string _pdfPath;
        private string _signImgPath;

        /// <summary>
        ///  工具栏背景颜色
        /// </summary>
        private readonly Color _tbBackColor = Color.Tomato;
        //private readonly Color _tbBackColor = Color.SeaShell;
        //private readonly Color _tbBackColor = Color.Salmon;
        //private readonly Color _tbBackColor = Color.PowderBlue;

        /// <summary>
        /// 工具栏边框颜色
        /// </summary>
        private readonly Color _tbBorderColor = Color.Black;

        /// <summary>
        /// 工具栏按钮边框和背景颜色
        /// </summary>
        private readonly Color _tbnBorderColor = Color.Black;
        private readonly Color _btnToolColor = Color.GreenYellow;
        private readonly Color _btnViewColor = Color.CornflowerBlue;
        private readonly Color _btnSearchColor = Color.Beige;

        /// <summary>
        /// 搜索框原始背景颜色
        /// </summary>
        private readonly Color _tbxOriginalColor = Color.White;

        /// <summary>
        /// 搜索框文本颜色
        /// </summary>
        private readonly Color _tbxSuccessTxtColor = Color.Black;
        private readonly Color _tbxFailedTxtColor = Color.Red;

        /// <summary>
        /// 工具栏背景图片
        /// </summary>
        private readonly List<List<Image>> _btnBackImgList = new List<List<Image>>
        {
            new List<Image>() {Properties.Resources._01, Properties.Resources._01g},
            new List<Image>() {Properties.Resources._02, Properties.Resources._02g},
            new List<Image>() {Properties.Resources._03, Properties.Resources._03g},
            new List<Image>() {Properties.Resources._04, Properties.Resources._04g},
            new List<Image>() {Properties.Resources._05, Properties.Resources._05g},
            new List<Image>() {Properties.Resources._06, Properties.Resources._06g},
            new List<Image>() {Properties.Resources._07, Properties.Resources._07g},
            new List<Image>() {Properties.Resources._08, Properties.Resources._08g},
            new List<Image>() {Properties.Resources._09, Properties.Resources._09g},
            new List<Image>() {Properties.Resources._10, Properties.Resources._10g},
            new List<Image>() {Properties.Resources._11, Properties.Resources._11g},
            new List<Image>() {Properties.Resources._12, Properties.Resources._12g},
            new List<Image>() {Properties.Resources._13, Properties.Resources._13g},
            new List<Image>() {Properties.Resources._14, Properties.Resources._14g},
            new List<Image>() {Properties.Resources._15, Properties.Resources._15g},
            new List<Image>() {Properties.Resources._16, Properties.Resources._16g},
            new List<Image>() {Properties.Resources._17, Properties.Resources._17g},
            new List<Image>() {Properties.Resources._18, Properties.Resources._18g},
            new List<Image>() {Properties.Resources._19, Properties.Resources._19},
            new List<Image>() {Properties.Resources._20, Properties.Resources._20g},
            new List<Image>() {Properties.Resources._21, Properties.Resources._21},
            new List<Image>() {Properties.Resources._22, Properties.Resources._22},
        };
        #endregion

        #region 静态函数 & MAPPING_OF_USER32_DLL_SECTION
        #region Register
        /// <summary>
        /// Register ActiveX DLL function
        /// </summary>
        /// <param name="i_Key"></param>
        [ComRegisterFunction()]
        public static void RegisterClass(string key)
        {
            // Strip off HKEY_CLASSES_ROOT\ from the passed key as I don't need it
            StringBuilder sb = new StringBuilder(key);
            sb.Replace(@"HKEY_CLASSES_ROOT\", "");
            // Open the CLSID\{guid} key for write access
            RegistryKey k = Registry.ClassesRoot.OpenSubKey(sb.ToString(), true);
            // And create the 'Control' key - this allows it to show up in
            // the ActiveX control container
            RegistryKey ctrl = k.CreateSubKey("Control");
            ctrl.Close();
            // Next create the CodeBase entry - needed if not string named and GACced.
            RegistryKey inprocServer32 = k.OpenSubKey("InprocServer32", true);
            inprocServer32.SetValue("CodeBase", Assembly.GetExecutingAssembly().CodeBase);
            inprocServer32.Close();
            // Finally close the main key
            k.Close();
        }
        /// <summary>
        /// Unregister ActiveX DLL function
        /// </summary>
        /// <param name="i_Key"></param>
        [ComUnregisterFunction()]
        public static void UnregisterClass(string i_Key)
        {
            // strip off HKEY_CLASSES_ROOT\ from the passed key as I don't need it
            StringBuilder sb = new StringBuilder(i_Key);
            sb.Replace(@"HKEY_CLASSES_ROOT\", "");
            // open HKCR\CLSID\{guid} for write access
            RegistryKey registerKey =
            Registry.ClassesRoot.OpenSubKey(sb.ToString(), true);
            // delete the 'Control' key,
            // but don't throw an exception if it does not exist
            registerKey.DeleteSubKey("Control", false);
            // next open up InprocServer32
            RegistryKey inprocServer32 =
            registerKey.OpenSubKey("InprocServer32", true);
            // and delete the CodeBase key, again not throwing if missing
            inprocServer32.DeleteSubKey("CodeBase", false);
            // finally close the main key
            registerKey.Close();
        }
        #endregion

        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string defVal, StringBuilder retVal, int size, string filePath);
        [DllImport("kernel32")]
        private static extern long WritePrivateProfileString(string section, string key, string val, string filePath);
        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        public static extern IntPtr SendMessage(int hwnd, uint wMsg, IntPtr wParam, IntPtr lParam);
        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        public static extern int SendMessage(int hwnd, uint wMsg, int wParam, string lParam);
        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        public static extern int SendMessage(int hwnd, uint wMsg, int wParam, out int lParam);
        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        public static extern int GetNbFiles(int hwnd, uint wMsg, int wParam, int lParam);
        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        public static extern int GetFileNames(int hwnd, uint wMsg,
        [MarshalAs(UnmanagedType.LPArray)]IntPtr[] wParam,
        int lParam);
        [DllImport("user32.dll", EntryPoint = "SendMessage")]
        public static extern int SendMessage(int hwnd, uint wMsg, int wParam, StringBuilder lParam);
        [DllImport("user32.dll", EntryPoint = "PostMessage")]
        public static extern bool PostMessage(int hwnd, uint wMsg, int wParam, string lParam);
        [DllImport("user32.dll", EntryPoint = "PostMessage")]
        public static extern bool PostMessage(int hwnd, uint wMsg, int wParam, int lParam);
        #endregion

        #region 对外接口
        public void SetPDFAndImgPath(string pdfPath, string imgPath)
        {
            try
            {
                this._pdfPath = pdfPath;
                this._signImgPath = imgPath;
                bool bOpen = this.m_axFoxitPDFSDK.OpenFile(_pdfPath, "");
                if (!bOpen)
                {
                    throw new Exception("打开PDF文件失败...");
                }
            }
            catch (Exception e)
            {
                MessageBoxEx.Show(e.Message, MessageBoxEx.MsgType.Error, FormStartPosition.CenterScreen);
            }
        }

        public bool IsSDKImageExist()
        {
            try
            {
                return this.m_axFoxitPDFSDK.IsSDImageExist();
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
                return false;
            }
        }

        public void ComposeImageAndSaveAs(string fileName)
        {
            try
            {
                string saveFilePath = fileName.Replace(".pdf", "_save.pdf");
                this.m_axFoxitPDFSDK.ComposeImageAndSaveAs(saveFilePath);
                // 等待关闭文件并删除源文件
                this.m_axFoxitPDFSDK.CloseFile();
                for (int i = 1; i < 50; i++)
                {
                    try
                    {
                        System.IO.File.Delete(fileName);
                    }
                    catch (Exception ex)
                    {
                        continue;
                    }
                    break;
                }

                // 重命名save文件到源文件
                System.IO.File.Move(saveFilePath, fileName);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }
        #endregion

        #region 事件和功能函数
        public STLib()
        {
            InitializeComponent();
            InitialView();
        }

        private void InitialView()
        {
            try
            {
                InitialButton();

                string cfgFile = Environment.CurrentDirectory + "\\" + "Config.ini";

                if (!System.IO.File.Exists(cfgFile))
                {
                    long lRet;
                    lRet = WritePrivateProfileString("UNLOCK", "sn", "SDKAXYX9470", cfgFile);
                    lRet = WritePrivateProfileString("UNLOCK", "unlockCode", "2B50AF883D293B810017F0C069FAC2F93420E64E", cfgFile);
                }

                StringBuilder sn = new StringBuilder(500);
                StringBuilder unlockCode = new StringBuilder(500);

                int iRet;
                iRet = GetPrivateProfileString("UNLOCK", "sn", "", sn, 500, "Config.ini");
                iRet = GetPrivateProfileString("UNLOCK", "unlockCode", "", unlockCode, 500, cfgFile);

                this.m_axFoxitPDFSDK.UnLockActiveX(sn.ToString(), unlockCode.ToString());
                this.m_axFoxitPDFSDK.ShowTitleBar(false);
                this.m_axFoxitPDFSDK.ShowToolBar(false);

                // 初始为 Fit watch
                this._activeViewButton = this.panel1.Controls.IndexOf(this.button16);
                this.button16_Click(null, new EventArgs());
                // 初始为 Hand
                this._activeToolButton = this.panel1.Controls.IndexOf(this.button13);
                this.button13_Click(null, new EventArgs());
            }
            catch (Exception e)
            {
                MessageBoxEx.Show(e.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 初始化工具栏按钮
        /// </summary>
        private void InitialButton()
        {
            // 控件的toolTip的Caption
            List<string> captionList = new List<string>()
            {
                "First Page",
                "Previous Page",
                "Next Page",
                "Last Page",
                "Previous View",
                "Next View",
                "Rotate Clockvise",
                "Rotate Counterclockwise",
                "Zoom In",
                "Zoom Out",
                "Zoom In Tool",
                "Zoom Out Tool",
                "Hand Tool",
                "Actual Size",
                "Fit Page",
                "Fit Watch",
                "Pass",
                "Reject",
                "About...",
                "Open File",
                "Search",
                "Find Previou Item",
                "Find Next Item",
                "Press Enter to start research",
            };

            // 初始间距为3
            int x = 3;
            for (int i = 0; i < this.panel1.Controls.Count; i++)
            {
                // 设置位置
                this.panel1.Controls[i].Location = new Point(x, 3);
                x = x + this.panel1.Controls[i].Width + 2;

                // 设置颜色
                this.panel1.Controls[i].BackColor = _tbBackColor;

                // 设置提示工具
                ToolTip toolTip = new ToolTip();
                toolTip.SetToolTip(this.panel1.Controls[i], captionList[i]);
            }

            // 设置textBox位置和颜色
            this.textBox1.Location = new Point(this.textBox1.Location.X, 10);
            this.textBox1.BackColor = _tbxOriginalColor;

            // 设置panel1的颜色
            this.panel1.BackColor = _tbBackColor;
        }

        /// <summary>
        /// 调整控件大小适应客户端窗口
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void Form1_Resize(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.Size = new Size(this.Size.Width + 4, this.Size.Height - this.panel1.Height + 1);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Go to first page
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.GoToPage(0);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Go to preview page
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.GoToPrevPage();
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Go to next page
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.GoToNextPage();
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Go to Last page
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.GoToPage(this.m_axFoxitPDFSDK.PageCount - 1);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Go to preview view
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button5_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.GoBackwardStack();
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Go to next view
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button6_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.GoForwardStack();
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Rotate clockvise
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button7_Click(object sender, EventArgs e)
        {
            try
            {
                short cur = this.m_axFoxitPDFSDK.Rotate;
                this.m_axFoxitPDFSDK.Rotate = (short)((cur + 1) % 4);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Rotate counterclockwise
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button8_Click(object sender, EventArgs e)
        {
            try
            {
                short cur = this.m_axFoxitPDFSDK.Rotate;
                this.m_axFoxitPDFSDK.Rotate = (short)((cur + 4 - 1) % 4);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Zoom In
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button9_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.ZoomLevel *= 2;
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Zoom Out
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button10_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.ZoomLevel /= 2;
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// ZoomIn Tool
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button11_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.CurrentTool = "ZoomIn Tool";

                // 绑定重绘事件
                this.panel1.Controls[this._activeToolButton].Paint -= this.button_Paint;
                this.button11.Paint += this.button_Paint;
                // 重绘按钮背景
                this.panel1.Controls[this._activeToolButton].BackColor = this._tbBackColor;
                this.button11.BackColor = _btnToolColor;
                // 设置当前激活按钮位序
                this._activeToolButton = this.panel1.Controls.IndexOf(this.button11);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// ZoomOut Tool
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button12_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.CurrentTool = "ZoomOut Tool";

                // 绑定重绘事件
                this.panel1.Controls[this._activeToolButton].Paint -= this.button_Paint;
                this.button12.Paint += this.button_Paint;
                // 重绘按钮背景
                this.panel1.Controls[this._activeToolButton].BackColor = this._tbBackColor;
                this.button12.BackColor = _btnToolColor;
                // 设置当前激活按钮位序
                this._activeToolButton = this.panel1.Controls.IndexOf(this.button12);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Hand Tool
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button13_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.CurrentTool = "Hand Tool";

                // 绑定重绘事件
                this.panel1.Controls[this._activeToolButton].Paint -= this.button_Paint;
                this.button13.Paint += this.button_Paint;
                // 重绘按钮背景
                this.panel1.Controls[this._activeToolButton].BackColor = this._tbBackColor;
                this.button13.BackColor = _btnToolColor;
                // 设置当前激活按钮位序
                this._activeToolButton = this.panel1.Controls.IndexOf(this.button13);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Actual Size
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button14_Click(object sender, EventArgs e)
        {
            try
            {
                // 设置视图
                this.m_axFoxitPDFSDK.ZoomLevel = 0;

                // 绑定重绘事件
                this.panel1.Controls[this._activeViewButton].Paint -= this.button_Paint;
                this.button14.Paint += this.button_Paint;
                // 重绘按钮背景
                this.panel1.Controls[this._activeViewButton].BackColor = this._tbBackColor;
                this.button14.BackColor = _btnViewColor;
                // 设置当前激活按钮位序
                this._activeViewButton = this.panel1.Controls.IndexOf(this.button14);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Fit Page
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button15_Click(object sender, EventArgs e)
        {
            try
            {
                // 设置视图
                this.m_axFoxitPDFSDK.ZoomLevel = 1;

                // 绑定重绘事件
                this.panel1.Controls[this._activeViewButton].Paint -= this.button_Paint;
                this.button15.Paint += this.button_Paint;
                // 重绘按钮背景
                this.panel1.Controls[this._activeViewButton].BackColor = this._tbBackColor;
                this.button15.BackColor = _btnViewColor;
                // 设置当前激活按钮位序
                this._activeViewButton = this.panel1.Controls.IndexOf(this.button15);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Fit Watch
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button16_Click(object sender, EventArgs e)
        {
            try
            {
                // 设置视图
                this.m_axFoxitPDFSDK.ZoomLevel = 2;

                // 绑定重绘事件
                this.panel1.Controls[this._activeViewButton].Paint -= this.button_Paint;
                this.button16.Paint += this.button_Paint;
                // 重绘按钮背景
                this.panel1.Controls[this._activeViewButton].BackColor = this._tbBackColor;
                this.button16.BackColor = _btnViewColor;
                // 设置当前激活按钮位序
                this._activeViewButton = this.panel1.Controls.IndexOf(this.button16);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Pass
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button17_Click(object sender, EventArgs e)
        {
            try
            {
                // TODO:图片合成，返回成功的结果，这里IsSDImageExist()函数有问题，等待处理
                // 判断签名图和日期图，是否存在，存在则合并
                if (this.m_axFoxitPDFSDK.IsSDImageExist())
                {
                    // 合并并保存
                    string filePath = this.m_axFoxitPDFSDK.FilePath;
                    string saveFilePath = filePath.Replace(".pdf", "_save.pdf");
                    this.m_axFoxitPDFSDK.ComposeImageAndSaveAs(saveFilePath);

                    // 等待关闭文件并删除源文件
                    this.m_axFoxitPDFSDK.CloseFile();
                    for (int i = 1; i < 50; i++)
                    {
                        try
                        {
                            System.IO.File.Delete(filePath);
                        }
                        catch (Exception ex)
                        {
                            continue;
                        }
                        break;
                    }

                    // 重命名save文件到源文件
                    System.IO.File.Move(saveFilePath, filePath);

                    // 成功返回 0
                    System.Environment.Exit(0);     // 相比以下函数此函数可完全退出进程并提供退出码
                    //this.Close();
                    //Application.Exit();
                    //Application.ExitThread();
                }
                else
                {
                    MessageBoxEx.Show("没有检测到新增签名，请添加签名再执行此操作，或者选择 Reject 操作", "Information", MessageBoxEx.MsgType.Information);
                }
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Reject
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button18_Click(object sender, EventArgs e)
        {
            // 失败返回 1
            System.Environment.Exit(1);
        }

        /// <summary>
        /// Software Information
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button19_Click(object sender, EventArgs e)
        {
            MessageBoxEx.Show("\nDigiwin Signature Tools", "About", MessageBoxEx.MsgType.Information);
        }

        /// <summary>
        /// Just For Test, Open File
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button20_Click(object sender, EventArgs e)
        {
            try
            {
                FileDialog fileDialog = new OpenFileDialog();
                if (fileDialog.ShowDialog() == DialogResult.OK)
                {
                    string selectFile = fileDialog.FileName;
                    this.m_axFoxitPDFSDK.OpenFile(selectFile, "");
                }
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Search
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button21_Click(object sender, EventArgs e)
        {
            try
            {
                if (_bSearchStatus)
                {
                    this.textBox1.Visible = false;
                    this.button22.Visible = false;
                    this.button23.Visible = false;

                    // 绑定重绘事件
                    this.button21.Paint -= this.button_Paint;
                    // 重绘按钮背景
                    this.button21.BackColor = _tbBackColor;
                }
                else
                {
                    this.textBox1.Visible = true;
                    this.button22.Visible = true;
                    this.button23.Visible = true;
                    this.textBox1.Focus();

                    // 绑定重绘事件
                    this.button21.Paint += this.button_Paint;
                    // 重绘按钮背景
                    this.button21.BackColor = _btnSearchColor;
                }
                this._bSearchStatus = !this._bSearchStatus;
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Find Previou Item
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button22_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.FindNext(false);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// Find Next Item
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button23_Click(object sender, EventArgs e)
        {
            try
            {
                this.m_axFoxitPDFSDK.FindNext(true);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 响应搜索事件，return 按钮
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == '\r')
            {
                try
                {
                    bool result = this.m_axFoxitPDFSDK.FindFirst(this.textBox1.Text, false, false);
                    this.textBox1.ForeColor = result == true ? _tbxSuccessTxtColor : _tbxFailedTxtColor;
                }
                catch (Exception ex)
                {
                    MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
                }
            }
        }

        /// <summary>
        /// 响应搜索事件
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Up)
            {
                try
                {
                    this.button22_Click(null, new EventArgs());
                }
                catch (Exception ex)
                {
                    MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
                }
            }
            else if (e.KeyCode == Keys.Down)
            {
                try
                {
                    this.button23_Click(null, new EventArgs());
                }
                catch (Exception ex)
                {
                    MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
                }
            }
        }

        /// <summary>
        /// 恢复字体颜色
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            this.textBox1.ForeColor = _tbxSuccessTxtColor;
        }

        /// <summary>
        /// 按钮重绘边框
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button_Paint(object sender, PaintEventArgs e)
        {
            try
            {
                Button button = sender as Button;
                if (button != null)
                {
                    e.Graphics.DrawRectangle(new Pen(_tbnBorderColor, 1), 0, 0, button.Width - 1, button.Height - 1);
                }
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        ///  生成动态时间图
        /// </summary>
        private void GenerateDateImage()
        {
            try
            {
                List<Image> imgList = new List<Image>
            {
                SignatureTool.Properties.Resources.sd0,
                SignatureTool.Properties.Resources.sd1,
                SignatureTool.Properties.Resources.sd2,
                SignatureTool.Properties.Resources.sd3,
                SignatureTool.Properties.Resources.sd4,
                SignatureTool.Properties.Resources.sd5,
                SignatureTool.Properties.Resources.sd6,
                SignatureTool.Properties.Resources.sd7,
                SignatureTool.Properties.Resources.sd8,
                SignatureTool.Properties.Resources.sd9,
                SignatureTool.Properties.Resources.ss1,
                SignatureTool.Properties.Resources.ss2
            };

                for (int i = 0; i < imgList.Count; i++)
                {
                    int destWidth = 0;
                    int destHeight = SignSize;
                    int srWidth = imgList[i].Width;
                    int srHeight = imgList[i].Height;
                    if (srHeight != destHeight)
                    {
                        destWidth = (int)((double)srWidth * (double)destHeight / (double)srHeight);
                    }
                    else
                    {
                        destWidth = srWidth;
                        destHeight = srHeight;
                    }

                    Bitmap outBmp = new Bitmap(destWidth, destHeight);
                    Graphics g = Graphics.FromImage(outBmp);
                    g.Clear(Color.Transparent);
                    // 设置画布的描绘质量         
                    g.CompositingQuality = CompositingQuality.HighQuality;
                    g.SmoothingMode = SmoothingMode.HighQuality;
                    g.InterpolationMode = InterpolationMode.HighQualityBicubic;
                    g.DrawImage(imgList[i], new Rectangle(0, 0, destWidth, destHeight), 0, 0, srWidth, srHeight, GraphicsUnit.Pixel);
                    g.Flush();
                    g.Dispose();
                    imgList[i].Dispose();
                    imgList[i] = outBmp;
                }

                Image dateImage = new Bitmap(SignDateImgWidth, SignDateImgHeight);
                using (Graphics g = Graphics.FromImage(dateImage))
                {
                    int year = System.DateTime.Now.Year;
                    int month = System.DateTime.Now.Month;
                    int day = System.DateTime.Now.Day;
                    int hour = System.DateTime.Now.Hour;
                    int minute = System.DateTime.Now.Minute;

                    int y1 = year / 1000;
                    int y2 = year % 1000 / 100;
                    int y3 = year % 100 / 10;
                    int y4 = year % 10 / 1;

                    int m1 = month / 10;
                    int m2 = month % 10 / 1;

                    int d1 = day / 10;
                    int d2 = day % 10 / 1;

                    int h1 = hour / 10;
                    int h2 = hour % 10 / 1;

                    int mi1 = minute / 10;
                    int mi2 = minute % 10 / 1;

                    int loc = 0;
                    // year
                    g.DrawImage(imgList[y1], loc += imgList[y1].Width, SignDateImgMargin);
                    g.DrawImage(imgList[y2], loc += imgList[y2].Width, SignDateImgMargin);
                    g.DrawImage(imgList[y3], loc += imgList[y3].Width, SignDateImgMargin);
                    g.DrawImage(imgList[y4], loc += imgList[y4].Width, SignDateImgMargin);
                    // .
                    g.DrawImage(imgList[11], loc += imgList[11].Width, SignDateImgMargin);
                    // month
                    g.DrawImage(imgList[m1], loc += imgList[m1].Width, SignDateImgMargin);
                    g.DrawImage(imgList[m2], loc += imgList[m2].Width, SignDateImgMargin);
                    // .
                    g.DrawImage(imgList[11], loc += imgList[11].Width, SignDateImgMargin);
                    // day
                    g.DrawImage(imgList[d1], loc += imgList[d1].Width, SignDateImgMargin);
                    g.DrawImage(imgList[d2], loc += imgList[d2].Width, SignDateImgMargin);
                    // gap between date and time
                    loc += imgList[h1].Width;
                    // h
                    g.DrawImage(imgList[h1], loc += imgList[h1].Width, SignDateImgMargin);
                    g.DrawImage(imgList[h2], loc += imgList[h2].Width, SignDateImgMargin);
                    // :
                    g.DrawImage(imgList[11], loc += imgList[11].Width, SignDateImgMargin - 8);
                    g.DrawImage(imgList[11], loc - 2, SignDateImgMargin + 2);
                    // minute
                    g.DrawImage(imgList[mi1], loc += imgList[mi1].Width, SignDateImgMargin);
                    g.DrawImage(imgList[mi2], loc += imgList[mi2].Width, SignDateImgMargin);

                    g.Flush();
                }

                dateImage.Save("_Date.jpg");
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 设置签名图片参数
        /// </summary>
        private void SetSignImgs()
        {
            try
            {
                double zoom = (double)this.m_axFoxitPDFSDK.ZoomLevel / 100;

                // 设置签名图路径及宽高
                // 注意：原始图片是有大小的，这里设置的大小需要和原始图片做等比缩放，不然图片会变形
                //string csSignedImagePath = @"D:\GeAn\39.0-腾龙汽车-签名工具\SignTool\SignTool\Icon\sign01.jpg";
                string csSignedImagePath = _signImgPath;
                Image imgSignedImage = new Bitmap(csSignedImagePath);
                int nSignedImageHeight = (int)((double)SignSize * zoom);
                int nSignedImageWidth =
                    (int)((double)imgSignedImage.Width / (double)imgSignedImage.Height * (double)nSignedImageHeight);
                imgSignedImage.Dispose();
                this.m_axFoxitPDFSDK.SetSignedImageParams(csSignedImagePath, nSignedImageWidth, nSignedImageHeight);

                // 设置日期图路径及宽高
                // 注意：原始图片是有大小的，这里设置的大小需要和原始图片做等比缩放，不然图片会变形
                string csDateImagePath = @"_Date.jpg";
                Image imgDateImage = new Bitmap(csDateImagePath);
                int nDateImageHeight = (int)((double)SignSize * zoom);
                int nDateImageWidth =
                    (int)((double)imgDateImage.Width / (double)imgDateImage.Height * (double)nDateImageHeight
                           * 0.8 /*日期图片宽度需要适当缩放，显示更紧凑一点*/
                    );
                imgDateImage.Dispose();
                this.m_axFoxitPDFSDK.SetDateImageParams(csDateImagePath, nDateImageWidth, nDateImageHeight);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 打开文档事件，设置签名参数
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void m_axFoxitPDFSDK_OnOpenDocument(object sender, AxFoxitPDFSDKProLib._DFoxitPDFSDKEvents_OnOpenDocumentEvent e)
        {
            GenerateDateImage();
            SetSignImgs();
        }

        /// <summary>
        /// PDF视图缩放事件，处理图片大小参数的相应变化
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void m_axFoxitPDFSDK_OnZoomChange(object sender, EventArgs e)
        {
            SetSignImgs();
        }

        /// <summary>
        /// 视图变化事件
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void m_axFoxitPDFSDK_AfterDraw(object sender, AxFoxitPDFSDKProLib._DFoxitPDFSDKEvents_AfterDrawEvent e)
        {
            try
            {
                int page = this.m_axFoxitPDFSDK.CurPage;
                if (page == 0)
                {
                    this.button1.Enabled = false;
                    this.button2.Enabled = false;
                    this.button3.Enabled = true;
                    this.button4.Enabled = true;
                }
                else if (page == this.m_axFoxitPDFSDK.PageCount - 1)
                {
                    this.button1.Enabled = true;
                    this.button2.Enabled = true;
                    this.button3.Enabled = false;
                    this.button4.Enabled = false;
                }
                else
                {
                    this.button1.Enabled = true;
                    this.button2.Enabled = true;
                    this.button3.Enabled = true;
                    this.button4.Enabled = true;
                }

                this.button5.Enabled = this.m_axFoxitPDFSDK.ExistBackwardStack();
                this.button6.Enabled = this.m_axFoxitPDFSDK.ExistForwardStack();
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 工具栏按钮状态变化统一事件处理
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button_EnabledChanged(object sender, EventArgs e)
        {
            try
            {
                Button btn = sender as Button;

                if (this._btnBackImgList == null)
                    return;

                if (btn != null && btn.Enabled == false)
                {
                    int index = this.panel1.Controls.IndexOf(btn);
                    if (this._btnBackImgList.Count > index && this._btnBackImgList[index].Count > 1)
                    {
                        btn.BackgroundImage = this._btnBackImgList[index][1];
                    }
                }
                else if (btn != null && btn.Enabled == true)
                {
                    int index = this.panel1.Controls.IndexOf(btn);
                    if (this._btnBackImgList.Count > index)
                    {
                        btn.BackgroundImage = this._btnBackImgList[index][0];
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 绘制工具栏（panel1）边框
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void panel1_Paint(object sender, PaintEventArgs e)
        {
            try
            {
                ControlPaint.DrawBorder(e.Graphics,
                    this.panel1.ClientRectangle,
                    _tbBorderColor,
                    0,
                    ButtonBorderStyle.Solid,
                    _tbBorderColor,
                    1,
                    ButtonBorderStyle.Solid,
                    _tbBorderColor,
                    0,
                    ButtonBorderStyle.Solid,
                    _tbBorderColor,
                    1,
                    ButtonBorderStyle.Solid);
            }
            catch (Exception ex)
            {
                MessageBoxEx.Show(ex.Message, MessageBoxEx.MsgType.Error);
            }
        }

        /// <summary>
        /// 屏蔽掉双击图片打开设置对话框的事件响应
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void m_axFoxitPDFSDK_OnDbClickEx(object sender, AxFoxitPDFSDKProLib._DFoxitPDFSDKEvents_OnDbClickExEvent e)
        {
            e.bRet = true;
        }
        #endregion
    }
}
