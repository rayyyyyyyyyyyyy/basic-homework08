
#include<stdio.h>
#include<conio.h>
int main(void) 
{ 

int i,j,T,m=0; 

printf("��J Z �A�D 1 ~ Z ������� �G "); 
scanf("%d",&T); 

for ( i = 2 ; i <= T ; i++) 
{ 
m =0; 

for ( j = 1 ; j <= T ; j++) 
{ 
if( (i % j) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t �O��� !\n",i); 

} 
getch(); 
return 0; 

}
