object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Current Force'
  ClientHeight = 437
  ClientWidth = 316
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
    Left = 88
    Top = 216
    Width = 82
    Height = 65
    Caption = 'Result'
    GlowSize = 26
  end
  object Edit1: TEdit
    Left = 72
    Top = 88
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 72
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 72
    Top = 272
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 2
    OnClick = Button1Click
  end
end
