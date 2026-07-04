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
    // string str;
    // cout<<"Enter the string: ";
    // getline(cin, str);
    // vector<string> wordlist;
    // vector<string> uniq;
    // vector<string> uniqcount;
    
    // string word="";
    // string spas=" ";
    // for (int i=0; i<str.length(); i++){
    //     if (str[i].compare(spas)){
    //         wordlist++[word];
    //         word=""
    //     }else{
    //         word+str[i];
    //     }
    // }
    // vector<int> same(0);
    // while (wordlist.size>0){
    //     int count=0;
    //     for (int j=1; j<wordlist.size(); j++){
    //         if (wordlist[0]==wordlist[j]){
    //             count++;
    //             same.push_back(j);
    //         }
    //     }
    //     uniq.push_back(wordlist(0));
    //     uniqcount.push_back(count);
    //     for (int i=0, i<same.size(); i++){
    //         wordlist.erase(wordlist.begin()+same[i]);
    //     }
    //     same.clear();
    // }
    // int max=0;
    // int maxind;
    // for (int i=0; i<uniqcount.size(); i++){
    //     if (uniqcount[i]>max){
    //         max=uniqcount[i];
    //         maxind=i;
    //     }
    // }
    // cout<<uniq[maxind]<<" with the highest frequency of "<<max;


    //find a string within another string and return every initial index of occurence and the frequency
    // string str;
    // string findst;
    // cout<<"Enter the bigger string : ";
    // getline(cin, str);
    // cout<<"Enter the string the find: ";
    // getline(cin, findst);
    // int stlen=str.length();
    // int fslen=findst.length();
    // vector<int> indices;
    // for (int i=0; i<=stlen-fslen; i++){
    //     bool isstr=true;
    //     for (int j=0; j<=fslen-1; j++){
    //         if (str[j+i]!=findst[j]){
    //             isstr=false;
    //         }
    //     }
    //     if (isstr==true){
    //         indices.push_back(i);
    //     }
    // }
    // int freq=indices.size();
    // for (int k=0; k<freq; k++){
    //     cout<<indices[k]<<" ";
    // }
    // cout<<endl<<freq;

    string str;
	cin>>str;
	int n=str.size();
	bool amp=false, hash=false;
	for (int i=0; i<n; i++){
	    if (str[i]=='&'){
	        amp=true;
	    }else if (str[i]=='#'){
	        hash=true;
	    }
        // if(amp==true && hash==true){
        //     break;
        // }
	}
	if (amp==true && hash==true && n%2==0){
	    cout<<"yes";
	}else{
	    cout<<"no";
	}

    return 0;
}
