Sameer wants to purchase some lottery tickets for him and his family. But he is a little superstitious when it comes to lotteries. He believes he will only get lucky if he buys ticket that sum the digits of ticket number to 7. Given from various options of tickets, help Sameer pick out the tickets which are lucky.

### **Input Format**
The first line contains a single integer t, denoting number of tickets <br>
Next t lines contain, ticket numbers.

### **Output Format**
Print 'Lucky' if the number is lucky, else print 'Unlucky'.

### **Constraints**

* 1<= t <= 10^5
* 1<= ticket no. <= 10^9
* We keep summing the digits of number until a single digit is left. If the single digit is 7, the ticket is lucky.

### **Sample Input**
2 <br>
999 <br>
1006 <br>

### **Sample Output**
Unlucky <br>
Lucky <br>
