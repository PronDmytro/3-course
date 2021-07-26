using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace IZVP
{
    public partial class Form : System.Windows.Forms.Form
    {
         int opacity_test_op_code = 0;

        public Form()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (opacity_test_op_code == 1)
            {
                Opacity -= 0.01;
                if (Opacity <= 0) opacity_test_op_code = 2;
            }

            if (opacity_test_op_code == 1)
            {
                Opacity -= 0.01;
                if (Opacity <= 0) opacity_test_op_code = 2;
            }
            Opacity += 0.01;
            if (Opacity > 100)
            {
                opacity_test_op_code = 0;
                timer1.Enabled = false;
            }
        }
    }
}