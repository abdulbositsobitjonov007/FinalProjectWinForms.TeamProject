#include "ProjectsSection.h"
#include "MainMenuForm.h"
#include "Finance.h"

using namespace System;
using namespace TeamProject;

System::Void ProjectsSection::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    MainMenuForm^ mainForm = gcnew MainMenuForm();
    mainForm->Show();
}

System::Void ProjectsSection::ProjectsSection_Load(System::Object^ sender, System::EventArgs^ e) {
    // Логика загрузки формы при открытии
}
