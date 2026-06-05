# School Management System

## Project Overview

This project started as a console-based School Management System written in C during my early programming journey. As I learned Object-Oriented Programming, Java, DBMS, and SQL, I gradually upgraded the project into a database-driven application using Java and MySQL.

The goal of this project is not only to manage student records but also to demonstrate my learning journey from basic programming concepts to backend development and database integration.

---

## Evolution of the Project

### Version 1: C-Based School Management System

**Technology Used**

* C Programming

**Features**

* Add Student
* Search Student
* Update Student
* Delete Student
* Display Students
* Count Students

**Implementation**

* Used structures (`struct student`)
* Used arrays to store student records
* Menu-driven console application

**Limitations**

* Data stored only in memory
* Data lost when the program exits
* No database integration
* Not scalable for real-world usage

---

### Version 2: Migration to Java

**Technology Used**

* Java - Object-Oriented Programming

**Reason for Migration**

* Learn OOP concepts
* Improve code organization
* Prepare the project for database integration
* Follow industry-standard development practices

**Improvements**

* Student data represented using Java classes
* Better code structure
* Improved maintainability

---

### Version 3: Java + MySQL + JDBC

**Technology Used**

* Java
* MySQL
* JDBC

**Achievements**

* Connected Java application to MySQL database
* Implemented database-driven CRUD operations
* Permanent data storage

**Completed Features**

* Add Student
* Display Students
* Search Student

**Database Design**

Student Table:

| Column     | Data Type    |
| ---------- | ------------ |
| roll       | INT          |
| name       | VARCHAR(100) |
| dob        | DATE         |
| section    | CHAR(1)      |
| percentage | FLOAT        |
| grade      | CHAR(1)      |
| state      | VARCHAR(100) |

---

## Learning Outcomes

Through this project, I learned:

* C Programming Fundamentals
* Data Structures using Structures and Arrays
* Java Programming
* Object-Oriented Programming Concepts
* Database Design
* SQL Queries
* JDBC Connectivity
* CRUD Operations
* Backend Development Basics
* Git and GitHub Version Control

---

## Current Project Architecture

Java Application
→
JDBC
→
MySQL Database

---

## Future Enhancements

### Phase 4: Complete CRUD

* Update Student
* Delete Student

### Phase 5: Authentication System

* Admin Login
* User Authentication

### Phase 6: Web-Based Application

Frontend:

* HTML
* CSS
* JavaScript

Backend:

* Java

Database:

* MySQL

### Additional Features

* Student Dashboard
* Attendance Management
* Marks Management
* Fee Management
* Report Generation
* Teacher Module

---

## Key Takeaway

This project represents my transition from writing basic console programs in C to building database-driven applications using Java and MySQL. Instead of creating a completely new project, I chose to improve and evolve an existing project, allowing me to apply newly learned concepts and understand real-world software development practices.

---

## Author

Dhruvanthi K R

Computer Science Engineering Student

Learning Path:
C → DSA → Java → DBMS → Full Stack Development
