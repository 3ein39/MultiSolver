#include "MyForm11.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm11 form;
	Application::Run(% form);
}


