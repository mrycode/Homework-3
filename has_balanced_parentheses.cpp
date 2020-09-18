#include "has_balanced_parentheses.h"

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