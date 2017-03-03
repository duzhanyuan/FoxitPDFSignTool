using System;
using System.Drawing;
using System.Windows.Forms;

namespace SignatureTool.Ex
{
    public partial class MessageBoxEx : Form
    {
        public enum MsgType
        {
            Information,
            Warning,
            Error,
        }

        public MessageBoxEx()
        {
            InitializeComponent();
            this.label_Info.TextAlign = ContentAlignment.MiddleLeft;
        }

        public MessageBoxEx(string msg, string title, MsgType type, FormStartPosition startPosition = FormStartPosition.CenterParent) : this()
        {
            switch (type)
            {
                case MsgType.Information:
                    this.pictureBox1.Image = SignatureTool.Properties.Resources.msbx_information;
                    this.button_cancel.Visible = false;
                    break;
                case MsgType.Warning:
                    this.pictureBox1.Image = SignatureTool.Properties.Resources.msbx_warning;
                    break;
                case MsgType.Error:
                    this.pictureBox1.Image = SignatureTool.Properties.Resources.msbx_error;
                    this.button_cancel.Visible = false;
                    break;
                default:
                    break;
            }

            this.label_Info.Text = msg;
            this.Text = title;
            this.StartPosition = startPosition;
        }

        public static DialogResult Show(string text, FormStartPosition startPosition = FormStartPosition.CenterParent)
        {
            using (MessageBoxEx msgBox = new MessageBoxEx(text, MsgType.Information.ToString(), MessageBoxEx.MsgType.Information, startPosition))
            {
                DialogResult rs = msgBox.ShowDialog();
                return rs;
            }
        }

        public static DialogResult Show(string text, string title, FormStartPosition startPosition = FormStartPosition.CenterParent)
        {
            using (MessageBoxEx msgBox = new MessageBoxEx(text, title, MessageBoxEx.MsgType.Information, startPosition))
            {
                DialogResult rs = msgBox.ShowDialog();
                return rs;
            }
        }

        public static DialogResult Show(string text, MsgType type, FormStartPosition startPosition = FormStartPosition.CenterParent)
        {
            using (MessageBoxEx msgBox = new MessageBoxEx(text, type.ToString(), type, startPosition))
            {
                DialogResult rs = msgBox.ShowDialog();
                return rs;
            }
        }

        public static DialogResult Show(string text, string title, MsgType type, FormStartPosition startPosition = FormStartPosition.CenterParent)
        {
            using (MessageBoxEx msgBox = new MessageBoxEx(text, title, type, startPosition))
            {
                DialogResult rs = msgBox.ShowDialog();
                return rs;
            }
        }

        private void button_ok_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.OK;
            this.Dispose();
            this.Close();
        }

        private void button_cancel_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.Cancel;
            this.Dispose();
            this.Close();
        }
    }
}
