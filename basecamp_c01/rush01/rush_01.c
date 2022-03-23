#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Funções permitidas, write, malloc e free;


int main()
{
  static char *strings[] = {
      "this is string one",
      "this is string two",
      "this is string three",
   };
const int string_no = (int*) ( sizeof strings );
const int string_no2 = (int*) (sizeof strings[0]);

printf("%p\n", strings);
printf("%p\n", strings[0]);

}
