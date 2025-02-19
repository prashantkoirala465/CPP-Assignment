# C++ Programming Practice for OOP Exam

This repository contains a comprehensive collection of C++ programming exercises organized by concepts, designed to help students prepare for Object-Oriented Programming (OOP) examinations. Each implementation is carefully crafted to demonstrate specific programming concepts and object-oriented principles.

## Project Structure and Implementation Details

### 1. Basics
Fundamental C++ programming exercises demonstrating core concepts:

1. **Name Manipulation (1.cpp)**
   ```cpp
   string firstName, lastName;
   cin >> firstName >> lastName;
   cout << lastName << " " << firstName;
   ```
   - Input handling using cin for string input
   - String concatenation with spaces
   - Basic output formatting using cout
   - Example: `firstName = "John", lastName = "Doe" → Output: "Doe John"`

2. **Number Swapping (2.cpp)**
   ```cpp
   a = a + b;    // a now contains sum
   b = a - b;    // b now contains original a
   a = a - b;    // a now contains original b
   ```
   - Arithmetic-based swapping without temporary variable
   - Uses addition and subtraction properties
   - Memory-efficient approach avoiding extra variables
   - Example: `a = 5, b = 3 → a = 3, b = 5`

3. **Digit Manipulation (3.cpp)**
   ```cpp
   firstDigit = number / (int)pow(10, digits - 1);
   lastDigit = number % 10;
   number = number - firstDigit * (int)pow(10, digits - 1) - lastDigit;
   number = number + lastDigit * (int)pow(10, digits - 1) + firstDigit;
   ```
   - Mathematical operations for digit extraction
   - Power function for place value calculation
   - Modulo operations for last digit extraction
   - Example: `12345 → 52341`

### 2. Array Concepts
Advanced array manipulation and algorithmic implementations:

1. **Largest Three Elements (1.cpp)**
   ```cpp
   void findLargestThree(int arr[], int size) {
       int first = INT_MIN, second = INT_MIN, third = INT_MIN;
       for (int i = 0; i < size; i++) {
           if (arr[i] > first) {
               third = second;
               second = first;
               first = arr[i];
           } else if (arr[i] > second) {
               third = second;
               second = arr[i];
           } else if (arr[i] > third) {
               third = arr[i];
           }
       }
   }
   ```
   - Single-pass algorithm implementation
   - Time Complexity: O(n)
   - Space Complexity: O(1)
   - Uses three variables to track largest elements
   - Example: `[10, 4, 15, 6, 8] → 15, 10, 8`

2. **Second Largest Element (2.cpp)**
   ```cpp
   int findSecondLargest(int arr[], int size) {
       int first = INT_MIN, second = INT_MIN;
       for (int i = 0; i < size; i++) {
           if (arr[i] > first) {
               second = first;
               first = arr[i];
           } else if (arr[i] > second && arr[i] != first) {
               second = arr[i];
           }
       }
       return second;
   }
   ```
   - Efficient comparison-based algorithm
   - Handles duplicate elements with arr[i] != first check
   - Edge case handling for arrays < 2 elements
   - Example: `[12, 35, 1, 10, 34] → 34`

3. **K Largest Elements (3.cpp)**
   ```cpp
   void findKLargestElements(int arr[], int n, int k) {
       priority_queue<int, vector<int>, greater<int>> minHeap;
       for (int i = 0; i < n; i++) {
           if (minHeap.size() < k) {
               minHeap.push(arr[i]);
           } else if (arr[i] > minHeap.top()) {
               minHeap.pop();
               minHeap.push(arr[i]);
           }
       }
   }
   ```
   - Min-heap implementation using STL priority_queue
   - Efficient space usage: O(k)
   - Time Complexity: O(n log k)
   - Example: For k=3, `[12, 35, 1, 10, 34, 1, 50] → 50, 35, 34`

### 3. Loops & Patterns

#### Loops_Numeric
- Perfect number verification
- Prime number generation
- Fibonacci series implementation
- Mathematical series calculations

#### Loops_Patterns
- Pyramid pattern generation
- Number pattern implementation
- Character pattern designs
- Complex pattern algorithms

### 4. OOP Concepts
Comprehensive implementation of Object-Oriented Programming principles:

1. **Employee Class (1.cpp)**
   ```cpp
   class Employee {
   private:
       string name;
       int employeeID;
       double salary;

   public:
       Employee(string n, int id, double sal)
           : name(n), employeeID(id), salary(sal) {}

       void setPerformance(int rating) {
           if(rating >= 9) salary *= 1.30;      // 30% increase
           else if(rating >= 6) salary *= 1.10; // 10% increase
           else salary *= 1.02;                 // 2% increase
       }

       void display() {
           cout << "Name: " << name << endl;
           cout << "Employee ID: " << employeeID << endl;
           cout << "Salary: " << salary << endl;
       }
   };
   ```
   - Encapsulation demonstration with private data members
   - Constructor initialization using member initializer list
   - Performance-based salary calculation
   - Rating-based increments with different percentage scales

2. **Date Class (2.cpp)**
   ```cpp
   class Date {
   private:
       int day, month, year;
       bool isValidDate(int d, int m, int y) {
           if (y < 1 || m < 1 || m > 12 || d < 1) return false;
           int daysInMonth;
           switch(m) {
               case 2:
                   daysInMonth = ((y % 400 == 0) || 
                                (y % 4 == 0 && y % 100 != 0)) ? 29 : 28;
                   break;
               case 4: case 6: case 9: case 11:
                   daysInMonth = 30;
                   break;
               default:
                   daysInMonth = 31;
           }
           return d <= daysInMonth;
       }
   public:
       void setDate(int d, int m, int y);
       bool validate();
       // Getter methods
   };
   ```
   - Date validation with leap year handling
   - Month-specific day validation
   - Private helper method implementation
   - Getter/Setter implementation

3. **Student Class (3.cpp)**
   ```cpp
   class Student {
   private:
       string name;
       string className;
       int rollNumber;
       double marks;

   public:
       Student(string n, string c, int r, double m)
           : name(n), className(c), rollNumber(r), marks(m) {}

       char calculateGrade() {
           if (marks >= 90) return 'A';
           else if (marks >= 80) return 'B';
           else if (marks >= 70) return 'C';
           else if (marks >= 60) return 'D';
           else return 'F';
       }

       void display() {
           cout << "Name: " << name << endl;
           cout << "Class: " << className << endl;
           cout << "Roll Number: " << rollNumber << endl;
           cout << "Marks: " << marks << endl;
           cout << "Grade: " << calculateGrade() << endl;
       }
   };
   ```
   - Grade calculation system with multiple thresholds
   - Constructor implementation with member initialization
   - Data member access control through private access specifier
   - Display method for formatted output

### 5. String Concepts
Advanced string manipulation techniques:

1. **String Reversal (1.cpp)**
   ```cpp
   string str;
   for (int i = str.length() - 1; i >= 0; i--) {
       cout << str[i];
   }
   ```
   - Character-by-character reversal
   - Direct index access
   - Example: `helloworld → dlrowolleh`

2. **Word Capitalization (2.cpp)**
   ```cpp
   for (int i = 0; i < str.length(); i++) {
       if (i == 0 || str[i - 1] == ' ') {
           cout << (char)toupper(str[i]);
       }
   }
   ```
   - First letter capitalization
   - Space detection for word boundaries
   - Example: `cpp string exercises → Cpp String Exercises`

3. **Largest Word Finding (3.cpp)**
   ```cpp
   string largestWord = "";
   string currentWord = "";
   for (char c : str) {
       if (c == ' ') {
           if (currentWord.length() > largestWord.length()) {
               largestWord = currentWord;
           }
           currentWord = "";
       } else {
           currentWord += c;
       }
   }
   ```
   - Word length comparison
   - Space-based word separation
   - Running maximum tracking

### 6. Vector Concepts
STL vector implementations:

1. **Adjacent Element Comparison (1.cpp)**
   ```cpp
   for (size_t i = 1; i + 1 < v.size(); i++) {
       if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
           result.push_back(v[i]);
       }
   }
   ```
   - Vector element access
   - Adjacent element comparison
   - Result collection using push_back

2. **String Vector Manipulation (2.cpp)**
   ```cpp
   for (auto &word : colors) {
       if (!word.empty()) {
           word[0] = toupper(word[0]);
       }
   }
   ```
   - Range-based for loop
   - Reference modification
   - Empty string handling

3. **String Vector Filtering (3.cpp)**
   ```cpp
   bool containsDigit(const string &s) {
       for (char c : s) {
           if (isdigit(c)) return true;
       }
       return false;
   }
   ```
   - String character checking
   - Vector filtering
   - Predicate function implementation

### 7. Recursion Concepts
Recursive problem-solving techniques:
- Factorial calculation
- Fibonacci sequence
- Tower of Hanoi
- Binary search implementation

## Setup and Compilation

### Prerequisites
1. C++ Compiler (g++ recommended)
2. Basic understanding of command line
3. Text editor or IDE

### Compilation Instructions
1. **Single File Compilation**
   ```bash
   g++ filename.cpp -o output
   ./output
   ```

2. **Multiple File Projects**
   ```bash
   g++ *.cpp -o program
   ./program
   ```

3. **With Optimization**
   ```bash
   g++ -O2 filename.cpp -o output
   ```

## Learning Path and Best Practices

### 1. Basic Concepts (Start Here)
- Input/Output operations using cin and cout
- Data type understanding and type conversion
- Control structures (if, switch, loops)
- Function implementation and parameter passing

### 2. Array and String Manipulation
- Array traversal techniques (indexing, iterators)
- String manipulation methods (substr, find, replace)
- Search algorithms (linear, binary)
- Sort algorithms (bubble, selection, insertion)

### 3. Object-Oriented Programming
- Class implementation with proper encapsulation
- Object creation and lifecycle management
- Inheritance hierarchies and virtual functions
- Polymorphism through function overloading/overriding

### 4. Advanced Concepts
- STL containers (vector, list, map)
- Exception handling with try-catch blocks
- File operations (ifstream, ofstream)
- Template programming for generic code

## Coding Standards

1. **Naming Conventions**
   - Classes: PascalCase (e.g., Employee, Student)
   - Functions: camelCase (e.g., calculateGrade, setPerformance)
   - Variables: descriptive_names (e.g., employee_count, total_salary)

2. **Documentation**
   - File headers with purpose and author
   - Function documentation with parameters and return values
   - Inline comments for complex logic
   - Algorithm explanations with time/space complexity

3. **Code Organization**
   - Proper indentation (4 spaces recommended)
   - Consistent bracing style (Allman or K&R)
   - Logical grouping of related functions
   - Clear separation of interface and implementation

## Testing and Debugging

1. **Input Validation**
   - Boundary testing for numeric inputs
   - Edge case handling for empty containers
   - Invalid input management with error messages
   - Type safety checks

2. **Memory Management**
   - Resource cleanup in destructors
   - Memory leak prevention with smart pointers
   - Efficient allocation with reserve/resize
   - Copy/Move semantics implementation

3. **Performance Optimization**
   - Algorithm efficiency analysis
   - Resource utilization monitoring
   - Code profiling for bottlenecks
   - Cache-friendly data structures

## Contributing Guidelines

1. **Code Submission**
   - Follow established coding standards
   - Include comprehensive documentation
   - Add unit tests for new features
   - Ensure backward compatibility

2. **Bug Reports**
   - Clear description of the issue
   - Steps to reproduce the problem
   - Expected vs actual behavior
   - Environment details

3. **Feature Requests**
   - Detailed proposal with use cases
   - Implementation suggestions
   - Performance considerations
   - Backward compatibility analysis

## Note

This project is designed as a comprehensive resource for OOP exam preparation. Each implementation includes:
- Detailed comments explaining the logic and approach
- Multiple test cases covering edge scenarios
- Error handling mechanisms with proper messages
- Best practices implementation for maintainability

The exercises progress from basic to advanced concepts, allowing for systematic learning and practice. Regular practice with these implementations will help in understanding both theoretical concepts and practical applications of Object-Oriented Programming in C++.
