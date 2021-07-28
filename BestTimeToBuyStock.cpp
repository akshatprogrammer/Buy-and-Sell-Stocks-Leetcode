#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prices[n];
   // int fake[n];
    int mini;
    int flag_mini=0;
    for(int i=0;i<n;i++){
        cin >> prices[i];
     //   fake[i] = prices[i];
    }
    mini = prices[0];
    for(int i=0;i<n;i++){
        if(prices[i]<mini){
            mini=prices[i];
            flag_mini=i;
        }
    }
    if(flag_mini == n-1){
        cout << "0" << endl;
        exit(-1);

    }
    int maxi=mini;
    int flag_maxi=0;
    for(int i=flag_mini;i<n;i++){
        if(prices[i]>maxi){
            maxi = prices[i];
            flag_maxi=i;
        }
    }

    cout << prices[flag_maxi]-prices[flag_mini] << endl;



return 0;
}
