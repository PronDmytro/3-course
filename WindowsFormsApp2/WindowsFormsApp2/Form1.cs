using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void OK_Click(object sender, EventArgs e)
        {
         
                refrenSolo();
                coupleSolo();
                refrenSolo();
            
            //Jingle Bells
            void refrenSolo()
            {
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Thread.Sleep(300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Thread.Sleep(300);
                Console.Beep(659, 300);
                Console.Beep(783, 300);
                Console.Beep(523, 300);
                Console.Beep(587, 300);
                Console.Beep(659, 300);
                Console.Beep(261, 300);
                Console.Beep(293, 300);
                Console.Beep(329, 300);
                Console.Beep(698, 300);
                Console.Beep(698, 300);
                Console.Beep(698, 300);
                Thread.Sleep(300);
                Console.Beep(698, 300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Thread.Sleep(300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(587, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Thread.Sleep(300);
                Console.Beep(783, 300);
                Thread.Sleep(300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Thread.Sleep(300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Thread.Sleep(300);
                Console.Beep(659, 300);
                Console.Beep(783, 300);
                Console.Beep(523, 300);
                Console.Beep(587, 300);
                Console.Beep(659, 300);
                Console.Beep(261, 300);
                Console.Beep(293, 300);
                Console.Beep(329, 300);
                Console.Beep(698, 300);
                Console.Beep(698, 300);
                Console.Beep(698, 300);
                Thread.Sleep(300);
                Console.Beep(698, 300);
                Console.Beep(659, 300);
                Console.Beep(659, 300);
                Thread.Sleep(300);
                Console.Beep(783, 300);
                Console.Beep(783, 300);
                Console.Beep(698, 300);
                Console.Beep(587, 300);
                Console.Beep(523, 600);
                Thread.Sleep(600);
            }
            void coupleSolo()
            {
                Console.Beep(392, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(523, 300);
                Console.Beep(392, 600);
                Thread.Sleep(300 * 2);
                Console.Beep(392, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(523, 300);
                Console.Beep(440, 600);
                Thread.Sleep(600);
                Console.Beep(440, 300);
                Console.Beep(698, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(783, 600);
                Thread.Sleep(600);
                Console.Beep(880, 300);
                Console.Beep(880, 300);
                Console.Beep(783, 300);
                Console.Beep(622, 300);
                Console.Beep(659, 600);
                Thread.Sleep(600);
                Console.Beep(392, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(523, 300);
                Console.Beep(392, 600);
                Thread.Sleep(600);
                Console.Beep(392, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(523, 300);
                Console.Beep(440, 600);
                Thread.Sleep(600);
                Console.Beep(440, 300);
                Console.Beep(698, 300);
                Console.Beep(659, 300);
                Console.Beep(587, 300);
                Console.Beep(783, 600);
                Thread.Sleep(600);
                Console.Beep(880, 300);
                Console.Beep(783, 300);
                Console.Beep(698, 300);
                Console.Beep(587, 300);
                Console.Beep(523, 600);
                Thread.Sleep(600);
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void monthCalendar1_DateChanged(object sender, DateRangeEventArgs e)
        {

        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {

        }
    }
}
