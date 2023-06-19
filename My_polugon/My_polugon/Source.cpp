#include "MyForm.h"
using namespace Mypolugon;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::Run(gcnew MyForm());
	return 0;
}