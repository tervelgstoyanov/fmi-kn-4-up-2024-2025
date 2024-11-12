#include <iostream>
#include <string.h>

using namespace std;

bool isLetter(char ch){
    return (ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z');
}

bool isVowel(char ch){
    if(!isLetter(ch))return false;
    switch (ch){
        case 'a':case 'u':case 'i':
        case 'o':case 'e':case 'y':
        case 'A':case 'U':case 'I': 
        case 'O': case 'E': case 'Y': return true;
     };
    return false;
}

void count(const char str[]){
    size_t n = strlen(str);
    int charCounts[256]{0,};
    int volews=0, letters=0, word=0,symbols =0 ; 
    int maxLengthWord = 0, currentWordLength = 0;    
    for(int i=0;i<n;i++){
        if(isLetter(str[i])){
            letters++;
            currentWordLength ++;
            if(isVowel(str[i])){
                volews++;
            }
            charCounts[(unsigned char)str[i]] ++;

        }
        else if(str[i]==' '){
            word++;
            if(currentWordLength > maxLengthWord)
                maxLengthWord = currentWordLength;
            currentWordLength = 0;
        }
        else{
            if(currentWordLength > maxLengthWord)
                maxLengthWord = currentWordLength;
            currentWordLength = 0;
            charCounts[(unsigned char)str[i]] ++;
            symbols++;
        }
    }
    if(currentWordLength > maxLengthWord)
        maxLengthWord = currentWordLength;
    int maxcharOccurences=0;
    char maxChar;
    for(int i=0;i<256;i++){
        if(maxcharOccurences < charCounts[i]){
            maxcharOccurences = charCounts[i];
            maxChar = (char)i;
        }
    }
    word = word ? word+1 : word;

    cout<<"Vowels: "<<volews<<endl;
    cout<<"Consonants: "<< letters - volews<<endl;
    cout<<"Symbol: "<<symbols<<endl;
    cout<<"Words: "<<word<<endl;
    cout<<"Longest word: "<<maxLengthWord<<endl;
    cout<<"Most common symbol: "<< maxcharOccurences << " "<< maxChar <<endl;
}

int main(){
    char ch[256] = "To be or not to be, that is the question.";
    count(ch);

}