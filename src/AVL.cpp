/** 
* @file AVL.cpp
* @description AVL düğümü sınıfı
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#include "AVL.hpp"


	AVL::AVL(int sayi){
		this->sayi=sayi;
		yukseklik=0;
		sol=nullptr;
		sag=nullptr;
	}