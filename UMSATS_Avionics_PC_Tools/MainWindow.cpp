#include "HandlerDialog.h"
#include <string>
#include <vector>
#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]

void main(cli::array<String^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UMSATSAvionicsPCTools::MainWindow form;
	Application::Run(% form);
}