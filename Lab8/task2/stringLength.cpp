int stringLength(char s[]){
	int i = 0, length = 0;
	while(s[i] != '\0'){ // calculate the string length
		length++;
		i++;
	}
	return length; // return the string length
}