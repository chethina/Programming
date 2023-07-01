#include <stdio.h>
int main() {
  int i;
  int c;

  puts("Enter the number you want to start counting with?");
  scanf("%i", &i);

  puts("Enter the number you want to stop counting with?");
  scanf("%i", &c);

  puts("Type Start...");
  scanf("%s");

  while (i <= c) {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}