object Form1: TForm1
  Left = 556
  Top = 169
  Width = 1305
  Height = 693
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 0
    Top = 0
    Width = 1289
    Height = 48
    Align = alTop
    Alignment = taCenter
    Caption = 'Label1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Button1: TButton
    Left = 616
    Top = 264
    Width = 121
    Height = 33
    Caption = 'stop'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 152
    Top = 32
  end
end
