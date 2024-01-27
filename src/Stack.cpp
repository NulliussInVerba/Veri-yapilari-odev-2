/** 
* @file Stack.cpp
* @description burası stack düğümü sınıfı
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#include "Stack.hpp"


	Stack::Stack(int sayi){
		this->sayi=sayi;
		next=nullptr;
	}