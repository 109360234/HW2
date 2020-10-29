using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HW非C__
{
    public partial class Form1 : Form
    {
        int paycode = 0;
        double hours = 0, hpay = 0, total = 0, total1 = 0, temp = 0, amount = 0, amount_pay, total2;
        public Form1()
        {
            InitializeComponent();
            textBox2.Enabled = false;
            textBox3.Enabled = false;
            textBox4.Enabled = false;
            textBox5.Enabled = false;
            textBox6.Enabled = false;
            textBox7.Enabled = false;
        }
        private void textBox6_TextChanged(object sender, EventArgs e)
        {
            amount = Convert.ToDouble(textBox6.Text);        
        }
        private void textBox7_TextChanged(object sender, EventArgs e)
        {
            amount_pay = Convert.ToDouble(textBox7.Text);
        }
        private void textBox5_TextChanged(object sender, EventArgs e)
        {
            temp = Convert.ToDouble(textBox5.Text);
        }
        private void textBox4_TextChanged(object sender, EventArgs e)
        {
            hours = Convert.ToDouble(textBox4.Text);
        }
        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            hpay = Convert.ToDouble(textBox3.Text);
        }   
        private void button1_Click(object sender, EventArgs e)
        {
            
            paycode = Convert.ToInt32(textBox1.Text); 
            switch (paycode)
            {
                case 1:    
                    textBox2.Enabled = true;
                    textBox3.Enabled = false;
                    textBox4.Enabled = false;
                    textBox5.Enabled = false;
                    textBox6.Enabled = false;
                    textBox7.Enabled = false;
                break;
                case 2:
                    textBox2.Enabled = false;
                    textBox3.Enabled = true;
                    textBox4.Enabled = true;
                    textBox5.Enabled = false;
                    textBox6.Enabled = false;
                    textBox7.Enabled = false;
                    break;
                case 3:
                    textBox2.Enabled = false;
                    textBox3.Enabled = false;
                    textBox4.Enabled = false;
                    textBox5.Enabled = true;
                    textBox6.Enabled = false;
                    textBox7.Enabled = false;                         
                    break;
                case 4:
                    textBox2.Enabled = false;
                    textBox3.Enabled = false;
                    textBox4.Enabled = false;
                    textBox5.Enabled = false;
                    textBox6.Enabled = true;
                    textBox7.Enabled = true;                    
                    break;
            }
        }
        private void button2_Click(object sender, EventArgs e)
        {
            switch (paycode)
            {
                case 1:
                     label5.Text = "1. $" + textBox2.Text;
                break;

                case 2:
                     if (hours > 40)
                        total = (hours - 40) * 1.5 * hpay + 40 * hpay;
                     else
                        total = hpay * hours;
                     label6.Text = "2. $" + total.ToString();
                break;

                case 3:
                     total1 = temp * 0.057 + 250;
                     label7.Text = "3. $" + total1.ToString();
                break;

                case 4:
                     total2 = amount * amount_pay;
                     label8.Text = "4. $" + total2.ToString();
                break;
            }
        
        }
    }
}
