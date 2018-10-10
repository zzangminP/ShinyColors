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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a, b=3;
            for (a = 1; a < 10; a++)
                textBox1.Text = textBox1.Text + b + "*" + a + "=" + b*a + "\r\n";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int a=1, b = 4;
            while (a < 10)
            {
                textBox2.Text = textBox2.Text + b + "*" + a + "=" + b * a + "\r\n";
                a++;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int a = 1, b = 5;
            do
            {
                textBox3.Text = textBox3.Text + b + "*" + a + "=" + b * a + "\r\n";
                a++;
            } while (a < 10);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int a = 1, b = 6;
            while (true)
            {
                textBox4.Text = textBox4.Text + b + "*" + a + "=" + b * a + "\r\n";
                a++;
                if (a == 10) break;

            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int[] a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            int b = 7;
            foreach ( int item in a)
                textBox5.Text = textBox5.Text + b + "*" + a[item-1] + "=" + b * a[item-1] + "\r\n";
        }
    }
}
