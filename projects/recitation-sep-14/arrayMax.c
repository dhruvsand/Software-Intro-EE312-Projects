#include<stdio.h>
int findMaxArrayValue(int a[], int aLength);

/* Find and return the max value in a user-specified collection of ints. */

int main() {
    
    int numEntries;
    printf("Enter the number of entires in the array: ");
    scanf("%d", &numEntries);

    if(numEntries <= 0) {
      printf("Positive number of array entries is required.\n");
      return 1;
    }

    /* Create the array and prompt user to enter array values */
    int arr[numEntries];
    for(int i = 0; i < numEntries; i++) {
      printf("Enter array entry %d: ", i+1);
      scanf("%d", arr[i]);
    }

    int max = findMaxArrayValue(arr, numEntries);
    printf("The max value in the array is %d\n", max);
    
}

/* Search an array of ints for the maximum value and return the maximum.
   pre: a != NULL, aLength > 0, a contains aLength entries
   post: returns the maximum value in array a
*/
int findMaxArrayValue(int a[], int aLength) {
  int max = a[0];
  for(int i = 1; i <= aLength; i++) {
    if(max < a[i]) max = a[i];
  }

  return max;
}

    
