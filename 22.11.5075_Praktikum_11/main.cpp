#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void TampilkanData(const vector<string>& data)
{
    cout << "Data:" << endl;
    for (size_t i = 1; i < data.size(); ++i)
    {
        cout << i << ": " << data[i] << endl;
    }
}

int main()
{
	ifstream is("D:\\data.txt");
	if(!is.is_open())
	{
		cout << "Tidak dapat membuka file\n";
		return 1;
	}
	
	// vector digunakan untuk menyimpan data
	// yang dibaca dari file data.txt
	vector<string> data;
	string line;
	// baca seluruh isi file data.txt
	// dan simpan di vector
	while(getline(is, line))
	{
		data.push_back(line);
	}
	
	is.close();
	
	while(true)
	{
		system("cls");
		string input;
        cout << "1. Input data" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Tampilkan data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        getline(cin, input);

	if(input== "0")
		break;
	
	else if (input == "1")
        {
        	system("cls");
            cout << "Input: ";
            getline(cin, input);
            if (!input.empty())
            {
                data.push_back(input);
                cout << "Data berhasil ditambahkan." << endl;
                system("pause");
            }
            else
            {
                cout << "Input kosong." << endl;
                system("pause");
            }
        }
	else if (input == "2")
        {
        	system("cls");
            if (!data.empty())
            {
                TampilkanData(data);
                cout << "Pilih nomor data untuk dihapus (0 untuk kembali): ";
                size_t index;
                cin >> index;
                cin.ignore();
                
                if (index == 0)
       			{
           		 	cout << "Operasi penghapusan dibatalkan." << endl;
           		 	system("pause");
        		}

                else if (index < data.size())
                {
                    data.erase(data.begin() + index);
                    cout << "Data berhasil dihapus." << endl;
                    system("pause");
                }
                else
                {
                    cout << "Data tidak valid." << endl;
                    system("pause");
                }
            }
            else
            {
                cout << "Vektor kosong." << endl;
                system("pause");
            }
        }
    else if (input == "3")
        {
            TampilkanData(data);
            system("pause");
        }
        else
        {
            cout << "Menu tidak valid." << endl;
            system("pause");
        }
        cout << endl;
    }
	
	ofstream os("D:\\data.txt", ofstream::trunc);
    if (!os.is_open())
    {
        cout << "Tidak dapat membuka file\n";
        return 1;
    }

    // Menulis kembali semua data ke file
    for (const auto d : data)
    {
        os << d << endl;
    }

    os.close();

	return 0;
}

