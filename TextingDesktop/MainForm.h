#pragma once
#include "Note_Item.cpp"
#include "NoteForm.h"

	using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb; // для бд

namespace TextingDesktop {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public: array<Note_Item^>^ notes; //массив заметок


	public:

	public:
	public: int NOTES_COUNT = 0; //количество заметок
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ListViewItem^ listViewItem;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;

	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^ column_name;
	private: System::Windows::Forms::ColumnHeader^ column_date;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::ComponentModel::IContainer^ components;

		   //public: vector<Note_Item^>^ notes; //массив заметок
			   /// <summary>
			   /// Обязательная переменная конструктора.
			   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->listView1 = (gcnew System::Windows::Forms::ListView());
			   this->column_name = (gcnew System::Windows::Forms::ColumnHeader());
			   this->column_date = (gcnew System::Windows::Forms::ColumnHeader());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->del_btn = (gcnew System::Windows::Forms::Button());
			   this->add_btn = (gcnew System::Windows::Forms::Button());
			   this->menuStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // listView1
			   // 
			   this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->column_name, this->column_date });
			   this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->listView1->FullRowSelect = true;
			   this->listView1->HideSelection = false;
			   this->listView1->Location = System::Drawing::Point(0, 24);
			   this->listView1->Name = L"listView1";
			   this->listView1->ShowItemToolTips = true;
			   this->listView1->Size = System::Drawing::Size(264, 457);
			   this->listView1->TabIndex = 0;
			   this->listView1->UseCompatibleStateImageBehavior = false;
			   this->listView1->View = System::Windows::Forms::View::Details;
			   this->listView1->ColumnWidthChanged += gcnew System::Windows::Forms::ColumnWidthChangedEventHandler(this, &MainForm::listView1_ColumnWidthChanged);
			   this->listView1->ItemMouseHover += gcnew System::Windows::Forms::ListViewItemMouseHoverEventHandler(this, &MainForm::listView1_ItemMouseHover);
			   this->listView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::listView1_MouseClick);
			   this->listView1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::listView1_MouseDoubleClick);
			   // 
			   // column_name
			   // 
			   this->column_name->Text = L"Название";
			   this->column_name->Width = 160;
			   // 
			   // column_date
			   // 
			   this->column_date->Text = L"Дата";
			   this->column_date->Width = 100;
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(264, 24);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // файлToolStripMenuItem
			   // 
			   this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->загрузитьToolStripMenuItem });
			   this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			   this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			   this->файлToolStripMenuItem->Text = L"Файл";
			   // 
			   // загрузитьToolStripMenuItem
			   // 
			   this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			   this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			   this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::add_btn_Click);
			   // 
			   // del_btn
			   // 
			   this->del_btn->Location = System::Drawing::Point(163, 367);
			   this->del_btn->Name = L"del_btn";
			   this->del_btn->Size = System::Drawing::Size(75, 23);
			   this->del_btn->TabIndex = 3;
			   this->del_btn->Text = L"del";
			   this->del_btn->UseVisualStyleBackColor = true;
			   this->del_btn->Click += gcnew System::EventHandler(this, &MainForm::del_btn_Click);
			   // 
			   // add_btn
			   // 
			   this->add_btn->Location = System::Drawing::Point(163, 300);
			   this->add_btn->Name = L"add_btn";
			   this->add_btn->Size = System::Drawing::Size(75, 23);
			   this->add_btn->TabIndex = 2;
			   this->add_btn->Text = L"+";
			   this->add_btn->UseVisualStyleBackColor = true;
			   this->add_btn->Click += gcnew System::EventHandler(this, &MainForm::add_btn_Click);
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(264, 481);
			   this->Controls->Add(this->del_btn);
			   this->Controls->Add(this->add_btn);
			   this->Controls->Add(this->listView1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(280, 520);
			   this->MinimumSize = System::Drawing::Size(280, 520);
			   this->Name = L"MainForm";
			   this->Text = L"MainForm";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   /*Для открытия базы данных*/
	private: OleDbDataReader^ OpenDB(OleDbConnection^ dbConnection) {
		dbConnection->Open();        //открываем соединение
		String^ query = "SELECT * FROM [table]";  //запрос
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //команда
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //считываем данные

		return dbReader;
	}

		   /*Для доступа к БД*/
	private: OleDbConnection^ toDB() {
		String^ connection = "provider=Microsoft.JET.OLEDB.4.0;Data Source=data.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connection);

		return dbConnection;
	}

		   /*Для закрытия базы данных*/
	private: void CloseDB(OleDbDataReader^ dbReader, OleDbConnection^ dbConnection) {
		dbReader->Close();
		dbConnection->Close();
	}

	private: int Notes_Count(OleDbConnection^ dbConnection) {
		String^ query1 = "SELECT COUNT (*) FROM [table]";
		OleDbCommand^ dbCommandCount = gcnew OleDbCommand(query1, dbConnection);
		return (int)dbCommandCount->ExecuteScalar(); //кол-во записей
	}

	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//	//Проход для подсчета количества заметок
		//	OleDbConnection^ dbConnection = toDB();
		//	OleDbDataReader^ dbReader = OpenDB(dbConnection);
		//	NOTES_COUNT = Notes_Count(dbConnection);
		//	NOTES_COUNT++;
		///*	while (dbReader->Read()) NOTES_COUNT++;
		//	CloseDB(dbReader, dbConnection);

		//	dbConnection = toDB();
		//	dbReader = OpenDB(dbConnection);*/

		////	std::vector<Note_Item^>* notes; //массив заметок
		//	notes = gcnew array<Note_Item^>(NOTES_COUNT);
		//	int i = 0;
		//	while (dbReader->Read()) {
		//		/* this->listView1->Items->Add(dbReader["Название"]->ToString());
		//		 this->listView1->Items->Add(dbReader["Дата"]->ToString());
		//		 this->listView1->Items->Add(dbReader["Описание"]->ToString());*/
		//		String^ title = dbReader["Название"]->ToString();
		//		String^ date = dbReader["Дата"]->ToString();
		//		String^ text = dbReader["Содержание"]->ToString();

		//		if (dbReader["Название"]->ToString()->Equals("")) 
		//			listViewItem = gcnew Windows::Forms::ListViewItem("<Без названия>");
		//		else listViewItem = gcnew Windows::Forms::ListViewItem(title);

		//		listViewItem->SubItems->Add(date);
		//		listViewItem->ToolTipText = text;
		//		listView1->Items->Add(listViewItem);

		//		Note_Item^ item = gcnew Note_Item(title, date, text);
		//		notes[i++] = item;
		//	}

		//	CloseDB(dbReader, dbConnection);

		NoteForm^ note = gcnew NoteForm();
		note->Show();
		//	this->Hide();
		//	delete note;
	}

	private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Для изменения ширины столбца
	private: System::Void listView1_ItemMouseHover(System::Object^ sender, System::Windows::Forms::ListViewItemMouseHoverEventArgs^ e) {
		//OleDbConnection^ dbConnection = toDB();
		//OleDbDataReader^ dbReader = OpenDB(dbConnection);

		//ToolTip^ tooltip = gcnew ToolTip();
		//String^ str;
		//while (dbReader->Read()) {
		//	str = listView1->SelectedItems->ToString();
		//	//t.SetToolTip(TextBox1, "Подсказка для TextBox");
		//}
		//tooltip->SetToolTip(listView1->SelectedItems[0], /*dbReader["Содержание"]->ToString()*/ "жопа");

		//CloseDB(dbReader, dbConnection);
	}
	private: System::Void listView1_ColumnWidthChanged(System::Object^ sender, System::Windows::Forms::ColumnWidthChangedEventArgs^ e) {
		/*e-> = true;
		e.NewWidth = listView1.Columns[e.ColumnIndex].Width;*/
	}

		   //двойное нажатие на выбранную заметку
	private: System::Void listView1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Проход для подсчета количества заметок
		OleDbConnection^ dbConnection = toDB();
		OleDbDataReader^ dbReader = OpenDB(dbConnection);
		NOTES_COUNT = Notes_Count(dbConnection);
		NOTES_COUNT++;
		/*	while (dbReader->Read()) NOTES_COUNT++;
			CloseDB(dbReader, dbConnection);

			dbConnection = toDB();
			dbReader = OpenDB(dbConnection);*/

			//	std::vector<Note_Item^>* notes; //массив заметок
		notes = gcnew array<Note_Item^>(NOTES_COUNT);
		notes;
		int i = 0;
		while (dbReader->Read()) {
			/* this->listView1->Items->Add(dbReader["Название"]->ToString());
			 this->listView1->Items->Add(dbReader["Дата"]->ToString());
			 this->listView1->Items->Add(dbReader["Описание"]->ToString());*/
			String^ title = dbReader["Название"]->ToString();
			String^ date = dbReader["Дата"]->ToString();
			String^ text = dbReader["Содержание"]->ToString();

			if (dbReader["Название"]->ToString()->Equals(""))
				listViewItem = gcnew Windows::Forms::ListViewItem("<Без названия>");
			else listViewItem = gcnew Windows::Forms::ListViewItem(title);

			listViewItem->SubItems->Add(date);
			listViewItem->ToolTipText = text;
			listView1->Items->Add(listViewItem);

			Note_Item^ item = gcnew Note_Item(title, date, text);
			notes[i++] = item;
		}

		CloseDB(dbReader, dbConnection);
	}

	private: System::Void listView1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (listView1->SelectedItems->Count == 1) {
			String^ title = notes[listView1->SelectedItems[0]->Index]->getTitle();
			String^ date = notes[listView1->SelectedItems[0]->Index]->getDate();
			String^ text = notes[listView1->SelectedItems[0]->Index]->getText();

			NoteForm^ note = gcnew NoteForm(title, date, text);
			note->Show();
		}
	}
	};
}
