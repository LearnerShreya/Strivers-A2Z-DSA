
#include<iostream>
using namespace std; 
int main() { 

// WAP that take an input of age
// and print if you are an adult or not
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // if(age>=18){
    //     cout<<"You are an adult.";
    // }

    // else if(age<10)
    // // else
    // {
    //     cout<<"You are a minor.";
    // }



// A school has following rules for grading system: 
// a. Below 25 - F
// b. 25 to 44 - E
// c. 45 to 49 - D
// d. 50 to 59 - C
// e. 60 to 79 - B 
// f. 80 to 100 - A 
// Ask user to enter marks and print the corresponding grade.

    // int marks;
    // cout<<"Enter marks obtained: ";
    // cin>>marks;
    
    // if(marks>=80 && marks<=100){
    //     cout<<"Grade A";
    // }
    // else if (marks>=60 && marks<=79)
    //     cout<<"Grade B";
    
    // else if (marks>=50 && marks<=59)
    //     cout<<"Grade C";
    
    // else if (marks>=45 && marks<=49)
    //     cout<<"Grade D";
    
    // else if (marks>=25 && marks<=44)
    //     cout<<"Grade E";
    // else
    //     cout<<"Grade F";
    

    // int marks;
    // cout<<"Enter marks obtained: ";
    // cin>>marks;

    // if (marks < 0 || marks > 100)
    //     cout << "Invalid marks entered!";
    // else if (marks < 25)
    //     cout << "F";
    // else if (marks <= 44)
    //     cout << "E";
    // else if (marks <= 49)
    //     cout << "D";
    // else if (marks <= 59)
    //     cout << "C";
    // else if (marks <= 79)
    //     cout << "B";
    // else
    //     cout << "A";


    
    
    
    // Take the age from the user and then decide accordingly 
    // 1. If age < 18,
    //    print-> not eligible for job 
    // 2. If age >= 18 and age <= 54,
    //    print-> "eligble for job" 
    // 3. If age >= 55 and age <= 57,
    //    print-> "eligible for job, but retirement soon." 
    // 4. If age > 57 
    //    print-> "retirement time"
    
    int age;
    cin>>age;

    if(age<18){
        cout<<"Not eligible for job.";
    }
    else if(age<=54){
        cout<<"eligble for job.";
    }
    else if(age<=57){
        cout<<"Eligible for job, but retirement soon.";
    }
    else{
        cout<<"Retirement time.";
    } 
    return 0; 
}