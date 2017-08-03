    #include <iostream>
    #include <stack>

    using namespace std;

    int main(){

        int casos;
        stack<int> resultado;

        cin >> casos;

        int inicial[casos];

        for(int i = 0; i < casos; i++)
            cin >> inicial[i];

        for(int i = 0; i < casos; i++){
            if(inicial[i] < 6)
                cout << inicial[i] % 6 << endl;
            else{
                resultado.push(inicial[i] % 6);

                while(inicial[i] > 5){
                    inicial[i] /= 6;
                    resultado.push(inicial[i] % 6);
                }

                while(!resultado.empty()){
                    cout << resultado.top();
                    resultado.pop();
                }

                cout << endl;
            }
        }

        return 0;
    }