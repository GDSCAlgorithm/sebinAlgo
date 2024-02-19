#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0; i<s.size(); i++){
    if(s[i]==' '){
            answer.push_back(' ');
            continue;
    }
    if(s[i]>96){
        if(s[i]+n>122){
            answer.push_back(s[i]+n-26);
        }
        else{
            answer.push_back(s[i]+n);
        }
    }
    else {
        if(s[i]+n>90){
            answer.push_back(s[i]+n-26);
        }
        else{
            answer.push_back(s[i]+n);
        }
    }
    }
    return answer;
}