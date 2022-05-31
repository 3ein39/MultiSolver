#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyFormphysics
	/// </summary>
	public ref class MyFormphysics : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		MyFormphysics(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyFormphysics(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormphysics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Label^ label130;
private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label127;
private: System::Windows::Forms::Label^ label126;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::Label^ label134;
private: System::Windows::Forms::Label^ label133;
private: System::Windows::Forms::Label^ label132;
private: System::Windows::Forms::Label^ label131;
private: System::Windows::Forms::Label^ label137;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::Label^ label136;
private: System::Windows::Forms::Label^ label135;
private: System::Windows::Forms::Label^ label138;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ label140;
private: System::Windows::Forms::Label^ label139;
private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Label^ label142;
private: System::Windows::Forms::Label^ label141;
private: System::Windows::Forms::Label^ label146;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Label^ label145;
private: System::Windows::Forms::Label^ label144;
private: System::Windows::Forms::Label^ label149;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Label^ label148;
private: System::Windows::Forms::Label^ label147;
private: System::Windows::Forms::Label^ label152;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::Label^ label151;
private: System::Windows::Forms::Label^ label150;
private: System::Windows::Forms::Label^ label155;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Label^ label154;
private: System::Windows::Forms::Label^ label153;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::Label^ label156;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Label^ label160;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Label^ label159;
private: System::Windows::Forms::Label^ label158;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::TextBox^ textBox46;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::Label^ label161;
private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::TextBox^ textBox47;
private: System::Windows::Forms::Label^ label165;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::Panel^ panel30;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormphysics::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel20->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(12, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"<--";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormphysics::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Periodic Motion";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormphysics::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L" Wave Motion";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormphysics::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 192);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(167, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Sound Waves";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormphysics::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 252);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Standing Waves";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormphysics::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(12, 311);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(167, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Superposition";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormphysics::button6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->label36);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->label34);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label33);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(213, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(612, 506);
			this->panel1->TabIndex = 6;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(102, 272);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(13, 20);
			this->label39->TabIndex = 54;
			this->label39->Text = L" ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(12, 274);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(84, 20);
			this->label38->TabIndex = 53;
			this->label38->Text = L"->  a ( t ) = ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(102, 250);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 20);
			this->label37->TabIndex = 52;
			this->label37->Text = L" ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(277, 451);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(13, 20);
			this->label36->TabIndex = 51;
			this->label36->Text = L" ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(199, 451);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(37, 26);
			this->textBox9->TabIndex = 50;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button15->Location = System::Drawing::Point(247, 450);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(24, 23);
			this->button15->TabIndex = 49;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyFormphysics::button15_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(172, 451);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(18, 20);
			this->label35->TabIndex = 48;
			this->label35->Text = L"g";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(12, 451);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(154, 20);
			this->label34->TabIndex = 47;
			this->label34->Text = L"-> angular frequency";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->Location = System::Drawing::Point(307, 405);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(29, 23);
			this->button14->TabIndex = 46;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyFormphysics::button14_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(270, 403);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(31, 26);
			this->textBox8->TabIndex = 45;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(342, 403);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(13, 20);
			this->label33->TabIndex = 44;
			this->label33->Text = L" ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(239, 405);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(20, 20);
			this->label32->TabIndex = 43;
			this->label32->Text = L"w";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(12, 403);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(218, 20);
			this->label31->TabIndex = 42;
			this->label31->Text = L"-> Velocity at a Given Position";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button13->Location = System::Drawing::Point(260, 377);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(27, 23);
			this->button13->TabIndex = 41;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyFormphysics::button13_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(218, 375);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(37, 26);
			this->textBox7->TabIndex = 40;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(293, 378);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(13, 20);
			this->label30->TabIndex = 39;
			this->label30->Text = L" ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(189, 378);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(19, 20);
			this->label29->TabIndex = 38;
			this->label29->Text = L"K";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 375);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(166, 20);
			this->label28->TabIndex = 37;
			this->label28->Text = L" -> Energy of the SHM";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(228, 342);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(31, 26);
			this->textBox6->TabIndex = 36;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(297, 344);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(13, 20);
			this->label27->TabIndex = 35;
			this->label27->Text = L" ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(205, 344);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(17, 20);
			this->label26->TabIndex = 34;
			this->label26->Text = L"k";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->Location = System::Drawing::Point(265, 344);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(27, 23);
			this->button12->TabIndex = 33;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyFormphysics::button12_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(12, 342);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(189, 20);
			this->label25->TabIndex = 32;
			this->label25->Text = L"-> elastic potential energy";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->Location = System::Drawing::Point(208, 316);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(38, 24);
			this->button11->TabIndex = 31;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyFormphysics::button11_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(173, 315);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(29, 26);
			this->textBox5->TabIndex = 30;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(253, 318);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 20);
			this->label24->TabIndex = 29;
			this->label24->Text = L" ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(142, 316);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(22, 20);
			this->label23->TabIndex = 28;
			this->label23->Text = L"m";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(12, 316);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(124, 20);
			this->label22->TabIndex = 27;
			this->label22->Text = L"-> kinetic energy";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(293, 180);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 20);
			this->label21->TabIndex = 26;
			this->label21->Text = L"K";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->Location = System::Drawing::Point(361, 182);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(34, 24);
			this->button10->TabIndex = 25;
			this->button10->Text = L"=";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyFormphysics::button10_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(316, 180);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 26);
			this->textBox4->TabIndex = 24;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(391, 183);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 20);
			this->label20->TabIndex = 23;
			this->label20->Text = L" ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 183);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(295, 20);
			this->label19->TabIndex = 22;
			this->label19->Text = L"->angular frequency, Time , frequency  = ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(195, 225);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 20);
			this->label18->TabIndex = 21;
			this->label18->Text = L" ";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Location = System::Drawing::Point(157, 223);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 23);
			this->button9->TabIndex = 20;
			this->button9->Text = L"=";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyFormphysics::button9_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(113, 221);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 26);
			this->textBox3->TabIndex = 19;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(87, 221);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 20);
			this->label17->TabIndex = 18;
			this->label17->Text = L"A";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 221);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 20);
			this->label16->TabIndex = 17;
			this->label16->Text = L"-> x ( t ) =";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Location = System::Drawing::Point(205, 128);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 23);
			this->button8->TabIndex = 16;
			this->button8->Text = L"=";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormphysics::button8_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 26);
			this->textBox2->TabIndex = 15;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(135, 128);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 20);
			this->label14->TabIndex = 14;
			this->label14->Text = L"K";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(242, 129);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 20);
			this->label13->TabIndex = 13;
			this->label13->Text = L" ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 126);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(126, 20);
			this->label12->TabIndex = 12;
			this->label12->Text = L"-> acceleration =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 26);
			this->textBox1->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(245, 64);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(37, 25);
			this->button7->TabIndex = 10;
			this->button7->Text = L"=";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormphysics::button7_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(169, 70);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"K";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(288, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L" ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(7, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"-> Restoring Force =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 429);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(175, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"The Simple Pendulum : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 292);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(309, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Energy of the Simple Harmonic Oscillator : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(265, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Particle in Simple Harmonic Motion : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"-> v ( t ) = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(309, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Motion of an Object Attached to a Spring : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Hooke’s Law : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Periodic Motion :";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->panel13);
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->panel12);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->textBox22);
			this->panel2->Controls->Add(this->label84);
			this->panel2->Controls->Add(this->button28);
			this->panel2->Controls->Add(this->label83);
			this->panel2->Controls->Add(this->label82);
			this->panel2->Controls->Add(this->label81);
			this->panel2->Controls->Add(this->textBox21);
			this->panel2->Controls->Add(this->label80);
			this->panel2->Controls->Add(this->label79);
			this->panel2->Controls->Add(this->button27);
			this->panel2->Controls->Add(this->button26);
			this->panel2->Controls->Add(this->textBox20);
			this->panel2->Controls->Add(this->label78);
			this->panel2->Controls->Add(this->label77);
			this->panel2->Controls->Add(this->label76);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->textBox17);
			this->panel2->Controls->Add(this->label70);
			this->panel2->Controls->Add(this->label69);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->label68);
			this->panel2->Controls->Add(this->textBox16);
			this->panel2->Controls->Add(this->label67);
			this->panel2->Controls->Add(this->label66);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->label65);
			this->panel2->Controls->Add(this->label64);
			this->panel2->Controls->Add(this->label63);
			this->panel2->Controls->Add(this->textBox15);
			this->panel2->Controls->Add(this->textBox14);
			this->panel2->Controls->Add(this->label62);
			this->panel2->Controls->Add(this->label61);
			this->panel2->Controls->Add(this->label60);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->label59);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->textBox13);
			this->panel2->Controls->Add(this->label58);
			this->panel2->Controls->Add(this->label57);
			this->panel2->Controls->Add(this->label56);
			this->panel2->Controls->Add(this->label55);
			this->panel2->Controls->Add(this->label54);
			this->panel2->Controls->Add(this->label53);
			this->panel2->Controls->Add(this->label52);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->label51);
			this->panel2->Controls->Add(this->label50);
			this->panel2->Controls->Add(this->label49);
			this->panel2->Controls->Add(this->label48);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->label47);
			this->panel2->Controls->Add(this->label46);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->label45);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->label44);
			this->panel2->Controls->Add(this->label43);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(216, 47);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(612, 492);
			this->panel2->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->Location = System::Drawing::Point(210, 296);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(19, 24);
			this->panel13->TabIndex = 64;
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Location = System::Drawing::Point(144, 263);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(19, 24);
			this->panel11->TabIndex = 65;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->Location = System::Drawing::Point(139, 269);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(23, 20);
			this->panel12->TabIndex = 62;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Location = System::Drawing::Point(192, 236);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(19, 24);
			this->panel9->TabIndex = 64;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->Location = System::Drawing::Point(191, 239);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(23, 20);
			this->panel10->TabIndex = 62;
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Location = System::Drawing::Point(253, 180);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(19, 24);
			this->panel8->TabIndex = 63;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Location = System::Drawing::Point(284, 41);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(23, 20);
			this->panel7->TabIndex = 62;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Location = System::Drawing::Point(110, 41);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(23, 20);
			this->panel6->TabIndex = 61;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(291, 422);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(38, 26);
			this->textBox22->TabIndex = 60;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(379, 428);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(13, 20);
			this->label84->TabIndex = 59;
			this->label84->Text = L" ";
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button28->Location = System::Drawing::Point(339, 425);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(34, 23);
			this->button28->TabIndex = 58;
			this->button28->Text = L"=";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyFormphysics::button28_Click);
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(269, 426);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(14, 20);
			this->label83->TabIndex = 57;
			this->label83->Text = L"f";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(6, 426);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(267, 20);
			this->label82->TabIndex = 56;
			this->label82->Text = L"the amplitude of a driven oscillation : ";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(428, 391);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(13, 20);
			this->label81->TabIndex = 55;
			this->label81->Text = L" ";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(345, 388);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(37, 26);
			this->textBox21->TabIndex = 54;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(322, 394);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(19, 20);
			this->label80->TabIndex = 53;
			this->label80->Text = L"K";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(5, 394);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(324, 20);
			this->label79->TabIndex = 52;
			this->label79->Text = L"angular frequency for  Damped Oscillations : ";
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button27->Location = System::Drawing::Point(387, 391);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(34, 23);
			this->button27->TabIndex = 51;
			this->button27->Text = L"=";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyFormphysics::button27_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button26->Location = System::Drawing::Point(216, 361);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(33, 23);
			this->button26->TabIndex = 50;
			this->button26->Text = L"=";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyFormphysics::button26_Click);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(175, 359);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(35, 26);
			this->textBox20->TabIndex = 49;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(256, 365);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(13, 20);
			this->label78->TabIndex = 48;
			this->label78->Text = L" ";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(157, 365);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(18, 20);
			this->label77->TabIndex = 47;
			this->label77->Text = L"b";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(14, 365);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(143, 20);
			this->label76->TabIndex = 46;
			this->label76->Text = L"The retarding force";
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button23->Location = System::Drawing::Point(514, 39);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(23, 23);
			this->button23->TabIndex = 45;
			this->button23->Text = L"=";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyFormphysics::button23_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(475, 38);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(33, 26);
			this->textBox17->TabIndex = 44;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(543, 39);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(13, 20);
			this->label70->TabIndex = 43;
			this->label70->Text = L" ";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(440, 38);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(28, 20);
			this->label69->TabIndex = 42;
			this->label69->Text = L", w";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button22->Location = System::Drawing::Point(278, 295);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(38, 23);
			this->button22->TabIndex = 41;
			this->button22->Text = L"=";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyFormphysics::button22_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(322, 297);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(13, 20);
			this->label68->TabIndex = 40;
			this->label68->Text = L" ";
			this->label68->Click += gcnew System::EventHandler(this, &MyFormphysics::label68_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(235, 293);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(37, 26);
			this->textBox16->TabIndex = 39;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(209, 296);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(18, 20);
			this->label67->TabIndex = 38;
			this->label67->Text = L"μ";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(8, 299);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(202, 20);
			this->label66->TabIndex = 37;
			this->label66->Text = L"Power of Wave in a String : ";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button21->Location = System::Drawing::Point(212, 266);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(36, 23);
			this->button21->TabIndex = 36;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyFormphysics::button21_Click);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(263, 267);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(13, 20);
			this->label65->TabIndex = 35;
			this->label65->Text = L" ";
			this->label65->Click += gcnew System::EventHandler(this, &MyFormphysics::label65_Click);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(145, 264);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(18, 20);
			this->label64->TabIndex = 34;
			this->label64->Text = L"μ";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(22, 264);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(104, 20);
			this->label63->TabIndex = 33;
			this->label63->Text = L"total energy : ";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(170, 264);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(37, 26);
			this->textBox15->TabIndex = 32;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(219, 233);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(37, 26);
			this->textBox14->TabIndex = 31;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(312, 235);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(13, 20);
			this->label62->TabIndex = 30;
			this->label62->Text = L" ";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(195, 236);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(18, 20);
			this->label61->TabIndex = 29;
			this->label61->Text = L"μ";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(6, 235);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(187, 20);
			this->label60->TabIndex = 28;
			this->label60->Text = L"kinetic, potential energy : ";
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button20->Location = System::Drawing::Point(266, 234);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(37, 23);
			this->button20->TabIndex = 27;
			this->button20->Text = L"=";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyFormphysics::button20_Click);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(3, 208);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(214, 20);
			this->label59->TabIndex = 26;
			this->label59->Text = L"Energy in Waves in a String : ";
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button19->Location = System::Drawing::Point(315, 182);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(37, 23);
			this->button19->TabIndex = 25;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyFormphysics::button19_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(278, 180);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(31, 26);
			this->textBox13->TabIndex = 24;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(358, 183);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(13, 20);
			this->label58->TabIndex = 23;
			this->label58->Text = L" ";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(254, 183);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(18, 20);
			this->label57->TabIndex = 22;
			this->label57->Text = L"T";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(15, 183);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(233, 20);
			this->label56->TabIndex = 21;
			this->label56->Text = L"The Speed of Waves on Strings";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(229, 75);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(20, 20);
			this->label55->TabIndex = 20;
			this->label55->Text = L"A";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(103, 152);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(13, 20);
			this->label54->TabIndex = 19;
			this->label54->Text = L" ";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(103, 121);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(13, 20);
			this->label53->TabIndex = 18;
			this->label53->Text = L" ";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(101, 96);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(13, 20);
			this->label52->TabIndex = 17;
			this->label52->Text = L" ";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button18->Location = System::Drawing::Point(295, 75);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(38, 23);
			this->button18->TabIndex = 16;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyFormphysics::button18_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(255, 72);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(29, 26);
			this->textBox12->TabIndex = 15;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(14, 149);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(81, 20);
			this->label51->TabIndex = 14;
			this->label51->Text = L"a ( x , t ) = ";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(15, 121);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(75, 20);
			this->label50->TabIndex = 13;
			this->label50->Text = L"v ( x , t ) =";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(14, 96);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(79, 20);
			this->label49->TabIndex = 12;
			this->label49->Text = L"y ( x , t  ) =";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(3, 72);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(222, 20);
			this->label48->TabIndex = 11;
			this->label48->Text = L"Sinusoidal Waves on Strings : ";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(310, 35);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(29, 26);
			this->textBox11->TabIndex = 10;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button17->Location = System::Drawing::Point(345, 35);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(23, 23);
			this->button17->TabIndex = 9;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyFormphysics::button17_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(374, 36);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(13, 20);
			this->label47->TabIndex = 8;
			this->label47->Text = L" ";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(274, 37);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(30, 20);
			this->label46->TabIndex = 7;
			this->label46->Text = L",  λ";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->Location = System::Drawing::Point(175, 37);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(30, 23);
			this->button16->TabIndex = 6;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyFormphysics::button16_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(208, 37);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(13, 20);
			this->label45->TabIndex = 5;
			this->label45->Text = L" ";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(139, 36);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(32, 26);
			this->textBox10->TabIndex = 4;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(115, 38);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(18, 20);
			this->label44->TabIndex = 3;
			this->label44->Text = L"λ";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(6, 38);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(106, 20);
			this->label43->TabIndex = 2;
			this->label43->Text = L"wave speed =";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(9, 339);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(173, 24);
			this->label42->TabIndex = 1;
			this->label42->Text = L"Oscillatory Motion : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Wave Motion :";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(477, 37);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(13, 20);
			this->label75->TabIndex = 54;
			this->label75->Text = L" ";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(357, 34);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(18, 20);
			this->label74->TabIndex = 53;
			this->label74->Text = L"ρ";
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button25->Location = System::Drawing::Point(435, 35);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(36, 23);
			this->button25->TabIndex = 52;
			this->button25->Text = L"=";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyFormphysics::button25_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(390, 32);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(39, 26);
			this->textBox19->TabIndex = 51;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button24->Location = System::Drawing::Point(236, 33);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(34, 23);
			this->button24->TabIndex = 50;
			this->button24->Text = L"=";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyFormphysics::button24_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(187, 33);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(41, 26);
			this->textBox18->TabIndex = 49;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(277, 35);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(13, 20);
			this->label73->TabIndex = 48;
			this->label73->Text = L" ";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(164, 34);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(20, 20);
			this->label72->TabIndex = 47;
			this->label72->Text = L"B";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(10, 34);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(156, 20);
			this->label71->TabIndex = 46;
			this->label71->Text = L"pressure amplitude : ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel3->Controls->Add(this->panel30);
			this->panel3->Controls->Add(this->button37);
			this->panel3->Controls->Add(this->textBox31);
			this->panel3->Controls->Add(this->label117);
			this->panel3->Controls->Add(this->label116);
			this->panel3->Controls->Add(this->label115);
			this->panel3->Controls->Add(this->label114);
			this->panel3->Controls->Add(this->label113);
			this->panel3->Controls->Add(this->label112);
			this->panel3->Controls->Add(this->label111);
			this->panel3->Controls->Add(this->label110);
			this->panel3->Controls->Add(this->label109);
			this->panel3->Controls->Add(this->textBox30);
			this->panel3->Controls->Add(this->button36);
			this->panel3->Controls->Add(this->label108);
			this->panel3->Controls->Add(this->label107);
			this->panel3->Controls->Add(this->label106);
			this->panel3->Controls->Add(this->label105);
			this->panel3->Controls->Add(this->label104);
			this->panel3->Controls->Add(this->panel17);
			this->panel3->Controls->Add(this->panel16);
			this->panel3->Controls->Add(this->panel15);
			this->panel3->Controls->Add(this->panel14);
			this->panel3->Controls->Add(this->label103);
			this->panel3->Controls->Add(this->button35);
			this->panel3->Controls->Add(this->textBox29);
			this->panel3->Controls->Add(this->label102);
			this->panel3->Controls->Add(this->label101);
			this->panel3->Controls->Add(this->label100);
			this->panel3->Controls->Add(this->button34);
			this->panel3->Controls->Add(this->textBox28);
			this->panel3->Controls->Add(this->label99);
			this->panel3->Controls->Add(this->label98);
			this->panel3->Controls->Add(this->button33);
			this->panel3->Controls->Add(this->textBox27);
			this->panel3->Controls->Add(this->label97);
			this->panel3->Controls->Add(this->label96);
			this->panel3->Controls->Add(this->label95);
			this->panel3->Controls->Add(this->button32);
			this->panel3->Controls->Add(this->textBox26);
			this->panel3->Controls->Add(this->label94);
			this->panel3->Controls->Add(this->label93);
			this->panel3->Controls->Add(this->label92);
			this->panel3->Controls->Add(this->label91);
			this->panel3->Controls->Add(this->textBox25);
			this->panel3->Controls->Add(this->button31);
			this->panel3->Controls->Add(this->label90);
			this->panel3->Controls->Add(this->textBox24);
			this->panel3->Controls->Add(this->label89);
			this->panel3->Controls->Add(this->button30);
			this->panel3->Controls->Add(this->label88);
			this->panel3->Controls->Add(this->button29);
			this->panel3->Controls->Add(this->textBox23);
			this->panel3->Controls->Add(this->label87);
			this->panel3->Controls->Add(this->label86);
			this->panel3->Controls->Add(this->label85);
			this->panel3->Controls->Add(this->label75);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label71);
			this->panel3->Controls->Add(this->button25);
			this->panel3->Controls->Add(this->label72);
			this->panel3->Controls->Add(this->textBox19);
			this->panel3->Controls->Add(this->label74);
			this->panel3->Controls->Add(this->textBox18);
			this->panel3->Controls->Add(this->button24);
			this->panel3->Controls->Add(this->label73);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(213, 50);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(612, 500);
			this->panel3->TabIndex = 1;
			// 
			// panel30
			// 
			this->panel30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel30.BackgroundImage")));
			this->panel30->Location = System::Drawing::Point(206, 64);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(20, 22);
			this->panel30->TabIndex = 89;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button37->Location = System::Drawing::Point(461, 439);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(38, 26);
			this->button37->TabIndex = 109;
			this->button37->Text = L"=";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyFormphysics::button37_Click);
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(412, 440);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(43, 26);
			this->textBox31->TabIndex = 108;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Location = System::Drawing::Point(498, 443);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(13, 20);
			this->label117->TabIndex = 107;
			this->label117->Text = L" ";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Location = System::Drawing::Point(290, 442);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(79, 20);
			this->label116->TabIndex = 106;
			this->label116->Text = L"frequency";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(13, 472);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(569, 20);
			this->label115->TabIndex = 105;
			this->label115->Text = L"note : Enter the values with signs according to the direction in the fifth condit"
				L"ion ";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(10, 443);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(288, 20);
			this->label114->TabIndex = 104;
			this->label114->Text = L"IF the observer and source are moving :";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(8, 411);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(400, 20);
			this->label113->TabIndex = 103;
			this->label113->Text = L"IF  the source moving away from a stationary observer : ";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(7, 381);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(372, 20);
			this->label112->TabIndex = 102;
			this->label112->Text = L"IF the source moving toward a stationary observer : ";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Location = System::Drawing::Point(421, 411);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(13, 20);
			this->label111->TabIndex = 101;
			this->label111->Text = L" ";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Location = System::Drawing::Point(421, 385);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(13, 20);
			this->label110->TabIndex = 100;
			this->label110->Text = L" ";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Location = System::Drawing::Point(421, 352);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(13, 20);
			this->label109->TabIndex = 99;
			this->label109->Text = L" ";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(250, 287);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(56, 26);
			this->textBox30->TabIndex = 98;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button36->Location = System::Drawing::Point(325, 287);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(38, 26);
			this->button36->TabIndex = 97;
			this->button36->Text = L"=";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyFormphysics::button36_Click);
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Location = System::Drawing::Point(421, 321);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(13, 20);
			this->label108->TabIndex = 96;
			this->label108->Text = L" ";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(54, 294);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(106, 20);
			this->label107->TabIndex = 95;
			this->label107->Text = L"the frequency";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(4, 352);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(396, 20);
			this->label106->TabIndex = 94;
			this->label106->Text = L"IF the observer moving away from a stationary source : ";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(4, 322);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(376, 20);
			this->label105->TabIndex = 93;
			this->label105->Text = L"IF the observer moving toward a  stationary source : ";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->Location = System::Drawing::Point(3, 262);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(182, 24);
			this->label104->TabIndex = 92;
			this->label104->Text = L"The Doppler Effect : ";
			// 
			// panel17
			// 
			this->panel17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel17.BackgroundImage")));
			this->panel17->Location = System::Drawing::Point(272, 161);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(20, 22);
			this->panel17->TabIndex = 91;
			// 
			// panel16
			// 
			this->panel16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel16.BackgroundImage")));
			this->panel16->Location = System::Drawing::Point(161, 130);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(20, 22);
			this->panel16->TabIndex = 90;
			// 
			// panel15
			// 
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->Location = System::Drawing::Point(245, 98);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(20, 22);
			this->panel15->TabIndex = 89;
			// 
			// panel14
			// 
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->Location = System::Drawing::Point(361, 35);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(20, 22);
			this->panel14->TabIndex = 88;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Location = System::Drawing::Point(259, 229);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(13, 20);
			this->label103->TabIndex = 87;
			this->label103->Text = L" ";
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button35->Location = System::Drawing::Point(213, 228);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(38, 23);
			this->button35->TabIndex = 86;
			this->button35->Text = L"=";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyFormphysics::button35_Click);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(158, 227);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(43, 26);
			this->textBox29->TabIndex = 85;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(129, 228);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(14, 20);
			this->label102->TabIndex = 84;
			this->label102->Text = L"I";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(13, 227);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(113, 20);
			this->label101->TabIndex = 83;
			this->label101->Text = L"sound level β : ";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(391, 196);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(13, 20);
			this->label100->TabIndex = 82;
			this->label100->Text = L" ";
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button34->Location = System::Drawing::Point(348, 193);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(34, 23);
			this->button34->TabIndex = 81;
			this->button34->Text = L"=";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyFormphysics::button34_Click);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(298, 191);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(44, 26);
			this->textBox28->TabIndex = 80;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(246, 192);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(52, 20);
			this->label99->TabIndex = 79;
			this->label99->Text = L"power";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(391, 163);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(13, 20);
			this->label98->TabIndex = 78;
			this->label98->Text = L" ";
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button33->Location = System::Drawing::Point(348, 162);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(34, 23);
			this->button33->TabIndex = 77;
			this->button33->Text = L"=";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyFormphysics::button33_Click);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(298, 159);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(42, 26);
			this->textBox27->TabIndex = 76;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(272, 159);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(18, 20);
			this->label97->TabIndex = 75;
			this->label97->Text = L"ρ";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(12, 160);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(267, 20);
			this->label96->TabIndex = 74;
			this->label96->Text = L"Intensity of a Periodic Sound Wave : ";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(284, 135);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(13, 20);
			this->label95->TabIndex = 73;
			this->label95->Text = L" ";
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button32->Location = System::Drawing::Point(236, 132);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(40, 23);
			this->button32->TabIndex = 72;
			this->button32->Text = L"=";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyFormphysics::button32_Click);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(186, 130);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(43, 26);
			this->textBox26->TabIndex = 71;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(162, 128);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(18, 20);
			this->label94->TabIndex = 70;
			this->label94->Text = L"ρ";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(11, 129);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(156, 20);
			this->label93->TabIndex = 69;
			this->label93->Text = L"The average power : ";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(365, 98);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(13, 20);
			this->label92->TabIndex = 68;
			this->label92->Text = L" ";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(246, 95);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(18, 20);
			this->label91->TabIndex = 67;
			this->label91->Text = L"ρ";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(269, 93);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(37, 26);
			this->textBox25->TabIndex = 66;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button31->Location = System::Drawing::Point(312, 96);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(37, 23);
			this->button31->TabIndex = 65;
			this->button31->Text = L"=";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyFormphysics::button31_Click);
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(7, 97);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(225, 20);
			this->label90->TabIndex = 64;
			this->label90->Text = L"total energy of the sound wave";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(421, 65);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(34, 26);
			this->textBox24->TabIndex = 63;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(502, 67);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(13, 20);
			this->label89->TabIndex = 62;
			this->label89->Text = L" ";
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button30->Location = System::Drawing::Point(461, 65);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(35, 23);
			this->button30->TabIndex = 61;
			this->button30->Text = L"=";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyFormphysics::button30_Click);
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(382, 65);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(33, 20);
			this->label88->TabIndex = 60;
			this->label88->Text = L",TC";
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button29->Location = System::Drawing::Point(277, 64);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(36, 23);
			this->button29->TabIndex = 59;
			this->button29->Text = L"=";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyFormphysics::button29_Click);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(234, 61);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(36, 26);
			this->textBox23->TabIndex = 58;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(315, 65);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(13, 20);
			this->label87->TabIndex = 57;
			this->label87->Text = L" ";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(205, 64);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(20, 20);
			this->label86->TabIndex = 56;
			this->label86->Text = L"B";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(15, 64);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(188, 20);
			this->label85->TabIndex = 55;
			this->label85->Text = L"Speed of Sound in a Gas";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(8, 4);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(157, 24);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Sound Waves : ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel4->Controls->Add(this->label137);
			this->panel4->Controls->Add(this->button43);
			this->panel4->Controls->Add(this->textBox37);
			this->panel4->Controls->Add(this->label136);
			this->panel4->Controls->Add(this->label135);
			this->panel4->Controls->Add(this->button42);
			this->panel4->Controls->Add(this->textBox36);
			this->panel4->Controls->Add(this->label134);
			this->panel4->Controls->Add(this->label133);
			this->panel4->Controls->Add(this->label132);
			this->panel4->Controls->Add(this->label131);
			this->panel4->Controls->Add(this->textBox35);
			this->panel4->Controls->Add(this->panel19);
			this->panel4->Controls->Add(this->panel18);
			this->panel4->Controls->Add(this->textBox34);
			this->panel4->Controls->Add(this->button41);
			this->panel4->Controls->Add(this->button40);
			this->panel4->Controls->Add(this->label130);
			this->panel4->Controls->Add(this->label129);
			this->panel4->Controls->Add(this->label128);
			this->panel4->Controls->Add(this->label127);
			this->panel4->Controls->Add(this->label126);
			this->panel4->Controls->Add(this->label125);
			this->panel4->Controls->Add(this->button39);
			this->panel4->Controls->Add(this->textBox33);
			this->panel4->Controls->Add(this->label124);
			this->panel4->Controls->Add(this->button38);
			this->panel4->Controls->Add(this->textBox32);
			this->panel4->Controls->Add(this->label123);
			this->panel4->Controls->Add(this->label122);
			this->panel4->Controls->Add(this->label121);
			this->panel4->Controls->Add(this->label120);
			this->panel4->Controls->Add(this->label119);
			this->panel4->Controls->Add(this->label118);
			this->panel4->Controls->Add(this->label40);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(207, 47);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(615, 492);
			this->panel4->TabIndex = 7;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->Location = System::Drawing::Point(394, 287);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(13, 20);
			this->label137->TabIndex = 76;
			this->label137->Text = L" ";
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button43->Location = System::Drawing::Point(351, 286);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(37, 23);
			this->button43->TabIndex = 75;
			this->button43->Text = L"=";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyFormphysics::button43_Click);
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(297, 284);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(49, 26);
			this->textBox37->TabIndex = 74;
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->Location = System::Drawing::Point(270, 290);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(18, 20);
			this->label136->TabIndex = 73;
			this->label136->Text = L"n";
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Location = System::Drawing::Point(19, 290);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(246, 20);
			this->label135->TabIndex = 72;
			this->label135->Text = L"the natural frequency of a mode : ";
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button42->Location = System::Drawing::Point(350, 249);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(37, 23);
			this->button42->TabIndex = 71;
			this->button42->Text = L"=";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyFormphysics::button42_Click);
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(295, 249);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(49, 26);
			this->textBox36->TabIndex = 70;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Location = System::Drawing::Point(392, 252);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(13, 20);
			this->label134->TabIndex = 69;
			this->label134->Text = L" ";
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->Location = System::Drawing::Point(271, 252);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(18, 20);
			this->label133->TabIndex = 68;
			this->label133->Text = L"L";
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->Location = System::Drawing::Point(17, 250);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(255, 20);
			this->label132->TabIndex = 67;
			this->label132->Text = L"the wavelength of a normal mode : ";
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Location = System::Drawing::Point(13, 218);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(212, 20);
			this->label131->TabIndex = 66;
			this->label131->Text = L"Standing Waves in a String : ";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(200, 179);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(49, 26);
			this->textBox35->TabIndex = 65;
			// 
			// panel19
			// 
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->Location = System::Drawing::Point(158, 186);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(23, 20);
			this->panel19->TabIndex = 64;
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->Location = System::Drawing::Point(116, 149);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(23, 20);
			this->panel18->TabIndex = 63;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(147, 146);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(49, 26);
			this->textBox34->TabIndex = 20;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button41->Location = System::Drawing::Point(261, 181);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(37, 23);
			this->button41->TabIndex = 19;
			this->button41->Text = L"=";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyFormphysics::button41_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button40->Location = System::Drawing::Point(204, 148);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(37, 23);
			this->button40->TabIndex = 18;
			this->button40->Text = L"=";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyFormphysics::button40_Click);
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->Location = System::Drawing::Point(308, 182);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(13, 20);
			this->label130->TabIndex = 17;
			this->label130->Text = L" ";
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->Location = System::Drawing::Point(162, 183);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(16, 20);
			this->label129->TabIndex = 16;
			this->label129->Text = L"y";
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Location = System::Drawing::Point(252, 149);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(13, 20);
			this->label128->TabIndex = 15;
			this->label128->Text = L" ";
			this->label128->Click += gcnew System::EventHandler(this, &MyFormphysics::label128_Click);
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Location = System::Drawing::Point(119, 146);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(16, 20);
			this->label127->TabIndex = 14;
			this->label127->Text = L"y";
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->Location = System::Drawing::Point(12, 180);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(145, 20);
			this->label126->TabIndex = 13;
			this->label126->Text = L"x for an antonode : ";
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Location = System::Drawing::Point(9, 145);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(100, 20);
			this->label125->TabIndex = 12;
			this->label125->Text = L"x for a node :";
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button39->Location = System::Drawing::Point(344, 78);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(46, 26);
			this->button39->TabIndex = 11;
			this->button39->Text = L"=";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyFormphysics::button39_Click);
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(294, 78);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(44, 26);
			this->textBox33->TabIndex = 10;
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->Location = System::Drawing::Point(397, 81);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(13, 20);
			this->label124->TabIndex = 9;
			this->label124->Text = L" ";
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button38->Location = System::Drawing::Point(345, 42);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(46, 26);
			this->button38->TabIndex = 8;
			this->button38->Text = L"=";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyFormphysics::button38_Click);
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(293, 40);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(45, 26);
			this->textBox32->TabIndex = 7;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Location = System::Drawing::Point(268, 78);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(20, 20);
			this->label123->TabIndex = 6;
			this->label123->Text = L"A";
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label122->Location = System::Drawing::Point(7, 112);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(226, 20);
			this->label122->TabIndex = 5;
			this->label122->Text = L"Standing Waves in a String : ";
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Location = System::Drawing::Point(0, 76);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(269, 20);
			this->label121->TabIndex = 4;
			this->label121->Text = L" the resultant wave of  standing wave";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->Location = System::Drawing::Point(402, 45);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(13, 20);
			this->label120->TabIndex = 3;
			this->label120->Text = L" ";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Location = System::Drawing::Point(262, 45);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(20, 20);
			this->label119->TabIndex = 2;
			this->label119->Text = L"A";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Location = System::Drawing::Point(3, 41);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(249, 20);
			this->label118->TabIndex = 1;
			this->label118->Text = L" the resultant wave of interference";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(9, 8);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(178, 24);
			this->label40->TabIndex = 0;
			this->label40->Text = L"Standing Waves : ";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel5->Controls->Add(this->panel29);
			this->panel5->Controls->Add(this->label166);
			this->panel5->Controls->Add(this->button53);
			this->panel5->Controls->Add(this->textBox47);
			this->panel5->Controls->Add(this->label165);
			this->panel5->Controls->Add(this->label164);
			this->panel5->Controls->Add(this->label163);
			this->panel5->Controls->Add(this->button52);
			this->panel5->Controls->Add(this->textBox46);
			this->panel5->Controls->Add(this->label162);
			this->panel5->Controls->Add(this->label161);
			this->panel5->Controls->Add(this->label160);
			this->panel5->Controls->Add(this->button51);
			this->panel5->Controls->Add(this->textBox45);
			this->panel5->Controls->Add(this->panel28);
			this->panel5->Controls->Add(this->label159);
			this->panel5->Controls->Add(this->label158);
			this->panel5->Controls->Add(this->button50);
			this->panel5->Controls->Add(this->textBox44);
			this->panel5->Controls->Add(this->label157);
			this->panel5->Controls->Add(this->label156);
			this->panel5->Controls->Add(this->label155);
			this->panel5->Controls->Add(this->button49);
			this->panel5->Controls->Add(this->textBox43);
			this->panel5->Controls->Add(this->panel26);
			this->panel5->Controls->Add(this->label154);
			this->panel5->Controls->Add(this->label153);
			this->panel5->Controls->Add(this->label152);
			this->panel5->Controls->Add(this->button48);
			this->panel5->Controls->Add(this->textBox42);
			this->panel5->Controls->Add(this->panel25);
			this->panel5->Controls->Add(this->label151);
			this->panel5->Controls->Add(this->label150);
			this->panel5->Controls->Add(this->label149);
			this->panel5->Controls->Add(this->button47);
			this->panel5->Controls->Add(this->textBox41);
			this->panel5->Controls->Add(this->panel23);
			this->panel5->Controls->Add(this->label148);
			this->panel5->Controls->Add(this->label147);
			this->panel5->Controls->Add(this->label146);
			this->panel5->Controls->Add(this->button46);
			this->panel5->Controls->Add(this->textBox40);
			this->panel5->Controls->Add(this->panel24);
			this->panel5->Controls->Add(this->label145);
			this->panel5->Controls->Add(this->label144);
			this->panel5->Controls->Add(this->label143);
			this->panel5->Controls->Add(this->button45);
			this->panel5->Controls->Add(this->textBox39);
			this->panel5->Controls->Add(this->panel22);
			this->panel5->Controls->Add(this->label142);
			this->panel5->Controls->Add(this->label141);
			this->panel5->Controls->Add(this->panel21);
			this->panel5->Controls->Add(this->button44);
			this->panel5->Controls->Add(this->textBox38);
			this->panel5->Controls->Add(this->panel20);
			this->panel5->Controls->Add(this->label140);
			this->panel5->Controls->Add(this->label139);
			this->panel5->Controls->Add(this->label138);
			this->panel5->Controls->Add(this->label41);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(207, 50);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(624, 497);
			this->panel5->TabIndex = 1;
			// 
			// panel29
			// 
			this->panel29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel29.BackgroundImage")));
			this->panel29->Location = System::Drawing::Point(213, 375);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(23, 20);
			this->panel29->TabIndex = 69;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Location = System::Drawing::Point(350, 375);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(13, 20);
			this->label166->TabIndex = 105;
			this->label166->Text = L" ";
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button53->Location = System::Drawing::Point(302, 372);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(40, 23);
			this->button53->TabIndex = 104;
			this->button53->Text = L"=";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyFormphysics::button53_Click);
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(247, 370);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(45, 26);
			this->textBox47->TabIndex = 103;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->Location = System::Drawing::Point(220, 370);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(16, 20);
			this->label165->TabIndex = 102;
			this->label165->Text = L"y";
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->Location = System::Drawing::Point(15, 371);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(205, 20);
			this->label164->TabIndex = 101;
			this->label164->Text = L"The wavelength of light λn : ";
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Location = System::Drawing::Point(483, 332);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(13, 20);
			this->label163->TabIndex = 100;
			this->label163->Text = L" ";
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button52->Location = System::Drawing::Point(436, 331);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(40, 23);
			this->button52->TabIndex = 99;
			this->button52->Text = L"=";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyFormphysics::button52_Click);
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(385, 329);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(45, 26);
			this->textBox46->TabIndex = 98;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Location = System::Drawing::Point(201, 332);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(179, 20);
			this->label162->TabIndex = 97;
			this->label162->Text = L"the index of refraction n:";
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Location = System::Drawing::Point(12, 332);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(195, 20);
			this->label161->TabIndex = 96;
			this->label161->Text = L"Speed of Light in Matter  : ";
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Location = System::Drawing::Point(340, 299);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(13, 20);
			this->label160->TabIndex = 95;
			this->label160->Text = L" ";
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button51->Location = System::Drawing::Point(290, 299);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(40, 23);
			this->button51->TabIndex = 94;
			this->button51->Text = L"=";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyFormphysics::button51_Click);
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(243, 296);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(45, 26);
			this->textBox45->TabIndex = 93;
			// 
			// panel28
			// 
			this->panel28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel28.BackgroundImage")));
			this->panel28->Location = System::Drawing::Point(176, 302);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(23, 20);
			this->panel28->TabIndex = 68;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->Location = System::Drawing::Point(180, 298);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(16, 20);
			this->label159->TabIndex = 92;
			this->label159->Text = L"y";
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->Location = System::Drawing::Point(9, 297);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(165, 20);
			this->label158->TabIndex = 91;
			this->label158->Text = L"Intensity Distribution : ";
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button50->Location = System::Drawing::Point(279, 268);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(40, 23);
			this->button50->TabIndex = 90;
			this->button50->Text = L"=";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyFormphysics::button50_Click);
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(228, 266);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(45, 26);
			this->textBox44->TabIndex = 89;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Location = System::Drawing::Point(322, 269);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(13, 20);
			this->label157->TabIndex = 88;
			this->label157->Text = L" ";
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(15, 264);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(176, 20);
			this->label156->TabIndex = 87;
			this->label156->Text = L"the phase difference φ :";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Location = System::Drawing::Point(234, 234);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(13, 20);
			this->label155->TabIndex = 86;
			this->label155->Text = L" ";
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button49->Location = System::Drawing::Point(182, 233);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(40, 23);
			this->button49->TabIndex = 85;
			this->button49->Text = L"=";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyFormphysics::button49_Click);
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(126, 230);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(45, 26);
			this->textBox43->TabIndex = 84;
			// 
			// panel26
			// 
			this->panel26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel26.BackgroundImage")));
			this->panel26->Location = System::Drawing::Point(80, 232);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(23, 20);
			this->panel26->TabIndex = 67;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Location = System::Drawing::Point(82, 229);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(16, 20);
			this->label154->TabIndex = 83;
			this->label154->Text = L"y";
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->Location = System::Drawing::Point(17, 232);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(59, 20);
			this->label153->TabIndex = 82;
			this->label153->Text = L"y dark :";
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Location = System::Drawing::Point(238, 197);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(13, 20);
			this->label152->TabIndex = 81;
			this->label152->Text = L" ";
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button48->Location = System::Drawing::Point(182, 194);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(40, 23);
			this->button48->TabIndex = 80;
			this->button48->Text = L"=";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyFormphysics::button48_Click);
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(128, 192);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(45, 26);
			this->textBox42->TabIndex = 79;
			// 
			// panel25
			// 
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->Location = System::Drawing::Point(86, 193);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(23, 20);
			this->panel25->TabIndex = 66;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Location = System::Drawing::Point(87, 193);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(16, 20);
			this->label151->TabIndex = 78;
			this->label151->Text = L"y";
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Location = System::Drawing::Point(18, 192);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(68, 20);
			this->label150->TabIndex = 77;
			this->label150->Text = L"y bright :";
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Location = System::Drawing::Point(238, 157);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(13, 20);
			this->label149->TabIndex = 76;
			this->label149->Text = L" ";
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button47->Location = System::Drawing::Point(184, 156);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(40, 23);
			this->button47->TabIndex = 75;
			this->button47->Text = L"=";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyFormphysics::button47_Click);
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(126, 156);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(45, 26);
			this->textBox41->TabIndex = 74;
			// 
			// panel23
			// 
			this->panel23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel23.BackgroundImage")));
			this->panel23->Location = System::Drawing::Point(88, 155);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(25, 24);
			this->panel23->TabIndex = 8;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Location = System::Drawing::Point(93, 155);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(12, 20);
			this->label148->TabIndex = 73;
			this->label148->Text = L"l";
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->Location = System::Drawing::Point(17, 155);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(32, 20);
			this->label147->TabIndex = 72;
			this->label147->Text = L"y  : ";
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->Location = System::Drawing::Point(463, 119);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(13, 20);
			this->label146->TabIndex = 71;
			this->label146->Text = L" ";
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button46->Location = System::Drawing::Point(410, 116);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(40, 23);
			this->button46->TabIndex = 70;
			this->button46->Text = L"=";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyFormphysics::button46_Click);
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(356, 115);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(45, 26);
			this->textBox40->TabIndex = 69;
			// 
			// panel24
			// 
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->Location = System::Drawing::Point(325, 118);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(23, 20);
			this->panel24->TabIndex = 65;
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->Location = System::Drawing::Point(326, 118);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(16, 20);
			this->label145->TabIndex = 68;
			this->label145->Text = L"y";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->Location = System::Drawing::Point(15, 117);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(310, 20);
			this->label144->TabIndex = 67;
			this->label144->Text = L"path difference in destructive interference :";
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->Location = System::Drawing::Point(463, 80);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(13, 20);
			this->label143->TabIndex = 66;
			this->label143->Text = L" ";
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button45->Location = System::Drawing::Point(410, 80);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(40, 23);
			this->button45->TabIndex = 65;
			this->button45->Text = L"=";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyFormphysics::button45_Click);
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(356, 78);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(45, 26);
			this->textBox39->TabIndex = 64;
			// 
			// panel22
			// 
			this->panel22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel22.BackgroundImage")));
			this->panel22->Location = System::Drawing::Point(323, 81);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(23, 20);
			this->panel22->TabIndex = 63;
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->Location = System::Drawing::Point(324, 81);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(16, 20);
			this->label142->TabIndex = 9;
			this->label142->Text = L"y";
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->Location = System::Drawing::Point(12, 81);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(318, 20);
			this->label141->TabIndex = 8;
			this->label141->Text = L"path difference in constructive interference :";
			// 
			// panel21
			// 
			this->panel21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel21.BackgroundImage")));
			this->panel21->Location = System::Drawing::Point(174, 43);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(25, 24);
			this->panel21->TabIndex = 7;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button44->Location = System::Drawing::Point(258, 45);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(40, 23);
			this->button44->TabIndex = 6;
			this->button44->Text = L"=";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyFormphysics::button44_Click);
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(202, 44);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(45, 26);
			this->textBox38->TabIndex = 5;
			// 
			// panel20
			// 
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->Controls->Add(this->panel27);
			this->panel20->Location = System::Drawing::Point(194, 265);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(26, 27);
			this->panel20->TabIndex = 4;
			// 
			// panel27
			// 
			this->panel27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel27.BackgroundImage")));
			this->panel27->Location = System::Drawing::Point(4, 4);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(17, 20);
			this->panel27->TabIndex = 68;
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->Location = System::Drawing::Point(313, 47);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(13, 20);
			this->label140->TabIndex = 3;
			this->label140->Text = L" ";
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->Location = System::Drawing::Point(7, 45);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(172, 20);
			this->label139->TabIndex = 2;
			this->label139->Text = L"The path difference δ  :";
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->Location = System::Drawing::Point(178, 47);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(18, 20);
			this->label138->TabIndex = 1;
			this->label138->Text = L"θ";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(3, 4);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(141, 24);
			this->label41->TabIndex = 0;
			this->label41->Text = L"Superposition : ";
			// 
			// MyFormphysics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(840, 551);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Name = L"MyFormphysics";
			this->Text = L" Physics";
			this->Load += gcnew System::EventHandler(this, &MyFormphysics::MyFormphysics_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherform->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Show();
		panel2->Hide();
		panel3->Hide();
		panel4->Hide();
		panel5->Hide();

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
	panel1->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyFormphysics_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   public: float cnt1 = 0, k = 0, x = 0;
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt1 == 0)
	{  
		k = System::Convert::ToDouble(textBox1->Text);
		label11->Text = "X";
		label10->Text = "";
	}
	else if (cnt1 == 1)
	{ 
		x = System::Convert::ToDouble(textBox1->Text);
		label11->Text = "K";
		label10->Text = System::Convert::ToString((float)(-1 * k * x))+" N";
		cnt1 = -1; 
	}  
	cnt1++;
}
	public: float cnt2 = 0, m = 0;
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt2 == 0)
	{
		k = System::Convert::ToDouble(textBox2->Text);
		label14->Text = "X";
		label13->Text = "";
	}
	else if (cnt2 == 1)
	{
		x = System::Convert::ToDouble(textBox2->Text);
		label14->Text = "m";
	}
	else if (cnt2 == 2)
	{
		m = System::Convert::ToDouble(textBox2->Text);
		label14->Text = "K";
		label13->Text = System::Convert::ToString((-1 * k * x)/m)+" m/s/s";
		cnt2 = -1;
	}
	cnt2++;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Show();
	panel2->Hide();
	panel1->Hide();
	panel4->Hide();
	panel5->Hide();
}
	   public: float cnt3=0,w = 0, Q = 0, A = 0;
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt3 == 0)
	{
		A = System::Convert::ToDouble(textBox3->Text);
		label17->Text = "w";
		label18->Text = "";
		label37->Text = "";
		label39->Text = "";
	}
	else if (cnt3 == 1)
	{
		w = System::Convert::ToDouble(textBox3->Text);
		label17->Text = "Q";
	}
	else if (cnt3 == 2)
	{
		Q = System::Convert::ToDouble(textBox3->Text);
		label17->Text = "A";
		std::string str = "X ( t ) = " + std::to_string(A) + 
			" cos ( " + std::to_string(w) + " t + " + std::to_string(Q)+" )";
		String^ str2 = gcnew String(str.c_str());
		label18->Text = str2;
		label37->Text = System::Convert::ToString(-1 * w * A) +
			" sin ("+ System::Convert::ToString(w)+" t  + "+ System::Convert::ToString(Q)+")";
		label39->Text= System::Convert::ToString(-1 * w *w* A) +
			" cos (" + System::Convert::ToString(w) + " t + " + System::Convert::ToString(Q)+")";
		cnt3 = -1;
	}
	cnt3++;
}
	   public: int cnt4 = 0;
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt4 == 0)
	{
		k = System::Convert::ToDouble(textBox4->Text);
		label21->Text = "m";
		label20->Text = "";
	} 
	else if (cnt4 == 1)
	{
		m = System::Convert::ToDouble(textBox4->Text);
		label21->Text = "K";  
		label20->Text = "w = "+System::Convert::ToString((float)(sqrt(k / m)))+" rad/s" +
			", T = "+ System::Convert::ToString((float)(2*3.14)/(sqrt(m / k)))+" Sec" +
			", f = "+ System::Convert::ToString((float)((1/(2 * 3.14)) * (sqrt(k / m))))+" HZ";
		cnt4 = -1;
	}
	cnt4++; 
}
	   public: float cnt5 = 0,v = 0;
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt5 == 0)
	{
		m = System::Convert::ToDouble(textBox5->Text);
		label23->Text = "v";
		label24->Text = "";
	}
	else if (cnt5 == 1)
	{
		v = System::Convert::ToDouble(textBox5->Text);
		label23->Text = "m";
		label24->Text = System::Convert::ToString((float)(.5 * m * v * v)) + " J";
		cnt5 = -1;
	}
	cnt5++;


}
	   public: int cnt6 = 0;
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt6 == 0)
	{
		k = System::Convert::ToDouble(textBox6->Text);
		label26->Text = "X";
		label27->Text = "";
	}
	else if (cnt6 == 1)
	{
		x = System::Convert::ToDouble(textBox6->Text);
		label26->Text = "K";
		label27->Text = System::Convert::ToString((float)(.5 * k*x*x)) + " J";
		cnt6 = -1;
	}
	cnt6++;

}
	   public: int cnt7 = 0;
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt7 == 0)
	{
		k = System::Convert::ToDouble(textBox7->Text);
		label29->Text = "A";
		label30->Text = "";
	}
	else if (cnt7 == 1)
	{
		A = System::Convert::ToDouble(textBox7->Text);
		label29->Text = "K";
		label30->Text = System::Convert::ToString(.5 * k *A*A) + " J";
		cnt7 = -1;
	}
	cnt7++;
}
	   public: int cnt8 = 0;
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt8 == 0)
	{
		w = System::Convert::ToDouble(textBox8->Text);
		label32->Text = "A";
		label33->Text = "";
	}
	else if (cnt8 == 1)
	{
		A = System::Convert::ToDouble(textBox8->Text);
		label32->Text = "X";
		label33->Text = "";
	}
	else if (cnt8 == 2)
	{
		x = System::Convert::ToDouble(textBox8->Text);
		label32->Text = "w";
		label33->Text = System::Convert::ToString(w*sqrt(A*A-x*x)) + " m/s";
		cnt8 = -1;
	}
	cnt8++;
}
	   public:  float g = 0, cnt9 = 0, l = 0;
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt9 == 0)
	{
		g = System::Convert::ToDouble(textBox9->Text);
		label35->Text = "L";
		label36->Text = "";
	}
	else if (cnt9 == 1)
	{
		l = System::Convert::ToDouble(textBox9->Text);
		label35->Text = "g";
		label36->Text = System::Convert::ToString(sqrt(g/l)) + " rad/s";
		cnt9 = -1;
	}
	cnt9++;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Show();
	panel2->Hide();
	panel3->Hide();
	panel1->Hide();
	panel5->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Show();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel1->Hide();
}
	   public: float y = 0, cnt10 = 0,t=0;
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt10 == 0)
	{
		y = System::Convert::ToDouble(textBox10->Text);
		label44->Text = "T";
		panel6->Hide();
		label45->Text = "";
	}
	else if (cnt10 == 1)
	{
		t = System::Convert::ToDouble(textBox10->Text); 
		panel6->Show();
		label45->Text = System::Convert::ToString((float)(y/t)) + " m/s";
		cnt10 = -1;
	}  
	cnt10++;

}
	   public:float f = 0, cnt11 = 0;
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt11 == 0)
	{
		y = System::Convert::ToDouble(textBox11->Text);
		label46->Text = ", f";
		panel7->Hide();
		label47->Text = "";
	}
	else if (cnt11 == 1)
	{
		f = System::Convert::ToDouble(textBox11->Text);
		panel7->Show();
		label47->Text = System::Convert::ToString(y*f) + " m/s";
		cnt11 = -1;
	}
	cnt11++;

}
	   public: int cnt12 = 0;
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt12 == 0)
	{
		A = System::Convert::ToDouble(textBox12->Text);
		label55->Text = "k";
		label52->Text = "";
		label53->Text = "";
		label54->Text = "";
	}
	else if (cnt12 == 1)
	{
		k = System::Convert::ToDouble(textBox12->Text);
		label55->Text = "w";
	}
	else if (cnt12 == 2)
	{
		w = System::Convert::ToDouble(textBox12->Text);
		label55->Text = "A";
		std::string str = std::to_string(A) +
			" sin ( " + std::to_string(k*1)+" x +"+ std::to_string(w*1) + " t )" ;
		String^ str2 = gcnew String(str.c_str());
		label52->Text = str2;
		label53->Text = System::Convert::ToString(-1 * w * A) +
			" cos (" + System::Convert::ToString(k) + " x + " + System::Convert::ToString(w) + " t  )";
		label54->Text = System::Convert::ToString(-1 * w * w * A) +
			" sin (" + System::Convert::ToString(k) + " x + " + System::Convert::ToString(w) + " t  )";
		cnt12 = -1;
	}
	cnt12++;
}
	   public: int cnt13 = 0;
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt13 == 0)
	{
		m = System::Convert::ToDouble(textBox13->Text);
		label57->Text = "T";
		panel8->Hide();
		label58->Text = "";
	}
	else if (cnt13 == 1)
	{
		t = System::Convert::ToDouble(textBox13->Text);
		panel8->Show();
		label58->Text = System::Convert::ToString((float)sqrt(t/m)) + " m/s";
		cnt13 = -1;
	}
	cnt13++;
}
	   public: float cnt14 = 0;
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt14 == 0)
	{
		m = System::Convert::ToDouble(textBox14->Text);
		label61->Text = " w";
		label62->Text = "";
		panel10->Hide();
		panel9->Hide();
	}
	else if (cnt14 == 1)
	{
		w = System::Convert::ToDouble(textBox14->Text);
		label61->Text = " A"; 
		panel10->Hide();
		panel9->Hide();
	}
	else if (cnt14 == 2)
	{
		A = System::Convert::ToDouble(textBox14->Text);
		panel10->Show();
		panel9->Hide();
	}
	else if (cnt14 == 3)
	{
		y = System::Convert::ToDouble(textBox14->Text);
		panel9->Show();
		panel10->Hide();
		label62->Text = System::Convert::ToString(.25 * m * w * w * A * A * y) + " J";
		cnt14 = -1;
	}
	cnt14++;

}
	 public: int cnt15 = 0;
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt15 == 0)
	{
		m = System::Convert::ToDouble(textBox15->Text);
		label64->Text = " w";
		label65->Text = "";
		panel11->Hide();
		panel12->Hide();
	}
	else if (cnt15 == 1)
	{
		w = System::Convert::ToDouble(textBox15->Text);
		label64->Text = " A";
		panel11->Hide();
		panel12->Hide();
	}
	else if (cnt15 == 2)
	{
		A = System::Convert::ToDouble(textBox15->Text); 
		panel11->Hide();
		panel12->Show();
	}
	else if (cnt15 == 3)
	{
		y = System::Convert::ToDouble(textBox15->Text);
 		panel11->Show();
		panel12->Hide();
		label65->Text = System::Convert::ToString(.5 * m * w * w * A * A * y) + "j";
		cnt15 = -1;
	}
	cnt15++;
}
	   public: int cnt16 = 0;
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt16 == 0)
	{
		m = System::Convert::ToDouble(textBox16->Text);
		label67->Text = "w";
		label68->Text = "";
		panel13->Hide();
	}
	else if (cnt16 == 1)
	{
		w = System::Convert::ToDouble(textBox16->Text);
		label67->Text = " A";
		panel13->Hide();
	}
	else if (cnt16 == 2)
	{
		A = System::Convert::ToDouble(textBox16->Text);
		label67->Text = "v";
		panel13->Hide();
	}
	else if (cnt16 == 3)
	{
		v = System::Convert::ToDouble(textBox16->Text);
		label67->Text = "μ";
		panel13->Show();
		label68->Text = System::Convert::ToString(.5 * m * w * w * A * A * v) + " watt";
		cnt16 = -1;
	}
	cnt16++;


}
	   int cnt17 = 0;
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt17 == 0)
	{
		w = System::Convert::ToDouble(textBox17->Text);
		label69->Text = " K";
		label70->Text = "";
	}
	else if (cnt17 == 1)
	{
		k = System::Convert::ToDouble(textBox17->Text);
		label69->Text = " w";
		label70->Text = System::Convert::ToString(w/k) + "m/s";
		cnt17 = -1;
	}
	cnt17++;
}
	   public: float cnt18 = 0, B = 0, s = 0;
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt18 == 0)
	{
		B = System::Convert::ToDouble(textBox18->Text);
		label72->Text = " s";
		label73->Text = "";
	}
	else if (cnt18 == 1)
	{
		s = System::Convert::ToDouble(textBox18->Text);
		label72->Text = " K";
		label73->Text = "";
	}
	else if (cnt18 == 2)
	{
		k = System::Convert::ToDouble(textBox18->Text);
		label72->Text = " B";
		label73->Text = System::Convert::ToString(B*s*k) + " pa";
		cnt18 = -1;
	}
	cnt18++;

}
	   public: float cnt19 = 0,p=0;
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt19 == 0)
	{
		p = System::Convert::ToDouble(textBox19->Text);
		label74->Text = "v";
		label75->Text = "";
		panel14->Hide();
	}
	else if (cnt19 == 1)
	{
		v = System::Convert::ToDouble(textBox19->Text);
		label74->Text = "w"; 
		panel14->Hide();
	}
	else if (cnt19 == 2)
	{
		w = System::Convert::ToDouble(textBox19->Text);
		label74->Text = " s"; 
		panel14->Hide();
	}
	else if (cnt19 == 3)
	{
		s = System::Convert::ToDouble(textBox19->Text);
 		panel14->Show();
		label75->Text = System::Convert::ToString(p*v*s*w) + " pa";
		cnt19 = -1;
	}
	cnt19++;

}
	   public: float cnt20 = 0,b=0;
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt20 == 0)
	{
		b = System::Convert::ToDouble(textBox20->Text);
		label77->Text = " v";
		label78->Text = "";
	}
	else if (cnt20 == 1)
	{
		v = System::Convert::ToDouble(textBox20->Text);
		label77->Text = "b";
		label78->Text = System::Convert::ToString(-1 * b * v) + " N";
		cnt20 = -1;
	}
	cnt20++;

}
	   public: int cnt21 = 0;
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt21 == 0)
	{
		k = System::Convert::ToDouble(textBox21->Text);
		label80->Text = "m";
		label81->Text = "";
	}
	else if (cnt21 == 1)
	{
		m = System::Convert::ToDouble(textBox21->Text);
		label80->Text = "b";
	} 
	else if (cnt21 == 2)
	{
		b = System::Convert::ToDouble(textBox21->Text);
		label80->Text = "K";
		label81->Text = System::Convert::ToString((float)(sqrt(k / m - pow( (b / (2 * m)),2))))+ " rad/s";
		cnt21 = -1;
	}
	cnt21++;

}
	   public: float cnt22 = 0,w0=0;
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt22 == 0)
	{
		f = System::Convert::ToDouble(textBox22->Text);
		label83->Text = "m";
		label84->Text = "";
	}
	else if (cnt22 == 1)
	{
		m = System::Convert::ToDouble(textBox22->Text);
		label83->Text = "w";
	}
	else if (cnt22 == 2)
	{
		w = System::Convert::ToDouble(textBox22->Text);
		label83->Text = "w0";
	}
	else if (cnt22 == 3)
	{
		w0 = System::Convert::ToDouble(textBox22->Text);
		label83->Text = "b";
	} 
	else if (cnt22 == 4)
	{
		b = System::Convert::ToDouble(textBox22->Text);
		label83->Text = "f";
		label84->Text = System::Convert::ToString((float)(f/(m*sqrt(pow((w*w-w0*w0),2)+pow(((b*w)/m),2))))) + " m";
		cnt22 = -1;
	}
	cnt22++;

}
	   public: int cnt23 = 0;
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt23 == 0)
	{
		p = System::Convert::ToDouble(textBox23->Text);
		panel30->Hide();
		label86->Text = "B";
		label87->Text = "";
	}
	else if (cnt23 == 1)
	{
		B = System::Convert::ToDouble(textBox23->Text);
		panel30->Show();
		label87->Text = System::Convert::ToString((float)(sqrt(B/p))) + " m/s";
		cnt23 = -1;
	}
	cnt23++;

}
	   public:float tc =0;
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	tc = System::Convert::ToDouble(textBox24->Text);
	label89->Text = System::Convert::ToString(331*sqrt(1+tc/273)) + " m/s"; 
}
	   public: int cnt25 = 0;

private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt25 == 0)
	{
		p = System::Convert::ToDouble(textBox25->Text);
		label91->Text = "v";
		label92->Text = "";
		panel15->Hide();
	}
	else if (cnt25 == 1)
	{
		v = System::Convert::ToDouble(textBox25->Text);
		label91->Text = "A"; 
		panel15->Hide();
	}
	else if (cnt25 == 2)
	{
		A = System::Convert::ToDouble(textBox25->Text);
		label91->Text = "T";
		panel15->Hide();
	}
	else if (cnt25 == 3)
	{
		t = System::Convert::ToDouble(textBox25->Text);
		label91->Text = "w"; 
		panel15->Hide();
	}
	else if (cnt25 == 4)
	{
		w = System::Convert::ToDouble(textBox25->Text);
		label91->Text = "s"; 
		panel15->Hide();
	}
	else if (cnt25 == 5)
	{
		s = System::Convert::ToDouble(textBox25->Text);
		label91->Text = "ρ";
		panel15->Show();
		label92->Text = System::Convert::ToString((float)(.5*p*v*A*t*w*w*s*s)) + " J";
		cnt25 = -1;
	}
	cnt25++;
}
	   public: int cnt26 = 0;

private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt26 == 0)
	{
		p = System::Convert::ToDouble(textBox26->Text);
		label94->Text = "v";
		label95->Text = "";
		panel16->Hide();
	}
	else if (cnt26 == 1)
	{
		v = System::Convert::ToDouble(textBox26->Text);
		label94->Text = "A";
		panel16->Hide();
	} 
	else if (cnt26 == 2)
	{
		A = System::Convert::ToDouble(textBox26->Text);
		label94->Text = "w";
		panel16->Hide();
	}
	else if (cnt26 == 3)
	{
		w = System::Convert::ToDouble(textBox26->Text);
		label94->Text = "s";
		panel16->Hide();
	}
	else if (cnt26 == 4)
	{
		s = System::Convert::ToDouble(textBox26->Text);
 		panel16->Show();
		label95->Text = System::Convert::ToString((float)(.5 * p * v * A * w * w * s * s)) + " watt";
		cnt26 = -1;
	}
	cnt26++;
}
	   public: int cnt27 = 0;
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt27 == 0)
	{
		p = System::Convert::ToDouble(textBox27->Text);
		label97->Text = "v";
		label98->Text = "";
		panel17->Hide();
	} 
	else if (cnt27 == 1)
	{
		v = System::Convert::ToDouble(textBox27->Text);
		label97->Text = "w";
		panel17->Hide();
	}
	else if (cnt27 == 2)
	{
		w = System::Convert::ToDouble(textBox27->Text);
		label97->Text = "s";
		panel17->Hide();
	}
	else if (cnt27 == 3)
	{
		s = System::Convert::ToDouble(textBox27->Text);
 		panel17->Show();
		label98->Text = System::Convert::ToString((float)(.5 * p * v * w * w * s * s)) + " W/m^2";
		cnt27 = -1;
	}
	cnt27++;
}
	   public: int cnt28 = 0;
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt28 == 0)
	{
		p = System::Convert::ToDouble(textBox28->Text);
		label99->Text = "A";
		label100->Text = "";
	}
	else if (cnt28 == 1)
	{
		A = System::Convert::ToDouble(textBox28->Text);
		label99->Text = "power";
		label100->Text = System::Convert::ToString((float)(p/A)) + " W/m^2";
		cnt28 = -1;
	}
	cnt28++; 
}
	   public: float cnt29 = 0, I = 0, I0 = 0;
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt29 == 0)
	{
		I = System::Convert::ToDouble(textBox29->Text);
		label102->Text = "I0";
		label103->Text = "";
	}
	else if (cnt29 == 1)
	{
		I0 = System::Convert::ToDouble(textBox29->Text);
		label102->Text = "I";
		label103->Text = System::Convert::ToString((float)(10*log(I/I0))) + " dB";
		cnt29 = -1;
	}
	cnt29++; 
}
	   public:float cnt30 = 0, vs = 0, vl = 0, v0 = 0;
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt30 == 0)
	{
		f = System::Convert::ToDouble(textBox30->Text);
		label107->Text = "The speed of the sound";
		label108->Text = "";
		label109->Text = "";
		label110->Text = "";
		label111->Text = "";
	}
	else if (cnt30 == 1)
	{
		v0 = System::Convert::ToDouble(textBox30->Text);
		label107->Text = "The speed of the source"; 
	}
	else if (cnt30 == 2)
	{
		vs = System::Convert::ToDouble(textBox30->Text);
		label107->Text = "The speed of the Observer"; 
	}
	else if (cnt30 == 3)
	{
		vl = System::Convert::ToDouble(textBox30->Text);
		label107->Text = "the frequency";
		label108->Text = System::Convert::ToString(f*((v0+vl)/v0)) + " Hz";
		label109->Text = System::Convert::ToString(f*((v0-vl)/v0)) + " Hz";
		label110->Text = System::Convert::ToString(f* (v0/(v0 - vs))) + " Hz";
		label111->Text = System::Convert::ToString(f * (v0 / (v0 + vs))) + " Hz";
		cnt30 = -1;
	}
	cnt30++;

}
	   public: int cnt31 = 0;
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt31 == 0)
	{
		f = System::Convert::ToDouble(textBox31->Text);
		label116->Text = "sound speed";
		label117->Text = ""; 
	}
	else if (cnt31 == 1)
	{
		v0 = System::Convert::ToDouble(textBox31->Text);
		label116->Text = "source speed ";
	}
	else if (cnt31 == 2)
	{
		vs = System::Convert::ToDouble(textBox31->Text);
		label116->Text = "Observer speed";
	}
	else if (cnt31 == 3)
	{
		vl = System::Convert::ToDouble(textBox31->Text);
		label116->Text = "frequency";
		label117->Text = System::Convert::ToString((float)(f * ((v0 + vl) / (v0 + vs)))) + " Hz";
		cnt31 = -1;
	}
	cnt31++;
}
	   public: int cnt32 = 0;
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt32 == 0)
	{
		A = System::Convert::ToDouble(textBox32->Text);
		label119->Text = "k";
		label120->Text = ""; 
	}
	else if (cnt32 == 1)
	{
		k = System::Convert::ToDouble(textBox32->Text);
		label119->Text = "w";
	} 
	else if (cnt32 == 2)
	{
		w = System::Convert::ToDouble(textBox32->Text);
		label119->Text = "Q";
	}
	else if (cnt32 == 3)
	{
		Q = System::Convert::ToDouble(textBox32->Text);
		label119->Text = "A"; 
		label120->Text ="y = "+ System::Convert::ToString(2 * A) +
			" cos (" + System::Convert::ToString(Q/2) + ") sin (   " + System::Convert::ToString(k) + " x - "+
			System::Convert::ToString(w) + " t +  " + System::Convert::ToString(Q / 2) + ")";
		cnt32= -1;
	}
	cnt32++;

}
	   public: int cnt33 = 0;
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt33 == 0)
	{
		A = System::Convert::ToDouble(textBox33->Text);
		label123->Text = "k";
		label124->Text = "";
	}
	else if (cnt33 == 1)
	{
		k = System::Convert::ToDouble(textBox33->Text);
		label123->Text = "w";
	} 
	else if (cnt33 == 2)
	{
		w = System::Convert::ToDouble(textBox33->Text);
		label123->Text = "A";
		label124->Text ="y = "+ System::Convert::ToString(2 * A) +
			 " sin (   " + System::Convert::ToString(k) + " x ) cos (" + 
			System::Convert::ToString(w) + " t )";
		cnt33 = -1;
	}
	cnt33++;

}
private: System::Void label128_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public:float cnt34 = 0, n = 0;
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt34 == 0)
	{
		y = System::Convert::ToDouble(textBox34->Text);
		label127->Text = "n";
		label128->Text = "";
		panel18->Hide();
	} 
	else if (cnt34 == 1)
	{
		n = System::Convert::ToDouble(textBox34->Text);
		panel18->Show();
		label128->Text = System::Convert::ToString((float)((n*y)/2));
		cnt34 = -1;
	}
	cnt34++;
}
	   public: int cnt35 = 0;
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt35 == 0)
	{
		y = System::Convert::ToDouble(textBox35->Text);
		label129->Text = "n";
		label130->Text = "";
		panel19->Hide();
	}
	else if (cnt35 == 1)
	{
		n = System::Convert::ToDouble(textBox35->Text);
		panel19->Show();
		label130->Text = System::Convert::ToString((float)((n * y) / 4));
		cnt35 = -1;
	}
	cnt35++;


}
	   public: int cnt36 = 0;
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt36 == 0)
	{
		l = System::Convert::ToDouble(textBox36->Text);
		label133->Text = "n";
		label134->Text = ""; 
	}
	else if (cnt36 == 1)
	{
		n = System::Convert::ToDouble(textBox36->Text);
		label133->Text = "L";
		label134->Text = System::Convert::ToString((float)((2*l)/n))+" m";
		cnt36 = -1;
	}
	cnt36++;

}
	   public: int cnt37 = 0;
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt37 == 0)
	{
		n = System::Convert::ToDouble(textBox37->Text);
		label136->Text = "v";
		label137->Text = "";
	}
	else if (cnt37 == 1)
	{
		v = System::Convert::ToDouble(textBox37->Text);
		label136->Text = "l"; 
	}
	else if (cnt37 == 2)
	{
		l = System::Convert::ToDouble(textBox37->Text);
		label136->Text = "n";
		label137->Text = System::Convert::ToString((float)((n*v)/(2 * l)))+" Hz";
		cnt37 = -1;
	}
	cnt37++;

}
	   public: float cnt38 = 0, d = 0;
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt38 == 0)
	{
		Q = System::Convert::ToDouble(textBox38->Text);
		label138->Text = "d";
		label140->Text = "";
		panel21->Hide();
	} 
	else if (cnt38 == 1)
	{
		d = System::Convert::ToDouble(textBox38->Text);
		panel21->Show();
		label140->Text = System::Convert::ToString((float)(d*sin(Q * 3.14159 / 180))) + " m";
		cnt38 = -1;
	}
	cnt38++;

}
	   public: int cnt39 = 0;
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt39 == 0)
	{
		y = System::Convert::ToDouble(textBox39->Text);
		label142->Text = "m";
		label143->Text = "";
		panel22->Hide();
	}
	else if (cnt39 == 1)
	{
		m = System::Convert::ToDouble(textBox39->Text);
		panel22->Show();
		label143->Text = System::Convert::ToString((float)(m * y)) + " m";
		cnt39 = -1;
	}
	cnt39++;

}
	   public: int cnt40 = 0;
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt40 == 0)
	{
		y = System::Convert::ToDouble(textBox40->Text);
		label145->Text = "m";
		label146->Text = "";
		panel24->Hide();
	}
	else if (cnt40 == 1)
	{
		m = System::Convert::ToDouble(textBox40->Text);
		panel24->Show();
		label146->Text = System::Convert::ToString((float)((m+.5) * y)) + " m";
		cnt40 = -1;
	}
	cnt40++;
}
	   public: int cnt41 = 0;
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt41 == 0)
	{
		Q = System::Convert::ToDouble(textBox41->Text);
		label148->Text = "L";
		label149->Text = "";
		panel23->Hide();
	}
	else if (cnt41 == 1)
	{
		l = System::Convert::ToDouble(textBox41->Text);
		panel23->Show();
		label149->Text = System::Convert::ToString((float)(l * tan(Q * 3.14159 / 180))) + " m";
		cnt41 = -1;
	}
	cnt41++;

}
	   public: int cnt42 = 0;
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt42 == 0)
	{
		y = System::Convert::ToDouble(textBox42->Text);
		label151->Text = "m";
		label152->Text = "";
		panel25->Hide();
	}
	else if (cnt42 == 1)
	{
		m = System::Convert::ToDouble(textBox42->Text);
		label151->Text = "L"; 
		panel25->Hide();
	}
	else if (cnt42 == 2)
	{
		l = System::Convert::ToDouble(textBox42->Text);
		label151->Text = "d"; 
		panel25->Hide();
	}
	else if (cnt42 == 3)
	{
		d = System::Convert::ToDouble(textBox42->Text);
		panel25->Show();
		label152->Text = System::Convert::ToString((float)((l*m*y)/d)) + " m";
		cnt42 = -1;
	}
	cnt42++;

}
	   public:int cnt43 = 0;
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt43 == 0)
	{
		y = System::Convert::ToDouble(textBox43->Text);
		label54->Text = "m";
		label155->Text = "";
		panel26->Hide();
	}
	else if (cnt43 == 1)
	{
		m = System::Convert::ToDouble(textBox43->Text);
		label154->Text = "L";
		panel26->Hide();
	}
	else if (cnt43 == 2)
	{
		l = System::Convert::ToDouble(textBox43->Text);
		label154->Text = "d";
		panel26->Hide();
	}
	else if (cnt43 == 3)
	{
		d = System::Convert::ToDouble(textBox43->Text);
		panel26->Show();
		label155->Text = System::Convert::ToString((float)((l * (m+.5) * y) / d) )+ " m";
		cnt43 = -1;
	}
	cnt43++;
}
	   public: int cnt44 = 0;
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt44 == 0)
	{
		y = System::Convert::ToDouble(textBox44->Text); 
		panel20->Show();
		panel27->Hide();
	}
	else if (cnt44 == 1)
	{
		Q = System::Convert::ToDouble(textBox44->Text); 
		panel20->Hide();
		panel27->Show();
		label157->Text = System::Convert::ToString((float)((360 * Q) / y));
		cnt44 = -1;
	}
	cnt44++;

}
	   public: float cnt45 = 0, y2 = 0;
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt45 == 0)
	{
		y = System::Convert::ToDouble(textBox45->Text);
		label159->Text = "y";
		label160->Text = "";
		panel28->Hide();
	}
	else if (cnt45 == 1)
	{ 
		y2 = System::Convert::ToDouble(textBox45->Text);
		label159->Text = "d";
		panel28->Hide();
	}
	else if (cnt45 == 2)
	{
		d = System::Convert::ToDouble(textBox45->Text);
		label159->Text = "L";
		panel28->Hide();
	}
	else if (cnt45 == 3)
	{
		l = System::Convert::ToDouble(textBox45->Text);
		label159->Text = "I max";
		panel28->Hide();
	}
	else if (cnt45 == 4)
	{
		I = System::Convert::ToDouble(textBox45->Text);
		panel28->Show();
		label160->Text = System::Convert::ToString((float)(I*pow( cos(((180*d*y2)/(y*l)) *3.14159 /180),2))) ;
		label159->Text = "";
		cnt45 = -1;
	}
	cnt45++;

}
	    
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
	n = System::Convert::ToDouble(textBox46->Text);
	label163->Text = System::Convert::ToString((float)((3*pow(10,8)) / n));
	 
	 
}
	   public: int cnt47 = 0;
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cnt47 == 0)
	{
		y = System::Convert::ToDouble(textBox47->Text);
		label165->Text = "n";
		panel29->Hide();
		label166->Text = "";
	}
	else if (cnt47 == 1)
	{
		n = System::Convert::ToDouble(textBox47->Text);
		panel29->Show(); 
		label166->Text = System::Convert::ToString((float)(y / n))+" m";
		cnt47 = -1;
	}
	cnt47++;

}
private: System::Void label65_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label68_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
