#include<stdio.h>
#include "bitmask.h"
#include "mystring.h"
#include "myutils.h"
//#include "bitmask.c"
//#include "mystring.c"
//#include "myutlis.c"

char string1[45]="ngjerngj";
char string2[]="rohith";
char string3[]="pandith";
int main()
{
  printf("Length of the string is %d\n",len("he is good boy"));
 printf("string comapre is %d\n",cmp(string1,string2));
  printf("%s\n",cat(string2,string3));
  printf("%s\n",cpy(string,string1));
  printf("%d\n",factorial(5));
  printf("%d\n",isprime(5));
  printf("%d\n",ispallindrome(12321));
  printf("%d\n",sum(3,2,3,4));
  printf("%d\n",setbit(45,5));
  printf("%d\n",clearbit(45,5));
  printf("%d\n",flipbit(45,5));
  printf("%d\n",querybit(45,5));
  return 0;
}	
