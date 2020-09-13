# CookieNumberPrinter

C++ class to print idle / incremental style numbers. See https://raymii.org for more
info.

## Build

- Install boost:


    apt install libboost-all-dev

- Clone the git repository


    git clone $address
    
- Go in the folder and cmake / make


    cd cookienumberprinter
    mkdir build
    cd build
    cmake .. 
    make

- Run the example:


    ./cookienumberprinter
    
- Output should be:


    CookieNumberPrinter by https://raymii.org, examples.
    Should print:
    0
    1
    1.1
    100.3
    1234
    123 thousand
    1 million
    8 million
    12 billion
    3 quintillion
    897a
    11yyy
    Here we go!
    
    0
    1
    1.1
    100.3
    1234
    123 thousand
    1 million
    8 million
    12 billion
    3 quintillion
    897a
    11yyy
    
    Process finished with exit code 0
