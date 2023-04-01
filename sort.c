#include "main.h"
#include "sort.h"


/**********************************************************************
/* Description:
 * - This function takes a reference to an array of integers
 * - Sorts the array in ascending order
 * - Using the insertion sort algorithm*/
int8_t insertionSort(int32_t *array, uint8_t arraySize){
    int32_t temp;
    int32_t prev;
    if (array==NULL) {
            printf("Empty array\n");
            return -1;}
    else if (arraySize==0||arraySize>10) {printf("Array size out of range\n"); return -2;}

    else {
        for (int i=1;i<arraySize;i++){
        temp =array[i];
        prev= i - 1;
        while (temp < array[prev] && prev >= 0) {
          array[prev + 1] = array[prev];
          --prev;
        }
        array[prev+1] = temp;
    }
    return 0;}

}//returns -1 if the array is empty- returns -2 if the array size is 0 or >10- returns 0 if sorting is done without errors
/* Description:
 * - This function takes a reference to an array of integers
 * - Prints all array elements
 * Return:
 * - Nothing to return
 */
void printArray(int32_t *array, uint8_t arraySize){
for (int i = 0; i < arraySize; i++) {
  printf("%d, ", array[i]);
  }
printf("\n");
}
/*Description:
* - This function asks user for array elements
*/
int Array_userinput(int32_t *array){
printf("\nEnter array elements:");
char x='m';
fflush(stdin);
scanf("%c",&x);
if (x=='\n') {printf("Empty array\n"); return 1;}
else{
array[0]=x-48;
for(int i=1;i<10;i++){
    scanf("%d",&array[i]);
}
scanf("%c",&x);
if (x!='\n') {printf("Array is out of range\n"); return 1;}
fflush(stdin);
    return 0;}
}


