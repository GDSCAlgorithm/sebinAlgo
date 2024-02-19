#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int prime [n+1];
    for(int i=2; i<=n; i++){
        prime[i]=i;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(prime[i]==0)
            continue;
        // i*k (k<i) 까지의 수는 이미 검사했으므로 j는 i*i 부터 검사해준다.
        for (int j = i * i; j <= n; j += i)
        { prime[j] = 0;}
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] != 0)
          answer++;
    }
    
    return answer;
}