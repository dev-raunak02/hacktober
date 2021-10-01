int firstBadVersion(int n) {
        long long l = 0, r = n, fbv;
        long long mid;
        while(l<=r){
            mid = (l+r) >> 1;
            if(isBadVersion(mid)){
                fbv = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return fbv;
    }
