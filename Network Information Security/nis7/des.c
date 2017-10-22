/*use other two files 

//encryption
for(i=1 to 16)
{
	l(i) = r(i-1);
	r(i) = l(i-1) (+) f( r(i-1), k(i))	
}

l16 , r16 => cipher text
*/

#include <stdio.h>
#include <stdlib.h>

main(){
	// get key from other files
	int i;
	for(i=0;i<16;i++){
		L[i]=R[i-1];
		R[i]=L[i-1] XOR fun(R[i-1],key[i]);
	}
}

