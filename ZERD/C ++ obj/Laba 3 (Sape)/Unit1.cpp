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
void __fastcall TForm1::ColorGrid1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	FG_color =  ColorGrid1->ForegroundIndex;
	BG_color =  ColorGrid1->BackgroundIndex;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ColorGrid1Click(TObject *Sender)
{
	if (ComboBox1->ItemIndex == -1) {
	      ColorGrid1->BackgroundIndex = BG_color;
		  ColorGrid1->ForegroundIndex = FG_color;
		  ShowMessage("Сначала выберите фигуру");
		  return;
	}
	if(ColorGrid1->ForegroundIndex == ColorGrid1->BackgroundIndex)
	{
		  ColorGrid1->BackgroundIndex = BG_color;
		  ColorGrid1->ForegroundIndex = FG_color;
		  ShowMessage("Нельзя выбрать одинаковые цвета");
		  return;
	}

	FG_color =  ColorGrid1->ForegroundIndex;
	BG_color =  ColorGrid1->BackgroundIndex;

	Shape1->Brush->Color = ColorGrid1->BackgroundColor;
	Shape1->Pen->Color = ColorGrid1->ForegroundColor;


}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
	Shape1->Visible = true;
	switch (ComboBox1->ItemIndex) {

		case 0:
			Shape1->Shape = stSquare;
			break;
		case 1:
			Shape1->Shape = stRoundSquare;
			break;
		case 2:
			Shape1->Shape = stRectangle;
			break;
		case 3:
			Shape1->Shape = stRoundRect;
			break;
		case 4:
			Shape1->Shape = stCircle;
			break;
		case 5:
			Shape1->Shape = stEllipse;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Tag++;
	switch (Tag) {

	case 5:
		ColorGrid1->GridOrdering = go2x8;
	break;

	case 10:
		ColorGrid1->GridOrdering = go16x1;
	break;

	case 15:
		ColorGrid1->GridOrdering = go1x16;
	break;

	case 20:
		ColorGrid1->GridOrdering = go8x2;
	break;

	case 25:
		ColorGrid1->GridOrdering = go4x4;
	break;


	}
}
//---------------------------------------------------------------------------

