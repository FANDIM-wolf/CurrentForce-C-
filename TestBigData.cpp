//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TestBigData.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    Label3->Caption = "Intel Core I5";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	   Form3->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label3Click(TObject *Sender)
{
  Label3->Caption = "Intel Core I5";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    Form4->ShowModal();
}
//---------------------------------------------------------------------------
