#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int input,output,temp,temp2,powtemp;
  int a=0;
  cin>>input;
  while(input!=0){
    powtemp=pow(10,a+1);
    temp=input%powtemp;
    temp2=temp/pow(10,a)*pow(8,a);
    output=output+temp2;
    input=input-temp;
    a++;
    };
  cout<<output;
}