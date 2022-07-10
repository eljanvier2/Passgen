#include "MyForm.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

System::String^ passwordGenerator(int length) {
	// Creating variable containing every possible character in the password
	static const char chars[] =
		"0123456789"
		"!@#$%^&*"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	System::String^ Str;

	// Random number generator
	srand(time(NULL));
	for (unsigned int i = 0; i < length; i++)
		Str += System::Convert::ToChar(chars[rand() % 69]);
    return Str;
}

bool existingFile(std::string fullPath)
{
	std::ifstream fin(fullPath);
	if (!fin)
		return false;
	else
		return true;
}

int addToNewFile(System::String^ website, System::String^ mail, System::String^ password, System::String^path, System::String^ filename) {
	// Creating full path variable consisting of user chosen path and filename
	std::string fullPath = msclr::interop::marshal_as<std::string>(path + "\\" + filename);
	
	// Checking if file already exists
	if (existingFile(fullPath) == true)
		return 1;
	
	// Creating file
	std::ofstream outfile(fullPath);
	
	// Checking if file was created
	if (!outfile)
		return 1;
	
	// Writing data to file
	outfile << "-------------" << std::endl;
	if (website != "")
		outfile << msclr::interop::marshal_as<std::string>(website) << std::endl;
	if (mail != "")
		outfile << msclr::interop::marshal_as<std::string>(mail) << std::endl;
	if (password != "")
		outfile << msclr::interop::marshal_as<std::string>(password) << std::endl;
	
	// Closing file
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
