#include "ProjectsSection.h"
#include "MainMenuForm.h"

using namespace System;
using namespace TeamProject;

System::Void ProjectsSection::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide(); // Прячем текущее меню проектов
    MainMenuForm^ mainForm = gcnew MainMenuForm();
    mainForm->Show(); // Показываем главную форму заново
}
