#include "anagrams.h"

#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

set<string> findAnagrams(const string& word, const vector<string>& dictionary) {
  set<string> result;
  map<char, int> original;

  for(auto c : word) {
    original[c]++;
  }

  for(auto dict_word : dictionary) {
    map<char, int> variation;
    for(auto b : dict_word) {
      variation[b]++;
    }
    if(original == variation) {
      result.insert(dict_word);
    }
  }
  return result;
}

int main() {
  return 0;
}
