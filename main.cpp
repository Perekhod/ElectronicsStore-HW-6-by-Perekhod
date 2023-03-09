#include "PC.h"
#include "PlayStation.h"
#include "TheBestGift.h"

int main()
{
    setlocale(LC_ALL, "ru");

    ElectronicsStore* Store[7];

    Store[0] = new PC(50000);
    Store[1] = new KeyBoards(7500,"Механическая");
    Store[2] = new Mouse(6000,"Игровая");
    Store[3] = new PlayStation(40000);
    Store[4] = new Discs(5000, "Фифа");
    Store[5] = new Сontroller(6500, "Красный");
    Store[6] = new TheBestGift(50000,40000);

    bool open = true;
    while (open)
    {
        cout << "Выберите продукт: 1 - ПК, 2 - Клавиатура, 3 - Мышь, 4 - PlayStation"
                " 5 - Игровой диск, 6 - Контроллер,7 - Лучший Подарок, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            Store[0]->Show();
            break;

        case 2:
            Store[1]->Show();
            break;

        case 3:
            Store[2]->Show();
            break;

        case 4:
            Store[3]->Show();
            break;

        case 5:
            Store[4]->Show();
            break;
        case 6:
            Store[5]->Show();
            break;
        case 7:
            Store[6]->Show();
            break;
        case 0:
            open = false;
            break;

        default:
            cout << "Используйте клавиши, указанные ниже" << endl;
            break;
        }
    }

    delete Store[0];
    delete Store[1];
    delete Store[2];
    delete Store[3];
    delete Store[4];
    delete Store[5];
    delete Store[6];

    return 0;
}