#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>

void queueExample() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    std::cout << "Queue ön eleman: " << q.front() << std::endl;
    q.pop();
    std::cout << "Queue yeni ön eleman: " << q.front() << std::endl;
}

void stackExample() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << "Stack üst eleman: " << s.top() << std::endl;
    s.pop();
    std::cout << "Stack yeni üst eleman: " << s.top() << std::endl;
}

void vectorExample() {
    std::vector<int> v = {10, 20, 30};
    v.pop_back();
    for (int num : v) {
        if (num == 10) std::cout << "Vector içinde 10 bulundu" << std::endl;
    }
}

void mapExample() {
    std::map<std::string, int> myMap;
    myMap["elma"] = 5;
    myMap["armut"] = 3;
    myMap["muz"] = 7;
    if (myMap.find("elma") != myMap.end()) {
        std::cout << "Elma bulundu Miktar: " << myMap["elma"] << std::endl;
    }
    myMap.erase("armut");
}

void setExample() {
    std::set<int> mySet = {10, 20, 10};
    if (mySet.find(20) != mySet.end()) std::cout << "20 set içinde bulundu" << std::endl;
    mySet.erase(10);
}

int main() {
    int choice;
    do {
        std::cout << "\nHangi veri yapısını çalıştırmak istersin?\n";
        std::cout << "1. Queue (Kuyruk)\n";
        std::cout << "2. Stack (Yığın)\n";
        std::cout << "3. Vector (Dizi)\n";
        std::cout << "4. Map (Anahtar-Değer)\n";
        std::cout << "5. Set (Tekrarsız Küme)\n";
        std::cout << "0. Çıkış\n";
        std::cout << "Seçimin: ";
        std::cin >> choice;

        switch (choice) {
            case 1: queueExample(); break;
            case 2: stackExample(); break;
            case 3: vectorExample(); break;
            case 4: mapExample(); break;
            case 5: setExample(); break;
            case 0: std::cout << "Programdan çıkılıyor\n"; break;
            default: std::cout << "Geçersiz seçim, tekrar dene\n";
        }
    } while (choice != 0);

    return 0;
}