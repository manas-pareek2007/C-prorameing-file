#include<stdio.h>
//using namespace std;
int main()
{
    int a[3][4]={{1,2,3,4}, //0
                {4,5,-60,7}, //1
                {7,8,99,100}}; //2

//min 1 max 10
 int i,j;
int count=0;
int key;
printf("enter number for search...\n");
scanf("%d",&key);
 for(i=0;i<3;i++){

    for(j=0;j<4;j++){

       if(key==a[i][j]){
            printf("element found....\n");

count++;
       }



    }


 }

 if(count==0){

    printf("not found....\n");
 }

// printf("min =%d max=%d",min,max);

}
