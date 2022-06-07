#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath> 
#include "LogicDesign.h" 
#include <vector> 

bool isEmpty(System::Windows::Forms::TextBox^ x);

/*bool checkbinary(std::string s);
bool checkoctal(std::string s);
bool checkhex(std::string s);
bool checkdecimal(std::string s); 

std::string convertDecimalToHexDecimal(long long integer_part, double fractional_part);
std::string convertDecimalToBinary(long long integer_part, double fractional_part);
std::string convertDecimalToOctal(long long integer_part, double fractional_part);
std::string convertDecimalToBinary(double number);
std::string convertDecimalToHexDecimal(double number);
std::string convertDecimalToOctal(double number);*/
/*double convertBinaryToDecimal(std::string number);
std::string convertDecimalToBinary(double number);
double convertOctalToDecimal(std::string number);
std::string convertDecimalToOctal(double number);
double convertHexDecimalToDecimal(std::string number);
std::string convertDecimalToHexDecimal(double number);
std::string getFunctionFromTruthTable(std::string output);
std::string getMaxTermFunctionFromTruthTable(string output);*/

/*bool check(std::string s);
std::string repNum(int pos, int n, std::string s);
std::string replaceAsterisk(std::string s);
std::string replacePlus(std::string s);*/



namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;



	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		MyForm1(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label31;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(429, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(429, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"=";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(429, 198);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Location = System::Drawing::Point(427, 267);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(429, 300);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"=";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(428, 337);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"=";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Location = System::Drawing::Point(429, 371);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"=";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Location = System::Drawing::Point(427, 400);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"=";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(82, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Function from truth table";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"1. convert from binary to decimal";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"4.  convert from decimal to binary";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"2. convert from binary to octal";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"7.  convert from octal to binary";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"5. convert from decimal to octal";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(493, 340);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"result";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(274, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"3.  convert from binary to hexadecimal";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(495, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"result";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(305, 201);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 18;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(495, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"result";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(305, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(495, 237);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"result";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm1::label11_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(305, 234);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(493, 201);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 20);
			this->label12->TabIndex = 23;
			this->label12->Text = L"result";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(306, 371);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(495, 369);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 20);
			this->label13->TabIndex = 25;
			this->label13->Text = L"result";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(305, 270);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 26;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(495, 267);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 20);
			this->label14->TabIndex = 27;
			this->label14->Text = L"result";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(493, 303);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 20);
			this->label15->TabIndex = 28;
			this->label15->Text = L"result";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(306, 305);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 29;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(493, 429);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 20);
			this->label16->TabIndex = 30;
			this->label16->Text = L"result";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(17, 335);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(286, 20);
			this->label17->TabIndex = 31;
			this->label17->Text = L" 6. convert from decimal to hexadecimal";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(495, 458);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 20);
			this->label18->TabIndex = 32;
			this->label18->Text = L"result";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->Location = System::Drawing::Point(427, 429);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(39, 23);
			this->button10->TabIndex = 33;
			this->button10->Text = L"=";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(306, 431);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 34;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(22, 398);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(266, 20);
			this->label19->TabIndex = 35;
			this->label19->Text = L"8.  convert from octal to hexadecimal";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(26, 431);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(236, 20);
			this->label20->TabIndex = 36;
			this->label20->Text = L"9.  convert from octal to decimal ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(8, 461);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(295, 20);
			this->label21->TabIndex = 37;
			this->label21->Text = L"10.  convert from hexadecimal to decimal";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(17, 487);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(283, 20);
			this->label22->TabIndex = 38;
			this->label22->Text = L"11.  convert from hexadecimal to binary";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(495, 490);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(48, 20);
			this->label23->TabIndex = 39;
			this->label23->Text = L"result";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(17, 513);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(271, 20);
			this->label24->TabIndex = 40;
			this->label24->Text = L"12. convert from hexadecimal to octal";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(493, 515);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(48, 20);
			this->label25->TabIndex = 41;
			this->label25->Text = L"result";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm1::label25_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->Location = System::Drawing::Point(427, 458);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 23);
			this->button11->TabIndex = 42;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->Location = System::Drawing::Point(427, 487);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(37, 23);
			this->button12->TabIndex = 43;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button13->Location = System::Drawing::Point(427, 515);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(37, 23);
			this->button13->TabIndex = 44;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm1::button13_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(305, 463);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 45;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(306, 489);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 46;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(306, 400);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 47;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(305, 337);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 48;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(306, 515);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 49;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(307, 33);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(99, 20);
			this->textBox14->TabIndex = 52;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox14_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(563, 15);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(71, 20);
			this->label26->TabIndex = 53;
			this->label26->Text = L"Function";
			this->label26->Click += gcnew System::EventHandler(this, &MyForm1::label26_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->Location = System::Drawing::Point(423, 33);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 23);
			this->button14->TabIndex = 54;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 23);
			this->button1->TabIndex = 55;
			this->button1->Text = L"<--";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(563, 46);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(71, 20);
			this->label28->TabIndex = 57;
			this->label28->Text = L"Function";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(479, 15);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(74, 20);
			this->label29->TabIndex = 58;
			this->label29->Text = L"minterms";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(479, 46);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(78, 20);
			this->label30->TabIndex = 59;
			this->label30->Text = L"maxterms";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(12, 106);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(197, 20);
			this->label27->TabIndex = 60;
			this->label27->Text = L"Boolean algebra calculater";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(223, 108);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(230, 20);
			this->textBox13->TabIndex = 62;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button15->Location = System::Drawing::Point(459, 106);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 23);
			this->button15->TabIndex = 63;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm1::button15_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(526, 90);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(99, 20);
			this->label31->TabIndex = 64;
			this->label31->Text = L"simplification";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(851, 542);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   /////////////////////binary to decimal //////////////////
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		char cStr[50] = { 0 };
		if (isEmpty(textBox2))
			label10->Text = "enter an input";
		else
		{
			String^ clrString = textBox2->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string number(cStr);
			if (!checkbinary(number))
				label10->Text = "enter a valid input";
			else
			{
				double result = convertBinaryToDecimal(number);
				label10->Text = System::Convert::ToString(result);
			}
		}
	}
		   //////////////////////////binary to hexa///////////////////////////
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox3))
			label11->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox3->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string str(cStr);
			if (!checkbinary(str))
				label11->Text = "enter a valid input";
			else
			{
				double temp = convertBinaryToDecimal(str);
				std::string ans = convertDecimalToHexDecimal(temp);
				String^ str2 = gcnew String(ans.c_str());
				label11->Text = str2;
			}
		}

	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   ////////////////////////binary to octal/////////////////////////// 
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox1))
			label12->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox1->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string str(cStr);
			if (!checkbinary(str))
				label12->Text = "enter a valid input";
			else
			{
				double temp = convertBinaryToDecimal(str);
				std::string ans = convertDecimalToOctal(temp);
				String^ str2 = gcnew String(ans.c_str());
				label12->Text = str2;
			}
		}
	}
		   ////////////////////////octal to binary///////////////////////
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox4))
			label13->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox4->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string str(cStr);
			if (!checkoctal(str))
				label13->Text = "enter a valid input";
			else
			{
				double temp = convertOctalToDecimal(str);
				std::string ans = convertDecimalToBinary(temp);
				String^ str2 = gcnew String(ans.c_str());
				label13->Text = str2;
			}
		}

	}
		   ///////////////////////////decimal to binary//////////////////////
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox5))
			label14->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox5->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string s(cStr);
			if (!checkdecimal(s))
				label14->Text = "enter a valid input";
			else
			{
				std::string result;
				long long integerpart = 0;
				double fracpart = 0;
				int in = s.find('.');
				if (in != -1)
				{
					integerpart = stoll(s.substr(0, in));
					fracpart = stod(s.substr(in, s.size() - in - 1));
					result = convertDecimalToBinary(integerpart, fracpart);
				}
				else
				{
					integerpart = stoll(s);
					result = convertDecimalToBinary(integerpart, fracpart);
				}

				String^ str2 = gcnew String(result.c_str());
				label14->Text = str2;
			}
		} 

	}
		   //////////////////////decimal to octal////////////////////////
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox6))
			label15->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox6->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string s(cStr);
			if (!checkdecimal(s))
				label15->Text = "enter a valid input";
			else
			{
				std::string result;
				long long integerpart = 0;
				double fracpart = 0;
				int in = s.find('.');
				if (in != -1)
				{
					integerpart = stoll(s.substr(0, in));
					fracpart = stod(s.substr(in, s.size() - in - 1));
					result = convertDecimalToOctal(integerpart, fracpart);
				}
				else
				{
					integerpart = stoll(s);
					result = convertDecimalToOctal(integerpart, fracpart);
				}

				String^ str2 = gcnew String(result.c_str());
				label15->Text = str2;
			}
		}
 
	}
		   ////////////////////////////// octal to decimal /////////////////////
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox7))
			label16->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox7->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string number(cStr);
			if (!checkoctal(number))
				label16->Text = "enter a valid input";
			else
			{
				double result = convertOctalToDecimal(number);
				label16->Text = System::Convert::ToString(result);
			}
		}

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   ////////////////////////////////hexa to binary////////////////////
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox9))
			label23->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox9->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string str(cStr);
			if (!checkhex(str))
				label23->Text = "enter a valid input";
			else
			{
				double temp = convertHexDecimalToDecimal(str);
				std::string ans = convertDecimalToBinary(temp);
				String^ str2 = gcnew String(ans.c_str());
				label23->Text = str2;
			}
		}
	}
		   /////////////////////////octal to hexa///////////////////////////
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox10))
			label9->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox10->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string str(cStr);
			if (!checkoctal(str))
				label9->Text = "enter a valid input";
			else
			{
				double temp = convertOctalToDecimal(str);
				std::string ans = convertDecimalToHexDecimal(temp);
				String^ str2 = gcnew String(ans.c_str());
				label9->Text = str2;
			}
		}


	}
		   ////////////////////////////////decimal to hexa///////////////////////
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox11))
			label7->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox11->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string s(cStr); 
			if(!checkdecimal(s))
				label7->Text = "enter a valid input";
			else
			{ 
				std::string result;
				long long integerpart = 0;
				double fracpart = 0;
				int in = s.find('.');
				if (in != -1)
				{
					integerpart = stoll(s.substr(0, in));
					fracpart = stod(s.substr(in , s.size() - in - 1));
				    result = convertDecimalToHexDecimal(integerpart,fracpart);
				}
				else
				{
					integerpart = stoll(s);
					result = convertDecimalToHexDecimal(integerpart, fracpart);
				}
				
				String^ str2 = gcnew String(result.c_str());
				label7->Text = str2;
			}
		}
	}
		   ////////////////////////////////hexa to octal//////////////////////////
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox12))
			label25->Text = "enter an input";
		else
		{

			char cStr[50] = { 0 };
			String^ clrString = textBox12->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string str(cStr);
			if (!checkhex(str))
				label25->Text = "enter a valid input";
			else
			{

				double temp = convertHexDecimalToDecimal(str);
				std::string ans = convertDecimalToOctal(temp);
				String^ str2 = gcnew String(ans.c_str());
				label25->Text = str2;
			}
		}
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   /////////////////////function from truth table//////////////
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox14))
		{
			label26->Text = "enter the function";
			label28->Text = "";
		}
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox14->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string number(cStr);
			if (!checkbinary(number))
			{
				label26->Text = "enter a valid input";
				label28->Text = "";
			}
			else
			{
				std::string str = getFunctionFromTruthTable(number);
				std::string str3 = getMaxTermFunctionFromTruthTable(number);
				String^ str2 = gcnew String(str.c_str());
				String^ str4 = gcnew String(str3.c_str());
				label26->Text = str2;
				label28->Text = str4;
			}
		}

	}
		   ////////////////////////hexa to decimal////////////////////////
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox8))
			label18->Text = "enter an input";
		else
		{
			char cStr[50] = { 0 };
			String^ clrString = textBox8->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string number(cStr);
			if (!checkhex(number))
				label18->Text = "enter a valid input";
			else
			{
				double result = convertHexDecimalToDecimal(number);
				label18->Text = System::Convert::ToString(result);
			}
		}
	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherform->Show();
	}
	private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isEmpty(textBox13))
			label31->Text = "enter an input";
		else
		{
			std::string s1 = "", s2 = "", s3 = "";
			bool mar = false;
			char cStr[100] = { 0 };
			String^ clrString = textBox13->Text;
			if (clrString->Length < sizeof(cStr))
				sprintf(cStr, "%s", clrString);
			std::string s(cStr);
			if (!check(s)) {
				label31->Text = "enter a valid equation";
			}
			else
			{
				for (char i : s) {
					if (i == '+' || i == '*')
						mar = true;
				}
				std::string zero = "0", one = "1";
				bool first = true;
				int last = 0;
				for (int i = 0; i < s.length(); ++i) {
					if ((s[i] == '+' || s[i] == '*')) {
						last = i;
						if (first) {
							s = repNum(0, i, s);
							first = false;
							i = 0;
							continue;
						}
						for (int j = i + 1; j < s.length(); ++j) {
							if ((s[j] == '+' || s[j] == '*')) {
								s = repNum(i + 1, j - i - 1, s);
								break;
							}
						}
					}
				}
				if (!mar) {
					bool zer = false;
					for (char i : s) {
						if (i == 0) {
							zer = true;
							break;
						}
					}
					if (zer) {
						s = "0";
						return;
					}
					else {
						s = "1";
						return;
					}
				}
				s1 = repNum(last + 1, int(s.length() - last), s);
				s2 = replaceAsterisk(s1);
				s3 = replacePlus(s2);
				String^ str1 = gcnew String(s1.c_str());
				String^ str2 = gcnew String(s2.c_str());
				String^ str3 = gcnew String(s3.c_str());
				label31->Text = "first simplify : " + str1 +
					"\nSecond simplify : " + str2 +
					"\nThird simplify : " + str3;
			}
		}


	}
	};
}