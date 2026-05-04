#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    TeamProject::MyForm^ form = gcnew TeamProject::MyForm();
    Application::Run(form);
    return 0;
}
