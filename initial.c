
#include <stdio.h>
#include <ctype.h>
int main()
{
char first_name, last_name,x,y,soak_up;
printf("Enter your first and last name: ");
while ((first_name = getchar()) == ' ')
soak_up=first_name;		
x=toupper(first_name);								
while(first_name != ' ')
first_name = getchar();					
while ((last_name = getchar()) == ' ')
soak_up=last_name;						
y=toupper(last_name);							
while(last_name != '\n' && last_name != ' ')
{
printf("%c", last_name);
last_name=getchar();
}
printf(", %c", x);
getchar();getchar();
return 0;
}
