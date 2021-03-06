#include "in_dogish.h"

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



bool InDogish(string input) {
  int static counter = 0;
  if (input == "") {
    counter = 0;
    return false;
  }
  if (input[0] == 'd' && counter == 0) {
    counter += 1;
    return InDogish(input.substr(1,input.length()));
  } 
  else if (input[0] == 'o' && counter == 1) {
    counter += 1;
    return InDogish(input.substr(1,input.length()));
  }
  else if (input[0] == 'g' && counter == 2) {
    counter = 0;
    return true;
  }
  else {
    return InDogish(input.substr(1,input.length()));
  }
}



bool InXish(string input, string x) {
  int static x_index = 0;
  if (input == "" || x_index == x.length()) {
    x_index = 0;
    return false;
  }
  if (DogishHelper(input, x[x_index])) {
    cout << "found : " << x[x_index] << endl;
    x_index++;
    if (x_index+1 == x.length()) {
      x_index = 0;
      return true;
    }
    else {
      return InXish(input.substr(1,input.length()), x);
    }
  }
  else {
    x_index = 0;
    return false;
  }
}