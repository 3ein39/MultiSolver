#pragma once
int z = 0;
namespace Project1 {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ buttonmath;
	private: System::Windows::Forms::Button^ buttonlogicdesign;
	private: System::Windows::Forms::Button^ buttonmaterials;
	private: System::Windows::Forms::Button^ buttonphysics;
	private: System::Windows::Forms::Panel^ panelright;
	private: System::Windows::Forms::Label^ header;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ crinkle;
	private: System::Windows::Forms::Button^ button2;







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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->buttonmath = (gcnew System::Windows::Forms::Button());
			this->buttonlogicdesign = (gcnew System::Windows::Forms::Button());
			this->buttonmaterials = (gcnew System::Windows::Forms::Button());
			this->buttonphysics = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panelright = (gcnew System::Windows::Forms::Panel());
			this->header = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->crinkle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->buttonmath);
			this->panel1->Controls->Add(this->buttonlogicdesign);
			this->panel1->Controls->Add(this->buttonmaterials);
			this->panel1->Controls->Add(this->buttonphysics);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 616);
			this->panel1->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(200, 82);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(10, 105);
			this->panel5->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Yellow;
			this->panel4->Location = System::Drawing::Point(200, 87);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(10, 100);
			this->panel4->TabIndex = 6;
			// 
			// buttonmath
			// 
			this->buttonmath->FlatAppearance->BorderSize = 0;
			this->buttonmath->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonmath->ForeColor = System::Drawing::Color::White;
			this->buttonmath->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmath.Image")));
			this->buttonmath->Location = System::Drawing::Point(-6, 87);
			this->buttonmath->Name = L"buttonmath";
			this->buttonmath->Size = System::Drawing::Size(203, 105);
			this->buttonmath->TabIndex = 7;
			this->buttonmath->Text = L"Math";
			this->buttonmath->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonmath->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonmath->UseVisualStyleBackColor = true;
			this->buttonmath->Click += gcnew System::EventHandler(this, &MyForm::buttonmath_Click);
			// 
			// buttonlogicdesign
			// 
			this->buttonlogicdesign->FlatAppearance->BorderSize = 0;
			this->buttonlogicdesign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonlogicdesign->ForeColor = System::Drawing::Color::White;
			this->buttonlogicdesign->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonlogicdesign.Image")));
			this->buttonlogicdesign->Location = System::Drawing::Point(0, 304);
			this->buttonlogicdesign->Name = L"buttonlogicdesign";
			this->buttonlogicdesign->Size = System::Drawing::Size(203, 105);
			this->buttonlogicdesign->TabIndex = 11;
			this->buttonlogicdesign->Text = L"Logic Design";
			this->buttonlogicdesign->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonlogicdesign->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonlogicdesign->UseVisualStyleBackColor = true;
			this->buttonlogicdesign->Click += gcnew System::EventHandler(this, &MyForm::buttonlogicdesign_Click);
			// 
			// buttonmaterials
			// 
			this->buttonmaterials->FlatAppearance->BorderSize = 0;
			this->buttonmaterials->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonmaterials->ForeColor = System::Drawing::Color::White;
			this->buttonmaterials->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonmaterials.Image")));
			this->buttonmaterials->Location = System::Drawing::Point(-6, 415);
			this->buttonmaterials->Name = L"buttonmaterials";
			this->buttonmaterials->Size = System::Drawing::Size(203, 105);
			this->buttonmaterials->TabIndex = 10;
			this->buttonmaterials->Text = L"Materials";
			this->buttonmaterials->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonmaterials->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonmaterials->UseVisualStyleBackColor = true;
			this->buttonmaterials->Click += gcnew System::EventHandler(this, &MyForm::buttonmaterials_Click);
			// 
			// buttonphysics
			// 
			this->buttonphysics->FlatAppearance->BorderSize = 0;
			this->buttonphysics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonphysics->ForeColor = System::Drawing::Color::White;
			this->buttonphysics->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonphysics.Image")));
			this->buttonphysics->Location = System::Drawing::Point(-6, 193);
			this->buttonphysics->Name = L"buttonphysics";
			this->buttonphysics->Size = System::Drawing::Size(203, 105);
			this->buttonphysics->TabIndex = 8;
			this->buttonphysics->Text = L"Physics";
			this->buttonphysics->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonphysics->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->buttonphysics->UseVisualStyleBackColor = true;
			this->buttonphysics->Click += gcnew System::EventHandler(this, &MyForm::buttonphysics_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 76);
			this->panel3->TabIndex = 6;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 57);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Solver";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(200, 304);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(903, 312);
			this->panel2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(322, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 213);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// panelright
			// 
			this->panelright->BackColor = System::Drawing::Color::Yellow;
			this->panelright->Location = System::Drawing::Point(200, 80);
			this->panelright->Name = L"panelright";
			this->panelright->Size = System::Drawing::Size(2, 104);
			this->panelright->TabIndex = 6;
			// 
			// header
			// 
			this->header->AutoSize = true;
			this->header->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header->Location = System::Drawing::Point(518, 9);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(219, 78);
			this->header->TabIndex = 0;
			this->header->Text = L"Solver";
			this->header->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->header->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(515, 165);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(621, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 27);
			this->textBox2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(465, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(329, 39);
			this->label2->TabIndex = 9;
			this->label2->Text = L"sum of two numbers";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->ForeColor = System::Drawing::Color::Yellow;
			this->result->Location = System::Drawing::Point(599, 213);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 30);
			this->result->TabIndex = 10;
			this->result->Click += gcnew System::EventHandler(this, &MyForm::result_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(727, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 28);
			this->button1->TabIndex = 11;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// crinkle
			// 
			this->crinkle->AutoSize = true;
			this->crinkle->BackColor = System::Drawing::Color::Red;
			this->crinkle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crinkle->ForeColor = System::Drawing::Color::Yellow;
			this->crinkle->Location = System::Drawing::Point(465, 256);
			this->crinkle->Name = L"crinkle";
			this->crinkle->Size = System::Drawing::Size(0, 39);
			this->crinkle->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(1103, 616);
			this->Controls->Add(this->crinkle);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->header);
			this->Controls->Add(this->panelright);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void buttonmath_Click(System::Object^ sender, System::EventArgs^ e) {
	panelright->Height = buttonmath->Height - 10;
	panelright->Top = buttonmath->Top + 5;
	header->Text = "Math";
}
private: System::Void buttonphysics_Click(System::Object^ sender, System::EventArgs^ e) {
	panelright->Height = buttonphysics->Height - 10;
	panelright->Top = buttonphysics->Top + 5;
	header->Text = "Physics";
}
private: System::Void buttonlogicdesign_Click(System::Object^ sender, System::EventArgs^ e) {
	panelright->Height = buttonlogicdesign ->Height - 10;
	panelright->Top = buttonlogicdesign ->Top + 5;
	header->Text = "Logic Design";
}
private: System::Void buttonmaterials_Click(System::Object^ sender, System::EventArgs^ e) {
	panelright->Height = buttonmaterials->Height - 10;
	panelright->Top = buttonmaterials->Top + 5;
	header->Text = "Materials";
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ first = textBox1->Text;
	String^ second = textBox2->Text;
	int i;
	if (z == 0) {
		button1->Text = "*";
		label2->Text = "multiplication of two numbers";
		i = System::Convert::ToInt16(first) + System::Convert::ToInt16(second);
		result->Text = System::Convert::ToString(i);
		crinkle->Text = "";
		z = 1;
	}
	else if (z == 1) {
		button1->Text = "/";
		label2->Text = "divide two numbers";
		i = System::Convert::ToInt16(first) * System::Convert::ToInt16(second);
		result->Text = System::Convert::ToString(i);
		crinkle->Text = "ya hussien EL crinkle ";
		z = 2;
	}
	else if (z == 2) {
		button1->Text = "+";
		label2->Text = "sum of two numbers";
		i = System::Convert::ToInt16(first) / System::Convert::ToInt16(second);
		crinkle->Text = "";
		z = 0;
	}
	result->Text = System::Convert::ToString(i);
	button2->Top -= 4;
}
private: System::Void result_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
