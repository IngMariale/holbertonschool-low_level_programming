#include "main.h"
#include <unistd.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: file name
* @letters: number letter readed and printed
* Return: number could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
  int o, r, w;

  o = open(filename, O_RDONLY);

  if (o == -1)
    {
      return (0);
    }
  
  r = read(o, filename, letters);

  if (r == -1)
    {
      return (0);
    }
  
  w = write(1, filename, letters);

  if (w == -1)
  {
    return (0);
  }
  
  close(o);

  return (letters);
}
