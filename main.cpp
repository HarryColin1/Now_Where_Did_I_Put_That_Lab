#include <iostream>

#include "src/where.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    StringObj search;

    string text = "The quick brown fox";
    string letter = "e";
    string word = "quick";
    string missing = "quiet";

    cout << search.find(text, 'e') << endl;
    cout << search.find(text, letter) << endl;
    cout << search.find(text, ' ') << endl;
    cout << search.find(text, word) << endl;
    cout << search.find(text,missing) << endl;

    return 0;
}
