EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ATMEGA328PB-A IC1
U 1 1 586ADF04
P 5400 3600
F 0 "IC1" H 5000 5075 50  0000 R BNN
F 1 "ATMEGA328PB-A" H 5000 5000 50  0000 R BNN
F 2 "Housings_QFP:TQFP-32_7x7mm_Pitch0.8mm" H 5350 2200 50  0001 L CIN
F 3 "" H 5100 3650 50  0000 C CNN
	1    5400 3600
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X16 P1
U 1 1 586ADF51
P 7700 2350
F 0 "P1" H 7700 3200 50  0000 C CNN
F 1 "CONN_01X16" V 7800 2350 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x16" H 7700 2350 50  0001 C CNN
F 3 "" H 7700 2350 50  0000 C CNN
	1    7700 2350
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X16 P2
U 1 1 586ADFD3
P 7700 4050
F 0 "P2" H 7700 4900 50  0000 C CNN
F 1 "CONN_01X16" V 7800 4050 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x16" H 7700 4050 50  0001 C CNN
F 3 "" H 7700 4050 50  0000 C CNN
	1    7700 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 4400 7100 4400
Wire Wire Line
	7100 4400 7100 1600
Wire Wire Line
	7100 1600 7500 1600
Wire Wire Line
	6700 4500 7150 4500
Wire Wire Line
	7150 4500 7150 1700
Wire Wire Line
	7150 1700 7500 1700
Wire Wire Line
	4100 4200 4000 4200
Wire Wire Line
	4000 4200 4000 1800
Wire Wire Line
	4000 1800 7500 1800
Wire Wire Line
	5100 2100 5100 1900
Wire Wire Line
	5100 1900 7500 1900
Wire Wire Line
	5200 5100 5200 5200
Wire Wire Line
	5200 5200 7400 5200
Wire Wire Line
	7400 5200 7400 2000
Wire Wire Line
	7400 2000 7500 2000
Wire Wire Line
	4100 4300 3900 4300
Wire Wire Line
	3900 4300 3900 1700
Wire Wire Line
	3900 1700 7000 1700
Wire Wire Line
	7000 1700 7000 2100
Wire Wire Line
	7000 2100 7500 2100
Wire Wire Line
	6700 3000 7000 3000
Wire Wire Line
	7000 3000 7000 2200
Wire Wire Line
	7000 2200 7500 2200
Wire Wire Line
	6700 3100 7050 3100
Wire Wire Line
	7050 3100 7050 2300
Wire Wire Line
	7050 2300 7500 2300
Wire Wire Line
	6700 4600 6950 4600
Wire Wire Line
	6950 4600 6950 2400
Wire Wire Line
	6950 2400 7500 2400
Wire Wire Line
	6700 4700 6900 4700
Wire Wire Line
	6900 4700 6900 2500
Wire Wire Line
	6900 2500 7500 2500
Wire Wire Line
	6700 4800 6850 4800
Wire Wire Line
	6850 4800 6850 2600
Wire Wire Line
	6850 2600 7500 2600
Wire Wire Line
	6700 2400 6800 2400
Wire Wire Line
	6800 2400 6800 2700
Wire Wire Line
	6800 2700 7500 2700
Wire Wire Line
	6700 2500 6750 2500
Wire Wire Line
	6750 2500 6750 2800
Wire Wire Line
	6750 2800 7500 2800
Wire Wire Line
	6700 2600 6800 2600
Wire Wire Line
	6800 2600 6800 2900
Wire Wire Line
	6800 2900 7500 2900
Wire Wire Line
	6700 2700 7450 2700
Wire Wire Line
	7450 2700 7450 3000
Wire Wire Line
	7450 3000 7500 3000
Wire Wire Line
	6700 2800 7350 2800
Wire Wire Line
	7350 2800 7350 3100
Wire Wire Line
	7350 3100 7500 3100
Wire Wire Line
	6700 2900 7300 2900
Wire Wire Line
	7300 2900 7300 3300
Wire Wire Line
	7300 3300 7500 3300
Wire Wire Line
	5300 2100 5300 2000
Wire Wire Line
	5300 2000 7250 2000
Wire Wire Line
	7250 2000 7250 3400
Wire Wire Line
	7250 3400 7500 3400
Wire Wire Line
	4100 4400 4000 4400
Wire Wire Line
	4000 4400 4000 5150
Wire Wire Line
	4000 5150 7350 5150
Wire Wire Line
	7350 5150 7350 3500
Wire Wire Line
	7350 3500 7500 3500
Wire Wire Line
	4100 2700 3850 2700
Wire Wire Line
	3850 2700 3850 5250
Wire Wire Line
	3850 5250 7300 5250
Wire Wire Line
	7300 5250 7300 3600
Wire Wire Line
	7300 3600 7500 3600
Wire Wire Line
	5300 5100 7250 5100
Wire Wire Line
	7250 5100 7250 3700
Wire Wire Line
	7250 3700 7500 3700
Wire Wire Line
	4100 4500 4100 5300
Wire Wire Line
	4100 5300 7200 5300
Wire Wire Line
	7200 5300 7200 3800
Wire Wire Line
	7200 3800 7500 3800
Wire Wire Line
	6700 3400 7050 3400
Wire Wire Line
	7050 3400 7050 4000
Wire Wire Line
	7050 4000 7500 4000
Wire Wire Line
	6700 3500 7000 3500
Wire Wire Line
	7000 3500 7000 4100
Wire Wire Line
	7000 4100 7500 4100
Wire Wire Line
	6700 3600 6800 3600
Wire Wire Line
	6800 3600 6800 4200
Wire Wire Line
	6800 4200 7500 4200
Wire Wire Line
	6700 3700 6750 3700
Wire Wire Line
	6750 3700 6750 4300
Wire Wire Line
	6750 4300 7500 4300
Wire Wire Line
	6700 3800 7450 3800
Wire Wire Line
	7450 3800 7450 4400
Wire Wire Line
	7450 4400 7500 4400
Wire Wire Line
	6700 4100 7450 4100
Wire Wire Line
	7450 4100 7450 4600
Wire Wire Line
	7450 4600 7500 4600
Wire Wire Line
	6700 4200 7450 4200
Wire Wire Line
	7450 4200 7450 4700
Wire Wire Line
	7450 4700 7500 4700
Wire Wire Line
	6700 4300 7450 4300
Wire Wire Line
	7450 4300 7450 4800
Wire Wire Line
	7450 4800 7500 4800
Wire Wire Line
	6700 3300 8000 3300
Wire Wire Line
	8000 3300 8000 3900
Wire Wire Line
	8000 3900 7500 3900
Wire Wire Line
	6700 3900 7950 3900
Wire Wire Line
	7950 3900 7950 4500
Wire Wire Line
	7950 4500 7500 4500
Text Notes 4100 5550 0    60   ~ 0
Sorry,\nI know this is bad. Just wanted a board fast.
$EndSCHEMATC