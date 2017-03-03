using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;

namespace PngGenerator
{
    [Guid("FE9C4D47-4D8A-4DAD-BBF3-FE006FEF03B9")]
    [ComVisible(true)]
    public interface IDatePngGenerator
    {
        [DispId(1)]
        bool GenerateDateImage();
    }

    [Guid("0FE8B150-E112-4657-8A7B-1D2DEDEAE4B9")]
    [ClassInterface(ClassInterfaceType.None)]
    public class CDatePngGenerator : IDatePngGenerator
    {
        private const int SignSize = 40;
        private const int SignDateImgHeight = SignSize;
        private const int SignDateImgWidth = 270;
        private const int SignDateImgMargin = 3;

        public bool GenerateDateImage()
        {
            try
            {
                List<Image> imgList = new List<Image>
                {
                    PngGenerator.Properties.Resources.sd0,
                    PngGenerator.Properties.Resources.sd1,
                    PngGenerator.Properties.Resources.sd2,
                    PngGenerator.Properties.Resources.sd3,
                    PngGenerator.Properties.Resources.sd4,
                    PngGenerator.Properties.Resources.sd5,
                    PngGenerator.Properties.Resources.sd6,
                    PngGenerator.Properties.Resources.sd7,
                    PngGenerator.Properties.Resources.sd8,
                    PngGenerator.Properties.Resources.sd9,
                    PngGenerator.Properties.Resources.ss1,
                    PngGenerator.Properties.Resources.ss2
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
                dateImage.Dispose();
                return true;
            }
            catch (Exception ex)
            {
                return false;
            }
        }
    }
}
