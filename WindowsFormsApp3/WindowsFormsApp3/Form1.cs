using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Reflection;

namespace WindowsFormsApp3
{
    public partial class Form1 : Form
    {
        private long current_time_in_seconds = 0;



        public Form1()
        {

            InitializeComponent();

        }
        
        private void Form1_Load(object sender, EventArgs e)
        {

        }



        private void timer1_Tick(object sender, EventArgs e)
        {
            Graphics g = this.CreateGraphics();
            g.Clear(Color.Black);
            
            int CX = Width / 2;
            int CY = Height / 2;

            int max_radius = Convert.ToInt32((Width > Height ? Height : Width) / 2 * 0.8);
            int RS = Convert.ToInt32(max_radius * 0.6);
            int RM = Convert.ToInt32(0.8 * RS);
            int RH = Convert.ToInt32(0.6 * RS);

            for (int z = 0; z < 360; z += 6)
            {
                int x1 = CX + Convert.ToInt32(Math.Round(max_radius * (z % 30 == 0 ? 0.6 : 0.8) * Math.Cos((z - 180) * Math.PI / 180)));
                int y1 = CY + Convert.ToInt32(Math.Round(max_radius * (z % 30 == 0 ? 0.6 : 0.8) * Math.Sin((z - 180) * Math.PI / 180)));

                int x2 = CX + Convert.ToInt32(Math.Round(max_radius * Math.Cos((z - 180) * Math.PI / 180)));
                int y2 = CY + Convert.ToInt32(Math.Round(max_radius * Math.Sin((z - 180) * Math.PI / 180)));

                g.DrawLine(new Pen(Color.Red), x1, y1, x2, y2);
            }

            long s = current_time_in_seconds % 60;
            long m = (current_time_in_seconds % 3600) / 60;
            long h = (current_time_in_seconds / 3600) % 43200;

            long s_a = s * 6;
            long m_a = m * 6 + Convert.ToInt32(6.0 / 60 * s);
            long h_a = h * 30 + Convert.ToInt32(30.0 / 60 * m);


            Text = h.ToString() + " : " + m.ToString() + " : " + s.ToString() + " | " +
                h_a.ToString() + " : " + m_a.ToString() + " : " + s_a.ToString();


            int s_x = CX + Convert.ToInt32(Math.Round(RS * Math.Cos((s_a - 180) * Math.PI / 180)));
            int s_y = CY + Convert.ToInt32(Math.Round(RS * Math.Sin((s_a - 180) * Math.PI / 180)));

            int m_x = CX + Convert.ToInt32(Math.Round(RM * Math.Cos((m_a - 180 + 90) * Math.PI / 180)));
            int m_y = CY + Convert.ToInt32(Math.Round(RM * Math.Sin((m_a - 180 + 90) * Math.PI / 180)));

            int h_x = CX + Convert.ToInt32(Math.Round(RH * Math.Cos((h_a - 180 + 90) * Math.PI / 180)));
            int h_y = CY + Convert.ToInt32(Math.Round(RH * Math.Sin((h_a - 180 + 90) * Math.PI / 180)));

            g.DrawLine(new Pen(Color.Red), CX, CY, s_x, s_y);
            g.DrawLine(new Pen(Color.Red), CX, CY, m_x, m_y);
            g.DrawLine(new Pen(Color.Red), CX, CY, h_x, h_y);

            current_time_in_seconds += 1;
        }
    }
}
