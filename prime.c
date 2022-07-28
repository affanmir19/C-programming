#include <stdio.h> 
// a number that is divisible only by itself
int main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }
  if (c == 2) {
        printf("It is a prime number");
  }
  else {
         printf("It is a composite number");
  }
  return 0;
}  
