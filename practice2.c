/*EXTRA QUESTIONS*/
#include <stdio.h>
void name(int n) {
  int x = n;
  switch (x) {
  case 1: {
    printf("One ");
    break;
  }
  case 2: {
    printf("two ");
    break;
  }
  case 3: {
    printf("three ");
    break;
  }
  case 4: {
    printf("four ");
    break;
  }
  case 5: {
    printf("five ");
    break;
  }
  case 6: {
    printf("six ");
    break;
  }
  case 7: {
    printf("seven ");
    break;
  }
  case 8: {
    printf("eight ");
    break;
  }
  case 9: {
    printf("nine ");
    break;
  }
  case 0: {
    printf("zero ");
    break;
  }
  }
}

int main() {
  int num, x, number = 0, count = 0, temp;
  printf("Enter a number");
  scanf("%d", &num);
  temp = num;
  while (temp > 0) {
    temp = temp / 10;
    count++;
  }
  int temp1 = num;
  while (temp1 != 0) {
    number = number * 10 + (temp1 % 10);
    temp1 = temp1 / 10;
  }

  for (int i = 0; i < count; i++) {
    x = number % 10;
    number = number / 10;
    name(x);
  }
  return 0;
}
