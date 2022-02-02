#include <iostream>
#include <algorithm>

#include "SplitStrByWord.h"

using namespace std;

int main ()
{
    string str = "hello world, i am man haha";
    
    vector<string> res = SplitStrByWord(str, ' ');
    
    for_each(res.begin(), res.end(), [](const string &str){ cout << str << endl; });
}
