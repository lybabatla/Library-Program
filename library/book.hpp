//begin book.hpp
#include "person.hpp"
#include <iostream>
class Book
{
private:
    std::string title;
    std::string author;
    std::string category;
    int         bookID;
    Person *    personPtr = nullptr;

public:
    Book(int id, std::string bookName, std::string auth, std::string cat);
    std::string getTitle();
    std::string getAuthor();
    std::string getCategory();
    int         getId();
    void        setPersonPtr(Person * ptr);
    Person *    getPersonPtr();
};

Book::Book(int id, std::string bookName, std::string auth, std::string cat) {
    // complete constructor
    id = int getId();
    std::string
}

std::string Book::getTitle() {
    return title; // complete
}

std::string Book::getAuthor() {
    return author; // complete
}

std::string Book::getCategory() {
    return category; // complete
}

int Book::getId() {
    return bookID; // complete
}
void Book::setPersonPtr(Person * ptr) {
} // complete

Person * Book::getPersonPtr() {
    return nullptr; // complete
}
