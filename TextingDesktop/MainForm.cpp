#include "MainForm.h"


[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    TextingDesktop::MainForm form;
    Application::Run(% form);
}