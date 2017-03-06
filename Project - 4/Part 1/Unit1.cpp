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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    int  strok;
    double suma,stavka,final;
    if(Edit1->Text == "" || Edit2->Text == "" || Edit3->Text == "")
        {
                Label7->Caption ="Заповніть всі поля";
                return;
        }
        suma = Edit1->Text.ToDouble();
        strok = Edit2->Text.ToInt();
        stavka = Edit3->Text.ToDouble();

         final = suma;
         for(int i = 1; i <=strok;i++)
                final +=  final*stavka/100;

         Edit4->Text = FloatToStr(ceil(final*100)/100);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Edit1->Text = "";
    Edit2->Text = "";
    Edit3->Text = "";
    Edit4->Text = "";
    Label7->Caption ="";
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

