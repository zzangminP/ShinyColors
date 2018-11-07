using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2018_11_07_계산기만들기_곽정민
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        bool Point_Flag = true; //true 면 점찍힘,아니면 안찍힘
        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text = "0";
        }

        public void zero_sub(int a)
        {
            if (textBox1.Text == "0" || textBox1.Text == "000" || textBox1.Text == "")
                textBox1.Text = a.ToString();
            else
                textBox1.Text = textBox1.Text + a;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            zero_sub(7);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            zero_sub(8);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            zero_sub(9);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            zero_sub(4);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            zero_sub(5);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            zero_sub(6);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            zero_sub(1);
        }

        private void button8_Click(object sender, EventArgs e)
        {
            zero_sub(2);
        }

        private void button9_Click(object sender, EventArgs e)
        {
            zero_sub(3);
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if(textBox1.Text =="0" || textBox1.Text =="000" || textBox1.Text == "")
                textBox1.Text = "0";
            else
                textBox1.Text = textBox1.Text + "0";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (Point_Flag)
            {
                if (textBox1.Text == "")
                    textBox1.Text = "0.";
                else                
                        textBox1.Text = textBox1.Text + ".";                
                Point_Flag = false;
            }
            }

        private void button12_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0" || textBox1.Text == "000" || textBox1.Text == "")
                textBox1.Text = "0";
            else
                textBox1.Text = textBox1.Text + "000";
        }


        private void button13_Click(object sender, EventArgs e)
        {
            textBox1.Text = "0";
            Point_Flag = true;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" || textBox1.Text =="0")
            {
                if (textBox1.Text.Substring(textBox1.Text.Length - 1) == ".")
                {                   
                    Point_Flag = true;
                }
                    textBox1.Text = textBox1.Text.Substring(0,textBox1.Text.Length - 1); 
                }
                

            }
            
        }
    }

