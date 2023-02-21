#pragma once

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define BMS_DATA 50

typedef enum
{
	FAIL,
	SUCCESS
}Bms_result;

typedef enum{
	printtoconsole
}BMS_outputtype;

typedef enum{
	FileInputType

}BMS_inputtype;


Bms_result dataread(float Temperature[],float StateOfCharge[]);
Bms_result outputtoconsole(float Temperature[],float StateOfCharge[]);
Bms_result inputvalue(BMS_inputtype inputvaluefetch);
Bms_result outputvalue(BMS_outputtype outputvaluefetch);

extern float Temperature[BMS_DATA];
extern float StateOfCharge[BMS_DATA];
