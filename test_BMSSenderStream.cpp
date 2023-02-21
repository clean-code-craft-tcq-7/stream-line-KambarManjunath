// Test driven Development. -> Define the testcase before implementation.
#define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "BMS_Sender/BMS_SenderStream.h"


SCENARIO("Get the  input data StateofCharge and Temp value from file")
{
    GIVEN("Read input from the SenderInputFile.txt")
    {
        WHEN("FileInputType contains Sender Input data values")
        {
            BMS_inputtype inputvaluefetch = FileInputType;
            THEN("check all the input values from file")
            {
               REQUIRE(inputvalue (inputvaluefetch) == SUCCESS);
            }
        }
    }
}


SCENARIO("Check the input data values print on console")
{
    GIVEN("print output on console")
    {
        WHEN("printtoconsole contains Sender output data values")
        {
            BMS_inputtype inputvaluefetch = FileInputType;
            BMS_outputtype outputvaluefetch = printtoconsole;
            THEN("check all the onput data values priniting on console")
            {
               REQUIRE(inputvalue (inputvaluefetch) == SUCCESS);
               REQUIRE(outputvalue (outputvaluefetch) == SUCCESS);
            }
        }
    }
}
