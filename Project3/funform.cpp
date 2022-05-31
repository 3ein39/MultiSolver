#include "funform.h" 
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main7(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::funform form;
	Application::Run(% form);
}


