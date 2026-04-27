#include "MainMenuForm.h"
#include "ProjectsSection.h"

using namespace System;
using namespace TeamProject;

System::Void MainMenuForm::btnProjects_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide(); // Прячем главное меню
    // Создаем и показываем форму выбора (Добавить/Все проекты)
    ProjectsSection^ projMenu = gcnew ProjectsSection();
    projMenu->Show();
}
