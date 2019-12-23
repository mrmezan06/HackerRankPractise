#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main()
{
    long long a[] = {1,2,3,4,5};

    long long sum = 0;

    for(int i=0;i<5;i++){
        sum += a[i];
    }
    sort(a,a+5);
    cout<<"Min Sum:"<<sum-a[4]<<endl;
    cout<<"Max Sum:"<<sum-a[0]<<endl;

}
