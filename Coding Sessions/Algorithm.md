### What is an Algorithm? Definition, Types, Complexity, Examples

1. An algorithm is a "well-defined" "sequential" "computational technique" that "accepts a value or a collection of values as input" and "outputs a value or output that is needed to solve a problem", "in a finite number of steps".
2. Algorithm is "Independent of the language" used
3. It tells a "logical step-by-step procedure to solve a problem"
4. Examples of algorithm in real life :
    Recipe
    Google Search
    Sorting Papers
5. Types of algorithms :
    Sorting
    Searching
    Graph
6. We need algorithms to make the most optimal use of our computing and memory resources since both of them are limited and cost money
7. Algorithm should be unambiguous, have 0 or more inputs, 1 or more well defined outputs which match the desired output, It must have finite number of steps and reach to a halt in the end, also it should be independent of computer code.
8. Algorithm is judged on basis of *time & space complexities* which refer to the time taken by the algorithm based on number of iterations/comparisons etc (has fixed components like conditionals that just come once & variable components like loops and recursions that take place multiple times) and the extra space occupied by the program(has fixed parts like input/output variables and program size, and it has variable parts like temporary variables, dma, recursion stack space).
9. Advantage of Algorithms : 
    i)Easy to understand
    ii)Language-Independent
    iii)Debugging
    iv)SubProblems(Easier to code)
10. Disadvantages :
    Time consuming
    Requires logical skills
    Difficult to show branching & looping

### What is Algorithm? Algorithm Basics

**Meaning :**

- A  set of rules to be followed in calculations or other problem-solving operations
- A procedure for solving a mathematical problem  in a finite number of steps that frequently by recursive operations
1. Algorithms are language independent plain instructions which can be implemented in any language and still give the same output
2. Characteristics of an Algorithm : 
    i) Clear and unambiguous (each step must be clear and lead to only one meaning)
    ii) Well Defined Inputs (0 or more) & Outputs (at least 1)
    iii) Must Terminate after Finite Steps/Time:
    iv) Language Independent
    v) Feasible (simple, efficient)
    vi) It is a sequential/step-by-step procedure
3. Pre-requisites :
    i)Problem 
    ii)Constraints 
    iii)Input 
    iv)Output 
    v)Solution
- **Priori Analysis:** 
  - “Priori” means “before”
  - means checking the algorithm before its implementation
  - checked when it is written in the form of theoretical steps 
  - This Efficiency is measured by assuming that all other factors, for example, processor speed, are - constant and have no effect on the implementation
  - done usually by the algorithm designer
  - independent of the type of hardware and language of compiler
  - gives approximate answer for the complexity of the program.
- **Posterior Analysis:** 
  - “Posterior” means “after”
  - means checking the algorithm after its implementation
  - algorithm is checked by implementing it in any programming language and executing it
  - This analysis helps to get the actual and real analysis report about correctness, space required, time consumed etc. 
  - it is dependent on the language of compiler and type of hardware used.