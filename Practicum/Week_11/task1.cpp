#include <iostream>
//index = 0; open = 0; opentotal = 0;
void genBrackets(char* currentExpression,size_t n,size_t index, size_t open, size_t opentotal){
    if(index == n){std::cout<<currentExpression<<std::endl;return;}
    if(opentotal < n/2){//можем да сложим (
        currentExpression[index] = '(';
        genBrackets(currentExpression,n,index+1,open+1,opentotal+1);
    }
    if(open > 0){//можем да сложим )
        currentExpression[index] = ')';
        genBrackets(currentExpression,n,index+1,open-1,opentotal);
    }
}

int binSearch(const int* arr,int x, size_t l, size_t r){
    if(l>r)return -1;
    int m = (l+r)/2;
    if(arr[m] == x) return m;
    else if(arr[m]>x) return binSearch(arr,x, l, m-1);
    else return binSearch(arr,x, m+1, r);
}

size_t strlen(const char* str){
    if(str[0] == '\0')return 0;
    return strlen(str+1)+1;
}

int strcmp(const char* str1,const char* str2){
    if(str1[0] != str2[0]){
        return str1[0] - str2[0];
    }
    if(str1[0] == '\0'){
        return 0;
    }
    return strcmp(str1+1,str2+1);
}

int GCD(int a, int b){
    if(a == 0)return b;
    if(b == 0) return a;
    return GCD(b,a%b);
}

size_t sumOfDigits(int a){
    if(a==0)return 0;
   return sumOfDigits(a/10) + a%10;
}

bool isLetterUpper(char c){
    return c>='A' && c<='Z';
}

bool isLetterLower(char c){
    return c>='a' && c<='z';

}

size_t countLetters(const char* str){
    if(str[0] == '\0')return 0;
    if(isLetterLower(str[0]) || isLetterUpper(str[0]))
        return countLetters(str+1)+1;
    return countLetters(str+1);
}

unsigned int reverse(unsigned int x, unsigned int total){
    if(x == 0)return total;
    total*=10;
    total+=(x%10);
    return reverse(x/10,total);
}

unsigned int reverse(unsigned int x){
    return reverse(x,0);
}

bool containDigitInUtil(unsigned int n, unsigned int x){ // гарантирано ни е, че n != x
    if( n == 0)return false;
    if(n%10 == x) return true;
    return containDigitInUtil(n/10,x);
}
bool containDigitIn(unsigned int n, unsigned int x){
    return n == x || containDigitInUtil(n,x);
}

int main(){
    char arr[15]="Hello world!";
    char arr2[15]="Hello world!";
    int arr3[10]={1,2,3,4,5,6,7,8,9,10};
    // std::cout<<strcmp(arr,arr2);
    // std::cout<<GCD(8,12);
    // std::cout<<sumOfDigits(123456);
    int n;
    std::cin>>n;
    if(n%2!=0){
        std::cout<<"Invalid size"<<std::endl;
        return 1;
    }
    char *brackets = new char[n+1] ;
    brackets[n] = 0;
    genBrackets(brackets,n,0,0,0);
}