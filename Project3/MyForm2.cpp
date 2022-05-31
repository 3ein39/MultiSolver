#include "MyForm2.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main3(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm2 form;
	Application::Run(% form);
}
 

