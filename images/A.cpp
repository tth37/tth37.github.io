#include<bits/stdc++.h>
using namespace std;

int a[300005];
int N;

bool check(int k){
    for(register int i=1;i+k<=N;++i){
        if(a[i]!=a[i+k]) return true;
    }
    return false;
}

int main(){
    scanf("%d",&N);
    for(register int i=1;i<=N;++i){
        scanf("%d",&a[i]);
    }
    int l=1,r=N;
    while(l<r-1){
        int mid=(l+r)>>1;
        if(check(mid))
            l=mid;
        else r=mid-1;
    }
    printf("%d",l);
    return 0;
}
