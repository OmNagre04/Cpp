#include<iostream>
using namespace std;

void upper(char ch[], int n){
    for(int i = 0; i < n; i++){
        if(ch[i] <= 'Z' && 'A' <= ch[i]){
            continue;
        } else{
            int val = ch[i] - 'a';
            ch[i] = 'A' + val;
        }
    }
    cout<<ch;
}

void reverse(char ch[], int n){
    int start = 0, end = n - 1;

    while(start <= end){
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
    cout<<ch<<endl;
}

void palindrome(char word[], int n){
    int start = 0, end = n - 1;
    while(start <= end){
        if(word[start++] == word[end--]){
            continue;
        } else{
            cout<<"Not a palindrome";
            break;
        }
    }
}

int main(){

    char ch[] = "ApPle";

    upper(ch, 5);
    cout<<endl;
    reverse(ch, 5);

    char word[] = "racecard";
    palindrome(word, 8);
    return 0;
}