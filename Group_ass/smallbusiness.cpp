#include <iostream>
using namespace std;

class small_business {
    private:
        float P; // Principal
        float R; // Interest rate
        float T; // Time years
        float SI; // Simple Interest
    public:
        void getData(small_business& obj, int choice) {
            if(choice == 1){
                cout << "Enter Principal, Rate, Time: ";
                cin >> obj.P >> obj.R >> obj.T; //Accessing private members P, R, T
            } else if (choice == 2) {
                cout << "Enter Simple Interest, Time, Rate: ";
                cin >> obj.SI >> obj.T >> obj.R; //Accessing private members SI, T, R
            } else if (choice == 3) {
                cout << "Enter Simple Interest, Time, Principal: ";
                cin >> obj.SI >> obj.T >> obj.P; //Accessing private members SI, T, P
            } else if (choice == 4) {
                cout << "Enter Simple Interest, Rate, Principal: ";
                cin >> obj.SI >> obj.R >> obj.P; //Accessing private members SI, R, P
            }
        }
        friend small_business calculate_simple_interest(small_business, small_business, small_business);
        friend small_business calculate_interest_rate(small_business, small_business, small_business);
        friend small_business calculate_principal(small_business, small_business, small_business);
        friend small_business calculate_time(small_business, small_business, small_business);
};


/* Accessing friendly function and returning objects */
small_business calculate_simple_interest(small_business principal, small_business rate, small_business time) {
    small_business simpleinterest;
    simpleinterest.SI = principal.P * rate.R * time.T; // P x R x T
    cout << "Simple interest is: " << simpleinterest.SI << endl;
    return simpleinterest;
}

small_business calculate_principal(small_business time, small_business rate, small_business simpleinterest) {
    small_business principal;
    principal.P = simpleinterest.SI / (rate.R * time.T); // SI / R * T
    cout << "Principal is: " << principal.P << endl;
    return principal;
}

small_business calculate_interest_rate(small_business time, small_business principal, small_business simpleinterest) {
    small_business rate;
    rate.R = simpleinterest.SI / (principal.P * time.T);  // SI / P * T
    cout << "Rate is: " << rate.R << endl;
    return rate;
}

small_business calculate_time(small_business rate, small_business principal, small_business simpleinterest) {
    small_business time;
    time.T = simpleinterest.SI / (rate.R * principal.P);  // SI / R * P
    cout << "Time is: " << time.T << endl;
    return time;
}

int main() {
    small_business lasuicecream;
    int choice;
        do {
            cout <<"\nWhat task do you want to perform: ";
            cout << "Enter the appropraite number: ";
            cout <<endl<<"1: Calculate Simple Interest";
            cout <<endl<<"2. Calculate Principal";
            cout <<endl<<"3. Calculate Rate";
            cout <<endl<<"4. Calculate Time";
            cout <<endl<<"5: quit:";
            cout <<endl<<endl<<"what is your option:";
            cin >> choice;

        switch(choice) {
            case 1: {
                lasuicecream.getData(lasuicecream, 1);  // Get P, R, T for SI calculation
                small_business result = calculate_simple_interest(lasuicecream, lasuicecream, lasuicecream);
                break;
            }
            case 2: {
                lasuicecream.getData(lasuicecream, 2);  // Get SI, T, R for Principal calculation
                small_business result = calculate_principal(lasuicecream, lasuicecream, lasuicecream);
                break;
            }
            case 3: {
                lasuicecream.getData(lasuicecream, 3);  // Get SI, T, P for Rate calculation
                small_business result = calculate_interest_rate(lasuicecream, lasuicecream, lasuicecream);
                break;
            }
            case 4: {
                lasuicecream.getData(lasuicecream, 4);  // Get SI, R, P for Time calculation
                small_business result = calculate_time(lasuicecream, lasuicecream, lasuicecream);
                break;
            }
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice!=5);
    
    return 0;
}
