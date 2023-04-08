#include<stdio.h>
main(){

int r,s,a;

printf("Enter the ages of ram,shyam,ajay respectively: ");
scanf("%d %d %d",&r,&s,&a);

if(r<s){
    if(r<a)
        printf("\n\n ram is younger among all");
    else
        printf("\n\n ajay is younger among all");
}
else{
    if(s<a)
        printf("\n\n shyam is younger among all");
    else
        printf("\n\n ajay is younger among all");
}

}
