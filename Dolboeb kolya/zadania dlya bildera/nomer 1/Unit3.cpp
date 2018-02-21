//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
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
        Label1 -> Caption=Now();
        if (Timer1 -> Tag ==2) {
          Timer1 -> Tag=0;
          if ( Label1 -> Alignment==taLeftJustify) {
                     Label1 -> Align=alTop;
                Label1 -> Alignment=taCenter;
          } else if ( Label1 -> Align==alTop){
               Label1 -> Align=alBottom;
               Label1 -> Alignment=taRightJustify;
                //Label1 -> Layout=tlTop;
                Label1 -> Top=654;
          }else if (   Label1 -> Alignment==taRightJustify){
                Label1 -> Align=alBottom;
               Label1 -> Alignment=taLeftJustify;
                //Label1 -> Alignment=alLeft;
                //Label1 -> Layout=tlTop;
                   Label1 -> Top=654;
          }
        }  else {
        Timer1 -> Tag++;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Label1 -> Caption=Now();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if (Timer1 -> Enabled==false) {
        Timer1 -> Enabled=true;
        }
        else{
        Timer1 -> Enabled=false;
}
}
//---------------------------------------------------------------------------
