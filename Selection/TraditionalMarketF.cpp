#include <stdio.h>

int main(){
    long long d,s,t;
        scanf("%lld %lld %lld", &d, &s, &t);
        if(d!=s && s!=t && d!=t){
        if(d>t && d>s){
        if(s>t){
            printf("Daging\n");         
            printf("Sayur\n");
            printf("Telur\n");
			}else{
            printf("Daging\n");            
            printf("Telur\n");         
		    printf("Sayur\n");
			}
		} else if(s>d && s>t){
			if(d>t){
            printf("Sayur\n");         
            printf("Daging\n");
            printf("Telur\n");
			}else if(t>s){
            printf("Daging\n");            
            printf("Telur\n");         
		    printf("Sayur\n");
			}
		}
		else if(t>d && t>s){
			if(d>s){
            printf("Telur\n");         
            printf("Daging\n");
            printf("Sayur\n");
			}else if(s>d){
            printf("Telur\n");            
            printf("Sayur\n");         
		    printf("Daging\n");
			}
		}
    }
return 0;
}
