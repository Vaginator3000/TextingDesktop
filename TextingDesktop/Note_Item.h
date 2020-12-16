#pragma once
using namespace System;

ref class Note_Item
{
public: String^ id = "";
public: String^ title = "";
public: String^ date = "";
public: String^ text = "";

	  Note_Item() {
	  }

	  Note_Item(String^ text) {
		  this->text = text;
	  }

	  Note_Item(String^ id, String^ title, String^ date, String^ text) {
		  this->id = id;
		  this->title = title;
		  this->date = date;
		  this->text = text;
	  }

	public:	void setNoteItems(String^ id, String^ title, String^ date, String^ text) {
		this->id = id;
		this->title = title;
		this->date = date;
		this->text = text;
	}

	public: void clear() {
		this->id = "";
		this->title = "";
		this->date = "";
		this->text = "";
	}

	public:	void setID(String^ id) { this->id = id; }
	public:	void setTitle(String^ title) { this->title = title; }
	public:	void setText(String^ text) { this->text = text; }
	public:	void setDate(String^ date) { this->date = date; }

	public:	String^ getID() { return id; }
	public:	String^ getTitle() { return title; }
	public:	String^ getText() { return text; }
	public:	String^ getDate() { return date; }
};

