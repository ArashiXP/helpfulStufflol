#include <stdlib.h>
#include <stdio.h>
#include "other.h" // Both other1 and other2 take from other.h

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);
    int number = add5(num); // From other1
    printf("%d + 5 = %d\n",num, number);
    num = multiply10(number); // From other2
    printf("%d * 10 = %d\n", number,num);
    return 0;
}

// When using headers, must compile all files in one line
// gcc -o modTest mainTest.c other1.c other2.c
// ./modTest 10
// replace 10 with any number