/** 
* @file AVL.hpp
* @description AVL düğümü sınıfı
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#ifndef AVL_HPP
#define AVL_HPP

class AVL{
	public:
	AVL*sol;
	AVL*sag;
	int sayi;
	int yukseklik;
	AVL(int sayi);
};
#endif