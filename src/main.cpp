#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, ""); //ит ис фор рашн, андерстэнд? на всякий пожарный
    srand(time(0)); // инициализатор рандома для слотиков

    vector<string> symbols = {"🍒", "🍋", "🔔", "7"};

    cout << "=== Слот-машина ===" << endl;
    int balance = 1000;
    char play;
    do {
        vector<string> result(3);
        
        for (int i = 0; i < 3; i++) {
            int index = rand() % symbols.size();
            result[i] = symbols[index];

        }

        //сами слоты
        cout << "| " << result[0] << " | " << result[1] << " | " << result[2] << " |" << endl;

        if (result[0] == result[1] && result[1] == result[2]) {
            balance += 200;
            cout << "Конгратилэйшнс, ю пробабли вин нафинг!!! :)" << endl;
            cout << "============ Баланс: " << balance << " =============" << endl;
        }
        else {
            balance -= 100;
            cout << "Бэд трай, лузер. Нужен додеп" << endl;
            cout << "============ Баланс: " << balance << " =============" << endl;
        }

        cout << "Ду ю вона трай додеп? (y/n)";
        cin >> play;
        
    } while ((play == 'y' || play == 'Y') && balance >= 100);

    balance = balance;

    cout << "Денежки кончились? тогда аувидерзейн" << endl;

    return 0;


}
