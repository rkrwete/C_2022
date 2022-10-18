/*Написать класс ведра Bucket.
свойства: volume (объем в литрах) и used (сколько литров уже налито)
методы: flush() (опустошить. весь объем становится доступным для использования) и
fill(v) (наполнить v литрами жидкости). При вызове метода fill() выполняется проверка
- достаточно ли в ведре незанятого объема. Если достаточно - метод заполняет ведро
(меняет свойство used) и возвращает 0 Если недостаточно - ведро заполняется
настолько, насколько возможно и возвращается разница (тот объем, который не
поместился)
Bucket test_01(12, 3);
cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3
int rest = test_01.fill(14);
cout << "2) " << test_01.used << ", " << rest << "\n"; // 12, 5
test_01.flush();
rest = test_01.fill(8);
cout << "3) " << test_01.used << ", " << rest << "\n"; // 8, 0*/

#include <iostream>

class Bucket{
    private:
    public:
    int volume; //Объём 
    int used; //Литров в объёме
    
    Bucket (int vol, int us){
        volume = vol;
        used = us;
    }
    
    void flush(){ //Опустошить объём
        used = 0;
    }

    int fill(int fill1){
        int rest;
        rest = fill1 + used - volume;

        if (rest > 0){
            used = volume;
        }
        else{
            rest = 0;
            used = fill1 + used;
        }
        
        return rest;
    }
};

int main(){
    Bucket test_01(12, 3);
    std::cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3
    int rest = test_01.fill(14);
    std::cout << "2) " << test_01.used << ", " << rest << "\n"; // 12, 5
    test_01.flush();
    rest = test_01.fill(8);
    std::cout << "3) " << test_01.used << ", " << rest << "\n"; // 8, 0

    return 0;
}