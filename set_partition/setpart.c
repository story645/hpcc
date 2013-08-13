/**
Hannah Aizenman
10/13/2013

Set Partition Solution
 **/

#include <stdio.h>

MAX_P = 7;

int main(){

  //open subset file
  char filename[256];
  for(int i = 1; i<MAX_P; i++){
    sprintf(filename, "sets/p%d",i);
    printf("%s%n",filename);
  }
  
  //call partition function

  //assert that sort(Union(partitions))==sort(file)
  
  return 0;
}
