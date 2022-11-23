     //welcome to karish travellers 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// this function will ask you to enter your pickup location and the location in which you want to arrive
void boardingdestination()
{
 	char boarding[50];   //pickup location
 	char destination[50];
 	printf("Enter your pickup location\n");
 	gets(boarding);
    printf("enter the destination you want to go\n");
 	gets(destination);
 	
}
// this function will generate a otp and send to the registered number and verify it
void otpgenerator()
{
	int otp;  
	int verify;
	srand(time(NULL));  //generating a random otp 
	otp = rand();
	printf("%d\n",otp);
	printf("verifying\n");
	scanf("%d",&verify); //verifying
	if(verify==otp)
	{
		printf("entered otp is correct\n");
	}
	else{
		printf("you entered wrong otp");
		exit(0); //if entered otp is incorrect then it will exit a code
	}
}
//this function will give the feedback of ride
void feedback()
{
	printf("please enter your feedback\n");
	int n;
		scanf("%d",&n);
	switch(n)
	{
		case 5:
			printf("*****\n"); // if ride was excellent
			break;
		case 4:
		    printf("****\n"); //if good 
			break;
		case 3:
		    printf("***\n"); // if appropriate
			break;
		case 2:
		    printf("**\n"); //if not good
			break;
		case 1:
		    printf("*\n"); //and if too bad
			break;	
	}
   
	printf("thankyou so much for the feedback\n");
}
//this function will ask the customer the type of payment he was doing wheather online or offline
void paymentmode()
{
	int mode; 
	char ch;
	printf("please choose the type of payment press 1 for online payment otherwise offline\n");
	scanf("%d",&mode);
	if(mode==1)
	{
		printf("go for a online payment\n");
		printf("now choose from where you want to do payment pess g for google pay p for phone pay and others for others\n");
		scanf("%s",&ch);
		if(ch =='g'){  //g for google pay
			printf("google pay\n");
		}
		else if(ch=='p'){
			printf("phonepay\n"); //p for phonepay
		}
		else{
			printf("others\n"); //other app of upi
		}
	}
	else{
		printf("offline payment\n");
	}
}
//this function will ask the customer type of ride he wants wheather bike or auto
void typeofride()
{
   printf("press 1 for bike otherwise auto\n");
    int n;
    scanf("%d",&n);
    if(n==1){
    	printf("bike\n");
	}
	else{
		printf("auto\n");
	}
}
//this function will ask the customer wheather he wants to login or sign in 
void customerid()
{
	char name[50];
	char city[50];
	unsigned long number;
	printf("enter the city in which you live\n");
	gets(city);
	printf("enter the name of the customer\n");
	gets(name);
    printf("enter the mobile number of the customer\n");
	scanf("%lu",&number);
	getchar();
}
void changelocation()
{
	//if customer wants to change the location or not press 1 if wants to otherwise no

	char ch;
	char newlocation[50];
	printf("if change is under 100m no extra charges will be charged press c to continue\n");
		scanf("%s",&ch);
		getchar();
		if(ch == 'c')
		{
			printf("please enter the new location\n");
			gets(newlocation);
		}
	    else{
	    	printf("thanks for coming\n");
		}

}
//this function will ask the customer if he wants to change the location or not
void cancelride()
{
	//do you want to cancel the ride press 1 if yes otherwise no
	int r;
	printf("do you want to cancel the ride or not\n");
		printf("reason for the cancellation is\n");
	//	scanf("%d",&r);
	    printf("press 1 for change of plans\n , press 2 for late in coming\n");
	    scanf("%d",&r);
	    printf("your ride has been cancelled\n");
	    exit(0);
}
//this function is for the driver wheather he is free to take the ride or he is busy
void vacancyofseat()
{
	//here driver has a choice wheather he wants to take the particular ride or he is busy
	printf("press 1 if driver is free and 2 for other\n");
	int n;
	scanf("%d",&n);
	getchar();
	if(n==1)
	{
		printf("i am ready to take your drive\n");
	}
	else
	{
		printf("sorry ride is not free\n");
		exit(0);
	}
}
void calculatefair()
{
	int n;
	printf("enter the no of kms is your ride\n");
	scanf("%d",&n);
	printf("price for 1km is 10 rs so your total fair for the ride is %d\n",10*n);
}	

int main()
{
	printf("welcome to karish travels\n");
	printf("asking the customer wheather he wants to login or sign in\n");
	printf("press 1 for login and 2 for sign in\n");
    int customerinformation;
    scanf("%d",&customerinformation);
    getchar();
	if(customerinformation==1){
		printf("welcome to karish app\n");
	}
	else{
		customerid();
	}
	vacancyofseat();
	boardingdestination();
	typeofride();
	otpgenerator();
	calculatefair();
	paymentmode();
	printf("do you want to change the loction press 1 if yes\n");
	int newpickup;
	scanf("%d",&newpickup);
	if(newpickup==1){
		changelocation();
	}
	else{
		printf("you dont want to change the location\n");
	}
	printf("do you want to ancel the ride press 1 if yes\n");
	int cancel;
	scanf("%d",&cancel);
	if(cancel==1){
		cancelride();
	}
	else{
		printf("enjoy your ride\n");
	}
	feedback();
	
	return 0;
}
