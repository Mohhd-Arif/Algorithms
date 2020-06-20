console.log("Code by Arif, \"20-06-2020\"");
var listOfArray = [11,3,43,2,6,7];
console.log("unsorted Array = ",listOfArray);
var iter = 1;
for(var i = 1;i<listOfArray.length;i++){
	//console.log(listOfArray[i],"loop round:",iter++);
	var key = listOfArray[i];
	var j = i-1;
	while(j>=0 && key < listOfArray[j]){
		//console.log("loop variation: j=",j,"value =",listOfArray[j],"i = ",i,"value=",listOfArray[i]);
		//console.log("list of array =",listOfArray);
		listOfArray[j+1] = listOfArray[j];
		j--;
		//console.log("list of array after distribution :" ,listOfArray);
	}
	listOfArray[j+1] = key;
}

console.log("sorted Array = ",listOfArray);
