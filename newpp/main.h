#pragma once
#include "wx/wx.h"

class main : public wxFrame
{
public:
	main();
	~main();

public:
	wxButton* m_btn1 = nullptr;
	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_lstbx = nullptr;
	wxTextCtrl* m_txt2 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxTextCtrl* m_txt3 = nullptr;
	wxStaticText* m_stxt1 = nullptr;




	void OnButtonClicked(wxCommandEvent& evt);

	void OnButtonClicked2(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();



};


