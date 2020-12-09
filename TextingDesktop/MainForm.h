#pragma once
#include "Note_Item.cpp"
#include "NoteForm.h"

	using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb; // ��� ��

namespace TextingDesktop {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public: array<Note_Item^>^ notes; //������ �������
	public: int NOTES_COUNT = 0; //���������� �������
	public: Note_Item^ new_note = gcnew Note_Item(); //������������� �������

	public:
	public:
		MainForm(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;

	private: System::Windows::Forms::Button^ del_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^ column_name;
	private: System::Windows::Forms::ColumnHeader^ column_date;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::ComponentModel::IContainer^ components;

		   //public: vector<Note_Item^>^ notes; //������ �������
			   /// <summary>
			   /// ������������ ���������� ������������.
			   /// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		   void InitializeComponent(void)
		   {
			   this->listView1 = (gcnew System::Windows::Forms::ListView());
			   this->column_name = (gcnew System::Windows::Forms::ColumnHeader());
			   this->column_date = (gcnew System::Windows::Forms::ColumnHeader());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			   this->listView1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::listView1_MouseDoubleClick);
			   // 
			   // column_name
			   // 
			   this->column_name->Text = L"��������";
			   this->column_name->Width = 160;
			   // 
			   // column_date
			   // 
			   this->column_date->Text = L"����";
			   this->column_date->Width = 100;
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(264, 24);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // ����ToolStripMenuItem
			   // 
			   this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			   this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			   this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			   this->����ToolStripMenuItem->Text = L"����";
			   // 
			   // ���������ToolStripMenuItem
			   // 
			   this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			   this->���������ToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			   this->���������ToolStripMenuItem->Text = L"���������";
			   this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_Click);
			   // 
			   // del_btn
			   // 
			   this->del_btn->Location = System::Drawing::Point(212, 430);
			   this->del_btn->Name = L"del_btn";
			   this->del_btn->Size = System::Drawing::Size(40, 40);
			   this->del_btn->TabIndex = 3;
			   this->del_btn->Text = L"del";
			   this->del_btn->UseVisualStyleBackColor = true;
			   this->del_btn->Click += gcnew System::EventHandler(this, &MainForm::del_btn_Click);
			   // 
			   // add_btn
			   // 
			   this->add_btn->Location = System::Drawing::Point(212, 384);
			   this->add_btn->Name = L"add_btn";
			   this->add_btn->Size = System::Drawing::Size(40, 40);
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
		   /*��� �������� ���� ������*/
	private: OleDbDataReader^ OpenDB(OleDbConnection^ dbConnection) {
		dbConnection->Open();        //��������� ����������
		String^ query = "SELECT * FROM [table]";  //������
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //�������
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader(); //��������� ������

		return dbReader;
	}

		   /*��� ������� � ��*/
	private: OleDbConnection^ toDB() {
		String^ connection = "provider=Microsoft.JET.OLEDB.4.0;Data Source=data.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connection);
		return dbConnection;
	}

		   /*��� �������� ���� ������*/
	private: void CloseDB(OleDbDataReader^ dbReader, OleDbConnection^ dbConnection) {
		dbReader->Close();
		dbConnection->Close();
	}

	private: void deleteNoteAt(String^ id) {
		NOTES_COUNT--;
		OleDbConnection^ dbConnection = toDB();
		dbConnection->Open();        //��������� ����������
		String^ query = "DELETE FROM [table] WHERE ��� = " + id;  //������
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //�������
		dbCommand->ExecuteNonQuery();
		dbConnection->Close();
	}

	private: void insertNote(Note_Item^ note) {
	////	if (NoteTextBox->Text->Length > 0) {
	//		String^ id = note->Id();
	//		int firstLetter = 0;
	//		while (NoteTextBox->Text[firstLetter] == ' ' || NoteTextBox->Text[firstLetter] == '\n') {
	//			if (firstLetter < NoteTextBox->Text->Length - 1) {
	//				firstLetter++;
	//			}
	//			else {
	//				break;
	//			}
	////		}
	//		if (!(firstLetter == NoteTextBox->Text->Length - 1 && (NoteTextBox->Text[firstLetter] == ' ') || NoteTextBox->Text[firstLetter] == '\n')) {
	//			int firstSpace = firstLetter;
	//			while (NoteTextBox->Text[firstSpace] != ' ' && NoteTextBox->Text[firstSpace] != '\n') {
	//				if (firstSpace < NoteTextBox->Text->Length - 1) {
	//					firstSpace++;
	//				}
	//				else {
	//					break;
	//				}
	//			}
	//			String^ name = NoteTextBox->Text->Substring(firstLetter, firstSpace - firstLetter) + NoteTextBox->Text[firstSpace];
	//			String^ folder = note->Folder();
		OleDbConnection^ dbConnection = toDB();
		dbConnection->Open();        //��������� ����������
		deleteNoteAt(new_note->getID()->ToString());
		String^ query = "INSERT INTO [table] (���, ��������, ����, ����������) VALUES (" + new_note->getID() + ", '" + new_note->getTitle() + "', '" + new_note->getDate() + "', '" + new_note->getText() + "')";  //������
		MessageBox::Show(query);
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection); //�������
		dbCommand->ExecuteNonQuery();
		dbConnection->Close();

	//			RightList->Items[currentNote]->Selected = true;
	//		}
	//	}
	//
	}

	private: int Notes_Count(OleDbConnection^ dbConnection) {
		String^ query1 = "SELECT COUNT (*) FROM [table]";
		OleDbCommand^ dbCommandCount = gcnew OleDbCommand(query1, dbConnection);
		return (int)dbCommandCount->ExecuteScalar(); //���-�� �������
	}

	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//	//������ ��� �������� ���������� �������
		//	OleDbConnection^ dbConnection = toDB();
		//	OleDbDataReader^ dbReader = OpenDB(dbConnection);
		//	NOTES_COUNT = Notes_Count(dbConnection);
		//	NOTES_COUNT++;
		///*	while (dbReader->Read()) NOTES_COUNT++;
		//	CloseDB(dbReader, dbConnection);

		//	dbConnection = toDB();
		//	dbReader = OpenDB(dbConnection);*/

		////	std::vector<Note_Item^>* notes; //������ �������
		//	notes = gcnew array<Note_Item^>(NOTES_COUNT);
		//	int i = 0;
		//	while (dbReader->Read()) {
		//		/* this->listView1->Items->Add(dbReader["��������"]->ToString());
		//		 this->listView1->Items->Add(dbReader["����"]->ToString());
		//		 this->listView1->Items->Add(dbReader["��������"]->ToString());*/
		//		String^ title = dbReader["��������"]->ToString();
		//		String^ date = dbReader["����"]->ToString();
		//		String^ text = dbReader["����������"]->ToString();

		//		if (dbReader["��������"]->ToString()->Equals("")) 
		//			listViewItem = gcnew Windows::Forms::ListViewItem("<��� ��������>");
		//		else listViewItem = gcnew Windows::Forms::ListViewItem(title);

		//		listViewItem->SubItems->Add(date);
		//		listViewItem->ToolTipText = text;
		//		listView1->Items->Add(listViewItem);

		//		Note_Item^ item = gcnew Note_Item(title, date, text);
		//		notes[i++] = item;
		//	}

		//	CloseDB(dbReader, dbConnection);

		NoteForm^ note = gcnew NoteForm(new_note);
		note->ShowDialog();

		MessageBox::Show(new_note->getText());
		if (new_note->getText() != "") {
			MessageBox::Show("������-�� ������� ���� ���� ������� ����������� �������");
			//����������� ������ ������� �������
			OleDbConnection^ dbConnection = toDB();
			OleDbDataReader^ dbReader = OpenDB(dbConnection);

			array<Note_Item^>^ notes_buf;
			notes_buf = gcnew array<Note_Item^>(Notes_Count(dbConnection));
			notes_buf = notes;
			delete notes;
			notes = gcnew array<Note_Item^>(Notes_Count(dbConnection) + 1);
			notes = notes_buf;
			delete notes_buf;

			CloseDB(dbReader, dbConnection);
		}
		//	this->Hide();
		//	delete note;
	}

	private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems == nullptr) MessageBox::Show("�� �����?");
		MessageBox::Show(listView1->SelectedItems[0]->Index.ToString());
	//	deleteNoteAt(notes[listView1->SelectedItems[0]->Index]->getID());
		LoadDB();
	}

		   //��� ��������� ������ �������
	private: System::Void listView1_ItemMouseHover(System::Object^ sender, System::Windows::Forms::ListViewItemMouseHoverEventArgs^ e) {
		//OleDbConnection^ dbConnection = toDB();
		//OleDbDataReader^ dbReader = OpenDB(dbConnection);

		//ToolTip^ tooltip = gcnew ToolTip();
		//String^ str;
		//while (dbReader->Read()) {
		//	str = listView1->SelectedItems->ToString();
		//	//t.SetToolTip(TextBox1, "��������� ��� TextBox");
		//}
		//tooltip->SetToolTip(listView1->SelectedItems[0], /*dbReader["����������"]->ToString()*/ "����");

		//CloseDB(dbReader, dbConnection);
	}
	private: System::Void listView1_ColumnWidthChanged(System::Object^ sender, System::Windows::Forms::ColumnWidthChangedEventArgs^ e) {
		/*e-> = true;
		e.NewWidth = listView1.Columns[e.ColumnIndex].Width;*/
	}

	private: void LoadDB() {
		listView1->Items->Clear();

		OleDbConnection^ dbConnection = toDB();
		OleDbDataReader^ dbReader = OpenDB(dbConnection);
		NOTES_COUNT = Notes_Count(dbConnection);
		notes = gcnew array<Note_Item^>(NOTES_COUNT);
		int i = 0;
		while (dbReader->Read()) {
			/* this->listView1->Items->Add(dbReader["��������"]->ToString());
			 this->listView1->Items->Add(dbReader["����"]->ToString());
			 this->listView1->Items->Add(dbReader["��������"]->ToString());*/
			String^ id = dbReader["���"]->ToString();
			String^ title = dbReader["��������"]->ToString();
			String^ date = dbReader["����"]->ToString();
			String^ text = dbReader["����������"]->ToString();

			if (dbReader["��������"]->ToString()->Equals(""))
				listViewItem = gcnew Windows::Forms::ListViewItem("<��� ��������>");
			else listViewItem = gcnew Windows::Forms::ListViewItem(title);

			listViewItem->SubItems->Add(date);
			listViewItem->ToolTipText = text;
			listView1->Items->Add(listViewItem);

			Note_Item^ item = gcnew Note_Item(id,title, date, text);
			notes[i++] = item;
		}

		CloseDB(dbReader, dbConnection);
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadDB();
	}

	/*private: System::Void listView1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}*/

	private: System::Void listView1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (listView1->SelectedItems->Count == 1) {
			String^ id = notes[listView1->SelectedItems[0]->Index]->getID();
			String^ title = notes[listView1->SelectedItems[0]->Index]->getTitle();
			String^ date = notes[listView1->SelectedItems[0]->Index]->getDate();
			String^ text = notes[listView1->SelectedItems[0]->Index]->getText();

		/*	NoteForm^ note = gcnew NoteForm(id,title, date, text, new_note);
			note->ShowDialog();*/
			NoteForm^ note = gcnew NoteForm(id,title, date, text, new_note);
			note->ShowDialog();
			insertNote(new_note);
			LoadDB();
			//
		}
	}

	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(new_note->getText());
	}
};
}
