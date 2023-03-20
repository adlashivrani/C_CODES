#include<stdio.h>
#include<string.h>

void mem_move(void *dest, void *src, int size);
void print_elements(char *array, int size);

int main(int argc, char* argv[])
{
  char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  print_elements(c_array, sizeof(c_array));
  printf("After memmove()\n");
  memcpy((void *)&c_array[5], (void *)&c_array[3], 5);
  print_elements(c_array, sizeof(c_array));
}

void mem_move(void *dest, void *src, int size)
{
  int i;
  if (dest < src) {
    for (i = 0; i < size; i++) {
      ((char *)dest)[i] = ((char *)src)[i];
    }
  } else {
    for (i = size - 1; i >= 0; i--) {
      ((char *)dest)[i] = ((char *)src)[i];
    }
  }
}

void print_elements(char *array, int size)
{
  int i;
  printf ("Elements : ");
  for (i = 0; i < size; i++) {
    printf ("%c, ", array[i]);
  }
  printf (" ");
}
