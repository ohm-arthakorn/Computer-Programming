#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
 int i,j,k=0,temp_marking,max;

 char temp_id[9],temp_name[40];

 struct student
 {
  char id[9];
  char name[40];
  int marking;
 }st[SIZE];
 printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++)
 {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
 printf("\n");
 printf("\n *** Analyzing Data ***\n");

 for(j=0 ; j<SIZE-1 ; j++)
 {
  for(i=0; i<SIZE-1 ; i++)
  {
   if(st[i].marking<st[i+1].marking)
   {
    temp_marking = st[i].marking ;
    st[i].marking = st[i+1].marking ;
    st[i+1].marking = temp_marking ;

    strcpy(temp_id,st[i].id);
    strcpy(st[i].id,st[i+1].id);
    strcpy(st[i+1].id,temp_id);

    strcpy(temp_name,st[i].name);
    strcpy(st[i].name , st[i+1].name);
    strcpy(st[i+1].name,temp_name);
    
   }
  }
 }
 max = st[0].marking;

 for(i = 0;i<SIZE ; i++)
 {
  if(st[i].marking == max)
  {
   k++;
  }
 }

 printf("Max marking   = %d points, %d students.\n",max,k);
 
 for(i=0;i<k;i++)
 {
  printf("%d. %s %s %d\n",i+1,st[i].id,st[i].name,st[i].marking);
 }

 return 0;
}