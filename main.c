#include <stdio.h>

#include "main.h"
#include "sort.h"
#include "lcs.h"



int main(){
 int32_t array[10];
  uint8_t arraySize =10;
  uint8_t sizeofLCS=0;
  int c=1;
  uint8_t *ptr_sizeofLCS=&sizeofLCS;
  for (int i=0;i<4;i++){
    c= Array_userinput(array);
  if (c==0){
  insertionSort(array,arraySize);
  printArray(array,arraySize);
  }}
  c=1;
  for (int i=0;i<5;i++){
  c= Array_userinput(array);
  if (c==0){
  insertionSort(array,arraySize);
  printArray(array,arraySize);
  lcsGetSize(array,arraySize,ptr_sizeofLCS);
  }}
}
