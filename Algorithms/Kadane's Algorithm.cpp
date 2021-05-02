int maxSubarraySum(int n, int a[]) {

    int ans = 0, curr = 0;

    for(int i=0;i<n;i++){
        curr = max(a[i],curr+a[i]);
        ans = max(ans,curr);
    }

    return curr;
}
