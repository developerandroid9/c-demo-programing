#include "struct-header.h"
#include "stdio.h"


void studentDetails(Student student) {
    printf("Student Details\n");
    printf("Student ID: %d\n", student.id);
    printf("Student Name: %s\n", student.name);
    printf("Student Address: %s\n", student.address);

}
void setStudentDetails(StudentPointer *student_pointer) {
    //
    //int size= sizeof(Student);
        for (int i=0;i<5;i++) {
            printf("Enter Student %dth Id \n", student_pointer[i].id);
            printf("Enter Student %sth name \n", student_pointer[i].name);
            printf("Enter Student %sth address \n", student_pointer[i].address);

        }

}