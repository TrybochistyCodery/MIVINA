//---------------------------------------------------------------------------

#include <vcl.h>
#include <Math.h>
#pragma hdrstop

#include "Unit3228.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String panel,dev,perv,vtor,pp;
BOOL zap=true;
float delen,len;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        panel=Label1->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
        Label1->Caption="1";
        len=1;
        }  else {
        len++;
      Label1->Caption=panel+"1"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape2MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="2";
       len=1;
        }  else {
        len++;
      Label1->Caption=panel+"2"; }
      }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape11MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{

        dev="+";
        perv=Label1->Caption;
        pp=perv;
        Label1->Caption="0";
        zap=true;
        len=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape4MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="4";
        len=1;
        }  else {
        len++;
      Label1->Caption=panel+"4";
      }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape5MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="5";
       len=1;
        }  else {
        len++;
      Label1->Caption=panel+"5"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape6MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="6";
       len=1;
        }  else {
        len++;
      Label1->Caption=panel+"6"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape7MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="7";
        len=1;
        }  else {
        len++;
      Label1->Caption=panel+"7"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape8MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="8";
       len=1;
        }  else {
       len++;
      Label1->Caption=panel+"8"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape9MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="9";
        len=1;
        }  else {
        len++;
      Label1->Caption=panel+"9"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape10MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="0";
       len=1;
        }  else {
       len++;
      Label1->Caption=panel+"0"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape12MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        vtor=Label1->Caption;
        if (dev=="+"){
                delen=StrToFloat(perv)+StrToFloat(vtor);
                 Label1->Caption=delen;
                // pp=;
        } else if (dev=="-") {
                delen=StrToFloat(perv)-StrToFloat(vtor);
                Label1->Caption=delen;
              //  pp=vtor;
        } else if (dev=="/") {
                delen=StrToFloat(perv)/StrToFloat(vtor);
                Label1->Caption=delen;
              //  pp=vtor;
        } else if (dev=="*") {
                delen=StrToFloat(perv)*StrToFloat(vtor);
                Label1->Caption=delen;
             //   pp=vtor;
        }
        len=0;
        zap=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape3MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        if (len<=20) {
        if (Label1->Caption==0) {
                Label1->Caption="3";
       len=1;
        }  else {
       len++;
      Label1->Caption=panel+"3"; }
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape13MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        dev="-";
        perv=Label1->Caption;
        pp=perv;
        Label1->Caption="0";
        zap=true;
        len=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape14MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        dev="/";
        perv=Label1->Caption;
        pp=perv;
        Label1->Caption="0";
        zap=true;
        len=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape15MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        dev="*";
        perv=Label1->Caption;
      pp=perv;
        Label1->Caption="0";
        zap=true;
        len=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape16MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        Label1->Caption="0";
        zap=true;
        len=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape17MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        perv=Label1->Caption;
        delen=StrToFloat(perv)*StrToFloat(perv);
        Label1->Caption=delen;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape18MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
        if (zap) {
        Label1->Caption=panel+",";
        zap=false;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Shape19MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
       delen=1/StrToFloat(panel);
       Label1->Caption=delen;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Shape20MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
       delen=StrToFloat(panel)*(-1);
       Label1->Caption=delen;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        len=0;
        Label2->Enabled=false;
        Label3->Enabled=false;
        Label4->Enabled=false;
        Label5->Enabled=false;
        Label6->Enabled=false;
        Label7->Enabled=false;
        Label8->Enabled=false;
        Label9->Enabled=false;
        Label10->Enabled=false;
        Label11->Enabled=false;
        Label12->Enabled=false;
        Label13->Enabled=false;
        Label14->Enabled=false;
        Label15->Enabled=false;
        Label16->Enabled=false;
        Label17->Enabled=false;
        Label18->Enabled=false;
        Label19->Enabled=false;
        Label20->Enabled=false;
        Label21->Enabled=false;
        Label22->Enabled=false;
}
//---------------------------------------------------------------------------

