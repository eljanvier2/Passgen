#include "MyForm.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

System::String^ passwordGenerator(int length) {
	static const char chars[] =
		"0123456789"
		"!@#$%^&*"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	System::String^ Str;

	srand(time(NULL));
	for (unsigned int i = 0; i < length; i++)
		Str += System::Convert::ToChar(chars[rand() % 69]);
    return Str;
}

int addToNewFile(System::String^ website, System::String^ mail, System::String^ password, System::String^path, System::String^ filename) {
	std::ofstream outfile(msclr::interop::marshal_as<std::string>(path + "\\" + filename));
	outfile << "-------------" << std::endl;
	if (website != "")
		outfile << msclr::interop::marshal_as<std::string>(website) << std::endl;
	if (mail != "")
		outfile << msclr::interop::marshal_as<std::string>(mail) << std::endl;
	if (password != "")
		outfile << msclr::interop::marshal_as<std::string>(password) << std::endl;
	outfile << "-------------" << std::endl;
	outfile.close();
	return 0;
}

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    password::MyForm form;
    Application::Run(% form);
}
