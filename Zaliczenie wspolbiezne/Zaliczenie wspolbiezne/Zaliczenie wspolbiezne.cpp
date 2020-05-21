#include <iostream>
#include <thread>
#include <stdlib.h>

bool work = true;
int rx = 0;
int tx = 0;

int ilosc_danych = 1000;

int tab[1000][4];
int suma = 0;

void monitor()
{
	int suma, wiersz = 0;
	while (work) {
		
		for (wiersz = 0; wiersz < ilosc_danych; wiersz++)
		{
			suma = tab[wiersz][0] + tab[wiersz][1] + tab[wiersz][2] + tab[wiersz][3];
			
			if (suma == 0) break;

			std::cout << "M:[" << tab[wiersz][0] << "." << tab[wiersz][1] << "." << tab[wiersz][2] << "." << tab[wiersz][3] << "]" << std::endl;
			std::cout << "RX: " << rx << " TX: " << tx << std::endl;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}
void nadawanie()
{
	int wiersz = 0;
	while (work) {
		for (wiersz = 0; wiersz < ilosc_danych; wiersz++)
		{
			suma = tab[wiersz][0] + tab[wiersz][1] + tab[wiersz][2] + tab[wiersz][3];
			if (suma == 0) break;
			
			for (int i = 0; i < 4; i++)
			{
				tab[wiersz][i] = rand() % 255 + 1;
			}
			tx++;
			std::cout << "N:[" << tab[wiersz][0] << "." << tab[wiersz][1] << "." << tab[wiersz][2] << "." << tab[wiersz][3] << "]" << std::endl;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}

	
	
	
	

}

void odbieranie()
{
	int suma, wiersz = 0;
	while (work) {

		for (wiersz = 0; wiersz < ilosc_danych; wiersz++)
		{
			suma = tab[wiersz][0] + tab[wiersz][1] + tab[wiersz][2] + tab[wiersz][3];

			if (suma == 0) break;

			std::cout << "O:[" << tab[wiersz][0] << "." << tab[wiersz][1] << "." << tab[wiersz][2] << "." << tab[wiersz][3] << "]" << std::endl;
			for (int i = 0; i < 4; i++)
			{
				tab[wiersz][i] = 0;
			}
			rx++;
			
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}


int main()
{
	
	std::thread tm(monitor);
	std::thread tn(nadawanie);
	std::thread to(odbieranie);

	while (work)
	{
		if (rx > 100) work = false;
		
	}
	if (tm.joinable()) tm.join();
	if (tn.joinable()) tn.join();
	if (to.joinable()) to.join();
	
}