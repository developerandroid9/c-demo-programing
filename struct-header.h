#ifndef STRUCE_HEADER_H
#define STRUCE_HEADER_H
typedef struct student {
    int id;
    char name[50];
    char address[100];

} Student;

typedef struct student_pointer {
    int id;
    char name[50];
    char address[100];

} StudentPointer;


extern  void studentDetails(Student student);
extern void setStudentDetails(StudentPointer *student_pointer);
#endif

