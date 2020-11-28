object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Test Calculate Power'
  ClientHeight = 408
  ClientWidth = 515
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 59
    Width = 169
    Height = 23
    Caption = 'Laps  of Calculation'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 128
    Top = 200
    Width = 81
    Height = 23
    Caption = 'Result'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 202
    Width = 65
    Height = 21
    Caption = 'Seconds'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 16
    Top = 104
    Width = 265
    Height = 17
    TabOrder = 0
  end
  object Button1: TButton
    Left = 16
    Top = 143
    Width = 265
    Height = 25
    Caption = 'Run Test'
    TabOrder = 1
    OnClick = Button1Click
  end
end
