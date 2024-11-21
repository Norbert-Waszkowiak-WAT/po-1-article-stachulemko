#include "chapter.cpp"
#include <vector>
using namespace std;
class Book{
    private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter>chapters;
    public:
    Book(){};
    Book(std::string bookTitle,Author bookAuthor,int year,vector<Chapter> bookChapters){
        title=bookTitle;
        author=bookAuthor;
        publicationYear=year;
        chapters=bookChapters;
    }
    void addChapter(const Chapter &chapter){
        chapters.push_back(chapter);
    }
    void displayInfo(){
        return ;
    }
    string getTitle(){
        return title;
    }
    Author getAuthor(){
        return author;
    }
    int getPublicationYear(){
        return publicationYear;
    }
    vector<Chapter> getChapters(){
        return chapters;
    }

};