//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String pole;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
       // String pole;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        pole=Label1->Caption;
}
//---------------------------------------------------------------------------------



void __fastcall TForm1::Shape1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        Label1->Caption=pole+"1";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape2MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"2";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape3MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"3";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape4MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"4";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape5MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"5";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape6MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"6";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape7MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"7";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape8MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        Label1->Caption=pole+"8";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape9MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"9";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape10MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Label1->Caption=pole+"0";
}
//---------------------------------------------------------------------------

