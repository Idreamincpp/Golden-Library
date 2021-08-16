#include "main.h"
#include <fstream>
#include <iostream>
#include <string>

std::fstream inFile; //common file for all fn's

wxBEGIN_EVENT_TABLE(main, wxFrame)			//button clicked ev
EVT_BUTTON(10001, OnButtonClicked)
EVT_BUTTON(10002, OnButtonClicked2)
wxEND_EVENT_TABLE()

main::main() : wxFrame(nullptr, wxID_ANY, "Golden Library Application", wxPoint(30, 30), wxSize(600, 500))      //Creating buttons
{
	m_btn1 = new wxButton(this, 10001, "Add Book", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(150, 50));
	m_lstbx = new wxListBox(this, wxID_ANY, wxPoint(180, 70), wxSize(300, 300));
	m_btn2 = new wxButton(this, 10002, "Find Book", wxPoint(180, 10), wxSize(150, 50));
	m_txt2 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(350, 10), wxSize(130, 50));
	m_stxt1 = new wxStaticText(this, wxID_ANY, "copyright© 2021|GoldenLibrary", wxPoint(10, 340), wxSize(150, 50));
	m_txt3 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 130), wxSize(150, 50));

}

main::~main()
{
}

void main::OnButtonClicked(wxCommandEvent& evt)    //Add Button
{

	using namespace std;

	wxString txt = m_txt1->GetValue();     //user inp
	wxString num = m_txt3->GetValue();     //book locat
	string txt1;
	txt1 = txt;
	string txt3;
	txt3 = num;
	m_txt1->Clear();
	m_txt3->Clear();
	//lstbx->AppendString(txt1);



	inFile.open("D:\\lib.txt", ios::in | ios::out | ios::app);      //opening da file


	//error check
	if (inFile.fail()) {
		m_lstbx->AppendAndEnsureVisible("Action Failed");
	}
	else {
		inFile << txt1 << endl << txt3 << endl << endl;
	}
	m_lstbx->Clear();
	inFile.close();
	evt.Skip();      //ending ev
}

void main::OnButtonClicked2(wxCommandEvent& evt)      //Event2
{
	using namespace std;
	inFile.open("D:\\lib.txt", ios::in);      //open file

	//error check
	if (inFile.fail()) {
		m_lstbx->AppendAndEnsureVisible("Failed.");
	};
	m_lstbx->Clear();
	wxString sr = m_txt2->GetValue();
	m_txt2->Clear();
	size_t pos;
	string line;
	string code;

	string search;
	search = sr;

	if (inFile.is_open())
	{
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}
		while (getline(inFile, line))
		{
			pos = line.find(search);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				m_lstbx->AppendAndEnsureVisible(line);
				break;
			}
		}
		while (getline(inFile, code))
		{
			if (pos != string::npos)
			{
				m_lstbx->AppendAndEnsureVisible(code);
				break;
			}
		}


	}
	evt.Skip();      //ending ev
}
