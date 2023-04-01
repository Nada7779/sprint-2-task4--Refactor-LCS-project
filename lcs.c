#include "main.h"
#include "sort.h"
#include "lcs.h"

/* Description:
 * - This function takes a reference to an array,
 * - array size, and
 * - reference to store the size of the LCS
 * - Using the insertion sort algorithm
 * - The function will search for the LCS in the array and
 * - stores its size*/
int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS){
int counter=0;
*sizeofLCS=0;
for (int i=0;i<10;i++){
    int k=array[i]+1;
    if (array[i+1]==k){
     counter++;
     if (counter>*sizeofLCS)
     *sizeofLCS=*sizeofLCS+1;
    }
   else counter=0;
}
if (*sizeofLCS>0) {*sizeofLCS=*sizeofLCS+1; printf("LCS equal: %d\n",*sizeofLCS);}
if (arraySize==0) return-1;
else if (arraySize==0||arraySize>10) {printf("Array size out of range\n"); return -2;}
else if (*sizeofLCS==0) {printf("There is no Consecutive Subsequence\n"); return -3;}
else return 0;
}
