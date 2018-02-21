//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *Button1;
	TEdit *Edit1;
	TMaskEdit *MaskEdit1;
	TMaskEdit *MaskEdit2;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TMaskEdit *MaskEdit3;
	TLabel *Label7;
	TMaskEdit *MaskEdit4;
	TLabel *Label8;
	TEdit *Edit2;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
