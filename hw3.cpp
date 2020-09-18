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


//Helper
bool DogishHelper(string word, char letter){
  if(word == "") {
    return false;
  }
  cout << word << endl;
  if(word[0] == letter) {
    ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
    return true;
  } 
  else {
    return DogishHelper(word.substr(1,word.length()), letter);
  }
}

/****
* PSEUDOCODE:
*
*/

bool InDogish(string input) {
  string key_word = "dog";
  if (input == "") {
    return false;
  }
  cout << "input: " << input << endl;
  cout << "x: " << key_word << endl;
  if (input[0] == key_word[0]) {
    cout << "Found: " << key_word[0] << endl;
    if (key_word.length() == 1) {
      return true;
    }
    else {
      return InXish(input.substr(1,input.length()),key_word.substr(1,key_word.length()));
    }
  }
  else {
    return InXish(input.substr(1,input.length()),key_word);
  }




  /*
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
  }*/
}


/****
* PSEUDOCODE:
*
*/


bool InXish(string input, string x) {
  if (input == "") {
    return false;
  }
  cout << "input: " << input << endl;
  cout << "x: " << x << endl;
  if (input[0] == x[0]) {
    cout << "Found: " << x[0] << endl;
    if (x.length() == 1) {
      return true;
    }
    else {
      return InXish(input.substr(1,input.length()),x.substr(1,x.length()));
    }
  }
  else {
    return InXish(input.substr(1,input.length()),x);
  }
}

/*
bool InXish(string input, string x) {
  int static counter = 0;
  int static x_index = 0;
  if (input == "" || x_index == x.length()) {
    counter = 0;
    x_index = 0;
    return false;
  }
  if (DogishHelper(input, x[x_index]) && counter == x_index) {
    cout << "found : " << x[x_index] << endl;
    counter++;
    x_index++;
    if (counter == x.length()) {
      counter = 0;
      x_index = 0;
      return true;
    }
    else {
      return InXish(input.substr(1,input.length()), x);
    }
  }
  else {
    counter = 0;
    x_index = 0;
    return false;
  }
}*/