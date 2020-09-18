#include <iostream>
#include <string>
//#include "reversearray.h"
//#include "has_balanced_parentheses.h"
#include "in_dogish.h"
//#include "hw3.h"

using namespace std;

int main() {
  /*
  //Test ReverseArray();

  int arr[] = { 1, 2, 3, 4, 5 };
  int n = sizeof(arr)/sizeof(arr[0]);
  ReverseArray(arr, n);
  
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
cout << endl << endl;*/

/*Test HasBalancedParentheses();
 string statement1 = "((())())";
 statement1 = "(((()()((())))())())";
 //cout << HasBalancedParentheses(statement1) << endl;
 
 bool test = HasBalancedParentheses(statement1);

 if (test){
   	cout << "Is it Ballanced: Yes" << endl;
 }
 else if (!test) {
   cout << "Is it Ballanced: No" << endl;
 }
 cout << endl << endl;*/
 

// Test InDogish();
 string mydogs = "dpoags";

 //cout << InDogish(mydogs) << endl;
 mydogs = "gsjhdso";
 /*If(InDogish(mydogs)){
   	cout << "Part of Dogish? " << endl;
 }*/
 
 //cout << InDogish(mydogs) << endl;
 //cout << InDogish(mydogs) << endl;
 cout << InXish("mayddfosgfs", "mydogs") << endl;
 
 //cout << mydogs.substr(1,mydogs.length()) << endl;
 // Test bool InXish(sting mytext, sting myword);
}