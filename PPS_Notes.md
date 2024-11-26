# Pointers (Basics)
**Pointers: A memory location or a variable which stores the address of another variable in memory**\
1. `&`--> Address of operator (reference operator)--> to find the address occupied by the variable 
2. `*`--> Value at address operator (dereference operator) --> A variable’s value can be accessed by its pointer using unary operator *(asterisk) known as indirection operator\
![image](https://github.com/user-attachments/assets/c3b719c0-a03f-4b2c-b713-ce195d1ea40a)
![image](https://github.com/user-attachments/assets/9a9d5c89-615a-4a1c-a286-895aa936086b)
![image](https://github.com/user-attachments/assets/8b0cbc4f-101a-4409-af4b-91ada8460f92)
int *p = & x, x; not valid. i.e target variable ‘x’ must be declared first.

# Structures

## A. Formal Definition
1. C provides facility to define one’s own type (user-defined) that may be a composite of basic types (int, char, double, etc) and other user-defined types
2. A "structure" is a collection of one or more variables, possibly of different types, grouped together under a single name for convenient handling
3. A structure type in C is defined by the keyword `struct`
4. Structures hold data that belong  together.\
   Eg: `Student record: student id, name, branch, gender, start year, …`\
 •In database applications, structures are called records.

## B. Features of Structure
1. A struct is heterogeneous, that means it can be composed of data of different types.
2. Definition of Structure reserves no space.
 • It is nothing but the “ Template / Map / Shape ” of the structure\
 • Memory is created, very first time when a variable of structure type is created / Instance is created
3. Members of a structure themselves are not variables.

## C. General Syntax/ Examples
![image](https://github.com/user-attachments/assets/c2640f66-72a4-465a-83d6-69bbbee4c563)

Example: The “Employee” structure has 6 members 
```
struct Employee
{
 char Name[15];
 char Address[30];
 int Age;
 float Basic;
 float DA;
 float NetSalary;
}
```
## D. Member or Dot Operator
The link between member and a structure variable  is established using the member operator ‘.’ which is also known as ‘dot operator’\
`<struct-variable>.<member_name>`

###  Different ways to assign values to the members of a structure:
1. Assigning string: `strcpy(s1.name, “Rama”);`
2. Assignment statement: `s1.rollno = 1335;`

### Structure Initialisation Method
1. Without tag name.\
      ```
      struct
       {
       int rollno;
       int age;
       }s1 ={20, 21};
      ```
2. With tag name
   ```
      struct Student
       {
       int rollno;
       int age;
       };
   Student s1={20, 21};
   Student s2={69,18);
      ```
3. Using a tag name and defined outside the function.

**`.` operator acts as Link between member and a Structure variable.**
