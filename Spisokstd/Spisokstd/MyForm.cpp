#include "MyForm.h"
using namespace LABA3;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
	return 0;
}
