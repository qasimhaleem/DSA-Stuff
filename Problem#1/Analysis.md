Task Analysis: Binary Tree Difference Check1.

Problem Overview: 
The problem asks to compare two "Perfect Binary Trees" and find where they differ. Even though its called a tree problem, the input is in level order, which means the data is already in a flat list. Because of this, I decided to treat the trees as two simple arrays. The goal is to compare nodes at the same index, find the non zero differences, and sort them based on how often they appear (frequency) and their actual size.2. 



My Solution Approach:
    1. Finding Differences: I looped through both lists (Expected and Actual) at the same time. I calculated the absolute difference between them: $|Expected[i] - Actual[i]|$. If the difference was zero, I ignored it.
    2. Counting Frequency: To keep track of how many times each difference appeared, I used a std::map. For example, if the difference 3 appeared three times, the map stored that count for me.
    3. Sorting Logic: This was the main part of the task. I used the std::sort function with a custom rule:
        Rule 1: Put the numbers that appeared most often at the beginning.
        Rule 2: If two numbers appeared the same number of times, put the bigger number first.
    4. Building the Result: Finally, I joined all the sorted numbers into one long string to print as the final answer.3. 
    
Complexity Analysis 
    Time Complexity: $O(N \log N)$Iterating through the input takes $O(N)$ time.The most "expensive" part is the sorting, which takes $O(N \log N)$ where $N$ is the number of nodes.
    Space Complexity: $O(N)$I used a vector to store the differences and a map for the frequencies, so the memory usage grows with the number of nodes.


Summary of my work
I chose Problem 1 because I am interested in how data structures like trees can be simplified. I wrote the solution in C++ and made sure it works on older compilers like Dev-C++. The program takes the input, finds the absolute difference between nodes, and then sorts them by frequency and size. I also added some text in the console so the user knows what to type in next.

My Understanding
Even though the problem says it's about Binary Trees, because it is a "Perfect" tree and the input is "Level Order," we don't really need to make a complex tree structure with pointers. I realized we can just use two arrays (vectors). The main challenge was the sorting part—making sure the numbers that appear most often come first.