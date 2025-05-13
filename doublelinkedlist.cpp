//membuat strktur untuk object double LinkedList
#include <iostream>
using namespace std;



struct Node
{
    // deklarasi noMhs dan name untuk menampung data
    int noMhs;
    string name;
    // deklarasi pointer next dan pref untuk penunjukan data sebelum dan sesudah
    Node *next;
    Node *prev;
};

// deklarasi pointer START dan pemberian nilai
Node *START = NULL;

// deklarasi prosedur addNode
void addNode()
{
    // pembuatan node dan pemberian value untuk data noMhs dan name
    Node *newNode = new Node(); //step 1 buat Node baru
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs; // assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name; // assign value to the data field of th


    //insert the new node in the list
    //kondisi jika star == null atau noMhs node baru <= noMhs start
    if (START == NULL )
    {
    