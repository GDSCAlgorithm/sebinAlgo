#include <iostream>
#include <algorithm>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int n=0;
cin >> n;
int arr[n];
arr[n] = {0,};

for (int i=0; i<n; i++){

cin >> arr[i];

}

sort(arr, arr+n);

for(int i=0; i<n; i++){
cout << arr[i]<<"\n";
}

return 0; 
}