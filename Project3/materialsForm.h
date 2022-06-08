#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for funForm
	/// </summary>
	public ref class materialsForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		materialsForm(System::Windows::Forms::Form^ frm1)
		{
			otherform = frm1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		materialsForm(void)
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
		~materialsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;




	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private: System::Windows::Forms::LinkLabel^ linkLabel8;
	private: System::Windows::Forms::LinkLabel^ linkLabel9;
	private: System::Windows::Forms::LinkLabel^ linkLabel10;
	private: System::Windows::Forms::LinkLabel^ linkLabel11;
	private: System::Windows::Forms::LinkLabel^ linkLabel12;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::LinkLabel^ linkLabel13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::LinkLabel^ linkLabel14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::LinkLabel^ linkLabel15;
	private: System::Windows::Forms::LinkLabel^ linkLabel16;
	private: System::Windows::Forms::LinkLabel^ linkLabel17;
	private: System::Windows::Forms::LinkLabel^ linkLabel18;
	private: System::Windows::Forms::LinkLabel^ linkLabel19;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::LinkLabel^ linkLabel21;
	private: System::Windows::Forms::LinkLabel^ linkLabel20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::LinkLabel^ linkLabel22;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::LinkLabel^ linkLabel24;
private: System::Windows::Forms::LinkLabel^ linkLabel23;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Panel^ panel11;

private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::LinkLabel^ linkLabel25;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::LinkLabel^ linkLabel26;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::LinkLabel^ linkLabel28;
private: System::Windows::Forms::LinkLabel^ linkLabel27;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::LinkLabel^ linkLabel29;
private: System::Windows::Forms::LinkLabel^ linkLabel31;
private: System::Windows::Forms::LinkLabel^ linkLabel30;
private: System::Windows::Forms::LinkLabel^ linkLabel32;
private: System::Windows::Forms::LinkLabel^ linkLabel33;
private: System::Windows::Forms::LinkLabel^ linkLabel34;
private: System::Windows::Forms::LinkLabel^ linkLabel35;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Panel^ panel19;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(materialsForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->linkLabel12 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel11 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->linkLabel14 = (gcnew System::Windows::Forms::LinkLabel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->linkLabel13 = (gcnew System::Windows::Forms::LinkLabel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->linkLabel19 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel18 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel17 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel16 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel15 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel21 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel20 = (gcnew System::Windows::Forms::LinkLabel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel22 = (gcnew System::Windows::Forms::LinkLabel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel24 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel23 = (gcnew System::Windows::Forms::LinkLabel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel25 = (gcnew System::Windows::Forms::LinkLabel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->linkLabel26 = (gcnew System::Windows::Forms::LinkLabel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel28 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel27 = (gcnew System::Windows::Forms::LinkLabel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->linkLabel35 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel34 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel33 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel32 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel31 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel30 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel29 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"<--";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &materialsForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Programming";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &materialsForm::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(249, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(239, 277);
			this->panel1->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1, 202);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(226, 15);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Office: Department of Computer Science";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(6, 230);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(81, 20);
			this->linkLabel2->TabIndex = 4;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"classroom";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel2_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Email:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(55, 172);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(179, 20);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"emh00@fayoum.edu.eg";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(40, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dr.  Esraa  El-Hariri";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(75, 18);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(81, 100);
			this->panel3->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->linkLabel3);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(249, 73);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(237, 283);
			this->panel4->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(8, 194);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(192, 32);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Office: Faculty of Arts Building -\r\n English Language Department";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 240);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(231, 20);
			this->label11->TabIndex = 3;
			this->label11->Text = L"phone number:  - 6379326 084 ";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(48, 165);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(179, 20);
			this->linkLabel3->TabIndex = 2;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"agm01@fayoum.edu.eg";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(-1, 168);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Email:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(61, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Dr. Amal Galal";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->label41);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(499, 76);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(347, 454);
			this->panel2->TabIndex = 3;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(15, 10);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(123, 24);
			this->label41->TabIndex = 26;
			this->label41->Text = L"Programing : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(174, 336);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 39);
			this->label6->TabIndex = 8;
			this->label6->Text = L"c_how_to_program_with_an_\r\nintroduction_to_c_global_edition\r\n_8th_edition";
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(201, 222);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(92, 105);
			this->button6->TabIndex = 7;
			this->button6->Text = L" ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &materialsForm::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 336);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 26);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Problem_Solving_with_C++_\r\n(9th_Savitch)";
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(29, 218);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 109);
			this->button5->TabIndex = 5;
			this->button5->Text = L" ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &materialsForm::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(174, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ObjectOrientedProgramminginC\r\n4thEdition";
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(201, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 110);
			this->button4->TabIndex = 2;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &materialsForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 26);
			this->label3->TabIndex = 1;
			this->label3->Text = L"c-programming-from-problem-\r\nanalysis-to-program-design";
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Location = System::Drawing::Point(31, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 119);
			this->button3->TabIndex = 0;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &materialsForm::button3_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->linkLabel12);
			this->panel5->Controls->Add(this->linkLabel11);
			this->panel5->Controls->Add(this->linkLabel10);
			this->panel5->Controls->Add(this->linkLabel9);
			this->panel5->Controls->Add(this->linkLabel8);
			this->panel5->Controls->Add(this->linkLabel7);
			this->panel5->Controls->Add(this->linkLabel6);
			this->panel5->Controls->Add(this->linkLabel5);
			this->panel5->Controls->Add(this->linkLabel4);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->button14);
			this->panel5->Location = System::Drawing::Point(499, 76);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(347, 427);
			this->panel5->TabIndex = 0;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(206, 144);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(87, 16);
			this->label17->TabIndex = 23;
			this->label17->Text = L"log in English";
			// 
			// button16
			// 
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->Location = System::Drawing::Point(201, 27);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(103, 105);
			this->button16->TabIndex = 22;
			this->button16->Text = L" ";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &materialsForm::button16_Click);
			// 
			// linkLabel12
			// 
			this->linkLabel12->AutoSize = true;
			this->linkLabel12->Location = System::Drawing::Point(5, 266);
			this->linkLabel12->Name = L"linkLabel12";
			this->linkLabel12->Size = System::Drawing::Size(92, 13);
			this->linkLabel12->TabIndex = 21;
			this->linkLabel12->TabStop = true;
			this->linkLabel12->Text = L"ZAmericanEnglish";
			this->linkLabel12->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel12_LinkClicked);
			// 
			// linkLabel11
			// 
			this->linkLabel11->AutoSize = true;
			this->linkLabel11->Location = System::Drawing::Point(5, 365);
			this->linkLabel11->Name = L"linkLabel11";
			this->linkLabel11->Size = System::Drawing::Size(111, 13);
			this->linkLabel11->TabIndex = 20;
			this->linkLabel11->TabStop = true;
			this->linkLabel11->Text = L" EF YouTube channel";
			this->linkLabel11->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel11_LinkClicked);
			// 
			// linkLabel10
			// 
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->Location = System::Drawing::Point(5, 182);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(86, 13);
			this->linkLabel10->TabIndex = 19;
			this->linkLabel10->TabStop = true;
			this->linkLabel10->Text = L"Rachel’s English";
			this->linkLabel10->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel10_LinkClicked);
			// 
			// linkLabel9
			// 
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->Location = System::Drawing::Point(3, 336);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(110, 13);
			this->linkLabel9->TabIndex = 18;
			this->linkLabel9->TabStop = true;
			this->linkLabel9->Text = L"VOA Learning English";
			this->linkLabel9->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel9_LinkClicked);
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Location = System::Drawing::Point(3, 310);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(87, 13);
			this->linkLabel8->TabIndex = 17;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L" EnglishClass101";
			this->linkLabel8->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel8_LinkClicked);
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Location = System::Drawing::Point(5, 288);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(67, 13);
			this->linkLabel7->TabIndex = 16;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"Jennifer ESL";
			this->linkLabel7->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel7_LinkClicked);
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Location = System::Drawing::Point(5, 393);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(123, 13);
			this->linkLabel6->TabIndex = 15;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"http://www.esl-lab.com/";
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel6_LinkClicked);
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(5, 237);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(153, 13);
			this->linkLabel5->TabIndex = 14;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"BBC Learning English channel,";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel5_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(5, 210);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(103, 13);
			this->linkLabel4->TabIndex = 13;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"oxford online english";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel4_LinkClicked);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(187, 365);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 26);
			this->label10->TabIndex = 12;
			this->label10->Text = L"The Official Cambridge \r\nGuide to IELTS";
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->Location = System::Drawing::Point(190, 223);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(103, 126);
			this->button15->TabIndex = 3;
			this->button15->Text = L" ";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &materialsForm::button15_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"English Language / BS111";
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->Location = System::Drawing::Point(39, 27);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(89, 100);
			this->button14->TabIndex = 0;
			this->button14->Text = L" ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &materialsForm::button14_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 115);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(183, 33);
			this->button7->TabIndex = 4;
			this->button7->Text = L" English Language 2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &materialsForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 156);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(183, 33);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Mathematics2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &materialsForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(12, 196);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(183, 33);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Physics 2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &materialsForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(12, 235);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(183, 33);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Digital Design";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &materialsForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(12, 274);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(183, 33);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Human Rights";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &materialsForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(12, 313);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(183, 33);
			this->button12->TabIndex = 9;
			this->button12->Text = L"Computing Economics";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &materialsForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(12, 352);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(183, 33);
			this->button13->TabIndex = 10;
			this->button13->Text = L"Problem Solving";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &materialsForm::button13_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->linkLabel14);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->linkLabel13);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(249, 73);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(237, 277);
			this->panel6->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(-3, 171);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(226, 26);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Office: Department of Basic Sciences -\r\n College of Computers and Information Bui"
				L"lding";
			// 
			// linkLabel14
			// 
			this->linkLabel14->AutoSize = true;
			this->linkLabel14->Location = System::Drawing::Point(44, 144);
			this->linkLabel14->Name = L"linkLabel14";
			this->linkLabel14->Size = System::Drawing::Size(179, 20);
			this->linkLabel14->TabIndex = 3;
			this->linkLabel14->TabStop = true;
			this->linkLabel14->Text = L"hnm01@fayoum.edu.eg";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(-1, 144);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 20);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Email:";
			// 
			// linkLabel13
			// 
			this->linkLabel13->AutoSize = true;
			this->linkLabel13->Location = System::Drawing::Point(6, 206);
			this->linkLabel13->Name = L"linkLabel13";
			this->linkLabel13->Size = System::Drawing::Size(81, 20);
			this->linkLabel13->TabIndex = 1;
			this->linkLabel13->TabStop = true;
			this->linkLabel13->Text = L"classroom";
			this->linkLabel13->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel13_LinkClicked);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label12->Location = System::Drawing::Point(47, 119);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 20);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Dr. Heba Nagaty";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel7->Controls->Add(this->label18);
			this->panel7->Controls->Add(this->linkLabel19);
			this->panel7->Controls->Add(this->linkLabel18);
			this->panel7->Controls->Add(this->linkLabel17);
			this->panel7->Controls->Add(this->linkLabel16);
			this->panel7->Controls->Add(this->linkLabel15);
			this->panel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(495, 79);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(347, 430);
			this->panel7->TabIndex = 11;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 13);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(145, 24);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Mathematics 2 : ";
			// 
			// linkLabel19
			// 
			this->linkLabel19->AutoSize = true;
			this->linkLabel19->Location = System::Drawing::Point(16, 252);
			this->linkLabel19->Name = L"linkLabel19";
			this->linkLabel19->Size = System::Drawing::Size(142, 24);
			this->linkLabel19->TabIndex = 16;
			this->linkLabel19->TabStop = true;
			this->linkLabel19->Text = L"Partial Fractions";
			this->linkLabel19->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel19_LinkClicked);
			// 
			// linkLabel18
			// 
			this->linkLabel18->AutoSize = true;
			this->linkLabel18->Location = System::Drawing::Point(14, 198);
			this->linkLabel18->Name = L"linkLabel18";
			this->linkLabel18->Size = System::Drawing::Size(176, 24);
			this->linkLabel18->TabIndex = 15;
			this->linkLabel18->TabStop = true;
			this->linkLabel18->Text = L"Differential Equation";
			this->linkLabel18->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel18_LinkClicked);
			// 
			// linkLabel17
			// 
			this->linkLabel17->AutoSize = true;
			this->linkLabel17->Location = System::Drawing::Point(14, 159);
			this->linkLabel17->Name = L"linkLabel17";
			this->linkLabel17->Size = System::Drawing::Size(70, 24);
			this->linkLabel17->TabIndex = 14;
			this->linkLabel17->TabStop = true;
			this->linkLabel17->Text = L"vectors";
			this->linkLabel17->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel17_LinkClicked);
			// 
			// linkLabel16
			// 
			this->linkLabel16->AutoSize = true;
			this->linkLabel16->Location = System::Drawing::Point(14, 114);
			this->linkLabel16->Name = L"linkLabel16";
			this->linkLabel16->Size = System::Drawing::Size(104, 24);
			this->linkLabel16->TabIndex = 13;
			this->linkLabel16->TabStop = true;
			this->linkLabel16->Text = L"sequences";
			this->linkLabel16->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel16_LinkClicked);
			// 
			// linkLabel15
			// 
			this->linkLabel15->AutoSize = true;
			this->linkLabel15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel15->Location = System::Drawing::Point(14, 72);
			this->linkLabel15->Name = L"linkLabel15";
			this->linkLabel15->Size = System::Drawing::Size(69, 20);
			this->linkLabel15->TabIndex = 12;
			this->linkLabel15->TabStop = true;
			this->linkLabel15->Text = L"Matrices";
			this->linkLabel15->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel15_LinkClicked);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel8->Controls->Add(this->linkLabel21);
			this->panel8->Controls->Add(this->linkLabel20);
			this->panel8->Controls->Add(this->label21);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel8->Location = System::Drawing::Point(254, 73);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(235, 262);
			this->panel8->TabIndex = 5;
			// 
			// linkLabel21
			// 
			this->linkLabel21->AutoSize = true;
			this->linkLabel21->Location = System::Drawing::Point(3, 196);
			this->linkLabel21->Name = L"linkLabel21";
			this->linkLabel21->Size = System::Drawing::Size(81, 20);
			this->linkLabel21->TabIndex = 3;
			this->linkLabel21->TabStop = true;
			this->linkLabel21->Text = L"classroom";
			this->linkLabel21->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel21_LinkClicked);
			// 
			// linkLabel20
			// 
			this->linkLabel20->AutoSize = true;
			this->linkLabel20->Location = System::Drawing::Point(46, 165);
			this->linkLabel20->Name = L"linkLabel20";
			this->linkLabel20->Size = System::Drawing::Size(201, 20);
			this->linkLabel20->TabIndex = 2;
			this->linkLabel20->TabStop = true;
			this->linkLabel20->Text = L"engy_ragaay@hotmail.com";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(-2, 165);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 20);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Email:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label20->Location = System::Drawing::Point(50, 130);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(129, 20);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Dr. Engy Ragaay";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel9->Controls->Add(this->linkLabel22);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Controls->Add(this->button18);
			this->panel9->Controls->Add(this->label22);
			this->panel9->Controls->Add(this->button17);
			this->panel9->Controls->Add(this->label19);
			this->panel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel9->Location = System::Drawing::Point(498, 70);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(348, 448);
			this->panel9->TabIndex = 17;
			// 
			// linkLabel22
			// 
			this->linkLabel22->AutoSize = true;
			this->linkLabel22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel22->Location = System::Drawing::Point(14, 258);
			this->linkLabel22->Name = L"linkLabel22";
			this->linkLabel22->Size = System::Drawing::Size(116, 24);
			this->linkLabel22->TabIndex = 5;
			this->linkLabel22->TabStop = true;
			this->linkLabel22->Text = L"wave motion";
			this->linkLabel22->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel22_LinkClicked);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(193, 195);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(128, 20);
			this->label23->TabIndex = 4;
			this->label23->Text = L"serway test bank";
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->Location = System::Drawing::Point(202, 50);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(103, 129);
			this->button18->TabIndex = 3;
			this->button18->Text = L" ";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &materialsForm::button18_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(26, 198);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(85, 20);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Physics9th";
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->Location = System::Drawing::Point(17, 50);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(107, 136);
			this->button17->TabIndex = 1;
			this->button17->Text = L" ";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &materialsForm::button17_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 17);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 20);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Physics 2 : ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label24->Location = System::Drawing::Point(49, 124);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(144, 20);
			this->label24->TabIndex = 18;
			this->label24->Text = L"Dr. Mustafa Rabee";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel10->Controls->Add(this->panel19);
			this->panel10->Controls->Add(this->linkLabel24);
			this->panel10->Controls->Add(this->linkLabel23);
			this->panel10->Controls->Add(this->label25);
			this->panel10->Controls->Add(this->label24);
			this->panel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel10->Location = System::Drawing::Point(251, 73);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(238, 273);
			this->panel10->TabIndex = 19;
			// 
			// linkLabel24
			// 
			this->linkLabel24->AutoSize = true;
			this->linkLabel24->Location = System::Drawing::Point(11, 208);
			this->linkLabel24->Name = L"linkLabel24";
			this->linkLabel24->Size = System::Drawing::Size(81, 20);
			this->linkLabel24->TabIndex = 21;
			this->linkLabel24->TabStop = true;
			this->linkLabel24->Text = L"classroom";
			this->linkLabel24->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel24_LinkClicked);
			// 
			// linkLabel23
			// 
			this->linkLabel23->AutoSize = true;
			this->linkLabel23->Location = System::Drawing::Point(59, 165);
			this->linkLabel23->Name = L"linkLabel23";
			this->linkLabel23->Size = System::Drawing::Size(181, 20);
			this->linkLabel23->TabIndex = 20;
			this->linkLabel23->TabStop = true;
			this->linkLabel23->Text = L"mostafa847@gmail.com";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(8, 166);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 20);
			this->label25->TabIndex = 19;
			this->label25->Text = L"Email:";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel11->Controls->Add(this->label31);
			this->panel11->Controls->Add(this->label30);
			this->panel11->Controls->Add(this->label29);
			this->panel11->Controls->Add(this->label28);
			this->panel11->Controls->Add(this->label27);
			this->panel11->Controls->Add(this->label26);
			this->panel11->Controls->Add(this->button24);
			this->panel11->Controls->Add(this->button23);
			this->panel11->Controls->Add(this->button22);
			this->panel11->Controls->Add(this->button21);
			this->panel11->Controls->Add(this->button20);
			this->panel11->Controls->Add(this->button19);
			this->panel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel11->Location = System::Drawing::Point(498, 70);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(358, 460);
			this->panel11->TabIndex = 6;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(235, 371);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(70, 20);
			this->label31->TabIndex = 11;
			this->label31->Text = L"lecture 6";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(70, 371);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(70, 20);
			this->label30->TabIndex = 10;
			this->label30->Text = L"lecture 5";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(224, 243);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(70, 20);
			this->label29->TabIndex = 9;
			this->label29->Text = L"lecture 4";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(70, 238);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(70, 20);
			this->label28->TabIndex = 8;
			this->label28->Text = L"lecture 3";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(235, 113);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(70, 20);
			this->label27->TabIndex = 7;
			this->label27->Text = L"lecture 2";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(70, 113);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(70, 20);
			this->label26->TabIndex = 6;
			this->label26->Text = L"lecture 1";
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->Location = System::Drawing::Point(191, 285);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(150, 83);
			this->button24->TabIndex = 5;
			this->button24->Text = L" ";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &materialsForm::button24_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->Location = System::Drawing::Point(19, 283);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(162, 85);
			this->button23->TabIndex = 4;
			this->button23->Text = L" ";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &materialsForm::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->Location = System::Drawing::Point(191, 147);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(150, 82);
			this->button22->TabIndex = 3;
			this->button22->Text = L" ";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &materialsForm::button22_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->Location = System::Drawing::Point(19, 147);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(162, 82);
			this->button21->TabIndex = 2;
			this->button21->Text = L" ";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &materialsForm::button21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->Location = System::Drawing::Point(188, 23);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(147, 85);
			this->button20->TabIndex = 1;
			this->button20->Text = L" ";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &materialsForm::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->Location = System::Drawing::Point(18, 22);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(163, 86);
			this->button19->TabIndex = 0;
			this->button19->Text = L" ";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &materialsForm::button19_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel13->Controls->Add(this->label44);
			this->panel13->Controls->Add(this->button27);
			this->panel13->Controls->Add(this->label43);
			this->panel13->Controls->Add(this->label33);
			this->panel13->Controls->Add(this->button25);
			this->panel13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel13->Location = System::Drawing::Point(497, 70);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(348, 459);
			this->panel13->TabIndex = 21;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(225, 159);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(64, 20);
			this->label44->TabIndex = 4;
			this->label44->Text = L"Nazaha";
			// 
			// button27
			// 
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->Location = System::Drawing::Point(203, 33);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(103, 113);
			this->button27->TabIndex = 3;
			this->button27->Text = L" ";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &materialsForm::button27_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(26, 13);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(134, 24);
			this->label43->TabIndex = 2;
			this->label43->Text = L"human rights : ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(37, 141);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(101, 20);
			this->label33->TabIndex = 1;
			this->label33->Text = L"human rights";
			// 
			// button25
			// 
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->Location = System::Drawing::Point(31, 50);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(117, 83);
			this->button25->TabIndex = 0;
			this->button25->Text = L" ";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &materialsForm::button25_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel12->Controls->Add(this->linkLabel25);
			this->panel12->Controls->Add(this->label32);
			this->panel12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel12->Location = System::Drawing::Point(251, 71);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(238, 281);
			this->panel12->TabIndex = 20;
			// 
			// linkLabel25
			// 
			this->linkLabel25->AutoSize = true;
			this->linkLabel25->Location = System::Drawing::Point(15, 183);
			this->linkLabel25->Name = L"linkLabel25";
			this->linkLabel25->Size = System::Drawing::Size(81, 20);
			this->linkLabel25->TabIndex = 1;
			this->linkLabel25->TabStop = true;
			this->linkLabel25->Text = L"classroom";
			this->linkLabel25->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel25_LinkClicked);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label32->Location = System::Drawing::Point(15, 126);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(210, 20);
			this->label32->TabIndex = 0;
			this->label32->Text = L"Dr. Mohamed Hassan Farag";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel14->Controls->Add(this->panel18);
			this->panel14->Controls->Add(this->label38);
			this->panel14->Controls->Add(this->linkLabel26);
			this->panel14->Controls->Add(this->label37);
			this->panel14->Controls->Add(this->label34);
			this->panel14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel14->Location = System::Drawing::Point(251, 71);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(240, 284);
			this->panel14->TabIndex = 22;
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->Location = System::Drawing::Point(72, 15);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(85, 100);
			this->panel18->TabIndex = 26;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(3, 182);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(205, 40);
			this->label38->TabIndex = 3;
			this->label38->Text = L"Office: Information Systems\r\n  Department";
			// 
			// linkLabel26
			// 
			this->linkLabel26->AutoSize = true;
			this->linkLabel26->Location = System::Drawing::Point(52, 151);
			this->linkLabel26->Name = L"linkLabel26";
			this->linkLabel26->Size = System::Drawing::Size(183, 20);
			this->linkLabel26->TabIndex = 2;
			this->linkLabel26->TabStop = true;
			this->linkLabel26->Text = L"mam16@fayoum.edu.eg";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(3, 150);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(52, 20);
			this->label37->TabIndex = 1;
			this->label37->Text = L"Email:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label34->Location = System::Drawing::Point(59, 121);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(113, 20);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Dr. Mostafa Ali";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel15->Controls->Add(this->label42);
			this->panel15->Controls->Add(this->label35);
			this->panel15->Controls->Add(this->button26);
			this->panel15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel15->Location = System::Drawing::Point(495, 70);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(361, 460);
			this->panel15->TabIndex = 23;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(14, 17);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(217, 24);
			this->label42->TabIndex = 3;
			this->label42->Text = L"Computing Economics : ";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(17, 177);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(168, 20);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Computing Economics";
			// 
			// button26
			// 
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->Location = System::Drawing::Point(25, 46);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(136, 114);
			this->button26->TabIndex = 0;
			this->button26->Text = L" ";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &materialsForm::button26_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel16->Controls->Add(this->linkLabel28);
			this->panel16->Controls->Add(this->linkLabel27);
			this->panel16->Controls->Add(this->label39);
			this->panel16->Controls->Add(this->label36);
			this->panel16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel16->Location = System::Drawing::Point(249, 71);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(244, 285);
			this->panel16->TabIndex = 24;
			// 
			// linkLabel28
			// 
			this->linkLabel28->AutoSize = true;
			this->linkLabel28->Location = System::Drawing::Point(14, 224);
			this->linkLabel28->Name = L"linkLabel28";
			this->linkLabel28->Size = System::Drawing::Size(81, 20);
			this->linkLabel28->TabIndex = 3;
			this->linkLabel28->TabStop = true;
			this->linkLabel28->Text = L"classroom";
			this->linkLabel28->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel28_LinkClicked);
			// 
			// linkLabel27
			// 
			this->linkLabel27->AutoSize = true;
			this->linkLabel27->Location = System::Drawing::Point(53, 176);
			this->linkLabel27->Name = L"linkLabel27";
			this->linkLabel27->Size = System::Drawing::Size(183, 20);
			this->linkLabel27->TabIndex = 2;
			this->linkLabel27->TabStop = true;
			this->linkLabel27->Text = L"mmh04@fayoum.edu.eg";
			this->linkLabel27->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel27_LinkClicked);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(7, 177);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(52, 20);
			this->label39->TabIndex = 1;
			this->label39->Text = L"Email:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label36->Location = System::Drawing::Point(65, 138);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(107, 20);
			this->label36->TabIndex = 0;
			this->label36->Text = L"Dr. Mari Monir";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel17->Controls->Add(this->label40);
			this->panel17->Controls->Add(this->linkLabel35);
			this->panel17->Controls->Add(this->linkLabel34);
			this->panel17->Controls->Add(this->linkLabel33);
			this->panel17->Controls->Add(this->linkLabel32);
			this->panel17->Controls->Add(this->linkLabel31);
			this->panel17->Controls->Add(this->linkLabel30);
			this->panel17->Controls->Add(this->linkLabel29);
			this->panel17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel17->Location = System::Drawing::Point(495, 70);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(361, 460);
			this->panel17->TabIndex = 25;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(8, 13);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(168, 24);
			this->label40->TabIndex = 26;
			this->label40->Text = L"Problem Solving :  ";
			// 
			// linkLabel35
			// 
			this->linkLabel35->AutoSize = true;
			this->linkLabel35->Location = System::Drawing::Point(16, 308);
			this->linkLabel35->Name = L"linkLabel35";
			this->linkLabel35->Size = System::Drawing::Size(96, 24);
			this->linkLabel35->TabIndex = 7;
			this->linkLabel35->TabStop = true;
			this->linkLabel35->Text = L"codefights";
			this->linkLabel35->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel35_LinkClicked);
			// 
			// linkLabel34
			// 
			this->linkLabel34->AutoSize = true;
			this->linkLabel34->Location = System::Drawing::Point(17, 264);
			this->linkLabel34->Name = L"linkLabel34";
			this->linkLabel34->Size = System::Drawing::Size(97, 24);
			this->linkLabel34->TabIndex = 6;
			this->linkLabel34->TabStop = true;
			this->linkLabel34->Text = L"Leet Code";
			this->linkLabel34->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel34_LinkClicked);
			// 
			// linkLabel33
			// 
			this->linkLabel33->AutoSize = true;
			this->linkLabel33->Location = System::Drawing::Point(18, 223);
			this->linkLabel33->Name = L"linkLabel33";
			this->linkLabel33->Size = System::Drawing::Size(99, 24);
			this->linkLabel33->TabIndex = 5;
			this->linkLabel33->TabStop = true;
			this->linkLabel33->Text = L"coder byte";
			this->linkLabel33->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel33_LinkClicked);
			// 
			// linkLabel32
			// 
			this->linkLabel32->AutoSize = true;
			this->linkLabel32->Location = System::Drawing::Point(16, 177);
			this->linkLabel32->Name = L"linkLabel32";
			this->linkLabel32->Size = System::Drawing::Size(101, 24);
			this->linkLabel32->TabIndex = 4;
			this->linkLabel32->TabStop = true;
			this->linkLabel32->Text = L"Top Coder";
			this->linkLabel32->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel32_LinkClicked);
			// 
			// linkLabel31
			// 
			this->linkLabel31->AutoSize = true;
			this->linkLabel31->Location = System::Drawing::Point(16, 133);
			this->linkLabel31->Name = L"linkLabel31";
			this->linkLabel31->Size = System::Drawing::Size(95, 24);
			this->linkLabel31->TabIndex = 3;
			this->linkLabel31->TabStop = true;
			this->linkLabel31->Text = L"Codewars";
			this->linkLabel31->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel31_LinkClicked);
			// 
			// linkLabel30
			// 
			this->linkLabel30->AutoSize = true;
			this->linkLabel30->Location = System::Drawing::Point(17, 86);
			this->linkLabel30->Name = L"linkLabel30";
			this->linkLabel30->Size = System::Drawing::Size(113, 24);
			this->linkLabel30->TabIndex = 2;
			this->linkLabel30->TabStop = true;
			this->linkLabel30->Text = L"HackerRank";
			this->linkLabel30->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel30_LinkClicked);
			// 
			// linkLabel29
			// 
			this->linkLabel29->AutoSize = true;
			this->linkLabel29->Location = System::Drawing::Point(18, 46);
			this->linkLabel29->Name = L"linkLabel29";
			this->linkLabel29->Size = System::Drawing::Size(104, 24);
			this->linkLabel29->TabIndex = 1;
			this->linkLabel29->TabStop = true;
			this->linkLabel29->Text = L"codeforces";
			this->linkLabel29->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &materialsForm::linkLabel29_LinkClicked);
			// 
			// panel19
			// 
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->Location = System::Drawing::Point(64, 13);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(93, 100);
			this->panel19->TabIndex = 22;
			// 
			// materialsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(937, 542);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Name = L"materialsForm";
			this->Text = L"Materials Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		otherform->Show();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\c-programming-from-problem-analysis-to-program-design.pdf");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\ObjectOrientedProgramminginC4thEdition.pdf");

	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\Problem_Solving_with_C++_(9th_Savitch).pdf");

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\c_how_to_program_with_an_introduction_to_c_global_edition_8th_edition.pdf");
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/NDExMjU5OTcyNTM3");

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	 panel1->Show();
	panel2->Show();
	panel3->Show();
	panel4->Hide();
	panel5->Hide(); 
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel10->Hide();
	panel11->Hide();
	panel12->Hide();
	panel13->Hide();
	panel14->Hide();
	panel15->Hide();
	 panel16->Hide();
	panel17->Hide(); 
	panel18->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide(); 
	panel2->Hide();
	panel3->Hide();
    panel4->Show();
	panel5->Show();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel10->Hide();
	panel11->Hide();
	panel12->Hide();
	panel13->Hide();
	panel14->Hide();
	panel15->Hide();
	panel16->Hide();
	panel17->Hide(); 
	panel18->Hide();
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/NDc2NjM3OTk5ODY2");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\english.pdf"); 

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\cambridgeielts10.pdf");


}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("http://www.youtube.com/user/oxfordonlineenglish");

}
private: System::Void linkLabel5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("http://www.youtube.com/user/bbclearningenglish");
}
private: System::Void linkLabel6_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("http://www.esl-lab.com/");
}
private: System::Void linkLabel7_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/user/JenniferESL/featured");

}
private: System::Void linkLabel8_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/user/ENGLISHCLASS101");

}
private: System::Void linkLabel9_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/user/VOALearningEnglish");

}
private: System::Void linkLabel10_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/user/rachelsenglish/featured");

}
private: System::Void linkLabel11_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/playlist?list=PLiVDPajlpFZUl0afcKrONagEvxTpzidiH");

}
private: System::Void linkLabel12_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/c/ZAmericanEnglish");

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Show();
	panel7->Show();
	panel8->Hide();
	panel9->Hide();
	panel10->Hide();
	panel11->Hide();
	panel12->Hide();
	panel13->Hide();
	panel14->Hide();
	panel15->Hide();
	panel16->Hide();
	panel17->Hide();
	panel18->Hide();

}
private: System::Void linkLabel13_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/NDc2NjM3OTk5ODY2");

}
private: System::Void linkLabel15_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://youtube.com/playlist?list=PLOpVxHldmrRE6ePvpENPmxbVjXalmmoRV");

}
private: System::Void linkLabel16_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://youtube.com/playlist?list=PLOpVxHldmrRHBDJdcr0ZyCHriXeEcQMVk");

}
private: System::Void linkLabel17_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://youtube.com/playlist?list=PLOpVxHldmrRHL9w_Ttw6AGQMEelhwRGFN");

}
private: System::Void linkLabel18_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://youtube.com/playlist?list=PLlHj77inxxPD4ClZOQgzFYJOHZgBfAcQo");

}
private: System::Void linkLabel19_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://youtu.be/HlNz1aRAVxA");

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\log in english.pdf");


}
private: System::Void linkLabel21_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/MjI3OTk4NTAxODA5");

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\Physics9th.pdf");

}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\serway test bank.pdf");

}
private: System::Void linkLabel22_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.youtube.com/watch?v=ZHfeTMlImto&list=PLD30uL4tqplE-3lvM_eqLmyxF9Hp1S_F2");

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Show();
	panel9->Show();
	panel10->Hide();
	panel11->Hide();
	panel12->Hide();
	panel13->Hide();
	panel14->Hide();
	panel15->Hide();
	panel16->Hide();
	panel17->Hide();
	panel18->Hide();
}
private: System::Void linkLabel24_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/NDY4MjI3ODkxODA0");

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\lecture1.pdf");

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\lecture2.pdf");


}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\lecture3.pdf");

}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\lecture4.pdf");

}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\lecture5.pdf");

}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\lecture 6 .pdf");

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel10->Show();
	panel11->Show();
	panel12->Hide();
	panel13->Hide();
	panel14->Hide();
	panel15->Hide();
	panel16->Hide();
	panel17->Hide();
	panel18->Hide();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel10->Hide();
	panel11->Hide();
	panel12->Show();
	panel13->Show();
	panel14->Hide();
	panel15->Hide();
	panel16->Hide();
	panel17->Hide();
	panel18->Hide();

}
private: System::Void linkLabel25_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/NDc2MDkwMjE4MTE1");

}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\human rigths.pdf"); 

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel10->Hide();
	panel11->Hide();
	panel12->Hide();
	panel13->Hide();
	panel14->Show();
	panel15->Show();
	panel16->Hide();
	panel17->Hide();
	panel18->Show();
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\computing.pdf");


}
private: System::Void linkLabel28_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://classroom.google.com/u/0/c/NDY3Mzc4MTgzODAx");

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Hide();
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel10->Hide();
	panel11->Hide();
	panel12->Hide();
	panel13->Hide();
	panel14->Hide();
	panel15->Hide();
	panel16->Show();
	panel17->Show();
	panel18->Hide();
}
private: System::Void linkLabel29_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://codeforces.com/");

}
private: System::Void linkLabel30_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.hackerrank.com/");
}
private: System::Void linkLabel31_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.codewars.com/");

}
private: System::Void linkLabel32_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.topcoder.com/challenges/?pageIndex=1");

}
private: System::Void linkLabel33_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://www.coderbyte.com/");

}
private: System::Void linkLabel34_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://leetcode.com/");

}
private: System::Void linkLabel35_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Process::Start("https://codefights.com/");

}
private: System::Void linkLabel27_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 

}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("C:\\Users\\shahd\\Documents\\project\\nazaha.pdf");
}
};
}
