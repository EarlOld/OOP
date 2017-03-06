//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
  #include <math.h>
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

void __fastcall TForm1::Button2Click(TObject *Sender)
{
      Edit1->Text = "";
    Edit2->Text = "";
    Edit3->Text = "";
    Edit4->Text = "";
    Label5->Caption ="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
if((Key >= '0' && Key <= '9')|| (Key ==',') || (Key == (char)8)){}
        else Key = 0;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)
{
if((Key >= '0' && Key <= '9')|| (Key ==',') || (Key == (char)8)){}
        else Key = 0;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
{
if((Key >= '0' && Key <= '9')|| (Key ==',') || (Key == (char)8)){}
        else Key = 0;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        double suma=0, na_sto = 0, len = 0, final = 0;
 if(Edit1->Text == "" || Edit2->Text == "" || Edit3->Text == "")
        {
                Label5->Caption ="Заповніть всі поля";
                return;
         }
        suma = Edit1->Text.ToDouble();
        na_sto = Edit2->Text.ToDouble();
        len = Edit3->Text.ToDouble();
        final = (len / 100) * na_sto * suma;
        Edit4->Text = FloatToStr(ceil(final*100)/100);

}
//-------------------------------
