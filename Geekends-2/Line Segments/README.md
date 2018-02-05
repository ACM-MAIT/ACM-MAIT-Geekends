You are given a set of n line segments with integer coordinates , find the minimum number m of points such that each segment contains at least one point. That is, find a set of integers A of the minimum size such that for any segment [ai,bi] there is a point x ∈ A such that ai ≤ x ≤ bi.<br>

Find the minimum number of points that intersect lines, such that each line segment is intersected atleast once.<br>

### **Input Format**
The first line of the input contains the number n of segments. Each of the following n lines contains two integers ai and bi (separated by a space) defining the coordinates of endpoints of the i-th segment.

### **Constraints**
* 1 ≤ n ≤ 100
* 0 ≤ ai ≤ bi ≤ (10)^9 for all 0 ≤ i < n

### **Output Format**
Output the minimum number of points.

### **Sample Input**
4 <br>
4 7 <br>
1 3 <br>
2 5 <br>
5 6 <br>	

### **Sample Output**
2 <br>
