#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string.h>

System::String^ passwordGenerator(int length);
int addToNewFile(System::String^ website, System::String^ mail, System::String^ password, System::String^path, System::String^filename);
int addToExistingFile(System::String^ website, System::String^ mail, System::String^ password, System::String^ filePath);
bool isTxt(System::String^ filePath);

namespace password {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ websiteBox;
	private: System::Windows::Forms::TextBox^ mailBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ lengthBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ passwordBox;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ pathBox1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ pathBox2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ errorDisplay;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->websiteBox = (gcnew System::Windows::Forms::TextBox());
			this->mailBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lengthBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pathBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pathBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->errorDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// websiteBox
			// 
			this->websiteBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->websiteBox->Location = System::Drawing::Point(180, 81);
			this->websiteBox->Name = L"websiteBox";
			this->websiteBox->Size = System::Drawing::Size(383, 20);
			this->websiteBox->TabIndex = 0;
			this->websiteBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// mailBox
			// 
			this->mailBox->Location = System::Drawing::Point(180, 119);
			this->mailBox->Name = L"mailBox";
			this->mailBox->Size = System::Drawing::Size(383, 20);
			this->mailBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Website:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username / e-mail:";
			// 
			// lengthBox
			// 
			this->lengthBox->Location = System::Drawing::Point(180, 158);
			this->lengthBox->Name = L"lengthBox";
			this->lengthBox->Size = System::Drawing::Size(383, 20);
			this->lengthBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password lenght:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(180, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 45);
			this->button1->TabIndex = 6;
			this->button1->Text = L"GENERATE !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(529, 39);
			this->label4->TabIndex = 7;
			this->label4->Text = L"MY PASSWORD GENERATOR";
			// 
			// passwordBox
			// 
			this->passwordBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->passwordBox->Enabled = false;
			this->passwordBox->Location = System::Drawing::Point(95, 422);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->ReadOnly = true;
			this->passwordBox->Size = System::Drawing::Size(468, 20);
			this->passwordBox->TabIndex = 8;
			this->passwordBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->passwordBox->TextChanged += gcnew System::EventHandler(this, &MyForm::passwordBox_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(180, 188);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(174, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Create new password wallet file";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 24);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Path to Wallet File:";
			// 
			// pathBox1
			// 
			this->pathBox1->Enabled = false;
			this->pathBox1->Location = System::Drawing::Point(180, 211);
			this->pathBox1->Name = L"pathBox1";
			this->pathBox1->Size = System::Drawing::Size(383, 20);
			this->pathBox1->TabIndex = 10;
			this->pathBox1->Text = L"C:\\";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(482, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 20);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Browse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(75, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"File name:";
			// 
			// nameBox
			// 
			this->nameBox->Enabled = false;
			this->nameBox->Location = System::Drawing::Point(180, 244);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(383, 20);
			this->nameBox->TabIndex = 13;
			this->nameBox->Text = L"password.txt";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(180, 280);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(182, 17);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"Add password to existing file (.txt)";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(482, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 20);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Browse";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pathBox2
			// 
			this->pathBox2->Enabled = false;
			this->pathBox2->Location = System::Drawing::Point(180, 306);
			this->pathBox2->Name = L"pathBox2";
			this->pathBox2->Size = System::Drawing::Size(383, 20);
			this->pathBox2->TabIndex = 16;
			this->pathBox2->Text = L"C:\\";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 302);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Path to Wallet File:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// errorDisplay
			// 
			this->errorDisplay->AutoSize = true;
			this->errorDisplay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->errorDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorDisplay->Location = System::Drawing::Point(182, 338);
			this->errorDisplay->Name = L"errorDisplay";
			this->errorDisplay->Size = System::Drawing::Size(0, 16);
			this->errorDisplay->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 468);
			this->Controls->Add(this->errorDisplay);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pathBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lengthBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mailBox);
			this->Controls->Add(this->websiteBox);
			this->Controls->Add(this->pathBox1);
			this->Controls->Add(this->label5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// Following code is active when "GENERATE!" is pressed (button1)

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Checking if user gave a password lenght, if not program displays an error message and returns to start
	if (lengthBox->Text == "") {
		passwordBox->Text = System::Convert::ToString("Please Enter a Password Length");
		return;
	}

	System::String^ website = "";
	System::String^ mail = "";
	System::String^ password = "";
	int length = System::Convert::ToInt16(lengthBox->Text);

	// Getting user input for website and mail/username if associated textboxes are used
	if (websiteBox->Text != "")
		website = websiteBox->Text;
	if (mailBox->Text != "")
		mail = mailBox->Text;

	// Generating password (passwordGenerator() is located inside MyForm.cpp). Displaying password in associated textBox
	password = passwordGenerator(length);
	passwordBox->Text = password;

	// Creating a new file if associated checkBox is checked (addToNewFile() is located inside MyForm.cpp)
	if (checkBox1->Checked) {
		if (addToNewFile(website, mail, password, pathBox1->Text, nameBox->Text) != 0)
			errorDisplay->Text = "Error Creating Password File";
		else
			errorDisplay->Text = "";
		return;
	}

	// Adding password to already existing file if associated checkBox is checked (addToExistingFile() is located inside MyForm.cpp)
	if (checkBox2->Checked) {
		if (addToExistingFile(website, mail, password, pathBox2->Text) != 0)
			errorDisplay->Text = "Error Adding Password to File";
		else
			errorDisplay->Text = "";
		return;
	}
}

// Following code is active when checkBox1 changes state

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		// Unchecking checkBox2 if checkBox1 checked (the two can not be checked together)
		if (checkBox2->Checked)
			checkBox2->Checked = false;

		// Enabling corresponding UI elements when checkBox2 is checked
		button2->Enabled = true;
		label5->Enabled = true;
		pathBox1->Enabled = true;
		label6->Enabled = true;
		nameBox->Enabled = true;
	}
	else {
		// Unabling corresponding UI elements when checkBox2 is checked
		button2->Enabled= false;
		label5->Enabled = false;
		pathBox1->Enabled = false;
		label6->Enabled = false;
		nameBox->Enabled = false;
	}
}

// Following code is active when checkBox2 changes state

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		// Unchecking checkBox1 if checkBox2 checked (the two can not be checked together)
		if (checkBox1->Checked)
			checkBox1->Checked = false;

		// Enabling corresponding UI elements when checkBox2 is checked
		label7->Enabled = true;
		pathBox2->Enabled = true;
		button3->Enabled = true;
	}
	else {
		// Unabling corresponding UI elements when checkBox2 is checked
		label7->Enabled = false;
		pathBox2->Enabled = false;
		button3->Enabled = false;
	}
}

// Following code is active when folder browser is clicked (button2)

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Choosing the destination for password file
	folderBrowserDialog1->ShowDialog();

	// Showing file path in textBox
	pathBox1->Text = folderBrowserDialog1->SelectedPath;
}

// Following code is active when website textBox has a text change (textBox1)

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Generating a filename corresponding to the website name if website textBox is not empty
	if (websiteBox->Text != "")
		nameBox->Text = websiteBox->Text + ".txt";
}

// Following code is active when password textBox has a text change (passwordBox)

private: System::Void passwordBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Changing the cursor whether a password has been generated or not
	if (passwordBox->Text != "") {
		passwordBox->Cursor = System::Windows::Forms::Cursors::IBeam;
		passwordBox->Enabled = true;
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Opening the file to write to
	openFileDialog1->ShowDialog();
	
	// Showing file path in textBox
	pathBox2->Text = openFileDialog1->FileName;

	// Checking file type and displaying an error if file is not a .txt
	if (isTxt(pathBox2->Text) == false)
		errorDisplay->Text = "Invalid file type, please select a .txt file";
	else
		errorDisplay->Text = "";
}
};
}
