/*
** *****************************************************************************
** baptiste.renneson
** Elania <baptiste.renneson@gmail.com>
**
** main.c - 2022
**
** *****************************************************************************
*/
#include "main.h"

main (int argc, char *argv[])
{
  if (argc >= 3)
    {
      int a = -1;
      int b = -1;
      a = atoi(argv[1]);
      b = atoi(argv[2]);
      if (a > b)
	{
	  write (2, "Error: the second parameter must be greater than the first one.\n", 64);
	  return 84;
	}
      return fizzbuzz(a, b);
    }
  else
    return 84;
}
