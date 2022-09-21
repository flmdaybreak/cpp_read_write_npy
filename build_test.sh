g++ readnpy.cpp -o readnpy -L /usr/local/lib -Wl,-rpath=/usr/local/lib -lcnpy -lz  
g++ writenpy.cpp -o writenpy -L /usr/local/lib -Wl,-rpath=/usr/local/lib -lcnpy -lz  
