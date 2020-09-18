#include "hw3.h"

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



/****
* PSEUDOCODE:
*
*/

bool HasBalancedParentheses(string input) {
  vector<int> balance_vector (0);
  if (input == "") {
    return true;
  }
  for (int string_index = 0; string_index < input.length(); string_index++) {
    if (input[string_index] == '(') {
      balance_vector.push_back('(');
    }
    else if (input[string_index] == ')' && !balance_vector.empty()) {
      balance_vector.pop_back();
    }
    else if (input[string_index] == ')' && balance_vector.empty()) {
      return false;
    }

    if (string_index == input.length() - 1 && balance_vector.empty()) {
      return true;
    }
  }
  return false;
}



/****
* PSEUDOCODE:
*
*/

bool InDogish(string input) {
  bool static d = false;
  bool static o = false;
  bool static g = false;
  if (input == "") {
    d = o = g = false;
    return false;
  }
  if (input[0] == 'd' && o == false && g == false) {
    d = true;
    return InDogish(input.substr(1,input.length()));
  } 
  else if (input[0] == 'o' && d == true && g == false) {
    o = true;
    return InDogish(input.substr(1,input.length()));
  }
  else if (input[0] == 'g' && o == true && d == true) {
    d = o = g = false;
    return true;
  }
  else {
    return InDogish(input.substr(1,input.length()));
  }
}