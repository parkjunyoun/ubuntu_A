#include <stdio.h>
#include "libeod.h"

void main() {
  int x;
  printf("Input number : ");
  scanf("%d",&x);
  if(x%2 == 0){
    printf("An integer  is an even number.\n");
  }
  else {
    printf("An integer is odd.\n");
  }
}
//printf("%d + %d = %d\n", x, y, plus(x, y));
