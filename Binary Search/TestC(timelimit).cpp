#include <stdio.h>

//int binarySearch(long long *arr,long long left,long long right,long long find){
//	if(arr[right+1]<=find){
//		return right+2;
//	}
//	
//	while(left<=right){
//		int mid = left + (right-left)/2;
//		if(arr[mid] <=find && find < arr[mid + 1]){
//			return mid+1;
//		}else if(arr[mid]<find){
//			//kecilkan area search ke arah angka yang lebih besar
//			left = mid + 1;
//		}else{
//			//kecilan area search kita ke arah kiri/arah value yang lebih kecil
//			right = mid - 1;
//		}
//	}	
//	return -1;
//}

int findMax(long long A[],long long N,long long find){
long long total=0,length=0;
	for(int i = 0;i<N;i++){
		total += A[i];
		length++;
		if(total>find){
			length--;
			return length;
		}
	}
	if(total<=find){
		return length;
	}else{
		return -1;
	}
}

int main(){
	long long N;
	scanf("%lld",&N);
	//N = jumlah angka
	long long A[N];
	//A = angka-angka yang ada
	for(int i = 0;i<N;i++){
		scanf("%lld",&A[i]);
	}
	int T;
	scanf("%d",&T);
	//T = test case;
	long long M,hasil;
	for(int tc = 1;tc<=T;tc++){
		scanf("%lld",&M);
		//M = angka yang mau dicari
		long long hasil = findMax(A,N,M);
		printf("Case #%d: %lld\n",tc,hasil);
	}
	return 0;
}
