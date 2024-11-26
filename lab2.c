#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
Write a program that uses printf() to print your first and last names on one line, followed by your favourite
 past time activity on the following line.
 Modify the program to also convert your age in years to days and displays both values. You do not need to
 worry about fractional and leap years. For example, if your age is 20 years, the program should print “20 years =
 7300 days
*/
int main(){
        char c;
        int i;
        short s;
        long l;
        long long ll;
        unsigned char uc;
        unsigned int ui;
        unsigned short us;
        unsigned long ul;
        unsigned long long ull;
        float f;
        double d;
        long double ld;
    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of short: %lu bytes\n", sizeof(s));
    printf("Size of long: %lu bytes\n", sizeof(l));
    printf("Size of long long: %lu bytes\n", sizeof(ll));
    printf("Size of unsigned char: %lu bytes\n", sizeof(uc));
    printf("Size of unsigned int: %lu bytes\n", sizeof(ui));
    printf("Size of unsigned short: %lu bytes\n", sizeof(us));
    printf("Size of unsigned long: %lu bytes\n", sizeof(ul));
    printf("Size of unsigned long long: %lu bytes\n", sizeof(ull));
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of long double: %lu bytes\n", sizeof(ld));
//Now look at limits.h and float.h, and notice the value range that each data type affords.
    printf("\nMax values:\n");
    printf("Max char: %d\n", CHAR_MAX);
    printf("Max int: %d\n", INT_MAX);
    printf("Max short: %d\n", SHRT_MAX);
    printf("Max long: %ld\n", LONG_MAX);
    printf("Max long long: %lld\n", LLONG_MAX);
    printf("Max unsigned char: %u\n", UCHAR_MAX);
    printf("Max unsigned int: %u\n", UINT_MAX);
    printf("Max unsigned short: %u\n", USHRT_MAX);
    printf("Max unsigned long: %lu\n", ULONG_MAX);
    printf("Max unsigned long long: %llu\n", ULLONG_MAX);
    printf("Max float: %e\n", FLT_MAX);
    printf("Max double: %e\n", DBL_MAX);
    printf("Max long double: %Le\n", LDBL_MAX);
};

/* output
Size of char: 1 bytes
Size of int: 4 bytes
Size of short: 2 bytes
Size of long: 8 bytes
Size of long long: 8 bytes
Size of unsigned char: 1 bytes
Size of unsigned int: 4 bytes
Size of unsigned short: 2 bytes
Size of unsigned long: 8 bytes
Size of unsigned long long: 8 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 16 bytes

Max values:
Max char: 127
Max int: 2147483647
Max short: 32767
Max long: 9223372036854775807
Max long long: 9223372036854775807
Max unsigned char: 255
Max unsigned int: 4294967295
Max unsigned short: 65535
Max unsigned long: 18446744073709551615
Max unsigned long long: 18446744073709551615
Max float: 3.402823e+38
Max double: 1.797693e+308
Max long double: 1.189731e+4932

*/