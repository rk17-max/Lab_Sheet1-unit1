# Data Structures Implementation and Analysis Report
## B.Tech Computer Science Engineering

### Table of Contents
1. [Implementation Overview](#implementation-overview)
2. [Time and Space Complexity Analysis](#time-and-space-complexity-analysis)
3. [Performance Comparison](#performance-comparison)
4. [Recurrence Relations](#recurrence-relations)
5. [Experimental Results](#experimental-results)
6. [Conclusions](#conclusions)

## Implementation Overview

### 1. Static Array Implementation
The static array implementation includes the following features:
- Fixed-size array allocation
- Basic operations: insertion, deletion, and traversal
- Boundary checking for array operations
```cpp
class StaticArray {
    // Size is fixed at initialization
    // No dynamic resizing capability
    // Direct memory access
}





2. Dynamic Array Implementation
The dynamic array implementation includes:

Resizable array with growth factor of 2
Amortized O(1) insertion time
Automatic memory management

class DynamicArray {
    // Doubles in size when capacity is reached
    // More flexible than static array
    // Efficient memory utilization
}


3. String Operations
Implemented string manipulation operations:

String concatenation
Substring extraction
Character frequency analysis





Time and Space Complexity Analysis
Static Array Operations
Operation	Time Complexity	Space Complexity
Insertion (at end)	O(1)	O(1)
Insertion (at position)	O(n)	O(1)
Deletion	O(n)	O(1)
Traversal	O(n)	O(1)
Search	O(n)	O(1)



Dynamic Array Operations
Operation	Time Complexity	Space Complexity
Insertion (at end)	O(1)*	O(n)
Insertion (at position)	O(n)	O(n)
Deletion	O(n)	O(1)
Traversal	O(n)	O(1)
Resizing	O(n)	O(n)


String Operations
Operation	Time Complexity	Space Complexity
Concatenation	O(n + m)	O(n + m)
Substring	O(k)	O(k)
Character Frequency	O(n)	O(k)
