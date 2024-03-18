#include <stdio.h>
long long findMax(long long *A, long long left, long long right, long long find){
	if(A[right+1] <= find){
		return right+2;
	}
	while(left <= right){
		long long mid = left + (right - left)/2;

		if(A[mid] <= find && find < A[mid + 1]){
			return mid+1;
		}else if(A[mid] < find){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	return -1;
}
long long findMax1(long long A[], long long N, long long M) {
    long long find = M;
    long long length = 0;
    long long total = 0;

    for (int i = 0; i < N; i++) {
        total += A[i];

        if (total <= M && M - total <= find) {
            find = M - total;
            length = i+1;
        }
    }
    if(length>0){
    	return length;
	}else{
		return -1;
	}
}

int main() {
    long long N;
	scanf("%lld",&N);
	//N = jumlah angka
	long long A[N];
	//A = angka-angka yang ada
	for(int i = 0;i<N;i++){
		scanf("%lld",&A[i]);
		if(i!=0){
			A[i] = A[i]+A[i-1];
		}
	}
    // Input number of test cases
    int T;
	scanf("%d",&T);
	//T = test case;
	long long M;
    for(int tc = 1;tc<=T;tc++){
		scanf("%lld",&M);
		//M = angka yang mau dicari
		long long hasil = findMax(A,0,N-2,M);
		printf("Case #%d: %lld\n",tc,hasil);
	}
    return 0;
}

