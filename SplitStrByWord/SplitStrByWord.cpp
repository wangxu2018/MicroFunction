#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#include "SplitStrByWord.h"

using std::stringstream;

vector<string> SplitStrByWord(string strs, char splitWord)
{
    string strTemp;
    stringstream ss(strs);

    std::vector<std::string> res;
    while(getline(ss, strTemp, splitWord)) {
        if (strTemp.empty()) { continue; }
        res.push_back(strTemp);
    }

    return res;
}
