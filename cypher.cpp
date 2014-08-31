#include <string>
#include <QDebug>

using namespace std;


string cypher(string message, int shift2right){
    string newMessage;
    char c ;
    char cL ='a';

    for(int i=0; i<message.length();i++){
        c = message[i] ;
        if(isalpha(c)){
            if(islower(c))
                cL = 'a' ;
            else
                cL = 'A' ;
            c = (c - cL + shift2right) % 26 + cL ;
//            qDebug() << message[i] ;
        }
        newMessage += c ;
    }

    return newMessage ;
}

string decypher(string message, int shift2right){
    string newMessage;
    char c ;
    char cL ='a';

    for(int i=0; i<message.length();i++){
        c = message[i] ;
        if(isalpha(c)){
            if(islower(c))
                cL = 'a' ;
            else
                cL = 'A' ;
            c = ((c - cL - shift2right) + 26) % 26 + cL ;
 //           qDebug() << message[i] ;
        }
        newMessage += c ;
    }

    return newMessage ;
}



