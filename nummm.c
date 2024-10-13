#include<stdio.h>
//using namespace std;
int main()
{
    int a[3][4]={{1,2,3,4}, //0
                {4,5,6,7}, //1
                {7,8,9,10}}; //2


 int i,j;
  for(i=0;i<3;i++){

    for(j=0;j<4;j++){

        scanf("%d",&a[i][j]);
    }

 }

 for(i=0;i<3;i++){

    for(j=0;j<4;j++){

        printf("%d ",a[i][j]);
    }
    printf("\n");
   //cout<<endl;
 }

}
