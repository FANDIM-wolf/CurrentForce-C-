//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <thread>
#include <ctime>
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{

}

//----------------------------------------------------------------------------
void Find_min_value_in_random_array(){


	const int array_size = 250000; // size of array
	int array1[array_size]; // create of array
	for (int counter = 0; counter < array_size; counter++)
	{
	 array1[counter] = rand() % 50 - rand() % 50; // fill array by numbers from -49 to 49

	}
	int min = array1[0]; // min value
	for (int counter = 1; counter < array_size; counter++)
	{
	 if ( min > array1[counter] ) // search min value in array
		 min = array1[counter];
	}



   }
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	float laps;
	laps=StrToFloat(Edit1->Text);

	for (int i = 0; i < laps; i++) {
         Find_min_value_in_random_array();
	}

	float runtime_of_the_programm = clock()/10000.0;

	// time work of THE Program
	Label2->Caption=FloatToStr(runtime_of_the_programm);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
 // time work of programm
 float time_of_program_1 =  clock()/10000.0;
}
//---------------------------------------------------------------------------
