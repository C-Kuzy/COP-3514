// HIDES ERRORS NON-HARMFUL TO THE PROGRAM
#pragma GCC system_header
#pragma system_header

// STEP #1: Using #include to gain access to CRUCIAL C syntax libraries
#include <stdio.h>

// STEP #2: Using #define calls to categorize each Kayak selection's fees from the MENU OPTIONS referenced above.
// Option #1: Solo Kayak == "SOK"
#define SOK_FlatFee 25
#define SOK_Hourly 10
#define SOK_MaxDRate 60

// Option #2: Tandem Kayak == "TMK"
#define TMK_FlatFee 35
#define TMK_Hourly 12
#define TMK_MaxDRate 80

// Option #3: Fishing Kayak == "FHK"
#define FHK_FlatFee 45
#define FHK_Hourly 15
#define FHK_MaxDRate 100

// Option #4: Pedal Kayak == "PDK"
#define PDK_FlatFee 50
#define PDK_Hourly 18
#define PDK_MaxDRate 120

// STEP #3: Setting up our main function to carry out our code
int KayakMcProject() { 
    // STEP #4: Creating Integer Assigned Variables
    int Choice, Days, Hours;
    int FlatFee = 0, Hourly = 0, MaxDayRate = 0;
    int TCharge = 0; // TC == Total Charge

    // STEP #5: Allow the user to prompt the kayak option they want
    printf("Please select from four kayak types: 1, 2, 3, and 4\n");
    printf("Enter kayak selection: ");
    scanf("%d", &Choice); // The use of %d will be prominent in our program since every number is a whole number/integer

    if (Choice < 1 || Choice > 4) {
        printf("Invalid selection. Select from 1 to 4.\n");
        return 1; // The use of "1" stops the program
    }

    switch (Choice) {
    // STEP #6: Simplify & Categorize the current Menu Prices with the correct Kayak Option
    case 1:
        FlatFee = SOK_FlatFee;
        Hourly = SOK_Hourly;
        MaxDayRate = SOK_MaxDRate;
        break;
    case 2:
        FlatFee = TMK_FlatFee;
        Hourly = TMK_Hourly;
        MaxDayRate = TMK_MaxDRate;
        break;
    case 3:
        FlatFee = FHK_FlatFee;
        Hourly = FHK_Hourly;
        MaxDayRate = FHK_MaxDRate;
        break;
    case 4:
        FlatFee = PDK_FlatFee;
        Hourly = PDK_Hourly;
        MaxDayRate = PDK_MaxDRate;
        break;
    default:
        printf("Unknown Value. Please Try Again...\n"); // In the case the program continues under an Invalid input
        break;
    }

    // STEP #7: Prompt and allow the user to enter an amount of days
    printf("Enter days: ");
    scanf("%d", &Days); // The use of %d will be prominent in our program since every number is a whole number/integer

    if (Days < 0) {
        printf("Invalid days.\n");
        return 1; // The use of "1" stops the program
    }

    // STEP #8: Prompt and allow the user to enter an amount of hours
    printf("Enter hours: ");
    scanf("%d", &Hours); // The use of %d will be prominent in our program since every number is a whole number/integer

    if (Hours >= 24 || Hours < 0) {
        printf("Invalid hours.\n");
        return 1; // The use of "1" stops the program
    }

    // STEP #9: Use if-else statements to compute the total charge for each user's
    if (Days > 0) { // Testing when user needs kayak for more than 1 day
        TCharge += MaxDayRate * Days; // Calculating Total Charge
    }

    if (Hours > 0) { // IF user prompts Hours input greater than zero
        if (Days <= 0) { // Testing to check if Flat Fee will be added
            Hours -= 2;
        }
        else {
            FlatFee = 0; // If The user prompts an input of 1 or greater
        }
        if (Hours < 0) { // Testing if the user inputs days with no hours
            Hours = 0;
        }
        int Ttl_Hrs_Chrg = (Hourly * Hours) + FlatFee; // This is the extra hours times the hourly rate
        if (Ttl_Hrs_Chrg > MaxDayRate) {
            Ttl_Hrs_Chrg = MaxDayRate; // This sets a cap on total fee per day based on kayak selection
        }
        TCharge += Ttl_Hrs_Chrg; // Responsible for determining the Charge displayed
    }
    printf("Charge($): %d\n", TCharge); // Prints out the User's Total Charge/Bill for the kayak service
    return 0;
}