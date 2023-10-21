#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

map< string,  string> wordToDigit = {
    {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}, {"double", ""}, {"triple", ""}};

vector<string> splitString(const  string& str) {
   istringstream iss(str);
   vector<string> tokens;
    do {
         string word;
        iss >> word;
        tokens.push_back(word);
    } while (iss);
    return tokens;
}

 string convertPhoneNumber(const  string& input) {
     vector< string> words = splitString(input);
     string result = "";
    int count = 1;
    for (size_t i = 0; i < words.size(); ++i) {
         string word = words[i];
        // int count = 1;
        if (word == "triple") {
            count = 3;
            continue;
        } else if (word == "double") {
            count = 2;
            continue;
        }

         string digit = wordToDigit[word];

        int b = false;
        if (count == 1) {
            result += digit;
        } else if (count == 2) {
            result += digit;
            result += digit;
            count = 1;
        } else if (count == 3) {
            result += digit;
            result += digit;
            result += digit;
            count = 1;
        }

        // result +=  string(count - 1, digit[0]);
    }

    return result;
}

int main() {
     string input = "five one zero six eight nine six double four";
     string output = convertPhoneNumber(input);
     cout << "Output: " << output <<  endl;  // Output: "5106888964"
    return 0;
}
