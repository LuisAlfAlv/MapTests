#include <map>
#include <set>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// TODO student: update signature
/**
 * Returns a new map that is the "reversal" of the given map `m`.
 * For example, the map `{{"key", "value"}}` would be reversed to the map
 * `{{"value", "key"}}`.
 */
map<string, set<string>> reverseMap(map<string, string> m) {
  map<string, set<string>> r;
  for (const auto& [key, value]: m ){
      r[value].emplace(key);
  }
  return r;
}

int main() {
  // Because you're changing the signature, we don't have tests for this
  // function. Instead, update this example to demonstrate that your function
  // works as intended!
  map<string, string> example = {
      {"key", "value"},
      {"key 2", "value 2"},
  };
  map<string, set<string>> f = reverseMap(example);
  for(const auto& [key, value]: f ) {
    cout << key << ":";
    for(auto& x : value) {
      cout << x << endl;
    }
  }
}
