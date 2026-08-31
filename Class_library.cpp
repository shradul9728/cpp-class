#include<bits/stdc++.h>
using namespace std;
class LibraryBook{
    int bookId;
    string bookName;
    string author;
    int price;
    static int totalbooks;
    static displayBook(){
        return totalbooks;
    }
};
