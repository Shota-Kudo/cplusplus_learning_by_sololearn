#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int remaind, tmp = x, rev = 0;
    while(tmp != 0){
        remaind = tmp % 10;
        rev = rev *10 + remaind;
        tmp /= 10;
    }
    if(rev == x){
        return true;
    }else{
        return false;
    }

    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
