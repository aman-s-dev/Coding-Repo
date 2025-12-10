#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
int main(){
    // string str="One Piece";
    // cout<<str.length();
    // string sub = str.substr(4,3);
    // cout<<str.find(sub);
    // str.erase(3,3);
    // cout<<str;

    // find the word in a line with greatest repetition
    string line, w; //to separate words
    getline(cin, line);

    // Store the string line
    // into stringstream ss
    stringstream ss(line);
    vector<string> strlist;

    while (getline(ss, w, ' ')){
        strlist.push_back(w);
    }
    cout<<*max_element(strlist.begin(),strlist.end());


    return 0;
}
