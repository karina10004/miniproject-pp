import random
# importing random to generate a random otp

# this function will the customer weather he wants to login or sign in
# if sign in then we have to entered the following details
def customerid():
    nameofcustomer = input("enter the name of the customer\n");
    mobilenumber = int(input("enter your mobile number\n"));
    cityname = input("enter the city in which you live\n");

# this function will ask the customer pickup point and destination point
def boardingdestination():
    boarding = input("enter the pickup location\n");
    destination = input("enter the destination you want to arrive\n");

# this function is for the driver that if he is available to take to the ride or not
def vacancyofseat():
    print("press 1 if driver is free otherwise 2\n");
    vacany = int(input("press"))
    if (vacany == 1):
        print("i am ready to take your ride\n");
    else:
        print("sorry ride is not free\n");
        exit(0);

# it will ask what type of ride wants two whealer or auto
def typeofride():
    print("press 1 for bike otherwise auto\n");
    typeofride = int(input("press\n"));
    if (typeofride == 1):
        print("your bike is ready\n");
    else:
        print("your auto is ready\n");


def otpgenerator():
    otp = random.randrange(100000, 999999)
    print(otp);

    verify = int(input("enter the otp\n"))
    if (otp == verify):
        print("entered otp is correct\n")
    else:
        print("sorry you entered wrong otp\n")
        exit(0);


def calculatefair():
    noofkm = int(input("enter the no of km you have to travell\n"));
    fair = noofkm * 10;
    print("price for your ride is\n", fair);


def paymentmode():
    print("press 1 for online and else offline\n");
    mode = int(input("press "))
    if (mode == 1):
        print("you are going for a online payment, now press g for google pay and p for phonepay\n");
        upi = input("press ")
        if (upi == 'g'):
            print("google pay");
        elif (upi == 'p'):
            print("phonepay")
        else:
            print("others");
    else:
        print("you are going for a offline payment")


def feedback():
    n = int(input("enter the value of n\n"))
    if (n == 5):
        print("*****")
    elif (n == 4):
        print("****")
    elif (n == 3):
        print("***")
    elif (n == 2):
        print("**")
    else:
        print("*")


def changelocation():
        print("an extra charge will be charged if new location is not under 100m press c to continue\n")
        agree = input()
        if(agree == 'c'):
           print("enter new location\n")
           newlocation = input("enter new location\n")
        else:
            print("thanks for coming\n")
# if customer wants to cancel the ride or not and if wants then what is the reason
def cancelride():
    print("do you want to cancel the ride oe not press 1 to cancel")
    cancel = int(input());
    if(cancel == 1):
        print("reason for cancellation is press 1 for change of plans\n 2 for late in coming\n")
        press = int(input())
        print(("your ride has been cancelled\n"))
        exit(0)
    else:
        print("enjoy your ride\n")

# starting of the main function
print("press 1 if customer wants to login and 2 for sign in")
customerinformation = int(input())
if(customerinformation == 1):
     print("welcome to karish traveles")
else:
     customerid()

boardingdestination()
typeofride()
vacancyofseat()
otpgenerator()
calculatefair()
paymentmode()
print("do you want to change the location press 1 if yes oherwise no")
change = int(input())
if change==1:
    changelocation()
else:
    print("don't want to change the location")
cancelride()
print("please enter your feedback in form of n")
feedback()