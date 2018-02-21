//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGRID"
#pragma resource "*.dfm"
TForm1 *Form1;
int prevBack;
int prevFore;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        ComboBox1->Items->Add("Квадрат");
        ComboBox1->Items->Add("Квадрат с кругленными краями");
        ComboBox1->Items->Add("Прямоугольник");
        ComboBox1->Items->Add("Прямоугольник с круглеными краями");
        ComboBox1->Items->Add("Окружность");
        ComboBox1->Items->Add("Эллипс");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
        Shape1->Visible=true;
        Label1->Visible=true;
        CColorGrid1->Enabled=true;
        if(ComboBox1->ItemIndex==0) {
                Shape1->Shape=stSquare;
                Label1->Caption="Квадрат";
        } else if(ComboBox1->ItemIndex==1) {
                Shape1->Shape=stRoundSquare;
                Label1->Caption="Круглый квадрат";
        } else if(ComboBox1->ItemIndex==2) {
                Shape1->Shape=stRectangle;
                Label1->Caption="Прямоугольник";
        } else if(ComboBox1->ItemIndex==3) {
                Shape1->Shape=stRoundRect;
                Label1->Caption="Прямоугольник с круглыми краями";
        } else if(ComboBox1->ItemIndex==4) {
                Shape1->Shape=stCircle;
                Label1->Caption="Круг";
        } else if(ComboBox1->ItemIndex==5) {
                Shape1->Shape=stEllipse;
                Label1->Caption="Эллипс";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CColorGrid1Click(TObject *Sender)
{
        prevBack=CColorGrid1->BackgroundIndex;
        prevFore=CColorGrid1->ForegroundIndex;
        if (prevBack%2!=0)   {
        ShowMessage("Нельзя выбирать для фона не четные цвета");}
         if (prevFore%2==0)   {
        ShowMessage("Нельзя выбирать для ободка четные цвета");}
           if (prevBack==prevFore) {
           ShowMessage("Нельзя выбрать два одинаковых цвета");
           }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        if (prevBack!=prevFore) {
                Shape1->Brush->Color=CColorGrid1->BackgroundColor;
                Shape1->Pen->Color=CColorGrid1->ForegroundColor;
       } else {
                 CColorGrid1->ForegroundIndex=15;
                 CColorGrid1->BackgroundIndex=0;
       }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
         if (CColorGrid1->BackgroundIndex%2==0)   {
            Shape1->Brush->Color=CColorGrid1->BackgroundColor;
        } else {  CColorGrid1->BackgroundIndex=0; }
         if (CColorGrid1->ForegroundIndex%2!=0)   {
            Shape1->Pen->Color=CColorGrid1->ForegroundColor;
        } else {CColorGrid1->ForegroundIndex=15; }
       }
//---------------------------------------------------------------------------





