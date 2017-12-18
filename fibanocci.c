#include <stdio.h>

int main() {
	int a=0;
	int b=1;
	printf("%d %d ",a,b);
	int c;
    int n	;
    n=4;

	for(int i=0;i<n;i++)
	    {
	       c=a+b;
        	a=b;
        	b=c;
        	printf("%d ",c);
	 
	    }
	
	return 0;
}
