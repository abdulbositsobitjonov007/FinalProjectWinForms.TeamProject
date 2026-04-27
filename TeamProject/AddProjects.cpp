#include "AddProjects.h"

using namespace System;
using namespace TeamProject;

System::Void AddProjects::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
    this->Close(); // Закрываем диалог, возвращаясь в ProjectsSection
}
