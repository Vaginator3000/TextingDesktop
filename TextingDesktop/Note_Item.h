#pragma once
using namespace System;

ref class Note_Item
{
public: String^ title;
public: String^ date;
public: String^ text;

	  Note_Item(String^ text) {
		  this->text = text;
	  }

	  Note_Item(String^ title, String^ date, String^ text) {
		  this->title = title;
		  this->date = date;
		  this->text = text;
	  }

public:	void setNoteItems(String^ title, String^ date, String^ text) {
	this->title = title;
	this->date = date;
	this->text = text;
}

public:	void setTitle(String^ title) { this->title = title; }
public:	void setText(String^ text) { this->text = text; }
public:	void setDate(String^ date) { this->date = date; }

public:	String^ getTitle() { return title; }
public:	String^ getText() { return text; }
public:	String^ getDate() { return date; }
};

