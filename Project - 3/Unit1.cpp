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
        Button1->Caption = "Портретна фотографія";
        Button2->Enabled = false;
        Image1->Visible = false; // Портретна фотографія стає невидимою
        Image2->Visible = false; // Портретна фотографія стає невидимою
        Image3->Visible = false;  // Художня фотографія стає видимою
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Image1->Visible = false; // Портретна фотографія стає невидимою
        Image2->Visible = false; // Портретна фотографія стає невидимою
        Image3->Visible = false;  // Художня фотографія стає видимою
        Button2->Enabled = false;
        Label5->Caption = "Фото не відображається" ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Button2->Enabled = true;
        if(Button1->Caption == "Портретна фотографія")
        {
                Image1->Visible = true; // Портретна фотографія стає невидимою
                Image2->Visible = false; // Портретна фотографія стає невидимою
                Image3->Visible = false;  // Художня фотографія стає видимою
                Button1->Caption = "Художня фотографія";
                Label5->Caption = "Портретна фотографія" ;
        }
        else
         if(Button1->Caption == "Художня фотографія")
        {
                Image1->Visible = false; // Портретна фотографія стає невидимою
                Image2->Visible = true; // Портретна фотографія стає невидимою
                Image3->Visible = false;  // Художня фотографія стає видимою
                Button1->Caption = "Фотографія будинку";
                Label5->Caption = "Художня фотографія" ;
        }
        else
         if(Button1->Caption == "Фотографія будинку")
        {
                Image1->Visible = false; // Портретна фотографія стає невидимою
                Image2->Visible = false; // Портретна фотографія стає невидимою
                Image3->Visible = true;  // Художня фотографія стає видимою
                Button1->Caption = "Портретна фотографія";
                Label5->Caption = "Фотографія будинку" ;
        }
}
//---------------------------------------------------------------------------
