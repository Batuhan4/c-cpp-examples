// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   FILE *f;
   char read;
   int lowerCharCount=0,upperCharCount =0, rows =1,words =1, speacialChar =-1;
   f = fopen("Sample.txt","r");
   do{
   read = fgetc(f);
   if(read >='a'&& read<='z'){
   lowerCharCount++;
   }
   else if(read >='A'&& read<='Z'){
   upperCharCount++;
   }
   else if(read >='0'&& read <='9'){

   }
   else if(read == ' '|| read =='\r') {
   words++;
   }
   else if(read == '\n'){
   rows++;
   }
   else{
      speacialChar++;
   }

   }
   while (read!= EOF);
 
   fclose(f);
   printf("\nThe number of rows: %d",rows);
   printf("\nThe number of words: %d",words);
   printf("\nThe number of lowercase letters: %d",lowerCharCount);
   printf("\nThe number of uppercase letters: %d",upperCharCount);
   printf("\nThe number of special characters %d\n",speacialChar);
   return 0;
}