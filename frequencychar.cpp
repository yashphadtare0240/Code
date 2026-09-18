#include<iostream>
using namespace std;

int main(){
    string word;
    char targate;

    cout<<"Enter a word: ";
    cin>>word;

    cout<<"Charcter to get frequency: ";
    cin>>targate;

    int count = 0;

    for(int i=0; i<word.length(); i++){
        if(word[i]==targate){
            count++;
        }
    }

    cout<<"frequnecy of character is: "<<count;

    return 0;
}