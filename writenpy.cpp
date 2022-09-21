#include <cnpy.h>
#include <vector>
#define DIM 512

using namespace std;

vector<vector<float>> readnpy(const string& npy_name, int read_num, int dims){
    cnpy::NpyArray arr = cnpy::npy_load(npy_name);
    vector<vector<float>> read_vec(read_num,vector<float>(dims,0.0));
        float* loaded_data = arr.data<float>();

    for(int i = 0; i < read_num; ++i){
            for (int j = 0; j < dims; ++j) {
            read_vec[i][j] = loaded_data[i*dims+j];
            }
    }
    return read_vec;
}

vector<long long int> readnpy_int(const string& npy_name, int read_num){
    cnpy::NpyArray arr = cnpy::npy_load(npy_name);
    vector<long long int> read_vec(read_num);
        long long int* loaded_data = arr.data<long long int>();

    for(int i = 0; i < read_num; ++i){
            read_vec[i] = loaded_data[i];
    }
    return read_vec;
}

int main(){
    string location0 = "test_int.npy";
    vector<long long int> read_int = readnpy_int(location0,1000);
    cnpy::npy_save("cpp_write.npy",read_int.data(),{1000},"w");
}

