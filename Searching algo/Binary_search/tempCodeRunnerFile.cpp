int squreRoot(int x){
    if(x < 0) {
        return -1;
    }

    int ans = 0;
    for(long long int i = 0; i *i <= x; i++){
        ans = i;
    }
    return ans;
}