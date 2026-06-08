#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {

    if (s.length() != t.length()) {
        return false;
    }

    unordered_map<char, int> countS;
    unordered_map<char, int> countT;

    for (int i = 0; i < s.length(); i++) {
        countS[s[i]]++;
        countT[t[i]]++;
    }

    return countS == countT;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
        cout << "Valid Anagram" << endl;
    else
        cout << "Not An Anagram" << endl;

    return 0;
}