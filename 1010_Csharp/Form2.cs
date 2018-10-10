using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _1010
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            for (int a = 1;a<10;a++)
            {
                for (int b = 1; b < a+1; b++)
                    textBox1.Text = textBox1.Text + "*";
                textBox1.Text = textBox1.Text + Environment.NewLine;
            }
            
        }

        private void button2_Click(object sender, EventArgs e)
        {

            int a, b, c;
            for (a = 1; a < 10; a++)
            {
                for (b = 10; b > a; b--)
                    textBox2.Text = textBox2.Text + " ";
                for (c = 1; c < a; c++)
                    textBox2.Text = textBox2.Text + "*";
                textBox2.Text = textBox2.Text + Environment.NewLine;
            }

        }
    }
}
