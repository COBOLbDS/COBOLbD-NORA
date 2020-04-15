//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Bank.h"
#include "Bank1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
   Form2->Close();
   Form1->Show();
}
//---------------------------------------------------------------------------

