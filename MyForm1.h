#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Function from truth table";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(97, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"convert from binary to decimal";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(97, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"convert from decimal to binary";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(97, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(187, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L" convert from binary to octal";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Location = System::Drawing::Point(97, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L" convert from octal to binary";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(97, 220);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(187, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"convert from decimal to octal";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(97, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(187, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"convert from octal to decimal";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Location = System::Drawing::Point(97, 290);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(187, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L" convert from binary to hexadecimal";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Location = System::Drawing::Point(97, 328);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(187, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"convert from hexadecimal to binary";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(67, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"4";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(67, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"5";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(67, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(64, 260);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L" 7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(67, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(67, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"9";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(307, 73);
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
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(454, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 16);
			this->label10->TabIndex = 19;
			this->label10->Text = L"result";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(307, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 2);
			this->panel1->TabIndex = 20;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(689, 523);
			this->Controls->Add(this->panel1);
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
			this->Controls->Add(this->button1);
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
	label10->Text = "5";
}
};
}
