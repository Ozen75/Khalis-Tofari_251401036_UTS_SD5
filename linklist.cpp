#include <iostream>
#include <string>

struct Node{
    std::string username;
    int bintang;
    Node *next;
};

Node* head = NULL;
Node* tail = NULL;

void insert_tail(){
    std::string m;
    std::cout << "username : ";
    std::cin >> m;

    int n;
    std::cout << "bintang : ";
    std::cin >> n;

    Node *newNode = new Node;
    newNode->username = m;
    newNode->bintang = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_head() {
    if(head == NULL) {
        std::cout << "List Kosong!" << std::endl;
        return;
    }

    Node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void delete_tail() {
    if (head == NULL) {
        std::cout << "List kosong!" << std::endl;
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node *p = head;
    while (p -> next != tail) {
        p = p -> next;
    }

    delete tail;
    tail = p;
    tail -> next = NULL;
}

void show_imo() {
    Node *temp = head;
    std::cout << "Yang Imo Imo aja: \n";
    while (temp != NULL) {
        if (temp -> bintang >= 100) {
            std::cout << "username : " << temp -> username << "\n";
            std::cout << "bintang : " << temp -> bintang << "\n";
        }
        temp = temp -> next;
        std::cout << "\n";
    }
    std::cout << "NULL\n";
}


int main(){
    int menu;
    do {
        std::cout << "[1] insert tail\n";
        std::cout << "[2] delete head\n";
        std::cout << "[3] delete tail\n";
        std::cout << "[4] tampilkan player imo\n";
        std::cout << "[5] keluar\n";
        std::cout << "Pilih menu (1-5): ";
        std::cin >> menu;

        if (menu == 0 || menu > 5) {
            std::cout << "input invalid!";
        }

        switch (menu) {
            case 1:
                insert_tail();
                break;
            case 2:
                delete_head();
            case 3:
                delete_tail();
            case 4:
                show_imo();
        }
    }while (menu != 5);

}