# 📋 Terminal Task Manager (C++)

```bash
`Project Context`: This project was originally developed as a technical assignment for my seniors, designed to demonstrate proficiency in C++ system design and efficient data handling.
```

A clean, efficient command-line tool built to master the fundamentals of **Object-Oriented Programming** and **C++ STL**.

## 💡 The "Why" Behind the Project

I built this project to move beyond simple "Hello World" scripts and tackle real-world software design challenges. As a 2nd-year CSE student, my goal was to implement a tool that wasn't just functional but also architecturally sound—focusing on how data moves through a system and how to keep code modular and maintainable.

## 🛠️ Technical Deep Dive (The Resume Bits)

If you’re visiting from my resume, here is how the technical points translate to the source code:

* **OOP & Encapsulation:** The project is structured using two primary classes: `Tasks` (the data unit) and `todo` (the manager). By using private members and public interfaces, I ensured strict data encapsulation - preventing unauthorized access to the task state. <br>
* **STL & Memory Management:** I chose `std::vector` for task storage to benefit from contiguous memory and fast random access. <br>
* **Algorithmic Efficiency:** For task removal, I implemented **iterator-based logic** (`tasks.erase`). This results in  time complexity, as the vector must shift elements to maintain order - a choice made to prioritize data integrity over constant-time removal.

## ✨ Key Features

* **Dynamic Task Management:** Add, view, and delete tasks in real-time.
* **Status Tracking:** Visual indicators (`[✓]` or `[ ]`) to distinguish between pending and completed items.
* **Input Handling:** Uses `getline()` and `cin.ignore()` to ensure the CLI handles spaces and newlines without breaking the user experience.

## 🚀 Getting Started

### Prerequisites

* A C++ compiler (like `g++`)
* Git (to clone the repo)

### Installation

1. **Clone the repository:**
```bash
git clone https://github.com/ayushHardeniya/ToDoList-MiniProject.git
cd ToDoList-MiniProject
```

2. **Compile the project:**
```bash
g++ main.cpp -o todo_app
```

3. **Run the application:**
```bash
./todo_app
```

### 📝 A Note on the "Fork"

This repository is a fork created for a specific `technical assignment`. My contributions focus on the implementation of the todo class and the integration of STL Vector logic to solve the task management challenge provided by my seniors.

## 🤝 Let's Connect!

I am currently a 2nd-year B.Tech student at AKTU and the Founder of **ZenYukti**, a community of 1,300+ tech enthusiasts. I love building tools that solve daily problems while refining my understanding of Data Structures and Algorithms.

* **GitHub:** [ayushHardeniya](https://github.com/ayushHardeniya)
* **LinkedIn:** [ayush Hardeniya](https://www.google.com/search?q=https://linkedin.com/in/ayushHardeniya)
