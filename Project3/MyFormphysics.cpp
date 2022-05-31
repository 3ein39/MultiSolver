#include "MyFormphysics.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main4(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyFormphysics form;
	Application::Run(% form);
}

