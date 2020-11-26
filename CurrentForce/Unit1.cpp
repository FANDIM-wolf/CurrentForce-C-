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
		 float u;
		 float i;
		 float r;

		 u =StrToFloat(Edit1->Text);
		 r=StrToFloat(Edit2->Text);
		 i=u/r;
		 Label1->Caption=FloatToStr(i);

         //http://samoychiteli.ru/document26941.html
}
//---------------------------------------------------------------------------
