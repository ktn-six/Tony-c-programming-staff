/* write a program the print the following numbers in reverse order;
 *34 56 54 32 67 89 90 32 21
 *assume that all these number are store an an array.
 */

 #include <stdio.h>

 int main()
 {
     int i;
     int arr[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
     printf("Array in normal order:");
     for(i=0; i<9; i++)
     {
         printf(" %d", arr[i]);
     }
     printf("\n\nArray in reverse order:");
     for(i=8; i>=0; i--)
     {
        printf(" %d", arr[i]);
     }
      return 0;
 }
