# Animal Client - Animal Clinic Waiting Queue

## Overview

This project simulates an animal clinic waiting room using C++.

The program demonstrates object-oriented programming concepts by creating a base `Animal` class and four derived animal classes: `Turtle`, `Cat`, `Dog`, and `Cow`.

Each animal has a name and its own sound. The program also uses a linked list to manage the clinic's waiting queue, allowing animals to arrive, join the line, be inserted into different positions, and leave after receiving service.

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Classes and Objects
- Inheritance
- Polymorphism
- Virtual Functions
- C++ Standard Library (`list`)

## Classes and Inheritance

The program contains five classes.

### 1. Animal (Base Class)

The `Animal` class serves as the parent class for all other animal types.

It contains:

- A protected `name` variable.
- A default constructor that initializes the name as "unknown".
- A `setName()` function to assign an animal's name.
- A `getName()` function to retrieve the animal's name.
- A virtual `Sound()` function that displays a default animal sound message.

### 2. Derived Animal Classes

Four classes inherit from the `Animal` base class.

Each class overrides the virtual `Sound()` function to display its own sound.

| Class | Sound |
|---|---|
| Turtle | hiss. |
| Cat | meow. |
| Dog | vov-vov. |
| Cow | moo. |

This demonstrates inheritance because each derived class receives the properties and functions of the parent `Animal` class while providing its own implementation of the `Sound()` function.

## Polymorphism

The project uses a virtual function called `Sound()` in the base class.

Each derived class overrides this function using the `override` keyword.

This demonstrates runtime polymorphism, allowing different animal types to provide their own implementations of the same function.

The program also uses base-class pointers (`Animal*`) to store pointers to different derived animal objects in the same linked list.

## Data Structure: Linked List

The program uses the C++ Standard Library's `list` data structure to manage the animal clinic's waiting queue.

The waiting line is declared as:

```cpp
list<Animal*> line;
```

The linked list stores pointers to `Animal` objects, allowing it to hold different derived animal types together.

The program uses the following list operations:

- `push_back()` - Adds an animal to the end of the waiting line.
- `insert()` - Inserts an animal at a specific position in the line.
- `pop_front()` - Removes the first animal after it receives service.
- `begin()` - Accesses the beginning of the list.

## Program Execution

The program demonstrates six different time points as animals arrive and leave the clinic.

### Time Point 1: Empty Queue

The clinic begins with an empty waiting line.

### Time Point 2: Turtle Arrives

A turtle named Sam arrives and joins the waiting line.

### Time Point 3: Cat Arrives

A cat named Nick arrives and joins the end of the waiting line.

### Time Point 4: Dog Arrives

A dog named Jeff arrives and is inserted between the turtle and the cat.

This demonstrates how the linked list can insert an element at a specific position.

### Time Point 5: Cow Arrives

A cow named Anna arrives and joins the end of the waiting line.

### Time Point 6: Turtle Gets Served

The turtle at the front of the waiting line receives service and leaves the clinic.

The program uses `pop_front()` to remove the turtle from the queue.

## Expected Output

```text
Time point 1:
Animal Clinic <=

Time point 2:
Animal Clinic <= Sam

Time point 3:
Animal Clinic <= Sam, Nick

Time point 4:
Animal Clinic <= Sam, Jeff, Nick

Time point 5:
Animal Clinic <= Sam, Jeff, Nick, Anna

Time point 6:
Animal Clinic <= Jeff, Nick, Anna
```

## How to Run

### Requirements

- A C++ compiler that supports C++11 or later.
- A development environment such as Visual Studio or g++.

### Compiling

If using g++, compile the program with:

```bash
g++ -std=c++11 AnimalClient.cpp -o AnimalClient
```

### Running

Execute the compiled program:

```bash
./AnimalClient
```

On Windows, run:

```bash
AnimalClient.exe
```

Replace `AnimalClient.cpp` with the actual name of your source file if it is different.

## Project Goal

The goal of this project was to demonstrate object-oriented programming and linked list operations in C++.

It combines inheritance, polymorphism, virtual functions, and base-class pointers to represent different animal types within one data structure.

It also demonstrates how a linked list can be used to manage a waiting queue by adding animals, inserting them at specific positions, and removing them when they are served.
