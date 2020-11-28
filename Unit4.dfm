object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Thread Calculation'
  ClientHeight = 360
  ClientWidth = 499
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 90
    Width = 122
    Height = 23
    Caption = 'Threading Test'
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
    Width = 70
    Height = 31
    Caption = 'Result'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 120
    Top = 144
    Width = 177
    Height = 25
    Caption = 'Run'
    TabOrder = 0
    OnClick = Button1Click
  end
end
