#include <hotel.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


// MAIN FUNCTION
int main(){     
	

	char choice;
        printf("welcome to hotel");

        // INFINITE LOOP
	while (1)      
	{
        
		
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Book");
		printf("\n------------------------");
		printf(" \n Enter 2 -> Cancel");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> view");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Exit");
		printf("\n-----------------");

               scanf("%c",&choice);
	       choice=toupper(choice);
	       switch(choice)           // SWITCH STATEMENT
		{
	     case '1':
		book();
                break;


            case '2':
                 cancel();
                 break;

          
            case '3':
                  display();
                  break;
            
            case '4':
                 printf("\n\n\t *****THANK YOU*****");
	         printf("\n\t FOR TRUSTING OUR SERVICE");
		 exit(0);
		 break;
	    default:
		 printf("Incorrect Input");
 		 printf("\n Press any key to continue");
		 

		}
	}

	return 0;
}
