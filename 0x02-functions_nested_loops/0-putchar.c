#include "libioP.h"
#include "stdio.h"

#undef putchar

int
putchar (int c)
{
  int result;
  _IO_acquire_lock (_IO_stdout);
  result = _IO_putc_unlocked (c, _IO_stdout);
  _IO_release_lock (_IO_stdout);
  return result;
}
