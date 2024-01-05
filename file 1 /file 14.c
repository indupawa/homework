#include <stdio.h>
 #include <string.h>
  int main()
   { char string1[100], string2[100];
    int result;
     printf("Enter first string: ");
      fgets(string1, sizeof(string1), stdin);
       printf("Enter second string: ");
        fgets(string2, sizeof(string2), stdin);
