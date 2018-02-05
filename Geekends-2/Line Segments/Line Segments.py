#python2

listOfTuples = []
n = int(input())
for i in range(n):
    beg, end = map(int, raw_input().split())
    listOfTuples.append((beg, end))

sortedBeg = sorted(listOfTuples, key=lambda x: x[0])
sortedEnd = sorted(listOfTuples, key=lambda x: x[1])

thrhold = sortedBeg[0][0] - 1
listOfPoints = []
for i in range(len(sortedEnd)-1):
    beg, end = sortedEnd[i]
    if beg > thrhold:
        listOfPoints.append(end)
        thrhold = end

if listOfPoints[len(listOfPoints) - 1] < sortedEnd[len(sortedEnd) - 1][0]:
    if sortedEnd:
        listOfPoints.append(sortedEnd[len(sortedEnd) - 1][1])
print(len(listOfPoints))

for point in listOfPoints:
    print point,
