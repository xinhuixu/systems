#include <stdio.h>

int main() {
  int sum = 0;
  int i;
  for ( i = 0; i < 1000; i++ ) {
    if ( i % 5 == 0 || i % 3 == 0 ){
      sum += i;
    }
  }
  printf("sum: %d\n", sum);

  int sum2 = 4000000;
  printf("sum2: %d\n", sum2);
}
