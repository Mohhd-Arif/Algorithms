print("Code By Arif, \"20-06-2020\"");

listOfArray = [12,54,15,2,6,45];
print("unsorted array :",listOfArray);
for i in range(1,len(listOfArray)):
    key = listOfArray[i];
    j = i-1;
    while(j>=0 and key < listOfArray[j]):
        listOfArray[j+1] = listOfArray[j];
        j -= 1;
    listOfArray[j+1] = key;

print("sorted Array :",listOfArray);

