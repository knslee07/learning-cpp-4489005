// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    //Grade(int sid, int cid, char grd)
    int total_scores=0;
    float total_credits=0;
    
    for (auto x: grades) {
        int credits=0;
        char grade='Z';
        if (x.get_student_id()==id) {
            int course_id=x.get_course_id();
            grade=x.get_grade();
            for (auto y: courses) {
                if (course_id==y.get_id()) {
                    std::cout << "course id matched" <<std::endl;
                    credits=y.get_credits();
                    break;
                }
            }
        }
        total_credits+=credits; 
        switch (grade) {
            case 'A':
                total_scores += 4*credits;
                break;
            case 'B':
                total_scores += 3*credits;
                break;
            case 'C':
                total_scores += 2*credits;
                break;
            case 'D':
                total_scores += 1*credits;
                break;
            case 'F':
                total_scores += 0;
                break; 
            default:
                break;
          
        }    
    }
    GPA=total_scores/total_credits;

    std::string student_str;
    for (auto x: students) {
        if (x.get_id()==id)
            student_str=x.get_name();
    }
    //student_str = students[0].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
