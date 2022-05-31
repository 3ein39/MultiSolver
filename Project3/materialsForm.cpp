#include "materialsForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main6(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::materialsForm form;
	Application::Run(% form);
}

