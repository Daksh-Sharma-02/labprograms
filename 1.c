// Linear search
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,index;
    printf("Enter the Size of an Array : ");
    scanf("%d",&n);
    
    printf("Enter the elements of Array \n");
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter the element to be searched \n");
    scanf("%d",&x);

    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            index=i;
            break;
        }
    }

    if(flag==true) printf("%d Exists in an array at %d ",x,index);
    if(flag==false) printf("%d  doesnot Exists in an array at %d ",x,index);

    return 0;
   
}
