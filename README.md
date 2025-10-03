# Experiment-16

# Exception Handling in C++  

## AIM
The aim of this mini-project is to understand and implement the concept of **exception handling in C++** using `try`, `catch`, and `throw` statements.  
Specifically, two simple programs are demonstrated:

1. **Division by Zero Exception Handling**  
   - To handle division operations safely and prevent runtime errors when the denominator is zero.  

2. **Age Validation Exception Handling**  
   - To validate a user’s age input and ensure eligibility for voting by handling cases where the age is below 18.  

Through these examples, we aim to develop a clear understanding of:  
- The **syntax** and **working** of exception handling in C++.  
- How exceptions improve program reliability and robustness.  
- Real-world relevance of exceptions in preventing system crashes.  

---

## THEORY

### 1. What is Exception Handling?  
In programming, an **exception** is an unexpected event or error that occurs during the execution of a program, disrupting the normal flow of instructions. Examples include:  
- Division by zero  
- Invalid input  
- File not found  
- Out-of-bounds array access  

**Exception handling** is a mechanism to detect these abnormal situations and handle them gracefully, instead of letting the program crash.  

In C++, exception handling is implemented using three keywords:  

- **`try` block** → Code that may throw an exception is placed inside a `try` block.  
- **`throw` statement** → Used to signal an exception. It transfers control from the `try` block to the corresponding `catch` block.  
- **`catch` block** → Contains the code that handles the exception.  

---

### 2. Syntax of Exception Handling in C++  
```cpp
try {
    // Code that might generate an exception
    if (condition) {
        throw value;  // throw exception
    }
}
catch (datatype variable) {
    // Code to handle the exception
}
