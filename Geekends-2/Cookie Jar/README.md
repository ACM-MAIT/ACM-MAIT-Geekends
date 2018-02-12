Rahul doesnt like to share his cookies with anyone. He has n cookie jars numbered 1 to n. He can either store a cookie in a cookie jar or if there is a cookie in the jar, he removes that cookie and eats it. <br>

Initially all the jars are empty.<br>

On the first day, he stores one cookie in each jar. On the second day, he visits only the jars which are multiple of two and removes the cookie. On the third day, he visits only the jars which are multiple of three and if a cookie is already present in the jar he removes that cookie or if there isnt any cookie in the jar he adds one. Similarly on the ith day he visits jars which are multiples of i and either adds a cookie (if not present) or removes a cookie (if already present).<br>

After n days he reviews how many of the cookies are stored in the jars.

### **Input Format**
The first line contains a single integer t, denoting number of test cases.<br>
Next t lines contains, a number n denoting number of jars. <br>

### **Output Format**
Number of cookies present in all the jars after n days.

### **Constraints**

* 1<= t <= 10^5
* 1<= n <= 10^9

### **Sample Input**
2 <br>
3 <br>
4 <br>

### **Sample Output**
1 <br>
2 <br>
