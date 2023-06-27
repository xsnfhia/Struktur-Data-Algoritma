#include <iostream> 
#include <cstdlib> 
#include <ctime> 
 
int main() {    
	srand(time(0));    
	int angkaTebakan = rand() % 100 + 1;   
	int tebakan;    
	int jumlahTebakan = 0;    
	bool berhasil = false; 
 
    std::cout << "      ------------------------------------------" << std::endl; 
 		std::cout << "       Selamat datang di Permainan Tebak Angka!\n" << std::endl;  
		std::cout << "          BANYAK HADIAH MENARIK MENANTI ANDA! " << std::endl; 
 		std::cout << "      ------------------------------------------" << std::endl; 
 
    while (!berhasil) {      
	   std::cout << "\nPilih 1 angka yang akan ditebak (0-100) = ";      
	   std::cin >> tebakan;        
	   jumlahTebakan++; 
 
        if (tebakan == angkaTebakan) {      
	       berhasil = true; 
            std::cout << "\nSelamat! Anda berhasil menebak angka " << angkaTebakan << " dengan " << jumlahTebakan << " tebakan." << std::endl;         
		    std::cout << "silahkan beli sendiri hadiahnya HAHAHA" << std::endl; 
        }  
 	 	 
 	 	else if (tebakan < angkaTebakan) { 
            std::cout << "\nCLUE !!" << std::endl; 
 	 	 	std::cout << "Angka tebakan terlalu rendah. Silahkan coba lagi!\n" << std::endl; 
        }  
 	 	 
 	 	else { 
 	 	 	std::cout << "\nCLUE !!" << std::endl; 
            std::cout << "Angka tebakan terlalu tinggi. Silahkan coba lagi!\n" << std::endl; 
         
 	 	} 
    } 
     
    return 0; 
} 

