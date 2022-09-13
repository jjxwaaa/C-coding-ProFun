#include <stdio.h>


int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

int main() {
   int n = 10;
   int a[] = {0,6,7,2,7,7,6,9,4,1};

   printf("Mode = %d ", mode(a,n));

   return 0;
}