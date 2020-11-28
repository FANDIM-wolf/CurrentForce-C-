//---------------------------------------------------------------------------

#ifndef TestBigDataH
#define TestBigDataH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label2;
	TLabel *Label3;
	TPanel *Panel1;
	TImageList *ImageList1;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
