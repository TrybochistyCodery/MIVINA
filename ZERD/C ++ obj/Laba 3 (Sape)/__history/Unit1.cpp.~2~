//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


//---------------------------------------------------------------------------

int FG_color = 0 ;
int BG_color = 15;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	ComboBox1->Items->Add("Квадрат");
	ComboBox1->Items->Add("Квадрат с закругленными краям");
	ComboBox1->Items->Add("Прямоугольник");
	ComboBox1->Items->Add("Прямоугольник с закруглёнными краями");
	ComboBox1->Items->Add("Окружность");
	ComboBox1->Items->Add("Эллипс");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ColorGrid1Change(TObject *Sender)
{
	FG_color =  ColorGrid1->ForegroundIndex;
	BG_color =  ColorGrid1->BackgroundIndex;

	if(ColorGrid1->ForegroundIndex == ColorGrid1->BackgroundIndex)
	{
		  ColorGrid1->BackgroundIndex = BG_color;
		  ColorGrid1->ForegroundIndex = FG_color;
		  ShowMessage("Нельзя выбрать одинаковые цвета");
		  return;
	}

	FG_color =  ColorGrid1->ForegroundIndex;
	BG_color =  ColorGrid1->BackgroundIndex;


}
//---------------------------------------------------------------------------
