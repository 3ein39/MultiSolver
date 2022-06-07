#include "gpaForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main5(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::gpaForm form;
	Application::Run(% form);
}
bool isEmpty(System::Windows::Forms::TextBox^ x) {
	if ((System::Convert::ToString(x->Text))->IsNullOrEmpty((System::Convert::ToString(x->Text)))) 
		return true; 
	else 
		return false; 
}

