#include<iostream>
#include<cstring>
using namespace std;

const char hex_string[17] = "0123456789ABCDEF";
void decToHex(long long x){
    if(x == 0) return;
    decToHex(x/16);
    cout << hex_string[x%16];
}

int main(){
  long long x;
  cin >> x;
  //This is the best way if you're not cover all case; LoL :)) 
  if(x==0) cout << 0;
  else
  decToHex(x);
}
