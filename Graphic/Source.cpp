#include "MyForm.h"

using namespace Project7;
[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());

}
