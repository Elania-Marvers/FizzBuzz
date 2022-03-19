#include "printbase.h"


int printbase	 (int		c,
		  int		d)
{
  int i = 0;
  if (c != 0 && (c - c % d) / d != 0)
    i += printbase((c - c % d) / d, d);
  char j = (c % d) + '0';
  write (1, &j, 1);
  return i + 1;
}
