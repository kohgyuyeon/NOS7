#include <stdio.h>
main(){
  int i,j;

  
  for(j=1; j<20; j++){
    for(i=1; i<20; i++){
      printf("%d * %d = %d\n",j, i, i*j);
    }
    
  }
}