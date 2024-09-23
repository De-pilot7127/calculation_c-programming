#include <stdio.h>//scanf(),printf()
int main (){
//declaration and initialization ;
char a='K';//%c
char name []={};
int age =10;
float area;
double salary;
printf("enter the character:");
scanf ("%c",&a);
printf("The character is %c \n",a);

printf("enter the string:");
scanf("%s",&name);
printf("The string is %s \n ",name);

printf("enter the integer:");
scanf("%d",&age);
printf("The integer is %d years\n",age);

printf("enter the float");
scanf("%f",&area);
printf("The float is cm %.3f\n",area);

printf("enter the double:");
scanf("%lf",&salary);
printf("The double is ksh %10.2lf",salary);

return 0;

}
