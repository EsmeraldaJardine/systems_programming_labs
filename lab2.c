/*
Write a program that declares a separate variable for each of the following data types: char, int, short,
 long, long long, unsigned char, unsigned int, unsigned short, unsigned long, unsigned long
 long, float, double, and long double. For this you will need to make use of the sizeof() and printf()
 functions.
 ▶Modify your code to print the size of each variable.
 ▶Compile and run your program. Notice the printed values and think about how this affects the overhead of a
 program
*/

#include <stdio.h>
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
}
