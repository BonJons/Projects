import math

#Defining main function to be called at the end
def main():
    print("Okay, let's start with your customer code.")
    customer_code = str(input("What is your customer code? "))
    
    #while loop for invalid input
    while (customer_code != "B") and (customer_code != "D") and (customer_code != "W"):
        print("That is an invalid code")
        customer_code = input("What is your customer code? ")
    #lines 13-15 get the necessary input to determine final price
    daysRented = int(input("How many days did you have the rental? "))
    odometer_start = float(input("What was the odometer when you received the car? " )) / 10
    odometerReturn = float(input("What was the odometer setting when the rental was returned? ")) / 10
    #lines 17-20 determine final mileage based on how the odometer was set
    if odometerReturn > odometer_start:
        miles_driven = float(round(odometerReturn - odometer_start,1))
    elif odometerReturn <= odometer_start:
        miles_driven = round((100000 - odometer_start) + odometerReturn,1)
    
    #if statement for code B, line 24 function to determine final cost
    if customer_code == "B":
        amount_due_b = float((daysRented * 40) + ((miles_driven) * 0.25))
        print("Customer summary:" )
        print("Classification code: ",customer_code)
        print("Rental Period: ", daysRented)
        print("Odometer reading at start: ",odometer_start)
        print("Odomoter reading at end: ",odometerReturn)
        print("Number of miles driven: ",miles_driven)
        print("Amount due: $",round(amount_due_b,2))
    
    #customer code D, lines 40-43 determine which function is used to determine cost
    elif customer_code == "D":
        miles_per_day = miles_driven / daysRented
        D_base_charge = daysRented * 60
        if miles_per_day > 100:
            mileageCharge = (miles_driven - (daysRented * 100)) * 0.25
        else:
            mileageCharge = 0
        amount_due_d = D_base_charge + mileageCharge
        print("Customer summary:" )
        print("Classification code: ",customer_code)
        print("Rental Period: ",daysRented)
        print("Odometer reading at start: ",odometer_start)
        print("Odomoter reading at end: ",odometerReturn)
        print("Number of miles driven: ",round(miles_driven,1))
        print("Amount due: $",round(amount_due_d,2))
    
    #code W function, lines 58-66 determine which function is used to determine final cost
    elif customer_code == "W":
        weeks_rented = math.ceil(daysRented / 7)
        weekly_average = round(miles_driven / weeks_rented,0)
        baseCharge = 190 * weeks_rented
        if weekly_average <= 900:
            mileageCharge = 0
        elif weekly_average > 900 and weekly_average < 1500:
            mileageCharge = int(weeks_rented * 100)
        else:
            mileageCharge = ((weeks_rented * 200) + ((miles_driven - 1500 - 1500) * 0.25))
        amount_due_w = float(baseCharge + mileageCharge)
        print("Customer summary:")
        print("Classificaton code: ",customer_code)
        print("Rental period: ",daysRented)
        print("Odometer reading at start: ",odometer_start )
        print("Odometer reading at end: ",odometerReturn)
        print("Number of miles driven: ",odometerReturn - odometer_start)
        print("Amount due: $", round(amount_due_w,2))

#lines 81-86 are the initial welcome statement

print("Welcome to car rentals")
print("At the prompts please enter the following:")
print("Customer's classification code (a character: B, D or W)")
print("Number of days the vehicle was rented")
print("Odometer reading at the start of the rental period")
print("Odometer reading at the end of the rental period")

#line 89 determines whether or not to run main()
question1 = str(input("Would you like to continue?  Y or N: "))
while question1 == "Y":
    main()
    question1 = str(input("Would you like to continue?  Y or N: "))
else:
    print("Thank you for your loyalty!")






