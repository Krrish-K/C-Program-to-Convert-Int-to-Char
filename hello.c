//C program to print largest number in an array
#include<stdio.h>

int main (){
  int a[100],i,size,maximum;

  printf("Enter size of array : ");
  scanf("%d",&size);

  printf("Enter %d element : ", size); 
  for(int i=0;i<size;++i){
    scanf("%d",&a[i]);
  }

  maximum = a[0];

  for(i=1;i<size;++i){
    if(a[i]>maximum){
       maximum = a[i];
    }
  }

  printf("Maximum value of array: %d\n",maximum);
  return 0;
}

