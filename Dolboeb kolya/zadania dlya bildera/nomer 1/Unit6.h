//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TMaskEdit *MaskEdit1;
        TLabel *Label4;
        TMaskEdit *MaskEdit2;
        TLabel *Label5;
        TRadioButton *RadioButton1;
        TLabel *Label6;
        TLabel *Label7;
        TMaskEdit *MaskEdit3;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TMaskEdit *MaskEdit4;
        TLabel *Label12;
        TMaskEdit *MaskEdit5;
        TButton *Button1;
        TRadioButton *RadioButton2;
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
