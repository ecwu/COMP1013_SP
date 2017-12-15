/*
	Author: Zhenghao Wu l630003054
	- function 
		int fileCopy(char *destFileName, char *resFileName)
		copy the content from the file resFileName to the file destFileName
	- If the file is copied successfully, return 1, else return 0.
*/
#include <stdio.h>

int fileCopy(char *destFileName, char *resFileName); // function prototype

int main(){
	char str1[20], str2[20];
	int flag;

	scanf("%s", str1); // read name of file (.txt) to be copied
	scanf("%s", str2); // read name of file (.txt) to copy to

	flag = fileCopy(str2, str1); // function call
	if (flag == 1){
		printf("Success\n");
		return 1;
	}else{
		printf ("Failure\n");
		return 0;
	}
}

int fileCopy(char *destFileName, char *resFileName){
	FILE *dest;
	FILE *res; 
	/*
		define two File pointer
	*/ 
	char str[256]; // variable for copy file

	res = fopen(resFileName, "r"); // open the file to be open
	dest = fopen(destFileName, "w"); // open/new the file that content will put

	if (res == NULL || dest == NULL){ // if the file not open successful
		if (dest == NULL){
			fclose(res);
		}else if (res == NULL){
			fclose(dest);
		}
		return 0; // return an error signal
	}

	while((fgets(str, 256, res)) != NULL){
		fputs(str, dest);
	} // Copy the contents one line by one line

	fclose(res);
	fclose(dest); 
	//close two files
	return 1;
}