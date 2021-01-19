#pragma once

namespace TextingDesktop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
			this->Text = L"О программе";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void About_Load(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->ReadOnly = true;
		richTextBox1->Text = "При запуске появляется окно, где пользователь сразу видит все имеющиеся заметки. Если заметка имеет дату выполнения и она уже просрочена – заметка будет красной. Если среди существующих заметок, есть такие, у которых дата выполнения – сегодняшнее число или она наступит через 3 дня – будет уведомление об этом \n\nПри создании новой заметки (кнопка '+'), открывается пустая область для заполнения.Содержание заметки является обязательным пунктом - без него создать заметку не получится.При сохранении, снова возвращается первое окно, где уже появилась новая заметка. \n\nПри выборе существующей заметки, открывается  область, в которой заполнены соответствующие поля.Здесь же заметку можно редактировать.\nДля удаления заметки, на главной форме нужно выделить необходимую и нажать на кнопку с корзиной.\n\nК тому же, на главной форме доступен поиск по заметкам.Он работает по всем пунктам : по названию, дате и тексту.Например, если было введено «1», то результатом поиска будут все заметки, содержащие хотя бы в одном из своих полей символ «1».";
	}
	};
}
