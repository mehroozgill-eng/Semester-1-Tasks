# Week 3 Tasks



### LMS Course Registration



This C program acts as a terminal-based university registration system. It evaluates whether a student is eligible to enroll in a specific course based on a variety of academic rules, such as their current GPA, semester standing, prerequisite completion, and credit hour limits.

#### 

#### Key Features

\*Academic Standing Checks: Adapts rules for freshmen (Semester 1) automatically and checks GPA requirements for upperclassmen.



\*Credit Hour Enforcement: Prevents registration if the student exceeds 21 total credit hours, or restricts them to 14 credit hours if they are on academic probation.



\*Course Level Restrictions: Ensures students have the required seniority to take advanced classes (e.g., requires Semester 4 for 300-level courses, and Semester 6 + a minimum 2.5 GPA for 400-level courses).



\*Prerequisite Overrides: If a student lacks prerequisites but has a high GPA (>3.8), the system can approve the registration pending instructor permission.



\*Waitlist System: If a course is full, the program evaluates if the student's GPA (3.5+) qualifies them to be placed on the waitlist.



#### Example 



Enter your semester

3

Enter your GPA.

3.6

Has completed prerequisites? (1 = Yes,0 = No)

1

Current credit hours enrolled?

12

Enter course level.

200

Enter course credit hours.

3

Is course full? (1 = Yes,0 = No)

0

Are you on probation? (1 = Yes,0 = No)

0

Registration APPROVED. Course can be added.

New total credit hours are 15



#### Author 



Muhammad Mehrooz Asad Gill

2025-MC-93

Programming Language : C

