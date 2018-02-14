//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

	const int sec = 5;
		Tag++;

	if(Tag > 0 && Tag <= sec)
	Label1->Caption = TimeToStr(Now());
	else
	Label1->Caption = DateToStr(Now());


	if((Tag == sec) || (Tag == sec+sec))
	{
		  if(Label1->Alignment == taLeftJustify)
			{

				Label1->Alignment = taCenter;

			}
			else if (Label1->Alignment == taCenter)
			{
				Label1->Alignment = taRightJustify;
			}
			else
			{
				Label1->Alignment = taLeftJustify;
			}
	}

	if (Tag == sec+sec)
		Tag = 0;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Label1->Align = alTop;
	Label1->Caption = TimeToStr(Now());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		 if(Timer1->Enabled == true)
		Timer1->Enabled = false;
	 else
		Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	//rip
}
//---------------------------------------------------------------------------
