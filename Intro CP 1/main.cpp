#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

// Remove Duplicates
vector<int> removeDuplicates(vector<int> input) {
    vector<int> output;
    unordered_set<int> set;
    for (int i = 0; i < input.size(); i++) {
        if (set.find(input[i]) == set.end()) {
            output.push_back(input[i]);
            set.insert(input[i]);
        }
    }
    return output;
}

// First Non repeating Character
char firstNonRepeatingCharacter(string input) {
    unordered_map<char, int> map;
    for (int i = 0; i < input.size(); i++) {
        map[input[i]]++;
    }
    for (int i = 0; i < input.size(); i++) {
        if (map[input[i]] == 0) return input[i];
    }
    return input[0];
}

int main() {
    // cout << "Hello" << endl;
    cout << firstNonRepeatingCharacter("hhwwll") << endl;
}