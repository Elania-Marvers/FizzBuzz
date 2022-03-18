#include "FizzBuzz.h"

int	FizzBuzz (int		start,
		  int		stop)
{
  for (;start <= stop; start++)
    {
      if (start % 3 == 0)
        write(1, "Fizz", 4);
      if (start % 5 == 0)
	write(1, "Buzz", 4);
      if ((start % 5 != 0) && (start % 3 != 0))
	printbase(start, 10);
      write(1, "\n", 1);
    }
  return 1;
}
