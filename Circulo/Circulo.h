#pragma once  //______________________________________ Circulo.h  
#include "Resource.h"
class Circulo: public Win::Dialog
{
public:
	Circulo()
	{
	}
	~Circulo()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxRadio;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Label lb3;
	Win::Textbox tbxArea;
	Win::Textbox tbxPerimetro;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(15.82208);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.27542);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Circulo";
		lb1.CreateX(NULL, L"Radio", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.39688, 1.05833, 2.48708, 0.60854, hWnd, 1000);
		tbxRadio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.43958, 1.03188, 2.56646, 0.60854, hWnd, 1001);
		btCalcular.CreateX(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.53521, 1.08479, 2.67229, 0.68792, hWnd, 1002);
		lb2.CreateX(NULL, L"Area", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.65729, 0.58208, 2.40771, 0.60854, hWnd, 1003);
		lb3.CreateX(NULL, L"Perimetro", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9.68375, 1.48167, 2.43417, 0.60854, hWnd, 1004);
		tbxArea.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 12.96458, 0.50271, 2.67229, 0.60854, hWnd, 1005);
		tbxPerimetro.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 12.96458, 1.37583, 2.67229, 0.60854, hWnd, 1006);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxRadio.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb3.Font = fontArial009A;
		tbxArea.Font = fontArial009A;
		tbxPerimetro.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
