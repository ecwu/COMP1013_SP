int compareASCIICode(char char1, char char2){
	if (char1 > char2){// return different value base on the two ASCII code
		return 1;
	}else if (char1 < char2){
		return -1;
	}else if (char1 = char2){
		return 0;
	}else {
		return 2;// if two inputs can't compare, return a error code
	}
}

