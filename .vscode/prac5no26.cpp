#include <stdio.h>
int main() {
    int i,en,a,b,c,tot;    
    for (i = 1; i <= 5; i++) 
	{
        printf("Enter enrollment number:");
        scanf("%d",&en);
        printf("Enter marks of 3 subjects:");
        scanf("%d%d%d",&a,&b,&c);        
        tot=a+b+c;        
		printf(" Enrollment number:%d\n",en);       
        printf(" Physics marks:%d\n",a);        
        printf(" Maths marks:%d\n",b);        
        printf(" Chemistry marks:%d\n",c);   
        printf(" Total marks: %d\n",tot);  
        printf("------------------------------------------------\n");
    }
    return 0;
}
