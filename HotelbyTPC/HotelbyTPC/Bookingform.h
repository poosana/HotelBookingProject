#pragma once
#include "Roomtypes.h"

namespace HotelbyTPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bookingform
	/// </summary>
	public ref class Bookingform : public System::Windows::Forms::Form
	{
	public:
		Bookingform()
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
		~Bookingform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ chckInDay;
	private: System::Windows::Forms::TextBox^ chckInMonth;
	private: System::Windows::Forms::TextBox^ chckInYear;
	private: System::Windows::Forms::TextBox^ nameTxtBox;
	private: System::Windows::Forms::TextBox^ phoneTxtBox;
	private: System::Windows::Forms::TextBox^ chckOutYear;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ ConfirmBtn;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chckInDay = (gcnew System::Windows::Forms::TextBox());
			this->chckInMonth = (gcnew System::Windows::Forms::TextBox());
			this->chckInYear = (gcnew System::Windows::Forms::TextBox());
			this->nameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->phoneTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->chckOutYear = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Check in date : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(77, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone Number : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Number of guest : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Check out date : ";
			// 
			// chckInDay
			// 
			this->chckInDay->Location = System::Drawing::Point(170, 82);
			this->chckInDay->Name = L"chckInDay";
			this->chckInDay->Size = System::Drawing::Size(62, 20);
			this->chckInDay->TabIndex = 5;
			// 
			// chckInMonth
			// 
			this->chckInMonth->Location = System::Drawing::Point(250, 82);
			this->chckInMonth->Name = L"chckInMonth";
			this->chckInMonth->Size = System::Drawing::Size(62, 20);
			this->chckInMonth->TabIndex = 6;
			// 
			// chckInYear
			// 
			this->chckInYear->Location = System::Drawing::Point(330, 80);
			this->chckInYear->Name = L"chckInYear";
			this->chckInYear->Size = System::Drawing::Size(62, 20);
			this->chckInYear->TabIndex = 7;
			// 
			// nameTxtBox
			// 
			this->nameTxtBox->Location = System::Drawing::Point(173, 122);
			this->nameTxtBox->Name = L"nameTxtBox";
			this->nameTxtBox->Size = System::Drawing::Size(384, 20);
			this->nameTxtBox->TabIndex = 8;
			// 
			// phoneTxtBox
			// 
			this->phoneTxtBox->Location = System::Drawing::Point(175, 169);
			this->phoneTxtBox->Name = L"phoneTxtBox";
			this->phoneTxtBox->Size = System::Drawing::Size(382, 20);
			this->phoneTxtBox->TabIndex = 9;
			// 
			// chckOutYear
			// 
			this->chckOutYear->Location = System::Drawing::Point(174, 220);
			this->chckOutYear->Name = L"chckOutYear";
			this->chckOutYear->Size = System::Drawing::Size(58, 20);
			this->chckOutYear->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(174, 270);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(58, 20);
			this->textBox7->TabIndex = 11;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(250, 269);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(62, 20);
			this->textBox8->TabIndex = 12;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(330, 269);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(62, 20);
			this->textBox9->TabIndex = 13;
			// 
			// ConfirmBtn
			// 
			this->ConfirmBtn->Location = System::Drawing::Point(619, 322);
			this->ConfirmBtn->Name = L"ConfirmBtn";
			this->ConfirmBtn->Size = System::Drawing::Size(102, 55);
			this->ConfirmBtn->TabIndex = 14;
			this->ConfirmBtn->Text = L"Confirm";
			this->ConfirmBtn->UseVisualStyleBackColor = true;
			this->ConfirmBtn->Click += gcnew System::EventHandler(this, &Bookingform::ConfirmBtn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(192, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"D";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(266, 56);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"M";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(343, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Y";
			// 
			// Bookingform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 403);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ConfirmBtn);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->chckOutYear);
			this->Controls->Add(this->phoneTxtBox);
			this->Controls->Add(this->nameTxtBox);
			this->Controls->Add(this->chckInYear);
			this->Controls->Add(this->chckInMonth);
			this->Controls->Add(this->chckInDay);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Bookingform";
			this->Text = L"Bookingform";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Bookingform::Bookingform_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ConfirmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Roomtypes^ roomTypeForm = gcnew Roomtypes(this);
	roomTypeForm->Show();
	this->Hide();
}
private: System::Void Bookingform_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
