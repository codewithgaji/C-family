# 💻 My Journey Learning and Setting Up C++ on Windows 11 (CSC226)

This README explains how I, **Gaji Yaqub Ayomikun and group members**, set up C++ development environment on Windows 11 and wrote the personal and group assignments for CSC226. I explain the steps I followed, the challenges we faced, and how we overcame them.

---

## ⚙️ Setting Up C++ on Windows 11

### ✅ Installing MinGW
I first installed MinGW to get the `g++` compiler that C++ uses to compile code. After installing, I added the MinGW `bin` folder to my system environment variables so that I could run the compiler from anywhere in the terminal.

### ✅ Setting Up the Environment Variables
I went to my system's environment variables and added the full path of MinGW's bin directory. This allowed commands like `g++` and `gcc` to work anywhere without having to type the full path every time.

---

## 🛠️ Setting Up My IDE (VS Code)

I installed the VS Code editor and then added the C++ extension to enable syntax highlighting, auto-complete, and error checking for C++. This made writing C++ code easier and more readable.

---

## 🔍 Understanding C++ Code Structure

I learned that to write and run C++ code, you must first include some important files. For instance, you need to include a file called iostream so that your program can display outputs to the terminal. I also discovered that when working with text (strings), you must include the string library because it's not automatically part of the basic iostream library.  

Another thing I learned is the use of `using namespace std;`. This allows you to use standard library functions without having to always write the full namespace.

---

## 🚨 Learning About Functions

In C++, you don’t use `def` like in Python. Instead, you start by specifying what type of value the function will return. If the function will not return any value, you use the keyword `void`.  
If the function will return an integer, you use `int`.

I learned that the `main()` function is the entry point of a C++ program, and in most cases, it is written as `int main()`, meaning that when the program finishes running, it returns an integer value to indicate success. Returning 0 means the program ran successfully.

Another thing I realized is that a C++ program can only have one `main()` function. You cannot define two `main()` functions in the same file.

---

## ✨ My Personal Project (Individual Assignment)

For my personal project, I wrote a program that welcomed users to the CSC226 Programming Class. I also created a simple addition function to add two numbers together and display the result.  

This project helped me understand how to create functions and call them inside the `main()` function.

---

## 👥 My Group Project (Group Assignment)

In our group project, we created a class called Student. This class had some properties like name, age, and department.  

I learned that you must make your variables public if you want other parts of the program to access them. That’s what we did when defining the class variables.  

We also created a function in the class to display the student's information. This function used the variables of the class and displayed them as output when called.  

Inside the `main()` function, we created an object of the Student class. We gave this object a name (which we called something like `s1`). Then, we assigned values to the properties of the class using the object. Finally, we called the function that displays the student’s details.

---

## 🚀 Compiling and Running the Program

I discovered that in C++, you first have to compile your `.cpp` file before you can run it. Unlike Python where you just write and run, in C++ you must first compile to an executable file.

When compiling, I used a command in the terminal that specifies the file to compile and the name of the executable file to create.

After compiling successfully, I used the terminal to run the executable file. In PowerShell, I used `.\main.exe` to run the file, while in Command Prompt, I simply used `main.exe`.

---

## 🔑 Summary of What I Learned

- To compile and run C++ code on Windows 11, you must install a compiler like MinGW.
- You must add the MinGW `bin` folder to your system PATH so that terminal commands work.
- C++ programs require you to include certain libraries before you can use things like output (`iostream`) or text (`string`).
- The `void` keyword is used for functions that don’t return a value.
- The `int` keyword is used for functions (like `main()`) that return an integer result to indicate success.
- Only one `main()` function can exist in a C++ program.
- In your terminal, you must first compile your `.cpp` files before running them.
- I successfully created a personal project that welcomed users and added numbers.
- As a group, we successfully created a Student class with public properties and a display function, and we understood how to create and use objects in C++.

---

## 👋 Thank You for Reading!

This marks my first complete hands-on experience setting up and using C++ on Windows.  
I hope this helps anyone trying to get started with C++ development and understand what goes on behind the scenes when your program runs.

