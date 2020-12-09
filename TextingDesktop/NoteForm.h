#pragma once
#include "Note_Item.cpp"

namespace TextingDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для NoteForm
	/// </summary>
	public ref class NoteForm : public System::Windows::Forms::Form
	{
	public:
		NoteForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		NoteForm(Note_Item^ _new_note)
		{
			InitializeComponent();
			new_note = _new_note;
		}


		NoteForm(String^ _id, String^ _title, String^ _date, String^ _text, Note_Item^ _new_note)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			id = _id;
			date = _date;
			text = _text;
			title = _title;
			new_note = _new_note;
		}
		Note_Item^ new_note = gcnew Note_Item();
		String^ id = "";
		String^ title = "";
		String^ date = "";
		String^ text = "";
	private: System::Windows::Forms::CheckBox^ Date_CheckBox;
	private: System::Windows::Forms::Button^ Save_btn;
	private: System::Windows::Forms::Button^ Bold_btn;
	private: System::Windows::Forms::Button^ Undline_btn;
	private: System::Windows::Forms::Button^ Italic_btn;
	public:

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~NoteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Title_tb;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ DatePicker;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ Text_rtb;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Text_rtb = (gcnew System::Windows::Forms::RichTextBox());
			this->Date_CheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->Save_btn = (gcnew System::Windows::Forms::Button());
			this->Bold_btn = (gcnew System::Windows::Forms::Button());
			this->Undline_btn = (gcnew System::Windows::Forms::Button());
			this->Italic_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Title_tb
			// 
			this->Title_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title_tb->Location = System::Drawing::Point(16, 32);
			this->Title_tb->Name = L"Title_tb";
			this->Title_tb->Size = System::Drawing::Size(236, 26);
			this->Title_tb->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Дата";
			// 
			// DatePicker
			// 
			this->DatePicker->Enabled = false;
			this->DatePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DatePicker->Location = System::Drawing::Point(16, 95);
			this->DatePicker->Name = L"DatePicker";
			this->DatePicker->Size = System::Drawing::Size(236, 26);
			this->DatePicker->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Содержание";
			// 
			// Text_rtb
			// 
			this->Text_rtb->Location = System::Drawing::Point(16, 160);
			this->Text_rtb->Name = L"Text_rtb";
			this->Text_rtb->Size = System::Drawing::Size(236, 287);
			this->Text_rtb->TabIndex = 7;
			this->Text_rtb->Text = L"";
			// 
			// Date_CheckBox
			// 
			this->Date_CheckBox->AutoSize = true;
			this->Date_CheckBox->Location = System::Drawing::Point(61, 77);
			this->Date_CheckBox->Name = L"Date_CheckBox";
			this->Date_CheckBox->Size = System::Drawing::Size(15, 14);
			this->Date_CheckBox->TabIndex = 8;
			this->Date_CheckBox->UseVisualStyleBackColor = true;
			this->Date_CheckBox->CheckedChanged += gcnew System::EventHandler(this, &NoteForm::Date_CheckBox_CheckedChanged);
			// 
			// Save_btn
			// 
			this->Save_btn->Location = System::Drawing::Point(177, 453);
			this->Save_btn->Name = L"Save_btn";
			this->Save_btn->Size = System::Drawing::Size(75, 23);
			this->Save_btn->TabIndex = 9;
			this->Save_btn->Text = L"Сохранить";
			this->Save_btn->UseVisualStyleBackColor = true;
			this->Save_btn->Click += gcnew System::EventHandler(this, &NoteForm::Save_btn_Click);
			// 
			// Bold_btn
			// 
			this->Bold_btn->Location = System::Drawing::Point(16, 453);
			this->Bold_btn->Name = L"Bold_btn";
			this->Bold_btn->Size = System::Drawing::Size(23, 23);
			this->Bold_btn->TabIndex = 10;
			this->Bold_btn->Text = L"B";
			this->Bold_btn->UseVisualStyleBackColor = true;
			this->Bold_btn->Click += gcnew System::EventHandler(this, &NoteForm::Bold_btn_Click);
			// 
			// Undline_btn
			// 
			this->Undline_btn->Location = System::Drawing::Point(45, 453);
			this->Undline_btn->Name = L"Undline_btn";
			this->Undline_btn->Size = System::Drawing::Size(23, 23);
			this->Undline_btn->TabIndex = 11;
			this->Undline_btn->Text = L"U";
			this->Undline_btn->UseVisualStyleBackColor = true;
			this->Undline_btn->Click += gcnew System::EventHandler(this, &NoteForm::Undline_btn_Click);
			// 
			// Italic_btn
			// 
			this->Italic_btn->Location = System::Drawing::Point(74, 453);
			this->Italic_btn->Name = L"Italic_btn";
			this->Italic_btn->Size = System::Drawing::Size(23, 23);
			this->Italic_btn->TabIndex = 12;
			this->Italic_btn->Text = L"I";
			this->Italic_btn->UseVisualStyleBackColor = true;
			this->Italic_btn->Click += gcnew System::EventHandler(this, &NoteForm::Italic_btn_Click);
			// 
			// NoteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(264, 481);
			this->Controls->Add(this->Italic_btn);
			this->Controls->Add(this->Undline_btn);
			this->Controls->Add(this->Bold_btn);
			this->Controls->Add(this->Save_btn);
			this->Controls->Add(this->Date_CheckBox);
			this->Controls->Add(this->Text_rtb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DatePicker);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Title_tb);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(280, 520);
			this->Name = L"NoteForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"NoteForm";
			this->Load += gcnew System::EventHandler(this, &NoteForm::NoteForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Жирный текст
	private: System::Void Bold_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ selected = Text_rtb->SelectionFont;
		System::Drawing::FontStyle italic = selected->Italic ? System::Drawing::FontStyle::Italic : System::Drawing::FontStyle::Regular;
		System::Drawing::FontStyle underlined = selected->Underline ? System::Drawing::FontStyle::Underline : System::Drawing::FontStyle::Regular;
		selected = gcnew System::Drawing::Font(selected->FontFamily, selected->Size, 
			(selected->Bold ? System::Drawing::FontStyle::Regular : System::Drawing::FontStyle::Bold) | italic | underlined);
		Text_rtb->SelectionFont = selected;
	}

	//Подчеркнутый текст
	private: System::Void Undline_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ selected = Text_rtb->SelectionFont;
		System::Drawing::FontStyle bold = selected->Bold ? System::Drawing::FontStyle::Bold : System::Drawing::FontStyle::Regular;
		System::Drawing::FontStyle italic = selected->Italic ? System::Drawing::FontStyle::Italic : System::Drawing::FontStyle::Regular;
		selected = gcnew System::Drawing::Font(selected->FontFamily, selected->Size, 
			(selected->Underline ? System::Drawing::FontStyle::Regular : System::Drawing::FontStyle::Underline) | italic | bold);
		Text_rtb->SelectionFont = selected;
	}

	//Курсив
	private: System::Void Italic_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ selected = Text_rtb->SelectionFont;
		System::Drawing::FontStyle bold = selected->Bold ? System::Drawing::FontStyle::Bold : System::Drawing::FontStyle::Regular;
		System::Drawing::FontStyle underlined = selected->Underline ? System::Drawing::FontStyle::Underline : System::Drawing::FontStyle::Regular;
		selected = gcnew System::Drawing::Font(selected->FontFamily, selected->Size, 
			(selected->Italic ? System::Drawing::FontStyle::Regular : System::Drawing::FontStyle::Italic) | bold | underlined);
		Text_rtb->SelectionFont = selected;
	}

	private: System::Void Date_CheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Date_CheckBox->Checked) 
			DatePicker->Enabled = true;
		else 
			DatePicker->Enabled = false;
	}

	private: System::Void NoteForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (title != "") Title_tb->Text = title;
	//	MessageBox::Show(date);
		if (date != "") {
			Date_CheckBox->Checked = true; 
			DatePicker->Value = Convert::ToDateTime(date);
		}
	//	else DatePicker->Value = Convert::ToDateTime(date);
		if (text != "") Text_rtb->Rtf = text;
	}

	private: System::Void Save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Date_CheckBox->Checked) 
			new_note->setNoteItems(id, Title_tb->Text, DatePicker->Value.ToShortDateString(), Text_rtb->Rtf);
		else 
			new_note->setNoteItems(id, Title_tb->Text, "", Text_rtb->Rtf);
		this->Close();
	}
};
}
