/**
 * 重载 AxFoxitPDFSDKProLib.AxFoxitPDFSDK ActiveX类，使用双缓冲防止改变大小等刷新操作导致的界面闪烁问题
 */

using System.Windows.Forms;

namespace SignatureTool.Ex
{
    // ReSharper disable once InconsistentNaming
    public class CusAxFoxitPDFSDK : AxFoxitPDFSDKProLib.AxFoxitPDFSDK
    {
        public CusAxFoxitPDFSDK()
        {
            // 开启双缓冲
            this.SetStyle(ControlStyles.UserPaint | ControlStyles.OptimizedDoubleBuffer | ControlStyles.AllPaintingInWmPaint, true);

            // Enable the OnNotifyMessage event so we get a chance to filter out 
            // Windows messages before they get to the form's WndProc
            this.SetStyle(ControlStyles.EnableNotifyMessage, true);
        }

        protected override void WndProc(ref Message m)

        {
            if (m.Msg == 0x0014) // 禁掉清除背景消息
                return;
            base.WndProc(ref m);
        }

        protected override void OnNotifyMessage(Message m)
        {
            //Filter out the WM_ERASEBKGND message
            if (m.Msg != 0x14)
            {
                base.OnNotifyMessage(m);
            }
        }

    }
}
