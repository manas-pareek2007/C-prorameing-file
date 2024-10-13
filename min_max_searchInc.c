#include<stdio.h>
//using namespace std;
int main()
{
    int a[3][4]={{1,2,3,4}, //0
                {4,5,-60,7}, //1
                {7,8,99,100}}; //2

//min 1 max 10
 int i,j;

int min=a[0][0];
int max=a[0][0];
 for(i=0;i<3;i++){

    for(j=0;j<4;j++){

       if(min>a[i][j]){

        min=a[i][j];
       }
        if(max<a[i][j]){

        max=a[i][j];
       }


    }

   //cout<<endl;
 }

 printf("min =%d max=%d",min,max);

}
