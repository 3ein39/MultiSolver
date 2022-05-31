#pragma once
#include "MyForm11.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::LinkLabel^ linkLabel9;
	private: System::Windows::Forms::LinkLabel^ linkLabel8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::LinkLabel^ linkLabel10;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::LinkLabel^ linkLabel13;
	private: System::Windows::Forms::LinkLabel^ linkLabel12;
	private: System::Windows::Forms::LinkLabel^ linkLabel11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::LinkLabel^ linkLabel16;
	private: System::Windows::Forms::LinkLabel^ linkLabel15;
	private: System::Windows::Forms::LinkLabel^ linkLabel14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ linkLabel17;
	private: System::Windows::Forms::LinkLabel^ linkLabel18;









	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel16 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel15 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel14 = (gcnew System::Windows::Forms::LinkLabel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel13 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel12 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel11 = (gcnew System::Windows::Forms::LinkLabel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel17 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel18 = (gcnew System::Windows::Forms::LinkLabel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(315, 357);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(561, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 62);
			this->label1->TabIndex = 4;
			this->label1->Text = L"SOLVER";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(555, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Welcome to our program solver";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(516, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(314, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L" please click on the key below to start ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(625, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"our journey.";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(632, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel1->Location = System::Drawing::Point(717, 420);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(108, 20);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Solver Team";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(3, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(530, 491);
			this->panel1->TabIndex = 10;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label15);
			this->panel10->Controls->Add(this->linkLabel16);
			this->panel10->Controls->Add(this->linkLabel15);
			this->panel10->Controls->Add(this->linkLabel14);
			this->panel10->Controls->Add(this->label10);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Location = System::Drawing::Point(255, 253);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(200, 235);
			this->panel10->TabIndex = 4;
			// 
			// linkLabel16
			// 
			this->linkLabel16->AutoSize = true;
			this->linkLabel16->Location = System::Drawing::Point(115, 169);
			this->linkLabel16->Name = L"linkLabel16";
			this->linkLabel16->Size = System::Drawing::Size(68, 20);
			this->linkLabel16->TabIndex = 7;
			this->linkLabel16->TabStop = true;
			this->linkLabel16->Text = L"Linkedin";
			this->linkLabel16->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel16_LinkClicked);
			// 
			// linkLabel15
			// 
			this->linkLabel15->AutoSize = true;
			this->linkLabel15->Location = System::Drawing::Point(16, 169);
			this->linkLabel15->Name = L"linkLabel15";
			this->linkLabel15->Size = System::Drawing::Size(60, 20);
			this->linkLabel15->TabIndex = 7;
			this->linkLabel15->TabStop = true;
			this->linkLabel15->Text = L"GitHub";
			this->linkLabel15->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel15_LinkClicked);
			// 
			// linkLabel14
			// 
			this->linkLabel14->AutoSize = true;
			this->linkLabel14->Location = System::Drawing::Point(16, 146);
			this->linkLabel14->Name = L"linkLabel14";
			this->linkLabel14->Size = System::Drawing::Size(181, 20);
			this->linkLabel14->TabIndex = 2;
			this->linkLabel14->TabStop = true;
			this->linkLabel14->Text = L"ayabelal906@gmail.com";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(38, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 20);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Aya Ahmed Belal";
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Location = System::Drawing::Point(52, 5);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(95, 104);
			this->panel11->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label11);
			this->panel8->Controls->Add(this->linkLabel13);
			this->panel8->Controls->Add(this->linkLabel12);
			this->panel8->Controls->Add(this->linkLabel11);
			this->panel8->Controls->Add(this->label9);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Location = System::Drawing::Point(49, 243);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(200, 245);
			this->panel8->TabIndex = 3;
			// 
			// linkLabel13
			// 
			this->linkLabel13->AutoSize = true;
			this->linkLabel13->Location = System::Drawing::Point(129, 179);
			this->linkLabel13->Name = L"linkLabel13";
			this->linkLabel13->Size = System::Drawing::Size(68, 20);
			this->linkLabel13->TabIndex = 6;
			this->linkLabel13->TabStop = true;
			this->linkLabel13->Text = L"Linkedin";
			this->linkLabel13->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel13_LinkClicked);
			// 
			// linkLabel12
			// 
			this->linkLabel12->AutoSize = true;
			this->linkLabel12->Location = System::Drawing::Point(4, 179);
			this->linkLabel12->Name = L"linkLabel12";
			this->linkLabel12->Size = System::Drawing::Size(60, 20);
			this->linkLabel12->TabIndex = 5;
			this->linkLabel12->TabStop = true;
			this->linkLabel12->Text = L"GitHub";
			this->linkLabel12->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel12_LinkClicked);
			// 
			// linkLabel11
			// 
			this->linkLabel11->AutoSize = true;
			this->linkLabel11->Location = System::Drawing::Point(-3, 156);
			this->linkLabel11->Name = L"linkLabel11";
			this->linkLabel11->Size = System::Drawing::Size(230, 20);
			this->linkLabel11->TabIndex = 6;
			this->linkLabel11->TabStop = true;
			this->linkLabel11->Text = L"ShahdOsman9071@gmail.com";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 20);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Shahd Mohamed Ali ";
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(54, 15);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(95, 112);
			this->panel9->TabIndex = 4;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->linkLabel10);
			this->panel6->Controls->Add(this->linkLabel9);
			this->panel6->Controls->Add(this->linkLabel8);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(356, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(171, 253);
			this->panel6->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(147, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(24, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// linkLabel10
			// 
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->Location = System::Drawing::Point(94, 181);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(68, 20);
			this->linkLabel10->TabIndex = 6;
			this->linkLabel10->TabStop = true;
			this->linkLabel10->Text = L"Linkedin";
			this->linkLabel10->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel10_LinkClicked);
			// 
			// linkLabel9
			// 
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->Location = System::Drawing::Point(7, 181);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(60, 20);
			this->linkLabel9->TabIndex = 5;
			this->linkLabel9->TabStop = true;
			this->linkLabel9->Text = L"GitHub";
			this->linkLabel9->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel9_LinkClicked);
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Location = System::Drawing::Point(7, 141);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(155, 40);
			this->linkLabel8->TabIndex = 2;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"hussein.saad2021@\r\ngmail.com";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(0, 121);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(171, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Hussien Saad Hussien";
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Location = System::Drawing::Point(33, 18);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(86, 91);
			this->panel7->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->linkLabel7);
			this->panel4->Controls->Add(this->linkLabel6);
			this->panel4->Controls->Add(this->linkLabel5);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(180, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(177, 244);
			this->panel4->TabIndex = 1;
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Location = System::Drawing::Point(105, 172);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(68, 20);
			this->linkLabel7->TabIndex = 5;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"Linkedin";
			this->linkLabel7->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel7_LinkClicked);
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Location = System::Drawing::Point(1, 172);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(60, 20);
			this->linkLabel6->TabIndex = 5;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"GitHub";
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel6_LinkClicked);
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(1, 152);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(172, 20);
			this->linkLabel5->TabIndex = 2;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Sherif.yato@gmail.com";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Sherif Khairy Amin";
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Location = System::Drawing::Point(36, 19);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(83, 91);
			this->panel5->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->linkLabel4);
			this->panel2->Controls->Add(this->linkLabel3);
			this->panel2->Controls->Add(this->linkLabel2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(183, 244);
			this->panel2->TabIndex = 0;
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(110, 172);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(68, 20);
			this->linkLabel4->TabIndex = 4;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Linkedin";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel4_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(8, 172);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(60, 20);
			this->linkLabel3->TabIndex = 3;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"GitHub";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel3_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(3, 152);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(175, 20);
			this->linkLabel2->TabIndex = 2;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"hhany3997@gmail.com";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(47, 19);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(86, 91);
			this->panel3->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Hussien Hany Hussien";
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->Location = System::Drawing::Point(6, 26);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(529, 515);
			this->panel12->TabIndex = 11;
			// 
			// linkLabel17
			// 
			this->linkLabel17->AutoSize = true;
			this->linkLabel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel17->Location = System::Drawing::Point(736, 457);
			this->linkLabel17->Name = L"linkLabel17";
			this->linkLabel17->Size = System::Drawing::Size(66, 20);
			this->linkLabel17->TabIndex = 8;
			this->linkLabel17->TabStop = true;
			this->linkLabel17->Text = L"GitHub";
			this->linkLabel17->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel17_LinkClicked);
			// 
			// linkLabel18
			// 
			this->linkLabel18->AutoSize = true;
			this->linkLabel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel18->Location = System::Drawing::Point(779, 9);
			this->linkLabel18->Name = L"linkLabel18";
			this->linkLabel18->Size = System::Drawing::Size(56, 20);
			this->linkLabel18->TabIndex = 12;
			this->linkLabel18->TabStop = true;
			this->linkLabel18->Text = L"Help !";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(9, 199);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(188, 45);
			this->label11->TabIndex = 8;
			this->label11->Text = L"FCI Fayoum university student\r\nJr. Embedded Software Engineer\r\nGUI & Algorithm co"
				L"der";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 192);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(168, 45);
			this->label12->TabIndex = 0;
			this->label12->Text = L"FCI Fayoum university student\r\nJr. Penetration Tester\r\nAlgorithm maker & coder";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(9, 196);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(162, 39);
			this->label13->TabIndex = 8;
			this->label13->Text = L"FCI Fayoum university student\r\nJr. Embedded Software Engineer\r\nGUI & Algorithm co"
				L"der";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(2, 201);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(168, 45);
			this->label14->TabIndex = 7;
			this->label14->Text = L"FCI Fayoum university student\r\nJr competitive programmer\r\nAlgorithm maker & coder"
				L"";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(15, 190);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(168, 45);
			this->label15->TabIndex = 8;
			this->label15->Text = L"FCI Fayoum university student\r\nJr. Web developer\r\nAlgorithm maker & coder";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(837, 543);
			this->Controls->Add(this->linkLabel18);
			this->Controls->Add(this->linkLabel17);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		  

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm11^ frm1 = gcnew MyForm11(this);
	frm1->Show();
	this->Hide();
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 
}
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://github.com/3ein39");
}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.linkedin.com/in/3ein39");
}
private: System::Void linkLabel6_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://github.com/Sherifyato");
}
private: System::Void linkLabel7_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.linkedin.com/in/sherif-khairy-908081222/");
}
private: System::Void linkLabel9_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://github.com/hussein-saad");
}
private: System::Void linkLabel10_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.linkedin.com/in/hussein-saad-824439220/");
}
private: System::Void linkLabel12_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://github.com/ShahdOsmann");
}
private: System::Void linkLabel13_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.linkedin.com/in/shahd-ali-7a9844227");
}
private: System::Void linkLabel15_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://github.com/ayaabelaal");
}
private: System::Void linkLabel16_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.linkedin.com/in/aya-belal-629a92235");
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 
	panel12->Hide(); 
	panel1->Show(); 
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel12->Show();
	panel1->Hide(); 
}
private: System::Void linkLabel17_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://github.com/3ein39/MultiSolver");
}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	 

}
private: System::Void linkLabel19_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 
	panel12->Hide();
	panel1->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	panel12->Show();
	panel1->Hide();
}
};
}
