/** 
* @file main.cpp
* @description burada dosya okuma ve bellek işlemlerini yaptım
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#include"LinkedList.hpp"
#include <fstream>
#include <sstream>

int main(){
	fstream file("Veri.txt");
	string line;
	int number;
	LinkedList*list=new LinkedList();
	int sayac=1;
	while (!file.eof()) {
		getline(file, line);
		istringstream iss(line);
		list->linkedListNodeOlustur(sayac);
		sayac++;
		while (iss >> number) {
			list->linkedListLast->avlEkle(number);
		}
		list->linkedListLast->stackEkle();
	}
	list->yigitIslemleri();
	delete list;
	return 0;
}