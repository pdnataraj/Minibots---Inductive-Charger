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
LIBS:ltc4120
LIBS:rx_breakout-cache
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
L LTC4120 U1
U 1 1 57A838D3
P 5200 4400
F 0 "U1" H 5250 5000 60  0000 C CNN
F 1 "LTC4120" H 5050 4850 60  0000 C CNN
F 2 "Housings_DFN_QFN:QFN-16-1EP_3x3mm_Pitch0.5mm" H 5350 4400 60  0001 C CNN
F 3 "" H 5350 4400 60  0000 C CNN
	1    5200 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 4800 6100 4800
Wire Wire Line
	5750 4700 6100 4700
Wire Wire Line
	5750 4600 6100 4600
Wire Wire Line
	5750 4500 6100 4500
Wire Wire Line
	5750 4400 6100 4400
Wire Wire Line
	5750 4300 6100 4300
Wire Wire Line
	5750 4200 6100 4200
Wire Wire Line
	5750 4100 6100 4100
Wire Wire Line
	5750 4000 6100 4000
$Comp
L CONN_01X09 P2
U 1 1 57A83966
P 6300 4400
F 0 "P2" H 6300 4900 50  0000 C CNN
F 1 "CONN_01X09" V 6400 4400 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x09" H 6300 4400 50  0001 C CNN
F 3 "" H 6300 4400 50  0000 C CNN
	1    6300 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 4800 4650 4800
Wire Wire Line
	4200 4700 4650 4700
Wire Wire Line
	4200 4600 4650 4600
Wire Wire Line
	4200 4500 4650 4500
Wire Wire Line
	4200 4400 4650 4400
Wire Wire Line
	4200 4300 4650 4300
Wire Wire Line
	4200 4200 4650 4200
Wire Wire Line
	4200 4100 4650 4100
$Comp
L CONN_01X08 P1
U 1 1 57A83922
P 4000 4450
F 0 "P1" H 4000 4900 50  0000 C CNN
F 1 "CONN_01X08" V 4100 4450 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x08" H 4000 4450 50  0001 C CNN
F 3 "" H 4000 4450 50  0000 C CNN
	1    4000 4450
	-1   0    0    1   
$EndComp
$EndSCHEMATC
