#include "stdafx.h"  //________________________________________ Circulo.cpp
#include "Circulo.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Circulo app;
	return app.BeginDialog(IDI_Circulo, hInstance);
}

void Circulo::Window_Open(Win::Event& e)
{
}

void Circulo::btCalcular_Click(Win::Event& e)
{
	double radio = tbxRadio.DoubleValue;
	double area = (radio*radio)*(M_PI);
	double perimetro = 2 * M_PI*radio;
	this->tbxArea.DoubleValue = area;
	this->tbxPerimetro.DoubleValue = perimetro;


}

