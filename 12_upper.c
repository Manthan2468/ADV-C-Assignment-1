#include <stdio.h>
int main(){
    int a[100][100],r,c,i,j,u=1;
    printf("Enter the number of Row :-");
    scanf("%d",&r);
    printf("Enter the number of Column :-");
    scanf("%d",&c);
    for (i = 0; i <r; i++)
    {
        for (j = 0; j <c; j++)
        {
           printf("Enter the value a[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    // printf("Upper Triangular Matrix :- \n");
    // for (i = 0; i <r; i++)
    // {
    //     for (j = 0; j <c; j++)
    //     {
    //       if (j >= i)
    //       {
    //          printf(" %d ",a[i][j]);
    //       }else{
    //         printf(" 0 ");
    //       }
          
    //     }printf("\n");
    // }
    for (i = 0; i <r; i++)
    {
        for (j = 0; j <c; j++)
        {
          if (j < i && a[i][j]!=0)
          {
             u=0;
          }
          
        }printf("\n");
    }
  //   if (a[1][0]==0 && a[2][0]==0 && a[2][1]==0 ){
	// 	printf("Upper Triangular Matrix");}
	// else{
	// 	printf("Not a Upper Triangular Matrix");
  //   }
  if (u==1)
  {
    printf("Upper Triangular matrix");
  }else{
    printf("NOt a Upper Triangular matrix");
  }
  
    return 0;
}         






