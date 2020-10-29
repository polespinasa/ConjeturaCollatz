#include<iostream>
int main(){
	int n, a=1, r, b=0, c;
	for(; a<=10E+4; a++){
		n = a;
		for(r=0; n!=1; r++)
			(n%2 == 0)? (n /= 2):(n = 3*n+1);
		if(b < r){
			b = r;
			c = a;
		}
	}
	std::cout<<c;
return 0;
}
