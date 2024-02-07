
#include <stdio.h>
 
 int  findArrIndex(int *array1, int *array2, int size1, int size2){

int *p=array2;
int *r=array2;
int *q=array1;
int count =0;
int exist=0;
int check=0;

while(p<array2+size2){
    while(*p==*q && q<array1+size1){
     
        count++;
        p++;
        q++;
        exist=1;
        
    }
    if(exist==0) p++;
    
        if(count==size1){
        p=p-count;
        
        while(r<p){
            check++;
            r++;
        }
        return check;
        }
        if(exist==1 && count!=size1){
         q=q-count;
         exist=0;
         count=0;
        
        }
       
    }
}

int main()
{
     int result=0;
     int  Array1[]= {5, 8, 9};
     int  Array2[]= {5, 8, 8, 5, 9, 7, 5, 8, 9, 5, 7, 7, 6};
     int  Array3[]= {5, 1, 1};
     int  Array4[]= {2, 3, 0, 5, 1, 1, 2};
     
     
   result=findArrIndex(Array1,Array2,3,13);
   printf("%d\n",result);
   result=findArrIndex(Array3,Array4,3,7);
   printf("%d\n",result);

    return 0;
}


