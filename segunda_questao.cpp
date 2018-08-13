#include <iostream>
#define TAM 5

using namespace std;

void insertion_sort(int *l){
	int i, j, tmp;
	for(i=1;i<TAM;i++){
		tmp = *(l+i);
		j = i - 1;
		while((*(l+j) > tmp) && (j >= 0)){
			*(l+j+1) = *(l+j);
			*(l+j) = tmp;
			j--;
		}
	}
}

int main(){
	int lista[TAM] = {5,9,1,6,8};
	int i;
	for(i=0;i<TAM;i++){
		cout << lista[i] << " ";	
	}
	cout << endl;
	insertion_sort(lista);
	for(i=0; i<TAM; i++) {
		cout << lista[i] << " ";
	}
	return 0;
}