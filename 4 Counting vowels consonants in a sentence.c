// 4. Counting the number of vowels and consonants in a sentence
#include <stdio.h>
void main()
{
   char str[100];
   int i, vowels, consonants, space;
   i = vowels = consonants = space = 0;
   printf("Enter a sentence: ");
   gets(str);
   while (str[i] != '\0')
   {
      if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'||str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
      {
       vowels++;
      }
      else if (str[i] == ' ') 
      {
       ++space;
      }
      else
       consonants++;
       i++;
   }
   printf("vowels in this sentence = %d", vowels);
   printf("\nconsonants in this sentence = %d", consonants); 
   printf("\nempty space in the sentence = %d", space);
}