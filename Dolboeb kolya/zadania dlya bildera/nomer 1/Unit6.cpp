//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
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



void __fastcall TForm1::Button1Click(TObject *Sender)
{
      if  ((MaskEdit1->Text=="  .  .    ") || (MaskEdit2->Text=="(   )   -    ") || (MaskEdit3->Text=="  -  ") || (MaskEdit4->Text=="      ") || (MaskEdit5->Text=="  .  .  ") || (MaskEdit6->Text==" -  -  ") || (MaskEdit7->Text=="          ") || (MaskEdit8->Text=="          ") || (MaskEdit9->Text=="               "))
       {
        ShowMessage("Одно или несколько полей не заняты");
        } else {
      int  z=(Date()-MaskEdit1->Text);
      Label15->Caption=z/365;
      MaskEdit1->Enabled=false;
      MaskEdit2->Enabled=false;
      MaskEdit3->Enabled=false;
      MaskEdit4->Enabled=false;
      MaskEdit5->Enabled=false;
      MaskEdit6->Enabled=false;
      MaskEdit7->Enabled=false;
      MaskEdit8->Enabled=false;
      MaskEdit9->Enabled=false;
      RadioButton1->Enabled=false;
      RadioButton2->Enabled=false;
      }
      }
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        Label13->Caption=Time();
        Label16->Caption=Date();
}
//---------------------------------------------------------------------------


