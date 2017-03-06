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
        Button1->Caption = "��������� ����������";
        Button2->Enabled = false;
        Image1->Visible = false; // ��������� ���������� ��� ���������
        Image2->Visible = false; // ��������� ���������� ��� ���������
        Image3->Visible = false;  // ������� ���������� ��� �������
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Image1->Visible = false; // ��������� ���������� ��� ���������
        Image2->Visible = false; // ��������� ���������� ��� ���������
        Image3->Visible = false;  // ������� ���������� ��� �������
        Button2->Enabled = false;
        Label5->Caption = "���� �� ������������" ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Button2->Enabled = true;
        if(Button1->Caption == "��������� ����������")
        {
                Image1->Visible = true; // ��������� ���������� ��� ���������
                Image2->Visible = false; // ��������� ���������� ��� ���������
                Image3->Visible = false;  // ������� ���������� ��� �������
                Button1->Caption = "������� ����������";
                Label5->Caption = "��������� ����������" ;
        }
        else
         if(Button1->Caption == "������� ����������")
        {
                Image1->Visible = false; // ��������� ���������� ��� ���������
                Image2->Visible = true; // ��������� ���������� ��� ���������
                Image3->Visible = false;  // ������� ���������� ��� �������
                Button1->Caption = "���������� �������";
                Label5->Caption = "������� ����������" ;
        }
        else
         if(Button1->Caption == "���������� �������")
        {
                Image1->Visible = false; // ��������� ���������� ��� ���������
                Image2->Visible = false; // ��������� ���������� ��� ���������
                Image3->Visible = true;  // ������� ���������� ��� �������
                Button1->Caption = "��������� ����������";
                Label5->Caption = "���������� �������" ;
        }
}
//---------------------------------------------------------------------------
