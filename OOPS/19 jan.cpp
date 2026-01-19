#include<iostream>
using namespace std;
//class 
int main(){
    class Smartphones{
        public:
        int camera;
        string speaker;
        float size;
        int prize;
        Smartphones(int c, string s){
            camera = c;
            speaker = s;

        }
        void display(){
            cout<< camera;
            cout<< speaker;
        }
    };
    //object creation apple
    Smartphones apple (20, "stereo");
    Smartphones samsung (16, "mono");
    apple.display();
}