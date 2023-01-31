#include <stdio.h>
#include <math.h>

void reduce_to_squares(int n, int m) {
  while (n > 0 && m > 0) {
    int side = (int)fmin(n, m);
    for (int i = 0; i < (n / side) * (m / side); i++) {
      printf("%dx%d, ", side, side);
    }

    int remainder =  (int)fmax(n, m)% side;
    n = side;
    m = remainder;
  }
}

int main() {
  int n, m;
  printf("Enter the length of the rectangle: ");
  scanf("%d", &n);
  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &m);
  printf("Series of largest squares that can be made inside the rectangle: ");
  reduce_to_squares(n, m);
  printf("\n");
  return 0;
}
