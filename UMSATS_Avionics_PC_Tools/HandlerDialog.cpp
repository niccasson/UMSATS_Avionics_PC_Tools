#include "HandlerDialog.h"

using namespace System;
using namespace System::Windows::Forms;

void openDialog(String^ message) {
	UMSATSAvionicsPCTools::HandlerDialog form2(message);
	form2.ShowDialog();
}