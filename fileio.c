#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
	//
	//fwrite(address_data,size_data,numbers_data,pointer_to_file);
	//fopen(path,parameter)
	//fclose(fptr);
	// int num;
 //  	FILE *fptr;

 //   	if ((fptr = fopen("in.txt","r")) == NULL){
 //       printf("Error! opening file");
 //       exit(1);
 //   	}

 //   	if ((fptr1 = fopen("out.txt","w")) == NULL){
 //       printf("Error! opening file");
 //       exit(1);
 //   	}

 //   	fscanf(fptr,"%d", &num);

 //   	printf("Value of n=%d", num);
 //   	fclose(fptr); 

	int filedesc = open("in.txt", O_RDONLY);
	int filedesc1 = open("out.txt", O_WRONLY | O_TRUNC);

	printf("Reading From Input File...\n");
	char data[128];
	if(read(filedesc, data, 10) < 0){
		exit(0);
	}
	printf("Writing to Input File...\n");
	if (write(filedesc1, data, 10) != 10){
		exit(0);
	}
	printf("Done.\n");
	close(filedesc);
	close(filedesc1);

  
   	return 0;
}