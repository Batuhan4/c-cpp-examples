#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  char sentence[100];
  char letter;

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Enter a letter: ");
  scanf(" %c", &letter);

  int lower_count = 0;
  int upper_count = 0;
  int word_count = 0;
  int space_count = -1;
  int digit_count = 0;

  for (int i = 0; i < strlen(sentence); i++) {
    if (isalpha(sentence[i])) {
      if (sentence[i] == letter) {
        lower_count++;
      }
      if (isupper(sentence[i]) && toupper(sentence[i]) == toupper(letter)) {
        upper_count++;
      }
    } else if (isspace(sentence[i])) {
      space_count++;
      if (i > 0 && !isspace(sentence[i-1])) {
        word_count++;
      }
    } else if (isdigit(sentence[i])) {

      digit_count++;
    }
  }

  printf("The length of the sentence is %d.\n", (int) strlen(sentence) - 1);  // Subtract 1 to exclude the newline character
  printf("%d uppercase and %d lowercase %c.\n", upper_count, lower_count, letter);
  printf("The number of words in the sentence is %d.\n", word_count);
  printf("The number of spaces in the sentence is %d.\n", space_count);
  printf("The number of digits in the sentence is %d.\n", digit_count);

  return 0;
}