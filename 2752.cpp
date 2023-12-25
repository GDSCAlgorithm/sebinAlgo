#include <iostream>

using namespace std;

int main (){
//브론즈 4니깐 stl안써야 양심에 안찔리겠지

int a,b,c;


cin >>a>>b>>c;


int lv1, lv2, lv3;

if(a>b && a>c){
lv3=a;
if(b>c)
{lv2 = b;
lv1 = c;
}
else
{lv2 = c;
lv1 = b;}
}
else if(b>a && b>c){
lv3=b;
if(a>c)
{lv2 = a;
lv1 = c;
}
else
{lv2 = c;
lv1 = a;}
}

else{
lv3=c;
if(b>a)
{lv2 = b;
lv1 = a;
}
else
{lv2 = a;
lv1 = b;}
}

cout << lv1 <<" "<< lv2<< " "<<lv3;
return 0;
}