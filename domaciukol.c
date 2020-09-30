#include <stdio.h>
#include <math.h>

int prvocislo(int n){
    for(int i=2;i<= n/2;i++) 
	if( (n%i)==0 ) return 0;
return 1;
}

void main()
{
	 for(int i=2;i < 100;i++)    
	 if(prvocislo(i))  
	 printf("%d ", i);
}