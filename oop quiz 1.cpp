#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct donor
{
	int sino;
	char* Hospital[30];
	char* dName[30];
	char* dArea[30];
	char* dBG[20];
	char* dMN[30];

}
donor[500];
int main()
{
	int i,n;
	printf("Please Enter The Number Of Donors \n:");
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++)
	{
 		printf(" \n Serial Number: \n");
 		scanf(" %d",&donor[i].sino);
		printf(" \n Hospital Name: \n");
		scanf(" %s",&donor[i].Hospital);
		printf(" \n Donor Name: \n");
		scanf(" %s",&donor[i].dName);
		printf(" \n Area: \n");
		scanf(" %s",&donor[i].dArea);
		printf("\n Blood group: \n");
		scanf(" %s",&donor[i].dBG);
		printf(" \n Mobile Number: \n");
		scanf(" %s",&donor[i].dMN);
	

	}
	printf(" \n SI NO\t\t Hospital\t\t dName\t\t dArea\t\t dBG\t\t dMN\n\n");
	for(i=0;i<n;i++)
	{
	
		printf(" %d",donor[i].sino);
		printf(" \t\t %s",donor[i].Hospital);
		printf(" \t\t %s",donor[i].dName);
		printf(" \t\t %s",donor[i].dArea);
		printf(" \t\t %s",donor[i].dBG);
		printf(" \t %s",donor[i].dMN);
		printf("\n");
	}
    printf("\nEnter The Blood group(A positive,A negative,B positive,B negative,O positive,O negative,AB positive,AB negative):");
     scanf("%s",donor[i].dBG);
	
 	    for(i=0;i<n;i++)
     {
 		if("dBG is A positive")
 		{
 		    printf("this is your required donor");
 		    scanf("%s",&donor[i].dBG);
 		    break;
 		}
 		else
             printf("this is not your required donor");
             scanf("%s",&donor[i].dBG);
     }
    return 0;


    
}
