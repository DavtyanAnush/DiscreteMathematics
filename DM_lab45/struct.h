#pragma once

using namespace System::Windows::Forms;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;

#include <iostream>		        	// NULL
#include <fstream>                  // Сохранение и открытие графа из файла          
#include <string>

struct link
{
	int data;   // метка вершины
	link* next;   //указатель на следующую вершину
};

class linklist // список смежных вершин
{
private:
	link* first;             // указатель на 1-й элемент списка
public:
	bool e;                  // признак существования или отсутствия списка
	linklist()
	{
		first = NULL; e = false;
	}

	void additem(int d); // добавление элемента
	void delver(int d); // добавление элемента
	int display(int *m);              // вывод списка
	void save();              // сохранение списка
	bool exist(int x);     // проверка вхождения элемента в список
	void makenull();   // опустошение списка;

};
	void linklist::additem(int d) // добавление элемента
	{
		link* newlink = new link;
		newlink->data = d;
		newlink->next = first;
		first = newlink;
	}

	void linklist::delver(int d) // удаление элемента
	{
		link* current = first;           // начинаем с первого элемента
		link* a = NULL;
		while (current)                 // пока не достигнут последний элемент
		{

			if (current->data == d)
			{
				current->data = NULL;
				if (current->next != NULL && a != NULL) a->next = current->next;  // если после и до удаляемого элемента есть элемент передаем адрес предыдущему на следующий
				if (current->next == NULL && a != NULL) a->next = NULL;				//если после удаляемого элемента есть еще элемент(перед ним нет) передаем предыдущему что он последний
				if (a == NULL) first = current->next;							//если перед удаляемым элементом нет элементов, делаем следующий элемент первым
				break;
			}
			else a = current;									//запоминаем адрес предыдущего элемента для передачи адреса

			current = current->next;// двигаемся к следующему элементу

		}
		if (current == NULL && a == NULL) first = NULL; //надо проверить! кажется это на случай если удаляемая вершина в списке была одна. Хз что будет//проверено

	}

	int linklist::display(int *m)    //ПЕРЕДЕЛАТЬ ПОД ФОРМУ
	{
		for (int i = 0; i < 9; i++) m[i] = 0;
		int i = 0;
		link* current = first;
		while (current)
		{
			m[i] = current->data;
			i++;
			current = current->next;
		}
		
		return 0;
	}
	 

	void linklist::save() 
	{
		std::ofstream out("D:\\ASS.txt", std::ios::app); // окрываем файл для записи
		if (out.is_open())
		{
			link* current = first;

			while (current)
			{
				out << current->data << ' ';
				current = current->next;
			}
			out <<"\n";
		}
	}

	void linklist::makenull()
	{
		link* current = first;
		link* deleted;
		while (current)
		{
			deleted = current;
			current = current->next;
			delete deleted;
		}
		first = NULL;
		//cout << "Список опустошен";
	}

	bool linklist::exist(int x)       // функция проверки наличия элемента в списке
	{
		link* current = first;
		if (!current) return 0;
		while (current)
		{
			if (current->data == x)
			{
				return 1;
				break;
			}
			current = current->next;
			if (current == NULL)
				return 0;
		}
	}

class Graph
{
private:
	linklist adj[9];   // массив вершин
public:
	Graph()
	{  }
	bool addedge(int x, int y); // добавление ребра в граф
	bool deledge(int x, int y); // удаление ребра в граф
	bool addvertex(int x);       // добавление вершины в граф
	bool delvertex(int x);       // удаление вершины графа
	int display(int i, int *m);          // вывод списка смежности графа
	void D(); // сумма степеней всех вершин графа
	void paint(); // 
	void isfull();   //  анализ на полноту;
	void loadG();   //  загрузка в память программы;
	void saveG();   //  сохранение в память программы;
};

bool Graph::addvertex(int x)
{
	if (adj[x].e == false) { adj[x].e = true; return 1; }
	else  return 0;
}

bool Graph::delvertex(int x) 
{
	if (adj[x].e == true)
	{
		adj[x].e = false;
		adj[x].makenull();

		for (int i = 1; i < 9; i++)						//удаление ее соединений из списка смежных вершин
			if (adj[i].e == true) adj[i].delver(x);
		return 1;
	}
	else return 0;
}

bool Graph::addedge(int x, int y)
{
	if (adj[x].e == true && adj[y].e == true && adj[x].exist(y) == false && adj[y].exist(x) == false && (x != y))
	{
		adj[x].additem(y);
		adj[y].additem(x);
		return 1;
	}
	else return 0; 
}

bool Graph::deledge(int x, int y)
{
	if (adj[x].e == true && adj[y].e == true && adj[x].exist(y) == true && adj[y].exist(x) == true)
	{
		adj[x].delver(y);
		adj[y].delver(x);
		return 1;
	}
	else return 0; 
}


int Graph::display(int i, int* m)
{
	if (adj[i].e == true)
	{
		adj[i].display(m);
		return i;
	}else return 0;
}

void Graph::isfull()  //ВЫВОД
{
	int flag = 1;
	for (int i = 1; i < 9; i++)
	{
		if (adj[i].e == true && flag == 1)
			for (int j = 0; j < 9; j++)
			{
				if (adj[j].e == true && flag == 1 && j!=i)
					if (adj[i].exist(j) == 1) flag = 1;
					else flag = 0;
			}
	}
	if (flag == 1)  MessageBox::Show("ГРАФ ПОЛНЫЙ");
	else MessageBox::Show("ГРАФ НЕПОЛНЫЙ");
}

void Graph::D()
{
	int x = 0;
	for (int i = 0; i < 9; i++)
		if (adj[i].e == true)
			for (int j = 0; j < 9; j++)
				if (adj[j].e == true && j != i)
					if (adj[i].exist(j) == 1) x++;
	MessageBox::Show("Сумма степеней всех вершин графа -" + x + ".");
}

void Graph::paint()
{
	//Graphics g = e.Graphics;

}
void clear()			//функция очистки файла
{
	std::ofstream out("D:\\ASS.txt", std::ios::trunc);
	out.close();
}
void Graph::saveG()
{
	clear();

	std::ofstream out("C:\\Users\\davty\\Desktop\\ASS.txt", std::ios::app); // окрываем файл для записи
	if (out.is_open())
	{
		for (int i = 1; i < 9; i++)
		{
			if (adj[i].e == true)
			{
				out << i << std::endl;
				adj[i].save();
			}
		}
	}
	out.close();
}
void Graph::loadG()
{
	int k, s;

	for (int i = 1; i < 9; i++)
	{
		if (adj[i].e == true)
		{
			adj[i].e = false;
			adj[i].makenull();

		}
	}
		std::string str;
		std::string ss;

		std::ifstream in("C:\\Users\\davty\\Desktop\\ASS.txt"); // окрываем файл для чтения
		if (in.is_open())
		{
			while (getline(in, str))
			{
				k = atoi(str.c_str());    //надо как-то прочитать первую строку в к
				adj[k].e = true;
				getline(in, str);				//а потом вторую строку прочитать в стриг и читать 
				if (str != "" && str != " ")
				for (int i = 0; i < strlen(str.c_str()); i++)
				{
					if (str[i] != ' ')
					{
						ss = str[i];
						s = atoi(ss.c_str());				//посимвольно внося в список смежных вершин
						adj[k].additem(s);					//сукакааак
					
					}					//
				}
			}	
		}
		in.close();

}

Graph G;