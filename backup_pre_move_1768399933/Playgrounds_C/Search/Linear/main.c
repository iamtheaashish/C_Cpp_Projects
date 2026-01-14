#include <stdio.h>
int main(){
    int i,n,key,arr[10],flag=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter Key: ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(key==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Key Element is Found");
    } else{
        printf("key element not found");
    }

    return 0;
}

/*This is written 100% by me just afte watching the theory*/