// stacker.cpp -- testing the Stack class
#include<iostream>
#include<cctype>
#include"10.10_stack.h"

int main(){
    using std::cout;
    using std::cin;
    Stack st;
    char ch;
    unsigned long po;

    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while(cin>>ch && toupper(ch)!='Q'){
        while(cin.get()!='\n'){
            continue;
        }
        if(!isalpha(ch)){
            cout << "not an alpha";
            continue;
        }
        switch(ch){
            case 'A':
            case 'a':   cout << "Enter a PO number to add: ";
                        cin >> po;
                        if (st.isfull())
                            cout << "stack already full\n";
                        else
                            st.push(po);
                        break;
            case 'P':
            case 'p':   if(st.isempty())
                            cout << "stack already empty\n";
                        else{
                            st.pop(po);
                            cout << "PO #" << po << " poped\n";
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}