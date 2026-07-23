#include<iostream>
#include<string>
using namespace std;

bool isAna(string str1, string str2){
    int count[26] = {0};
    if(str1.length() != str2.length()){
        cout<<"Not anagram";
        return false;
    }

    for(int i = 0; i < str2.length(); i++){
        count[str1[i] - 'a']++;
    }

    for(int i = 0; i < str2.length(); i++){
        if(count[str2[i] - 'a'] == 0){
            cout<<"Not anagram";    
            return false;
        }
        count[str2[i] - 'a']--;
    }

    cout<<"anagram";
    return true;
    
}

int main(){

    string str1 = "anagram";
    string str2 = "nagaram";

    isAna(str1, str2);
    
    return 0;
}