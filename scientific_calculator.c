#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{   
    float a,b,c,d,e,k,pi;
    pi=3.1415926535897;
    float sum,A[100],B[100];
	int no,i,j;
	int z;
	for(z=1;z==1;z++)
	{
	system("cls");
	printf(" press 1. for addition of numbers\n");
	printf(" press 2. for substraction of numbers\n");
	printf(" press 3. for multiplication of numbers\n");
	printf(" press 4. for division of numbers\n");
	printf(" press 5. for find the modulous/reminder\n");
	printf(" press 6. for powers of numbers\n");
	printf(" press 7. for find squeroot of number\n");
	printf(" press 8. for find cubicroot of any number\n");
	printf(" press 9. for find the logrithm value of any number\n");
	printf(" press 10. for find the exponantial value of any number\n");
	printf(" press 11. for find the sine values\n");
	printf(" press 12. for find the cosine values\n");
	printf(" press 13. for find the tangent values\n");
	printf(" press 14. for find the cot values\n");
	printf(" press 15. for find the sec values\n");
	printf(" press 16. for find the cosec values\n");
	printf(" press 17. for find invers value of sine\n");
	printf(" press 18. for find invers value of cosine\n");
	printf(" press 19. for find invers value of tangent\n");
	printf(" press 20. for find the two roots of Trinomial expression\n");
	printf(" \n ENTER  YOUR CHOICE\n\n");
	scanf("%d",&no);
	switch(no)
	{	
		case 1:
			printf("Enter the no. of element you want to add\n");
			scanf("%f",&a);
			sum=0;
			printf("enter %.0f numbers\n",a);
			for(i=0;i<a;i++)
			{
				scanf("%f",&A[i]);
				sum+=A[i];
			}
		     printf("Addition of these no. is =%.2f",sum);
		     break;
	    case 2:
	    	printf("Enter two numbers to find substraction\n");
	    	scanf("%f%f",&a,&b);
	    	printf("Substraction is = %f",a-b);
	    	break;
	    case 3:
			printf("Enter the no. of element you want to multiply\n");
			scanf("%f",&a);
			sum=1;
			printf("enter %.0f numbers\n",a);
			for(i=0;i<a;i++)
			{
				scanf("%f",&A[i]);
				sum*=A[i];
			}
		     printf("Multiplication of these no. is =%f",sum);
		     break;
		case 4:
		    printf("Enter two numbers to find divide\n");
	    	scanf("%f%f",&a,&b);
	    	printf("Division is = %f",a/b);
	    	break;
		case 5:
			printf("Enter two numbers numerater and denominater to find reminder\n");
			scanf("%d%d",&i,&j);
			printf("Reminder is = %d",i%j);
			break;
		case 6:
			printf("Enter the value of baise and power\n");
			scanf("%f%f",&a,&b);
			printf("Power is = %f",pow(a,b));
			break;
		case 7:
		    printf("Enter the number to find squroot\n");
		    scanf("%f",&a);
		    b=sqrt(a);
		    printf("squreroot is = %f",b);
		    break;
		case 8:
			printf("Enter the number to find cubicroot\n");
			scanf("%f",&a);
			b=cbrt(a);
			printf("cubicroot is = %f",b);
			break;
		case 9:
			printf("Enter the number to find it's logrithm value\n");
			scanf("%f",&a);
			b=log10(a);
			printf("log %f is = %f",a,b);
			break;
		case 10:
			printf("Enter the number to find it's exponantial value\n");
			scanf("%d",&i);
			b=exp(i);
			printf("value of e^%d is = %f",i,b);
			break;
		case 11:
			printf("Enter the number to find it's sine value\n");
			scanf("%f",&a);
			c=a*pi/180;
			b=sin(c);
			printf("sine %f is = %f",a,b);
			break;
		case 12:
			printf("Enter the number to find it's cosine value\n");
			scanf("%f",&a);
			c=a*pi/180;
			b=cos(c);
			printf("cosine %f is = %f",a,b);
			break;
		case 13:
			printf("Enter the number to find it's tangent value\n");
			scanf("%f",&a);
			c=a*pi/180;
			b=tan(c);
		    printf("tangent %f is = %f",a,b);
			break;
		case 14:
			printf("Enter the number to find it's cotgent value\n");
			scanf("%f",&a);
			c=a*pi/180;
			b=tan(c);
			d=1/b;
			printf("cotgent %f is = %f",a,d);
			break;
		case 15:
		    printf("Enter the number to find it's secosine value\n");
			scanf("%f",&a);
			c=a*pi/180;
			b=cos(c);
			d=1/b;
			printf("secosine %f is = %f",a,d);
			break;
		case 16:
			printf("Enter the number to find it's cosec value\n");
			scanf("%f",&a);
			c=a*pi/180;
			b=sin(c);
			d=1/b;
			printf("cosec %f is = %f",a,d);
			break;
		case 17:
			printf("Enter the number to find it's invers sine value\n");
			scanf("%f",&a);
			b=asin(a);
			c=b*180/pi;
			printf("sine invers(%f) is = %f",a,c);
			break;
		case 18:
			printf("Enter the number to find it's invers cosine value\n");
			scanf("%f",&a);
			b=acos(a);
			c=b*180/pi;
			printf("cosine invers(%f) is = %f",a,c);
			break;
		case 19:
			printf("Enter the number to find it's invers tangent value\n");
			scanf("%f",&a);
			b=atan(a);
			c=b*180/pi;
			printf("tangent invers(%f) is = %f",a,c);
			break;
		case 20:
			printf("Enter the value of coficient of a,b and c of Trinomial algebraic expression\n");
			scanf("%f%f%f",&a,&b,&c);
			d=sqrt(b*b-4*a*c);
			e=(b+d)/2*a;
			k=(b-d)/2*a;
			printf("roots of this equestion are = %f and %f",e,k);
			break;
		default :
		     printf("\n\t***INVALIDE INPUT***");	
    }     
    printf("\n\n Press '1' to continue , otherwise any key :\n");
    scanf("%d",&z);
    if(z==1)
    z=z-1;
 }
 printf("\n\n\t\tThank you ...............");
    return 0;
}
