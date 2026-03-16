/*-----------LMS Course Registration------------
-----------------------------------------------------------------------
This program takes inputs from the user and decide whether he or she is eligible for course registration.
-----------------------------------------------------------------------
Written by Muhammad Mehrooz Asad Gill 2025-MC-93 (mmehroozgill@gmail.com) on 25-Feb-2026.
IDE: Visual Studio Code 1.104.1
C Compiler: GCC (Built by MSYS2 Project) */


#include <stdio.h>
#include <stdbool.h>

int main() {
    int semester, currentCH, courseCH, courseLevel, totalCH;
    double gpa;
    bool hasPrereq, courseFull, probation, eligible, canWaitlist, permission;
    int temp_bool; // Used to safely read boolean inputs via scanf

    eligible = true;
    canWaitlist = false;
    
    printf("Enter your semester\n");
    scanf("%d", &semester);
    
    if (semester < 1 || semester > 8) {
        printf("Invalid semester. Please enter correct semester.\n");
    } else {
        if (semester == 1) {
            gpa = 0;
            hasPrereq = true;
            probation = false;
        } else {
            printf("Enter your GPA.\n");
            scanf("%lf", &gpa);
            if (gpa > 4) {
                printf("Please enter correct GPA.\n");
            }
            printf("Has completed prerequisites? (1 = Yes,0 = No)\n");
            scanf("%d", &temp_bool);
            hasPrereq = (bool)temp_bool;
        }
        
        printf("Current credit hours enrolled?\n");
        scanf("%d", &currentCH);
        
        if (currentCH > 21) {
            printf("Maximum 21 credit hours allowed.\n");
        } else {
            printf("Enter course level.\n");
            scanf("%d", &courseLevel);
            
            if (courseLevel < 100 || courseLevel > 400) {
            }
            
            printf("Enter course credit hours.\n");
            scanf("%d", &courseCH);
            
            if (courseCH < 1 || courseCH > 4) {
                printf("Credit hours must be between 1-4 \n");
            } else {
                printf("Is course full? (1 = Yes,0 = No) \n");
                scanf("%d", &temp_bool);
                courseFull = (bool)temp_bool;
                
                printf("Are you on probation? (1 = Yes,0 = No)\n");
                scanf("%d", &temp_bool);
                probation = (bool)temp_bool;
                
                totalCH = currentCH + courseCH;
                
                if ((probation == true && totalCH > 14) || (probation == false && gpa < 3.5 && totalCH > 18)) {
                    eligible = false;
                    printf("Credit hour limit not satisfied.\n");
                } else {

                    // Eligibility IF checks.
                    // Course level
                    if (courseLevel == 200 && semester < 2) {
                        eligible = false;
                        printf("Registration DENIED (Need semester 2 for 200-level courses.)\n");
                    } else {
                        if (courseLevel == 300 && semester < 4) {
                            eligible = false;
                            printf("Registration DENIED (Need semester 4 for 300-level courses.)\n");
                        } else {
                            if ((courseLevel == 400 && semester < 6) || gpa < 2.5) {
                                eligible = false;
                                if (semester < 6) {
                                    printf("Registration DENIED (Need semester 6 for 400-level courses.)\n");
                                }
                                if (gpa < 2.5) {
                                    printf("Registration DENIED( Minimum GPA requirement 2.5)\n");
                                }
                            } else {

                                // Credit Hours/Probation
                                if (probation == true && totalCH > 14) {
                                    eligible = false;
                                    printf("Registration DENIED( Max credit hours 14 due to probation)\n");
                                } else {
                                    if (totalCH > 18 && gpa < 3.5) {
                                        eligible = false;
                                        printf("Registration Denied( Maximum Credit hours limit 18).\n");
                                    } else {

                                        // Prerequisites
                                        if (hasPrereq == false) {
                                            // Note: Retained exact original logic, though '!gpa >= 3.8' evaluates to false logically
                                            if (!gpa >= 3.8 && courseLevel == 100 || courseLevel == 200) {
                                                eligible = false;
                                                printf("Registration DENIED.\n");
                                                printf("Reason: You have not completed prerequisites and your GPA is also below 3.8.\n");
                                            } else {
                                                printf("Do you have instructor's permission as you have not completed prerequisite?\n");
                                                scanf("%d", &temp_bool);
                                                permission = (bool)temp_bool;
                                                printf("Approved due to high gpa\n");
                                            }
                                        }

                                        // course full and waitlist
                                        if (courseFull == true) {
                                            if (gpa >= 3.5) {
                                                canWaitlist = true;
                                                eligible = false;
                                            } else {
                                                eligible = false;
                                            }
                                        }

                                        // Final Output
                                        if (eligible == true) {
                                            if (gpa >= 3.5 && totalCH > 18) {
                                                printf("Overload APPROVED due to high GPA.\n");
                                            }
                                            if (gpa > 3.8 && permission == true) {
                                                printf("High GPA allows override of prerequisites.\n");
                                            }
                                            printf("Registration APPROVED. Course can be added.\n");
                                            printf("New total credit hours are %d\n", totalCH);
                                        } else {
                                            if (canWaitlist == true && gpa >= 3.5) {
                                                printf("Added to WAITLIST due to full course.\n");
                                            } else {
                                                printf("Registration DENIED (GPA too low for waitlist.)\n");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}