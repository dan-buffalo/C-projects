#include <stdio.h>
#include <stdlib.h>
struct customer{
    char lastName[15];
    char firstName[15];
    unsigned int customerNumber;
    struct {
        char phoneNumber[11];
        char address[50];
        char city[15];
        char state[3];
        char zipCode[6];
    } personal;
    } customerRecord, *customerPtr;
    customerPtr = &customerRecord;


int main()
{
    struct customerRecord.lastaName;
    return 0;
}
