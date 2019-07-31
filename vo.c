#include<stdio.h>
int main()
{
char c={'a','e','i','o','u'};
char x;
scanf("%c",&x);
if(x==c)
{
printf("Vowel");
}
else if(x=='$')
{
printf("invalid");
}
else
printf("Consonant");
}
