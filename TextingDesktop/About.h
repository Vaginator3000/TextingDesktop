#pragma once

namespace TextingDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(264, 349);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(264, 349);
			this->Controls->Add(this->richTextBox1);
			this->MaximizeBox = false;
			this->Name = L"About";
			this->Text = L"� ���������";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void About_Load(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->ReadOnly = true;
		richTextBox1->Text = "��� ������� ���������� ����, ��� ������������ ����� ����� ��� ��������� �������. ���� ������� ����� ���� ���������� � ��� ��� ���������� � ������� ����� �������. ���� ����� ������������ �������, ���� �����, � ������� ���� ���������� � ����������� ����� ��� ��� �������� ����� 3 ��� � ����� ����������� �� ���� \n\n��� �������� ����� ������� (������ '+'), ����������� ������ ������� ��� ����������.���������� ������� �������� ������������ ������� - ��� ���� ������� ������� �� ���������.��� ����������, ����� ������������ ������ ����, ��� ��� ��������� ����� �������. \n\n��� ������ ������������ �������, �����������  �������, � ������� ��������� ��������������� ����.����� �� ������� ����� �������������.\n��� �������� �������, �� ������� ����� ����� �������� ����������� � ������ �� ������ � ��������.\n\n� ���� ��, �� ������� ����� �������� ����� �� ��������.�� �������� �� ���� ������� : �� ��������, ���� � ������.��������, ���� ���� ������� �1�, �� ����������� ������ ����� ��� �������, ���������� ���� �� � ����� �� ����� ����� ������ �1�.";
	}
	};
}
