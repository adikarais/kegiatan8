#include <iostream>
using namespace std;

class Praktikum8{
  public:
    void input(){
      cout<<"masukkan banyak jenis data buku : ";
      cin>>bnyk_data;
      for(int i=0;i<bnyk_data;i++){
        cout<<"masukkan jenis buku ke -"<<i+1<<" : ";
        cin>>jenis_judul[0][i];
        cout<<"masukkan kode buku ke-"<<i+1<<" : ";
        cin>>kode_buku[i];
        cout<<"masukkan judul buku ke-"<<i+1<<" : ";
        cin.ignore();
        getline(cin,jenis_judul[1][i]);
      }
      
    }
    void output(){
      // ======tampilan===
      cout<<"jenis buku \t\t | \t\t kode buku \t\t | \t\t Judul buku"<<endl;
      for(int i=0;i<bnyk_data;i++){
        cout<<jenis_judul[0][i]<<"\t\t\t|"<<kode_buku[i]<<"\t\t\t|"<<jenis_judul[1][i]<<endl;
      }
    
    }  

      
//proses
    void sort(){
      for(int i=0;i<bnyk_data-1;i++){
        for(int j=0;j<bnyk_data-1;j++){
          if(kode_buku[j]>kode_buku[j+1]){
            temp_kode=kode_buku[j];
            kode_buku[j]=kode_buku[j+1];
            kode_buku[j+1]=temp_kode;
            
            temp_jenis=jenis_judul[0][j];
            jenis_judul[0][j]=jenis_judul[0][j+1];
            jenis_judul[0][j+1]=temp_jenis;

            temp_judul=jenis_judul[1][j];
            jenis_judul[1][j]=jenis_judul[1][j+1];
            jenis_judul[1][j+1]=temp_judul;
            
          }
        }
      }
    }
    

    
  private:
    int temp_kode;
    string temp_jenis;
    string temp_judul;
    int bnyk_data;
    int kode_buku[50];
    string jenis_judul[50][50];


};
int main() {
  Praktikum8 run;
  run.input();
  run.output();
  run.sort();
  cout << endl;
  cout<<"=======SETELAH DI SORTING====="<<endl;
  run.output();
}
