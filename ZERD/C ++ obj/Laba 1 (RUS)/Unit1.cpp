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

void __fastcall TForm1::Button1Click(TObject *Sender)
{
         Panel2->Font->Size = 15;
         if (Panel2->Caption == "Служу России!!")
         {
               Panel2->Caption="";
         }else{
         Panel2->Caption="Служу России!!";
         }


}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        ShowMessage("Грядущий Денис");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Form1->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{

              if (Panel2->Font->Size < 38)
              Panel2->Font->Size++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
                if (Panel2->Font->Size > 0)
                 Panel2->Font->Size--;
}
//---------------------------------------------------------------------------


