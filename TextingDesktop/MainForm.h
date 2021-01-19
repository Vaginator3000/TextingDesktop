#pragma once
#include "Note_Item.cpp"
#include "NoteForm.h"
#include "About.h"

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
	public: array<Note_Item^>^ search_notes; //массив заметок
	private: System::Windows::Forms::TextBox^ Search_tb;
	private: System::Windows::Forms::Button^ search_btn;



	private: System::Windows::Forms::Button^ ok_btn;
	private: System::Windows::Forms::ListView^ search_lv;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;


	public:

	public:

	public:

	public: Note_Item^ new_note = gcnew Note_Item(); //новосозданная заметка

	public:
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
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;


	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ опрограммеToolStripMenuItem;

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
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->listView1 = (gcnew System::Windows::Forms::ListView());
			   this->column_name = (gcnew System::Windows::Forms::ColumnHeader());
			   this->column_date = (gcnew System::Windows::Forms::ColumnHeader());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->опрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->del_btn = (gcnew System::Windows::Forms::Button());
			   this->add_btn = (gcnew System::Windows::Forms::Button());
			   this->Search_tb = (gcnew System::Windows::Forms::TextBox());
			   this->search_btn = (gcnew System::Windows::Forms::Button());
			   this->ok_btn = (gcnew System::Windows::Forms::Button());
			   this->search_lv = (gcnew System::Windows::Forms::ListView());
			   this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			   this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			   this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
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
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->справкаToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(264, 24);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // справкаToolStripMenuItem
			   // 
			   this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->опрограммеToolStripMenuItem });
			   this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			   this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			   this->справкаToolStripMenuItem->Text = L"Справка";
			   // 
			   // опрограммеToolStripMenuItem
			   // 
			   this->опрограммеToolStripMenuItem->Name = L"опрограммеToolStripMenuItem";
			   this->опрограммеToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			   this->опрограммеToolStripMenuItem->Text = L"О программе";
			   this->опрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::опрограммеToolStripMenuItem_Click);
			   // 
			   // del_btn
			   // 
			   this->del_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.Image")));
			   this->del_btn->Location = System::Drawing::Point(212, 430);
			   this->del_btn->Name = L"del_btn";
			   this->del_btn->Size = System::Drawing::Size(40, 40);
			   this->del_btn->TabIndex = 3;
			   this->del_btn->UseVisualStyleBackColor = true;
			   this->del_btn->Click += gcnew System::EventHandler(this, &MainForm::del_btn_Click);
			   // 
			   // add_btn
			   // 
			   this->add_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->add_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_btn.Image")));
			   this->add_btn->Location = System::Drawing::Point(212, 384);
			   this->add_btn->Name = L"add_btn";
			   this->add_btn->Size = System::Drawing::Size(40, 40);
			   this->add_btn->TabIndex = 2;
			   this->add_btn->UseVisualStyleBackColor = true;
			   this->add_btn->Click += gcnew System::EventHandler(this, &MainForm::add_btn_Click);
			   // 
			   // Search_tb
			   // 
			   this->Search_tb->Location = System::Drawing::Point(136, 2);
			   this->Search_tb->Name = L"Search_tb";
			   this->Search_tb->Size = System::Drawing::Size(100, 20);
			   this->Search_tb->TabIndex = 4;
			   // 
			   // search_btn
			   // 
			   this->search_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_btn.Image")));
			   this->search_btn->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			   this->search_btn->Location = System::Drawing::Point(238, 1);
			   this->search_btn->Name = L"search_btn";
			   this->search_btn->Size = System::Drawing::Size(23, 23);
			   this->search_btn->TabIndex = 5;
			   this->search_btn->UseVisualStyleBackColor = true;
			   this->search_btn->Click += gcnew System::EventHandler(this, &MainForm::search_btn_Click);
			   // 
			   // ok_btn
			   // 
			   this->ok_btn->Location = System::Drawing::Point(212, 384);
			   this->ok_btn->Name = L"ok_btn";
			   this->ok_btn->Size = System::Drawing::Size(40, 40);
			   this->ok_btn->TabIndex = 8;
			   this->ok_btn->Text = L"ОК";
			   this->ok_btn->UseVisualStyleBackColor = true;
			   this->ok_btn->Visible = false;
			   this->ok_btn->Click += gcnew System::EventHandler(this, &MainForm::ok_btn_Click);
			   // 
			   // search_lv
			   // 
			   this->search_lv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			   this->search_lv->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->search_lv->FullRowSelect = true;
			   this->search_lv->HideSelection = false;
			   this->search_lv->Location = System::Drawing::Point(0, 24);
			   this->search_lv->Name = L"search_lv";
			   this->search_lv->ShowItemToolTips = true;
			   this->search_lv->Size = System::Drawing::Size(264, 457);
			   this->search_lv->TabIndex = 9;
			   this->search_lv->UseCompatibleStateImageBehavior = false;
			   this->search_lv->View = System::Windows::Forms::View::Details;
			   this->search_lv->Visible = false;
			   this->search_lv->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::search_lv_MouseDoubleClick);
			   // 
			   // columnHeader1
			   // 
			   this->columnHeader1->Text = L"Название";
			   this->columnHeader1->Width = 160;
			   // 
			   // columnHeader2
			   // 
			   this->columnHeader2->Text = L"Дата";
			   this->columnHeader2->Width = 100;
			   // 
			   // notifyIcon1
			   // 
			   this->notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			   this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			   this->notifyIcon1->Text = L"notifyIcon1";
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(264, 481);
			   this->Controls->Add(this->ok_btn);
			   this->Controls->Add(this->search_lv);
			   this->Controls->Add(this->search_btn);
			   this->Controls->Add(this->Search_tb);
			   this->Controls->Add(this->del_btn);
			   this->Controls->Add(this->add_btn);
			   this->Controls->Add(this->listView1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(280, 520);
			   this->MinimumSize = System::Drawing::Size(280, 520);
			   this->Name = L"MainForm";
			   this->Text = L"Менеджер задач";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   /*Для открытия базы данных*/
	private: OleDbDataReader^ OpenDB(OleDbConnection^ dbConnection) {
		try {
			dbConnection->Open();        //открываем соединение
		}
		catch (...) {
				MessageBox::Show("Проверьте наличие файла data.mdb", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
		}
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

	private: void deleteNoteAt(String^ id) {
		OleDbConnection^ dbConnection = toDB();
		dbConnection->Open();        //открываем соединение
		String^ query = "DELETE FROM [table] WHERE Код = " + id;  //запрос
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //команда
		dbCommand->ExecuteNonQuery();
		dbConnection->Close();
	}

	private: void insertNote(Note_Item^ note) {
		OleDbConnection^ dbConnection = toDB();
		dbConnection->Open();        //открываем соединение
		if (new_note->getID()->ToString() != "" && new_note->getText() != "") {
			deleteNoteAt(new_note->getID()->ToString());
			String^ query = "INSERT INTO [table] (Код, Название, Дата, Содержание) VALUES (" + new_note->getID() + ", '" + new_note->getTitle() + "', '" + new_note->getDate() + "', '" + new_note->getText()->Replace("'", "''") + "')";  //запрос
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //команда
			dbCommand->ExecuteNonQuery();
		}
		dbConnection->Close();
	}

	private: int Notes_Count(OleDbConnection^ dbConnection) {
		String^ query1 = "SELECT COUNT (*) FROM [table]";
		OleDbCommand^ dbCommandCount = gcnew OleDbCommand(query1, dbConnection);
		return (int)dbCommandCount->ExecuteScalar(); //кол-во записей
	}

	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		new_note->clear();

		NoteForm^ note = gcnew NoteForm(new_note);
		note->ShowDialog();

		if (new_note->getText() != "") {
			//Увеличиваем размер массива заметок
			OleDbConnection^ dbConnection = toDB();
			OleDbDataReader^ dbReader = OpenDB(dbConnection);

			array<Note_Item^>^ notes_buf;
			notes_buf = gcnew array<Note_Item^>(Notes_Count(dbConnection));
			notes_buf = notes;
			delete notes;
			notes = gcnew array<Note_Item^>(Notes_Count(dbConnection) + 1);
			notes = notes_buf;
			delete notes_buf;

			String^ query = "INSERT INTO [table] (Название,  Дата, Содержание) VALUES ('" + new_note->getTitle() + "', '" + new_note->getDate() + "', '" + new_note->getText()->Replace("'", "''") + "')";  //запрос
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			dbCommand->ExecuteNonQuery();

			CloseDB(dbReader, dbConnection);

			LoadDB();
		}
	}

	private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count != 0) {
			deleteNoteAt(notes[listView1->SelectedItems[0]->Index]->getID());
			LoadDB();
		}
	}
		   
	private: void LoadDB() {
		listView1->Items->Clear();

		OleDbConnection^ dbConnection = toDB();
		OleDbDataReader^ dbReader = OpenDB(dbConnection);
		notes = gcnew array<Note_Item^>(Notes_Count(dbConnection));
		int i = 0;
		while (dbReader->Read()) {
			DateTime^ today = gcnew DateTime();

			String^ id;
			String^ title;
			String^ date;
			String^ text;

			try {
				id = dbReader["Код"]->ToString();
				title = dbReader["Название"]->ToString();
				date = dbReader["Дата"]->ToString();
				text = dbReader["Содержание"]->ToString();
			}
			catch (...) {
				MessageBox::Show("Проверьте правильность файла data.mdb", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}

			System::Windows::Forms::ListViewItem^ listViewItem1; //Обычный элемент
			System::Windows::Forms::ListViewItem^ listViewItem2; //Просроченный элемент(дата красным)

			System::Windows::Forms::RichTextBox^ rtBox = gcnew System::Windows::Forms::RichTextBox();
			rtBox->Rtf = text;

			if (date != "") { //Если не пустая дата
				if (Convert::ToInt32(today->Today.CompareTo(Convert::ToDateTime(date))) == 1) { //Если дата просрочена
					if (dbReader["Название"]->ToString()->Equals(""))
						listViewItem2 = gcnew Windows::Forms::ListViewItem("<Без названия>");
					else listViewItem2 = gcnew Windows::Forms::ListViewItem(title);
					listViewItem2->ForeColor = Color::Red;

					listViewItem2->SubItems->Add(date);
					listViewItem2->ToolTipText = rtBox->Text; //При наведении выводится содержание
					listView1->Items->Add(listViewItem2);
				}
				else { //Если время еще есть
					if (dbReader["Название"]->ToString()->Equals(""))
						listViewItem1 = gcnew Windows::Forms::ListViewItem("<Без названия>");
					else listViewItem1 = gcnew Windows::Forms::ListViewItem(title);

					listViewItem1->SubItems->Add(date);
					listViewItem1->ToolTipText = rtBox->Text; //При наведении выводится содержание
					listView1->Items->Add(listViewItem1);

					//Создание уведомления
					String^ datesDif = (Convert::ToDateTime(date) - today->Today).ToString(); //Для создания уведомления нужно кол-во оставшихся дней до даты выполнения
					int countDays = 0;
					if (datesDif != "00:00:00")
						countDays = Convert::ToInt32(datesDif->Remove(datesDif->IndexOf(".")));

					if (countDays == 3 || countDays == 0) {
						if (countDays) notifyIcon1->BalloonTipTitle = title + " - oсталось 3 дня \n";
						else notifyIcon1->BalloonTipTitle = title + " - сегодня \n";
						notifyIcon1->BalloonTipText = rtBox->Text;
						notifyIcon1->Visible =  true;
						notifyIcon1->ShowBalloonTip(1000);
						
					}


				}
			}
			else {
				if (dbReader["Название"]->ToString()->Equals(""))
					listViewItem1 = gcnew Windows::Forms::ListViewItem("<Без названия>");
				else listViewItem1 = gcnew Windows::Forms::ListViewItem(title);

				listViewItem1->SubItems->Add(date);
				listViewItem1->ToolTipText = rtBox->Text; //При наведении выводится содержание
				listView1->Items->Add(listViewItem1);
			}

			Note_Item^ item = gcnew Note_Item(id,title, date, text);
			notes[i++] = item;
		}

		CloseDB(dbReader, dbConnection);
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadDB();
	}

	private: void listView_MouseDoubleClick(System::Windows::Forms::ListView^ lv, array<Note_Item^>^ arr) {
		if (lv->SelectedItems->Count == 1) {
			String^ id = arr[lv->SelectedItems[0]->Index]->getID();
			String^ title = arr[lv->SelectedItems[0]->Index]->getTitle();
			String^ date = arr[lv->SelectedItems[0]->Index]->getDate();
			String^ text = arr[lv->SelectedItems[0]->Index]->getText();

			NoteForm^ note = gcnew NoteForm(id, title, date, text, new_note);
			note->ShowDialog();
			insertNote(new_note);
			LoadDB();
			//
		}
	}

	private: System::Void listView1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		listView_MouseDoubleClick(listView1, notes);
	}

	private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		search_lv->Visible = true;
		if (Search_tb->Text != "") LoadSearch_lv();
		if (search_lv->Items->Count == 0) {
			MessageBox::Show("Ничего не найдено");
			search_lv->Visible = false;
		}
		else {
			MessageBox::Show("Найдено заметок: " + search_lv->Items->Count.ToString());
			ok_btn->Visible = true;
			ok_btn->BringToFront();
		}
	}

	private: void LoadSearch_lv() {
		search_lv->Items->Clear();


		OleDbConnection^ dbConnection = toDB();
		OleDbDataReader^ dbReader = OpenDB(dbConnection);
		search_notes = gcnew array<Note_Item^>(Notes_Count(dbConnection));
		int i = 0;
		while (dbReader->Read()) {
			DateTime^ today = gcnew DateTime();

			String^ id = dbReader["Код"]->ToString();
			String^ title = dbReader["Название"]->ToString();
			String^ date = dbReader["Дата"]->ToString();
			String^ text = dbReader["Содержание"]->ToString();



				System::Windows::Forms::ListViewItem^ listViewItem1; //Обычный элемент
				System::Windows::Forms::ListViewItem^ listViewItem2; //Просроченный элемент(дата красным)

				System::Windows::Forms::RichTextBox^ rtBox = gcnew System::Windows::Forms::RichTextBox();
				rtBox->Rtf = text;

			//Если найдено совпадение
			if (rtBox->Text->Contains(Search_tb->Text) || title->Contains(Search_tb->Text) || date->Contains(Search_tb->Text)) {
				if (date != "") { //Если не пустая дата
					if (Convert::ToInt32(today->Today.CompareTo(Convert::ToDateTime(date))) == 1) { //Если дата просрочена
						if (dbReader["Название"]->ToString()->Equals(""))
							listViewItem2 = gcnew Windows::Forms::ListViewItem("<Без названия>");
						else listViewItem2 = gcnew Windows::Forms::ListViewItem(title);
						listViewItem2->ForeColor = Color::Red;

						listViewItem2->SubItems->Add(date);
						listViewItem2->ToolTipText = rtBox->Text; //При наведении выводится содержание
						search_lv->Items->Add(listViewItem2);
					}
					else { //Если время еще есть
						if (dbReader["Название"]->ToString()->Equals(""))
							listViewItem1 = gcnew Windows::Forms::ListViewItem("<Без названия>");
						else listViewItem1 = gcnew Windows::Forms::ListViewItem(title);

						listViewItem1->SubItems->Add(date);
						listViewItem1->ToolTipText = rtBox->Text; //При наведении выводится содержание
						search_lv->Items->Add(listViewItem1);
					}
				}
				else {
					if (dbReader["Название"]->ToString()->Equals(""))
						listViewItem1 = gcnew Windows::Forms::ListViewItem("<Без названия>");
					else listViewItem1 = gcnew Windows::Forms::ListViewItem(title);

					listViewItem1->SubItems->Add(date);
					listViewItem1->ToolTipText = rtBox->Text; //При наведении выводится содержание
					search_lv->Items->Add(listViewItem1);
				}

				Note_Item^ item = gcnew Note_Item(id, title, date, text);
				search_notes[i++] = item;
			}
		}

		CloseDB(dbReader, dbConnection);
	}

	private: System::Void search_lv_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		listView_MouseDoubleClick(search_lv, search_notes);
		LoadSearch_lv();
	}

	private: System::Void ok_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		search_lv->Items->Clear();
		search_lv->Visible = false;
		ok_btn->Visible = false;
		Search_tb->Text = "";

	}

	private: System::Void опрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ ab = gcnew About();
		ab->ShowDialog();
	}
};
}
