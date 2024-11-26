/*
Write a program that uses printf() to print your first and last names on one line, followed by your favourite
 past time activity on the following line.
 Modify the program to also convert your age in years to days and displays both values. You do not need to
 worry about fractional and leap years. For example, if your age is 20 years, the program should print “20 years =
 7300 days
*/

#include <stdio.h>
int main(){
        printf("Esmeralda Jardine\n sleeping is my favorite activity\n");
        char name[] = "Esmeralda Jardine \n";
        char activity[] = "sleeping";
        printf("%s %s is my favorite activity\n ", name, activity);
return 0;
}
