#include <iostream>
#include <string>
using namespace std;
int main() {
string i;
int num1 = 0,num2 = 0,num3 = 0 , numtotal = 0,math1 = 0, math2 = 0;
cout<<"請輸算數字1:";
cin>>math1;
cout<<"請輸入運算符號:";
cin>>i;
cout<<"請輸入數字2:";
cin>>math2;

while (math1 >= 1){
 math1 -=1;
 num1++;
}

while (math2 >= 1){
  math2-=1;
  num2++;
}
for(int a=0 ; a< i[a];a++){
  char numa= i[a];
  if(i[a]== '+'|| i[a]=='-'|| i[a]=='*'||i[a=='/']){
  i=i[a];
  }

if (i[a] == '+'){
cout<<num1+ num2;
numtotal= num1+ num2;
}
else if (i[a]=='-'){
  cout<<num1 - num2;
  numtotal = num1 -num2;
}
else if (i[a]=='*'){
  cout<<num1 * num2;
  numtotal = num1* num2;
}
else if (i[a]=='/'){
  cout<<num1 / num2;
  numtotal = num1 / num2;
}
if (numtotal%3==0){
  cout<<"是三的倍數";
}
else {
  cout<<"不是三的倍數";
}
}
}
