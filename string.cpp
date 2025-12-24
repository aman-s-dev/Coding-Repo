#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
int main(){
    // string str="One Piece";
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.at(6)<<endl;
    // str.append("luffy");
    // string str2=str+"Zoro";
    // cout<<str2<<endl;
    // string sub = str.substr(4,3);
    // cout<<str.find(sub)<<endl;
    // str.replace(3,4,3,'@');
    // cout<<str<<endl;
    // str.insert(5,"roger");
    // cout<<str<<endl;
    // str.erase(3,3);
    // cout<<str<<endl;
    // cout<<*(str.begin());

    // find the most frequent word in a sentence

    //find a string within another string and return every initial index of occurence and the frequency
    string str;
    string findst;
    cout<<"Enter the bigger string : ";
    getline(cin, str);
    cout<<"Enter the string the find: ";
    getline(cin, findst);
    int stlen=str.length();
    int fslen=findst.length();
    vector<int> indices;
    for (int i=0; i<=stlen-fslen; i++){
        bool isstr=true;
        for (int j=0; j<=fslen-1; j++){
            if (str[j+i]!=findst[j]){
                isstr=false;
            }
        }
        if (isstr==true){
            indices.push_back(i);
        }
    }
    int freq=indices.size();
    for (int k=0; k<freq; k++){
        cout<<indices[k]<<" ";
    }
    cout<<endl<<freq;

    return 0;
}
