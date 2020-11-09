#include <stdio.h>

int main(int argc, char const *argv[])
{
	int input_jarak, input_durasi;
	int jarak = 0;
	int i;

	printf("Masukkan jarak dalam centimer\t= ");
	scanf("%d", &input_jarak);

	//Menentukan jarak tangan dekat, sedang, ataupun jauh
	if (input_jarak < 5){
		jarak = 1;	//Dekat
	}else if(input_jarak >= 5 && input_jarak <= 10){
		jarak = 2; //Sedang
	}else{
		jarak = 3; //Jauh
	}

	//Menentukan dan menampilkan output
	if (jarak == 1){
		printf("Penyemprotan pendek\n");
		for (i = input_jarak; i > 0; i--){ 
    		printf("\n%d..",i);
		}
		printf("\nSelesai\n");
	}else if (jarak == 2){
		printf("Penyemprotan sedang\n");
		for (i = input_jarak; i > 0; i--){ 
    		printf("\n%d..",i);
		}
		printf("\nSelesai\n");
	}else if (jarak == 3){
		printf("Penyemprotan lama\n");
		for (i = input_jarak; i > 0; i--){ 
    		printf("\n%d..",i);
		}
		printf("\nSelesai\n");
	}

	return 0;
}