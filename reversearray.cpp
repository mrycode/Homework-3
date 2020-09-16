#include "reversearray.h"

/****
* PSEUDOCODE:
*
*/


void ReverseArray(int *arr, int length) {
  int copy_array [length];
  for (int copy_index = 0; copy_index < length; copy_index++) {
    copy_array[copy_index] = arr[copy_index];
  }
  
  for (int output_index = length - 1; output_index >= 0; output_index--) {
    arr[(length-1) - output_index] = copy_array[output_index];
  }
}