#include <iostream>
using namespace std;
int main() {
    int K, N;
    scanf("%d %d", &K, &N);
    long long lan[K], max=0, sum=0;
    for(int i=0; i<K; i++){
        scanf("%lld", &lan[i]);
        sum+=lan[i];
        if(lan[i]>max)
            max=lan[i];
    }
    long long cnt, low=0, high=max, mid, ans=0;
    while(low<=high){
        mid=(low+high)/2;
        if(mid<1)
            mid=1;
        if(sum/mid<N){
            high=mid-1;
            continue;
        }
        cnt=0;
        for(int i=0; i<K; i++){
            if(lan[i]/mid>=1){
                cnt+=lan[i]/mid;
            }
        }
        if(cnt>=N){
            if(mid>ans)
                ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    printf("%lld", ans);
    return 0;
}
