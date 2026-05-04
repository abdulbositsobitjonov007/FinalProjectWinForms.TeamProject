#include "ListofEmployee.h"
#include "MainMenuForm.h"

using namespace System;
using namespace TeamProject;

System::Void ListofEmployee::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    MainMenuForm^ mainForm = gcnew MainMenuForm();
    mainForm->Show();
    this->Close();
}
