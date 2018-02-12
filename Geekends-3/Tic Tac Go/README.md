Following is the problem statement

You are given the sequence of moves of a Tic Tac Toe game by the numbers of cells where marks are placed - and your task is to determine, at which step the game was finished

### **Input Format**
First line contains the number of test-cases in the first line.<br>
Next lines have one test-case each containing exactly 9 numbers, locating cells to which moves are performed in order.

### **Output Format**
Answer should contain the number of the move at which game is won by one of players (starting from 1) or 0 if the game is drawn (no winner) after the last move.

### **Constraints**
* 1<= t <= 105
* Indexing starts from 1

### **Sample Input**
3 <br>
7 5 4 1 9 2 8 3 6 <br>
5 1 3 7 6 4 2 9 8 <br>
5 1 2 8 6 4 7 3 9 <br>

### **Sample Output**
7 6 0
