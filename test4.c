#include <stdio.h>
//<c语言>P183填空题第8
int main(){

   char str[]="abc defg   ha1 23";
   char str2[]={'a','b','c','d'};
   int i=0,j=0;

   i = j = 0;
   while (str[i] != '\0')
   {
       if (str[i] != ' ')
       {
           str[j] = str[i];
           j++;
       }
       i++;
   }
   str[j] = '\0';




    return 0;
}