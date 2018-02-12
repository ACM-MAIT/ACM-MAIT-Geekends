
Jack wants to balance his work and play time such that he can maximise the amount to time he spend playing. But Jack cannot perform more than one action in a day, he can either study, play or rest. Given an array of n days where ith day denotes the time he has available on the ith day, find the maximum time he spent playing.<br>

Jack has to study before he can play.<br>

To balance his cycle, he decides to play after he studies. He cannot study continuously without playing a day in between. He can rest as many days he wants but he has to play before studying again.<br>

Time he devotes studying is considered as lost time.<br>

Time he devotes playing is considered to be fun time.<br>

Time he spent resting is neither lost nor fun time.<br>

Jack gets easily tired after playing a day, so he has to rest the next day.<br>

### **Input Format**
The first line contains a single integer t, denoting number of test cases.<br>
Each test case contains:<br>
A line containing n, denoting number of days.<br>
A line containing an array of time available on n days, separated by a space.<br>

### **Output Format**
For each test case, print the maximum fun time he can have after n days.<br>
Since the answer could be very large you would need to take the mod of the answer with 10^9+7.

### **Constraints**

* 1<= t <= 5
* 1<= n <= 10^5
* 1<= time available on each day <= 10^6

### **Sample Input**
1 <br>
5 <br>
1 3 4 1	8 <br>

### **Sample Output**
9
