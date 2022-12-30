#include <stdio.h>

int main ()
{
  int people = 0;
  float price = 0, discount = 0;
  char selection;

  printf ("How many tickets do you want? (1-100)\n");
  scanf ("%d", &people);

  if (people <= 100 && people >= 0)
    {
      printf("Will you buy a ticket for the Weekend? (y,Y for YES - n,N for NO)\n");
      scanf(" %c", &selection);

      printf ("\n----\n");
      switch (selection)
	{
	case 'n':
	case 'N':
	  if (people >= 1 && people <= 5)
	    discount = 0;
	  if (people >= 6 && people <= 20)
	    discount = 0.2 * people;
	  if (people >= 20)
	    discount = 0.4 * people;

	  price = 30 * (1 - (discount / 100));
	  printf ("Discount       : %.2f%%\n", discount);
	  printf ("Fee per ticket : %.2f\n", price);
	  printf ("Total Fee      : %.2f\n", people * price);
	  break;
	case 'y':
	case 'Y':
	  if (people >= 1 && people <= 5)
	    discount = 0;
	  if (people >= 6 && people <= 20)
	    discount = 0.3 * people;
	  if (people >= 20)
	    discount = 0.5 * people;

	  price = 20 * (1 - (discount / 100));
	  printf ("Discount       : %.2f%%\n", discount);
	  printf ("Fee per ticket : %.2f\n", price);
	  printf ("Total Fee      : %.2f\n", people * price);
	  break;
	default:
	  printf ("Wrong input!!!");
	}
    }
  else
    {
      printf ("Wrong input!!!");
    };
  return 0;
};
