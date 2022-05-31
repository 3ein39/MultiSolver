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

