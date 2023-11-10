using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        DateTime startDateTime;

        public DateTime GetStratDateTime()
        {
            startDateTime = DateTime.Now;
            return startDateTime;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("어서와 C#프로그램이야 !! ");
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            MessageBox.Show(GetStartDateTime().ToString());
        }
    }
}
