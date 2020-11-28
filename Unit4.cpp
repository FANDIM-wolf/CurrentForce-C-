//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include <thread>
#include <ctime>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{

}


//---------------------------------------------------------------------------
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
   void Start_Threads(){
     int test = 0;
   }
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	 Start_Threads();
	 float runtime_of_the_programm = clock()/10000.0;

	 Label2->Caption= FloatToStr(runtime_of_the_programm);
}
//---------------------------------------------------------------------------
