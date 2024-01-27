/** 
* @file LinkedList.cpp
* @description burası yığıt işlemlerini yaptığım ve 500 düğümü tutan bağlı liste sınıfım
* @course 1. ogretim A grubu
* @assignment 2. odev
* @date 13.12.2023-23.12.2023
* @author Veysel ARAS veysel.aras@ogr.sakarya.edu.tr
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <iomanip> 
#include"LinkedListNode.hpp"

class LinkedList{
	public:
	LinkedListNode*linkedListHead=nullptr;
	LinkedListNode*linkedListLast=nullptr;
	LinkedListNode*linkedListOlusturma=nullptr;
	void linkedListNodeOlustur(int sayi);
	void yigitIslemleri();
	void sonucGoster();
};
#endif