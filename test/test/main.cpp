#include<iostream>

using namespace std;

int main(){
    //tableaux des questions
    string questions[10] = {
    "Lequel des éléments suivants est un pays tricontinental ?",
    "À quel pays appartient la célèbre entreprise de restauration rapide Burger King ?",
    "Le bureau des services stratégiques (OSS) était l'ancien nom de quelle agence de renseignement ?",
    "La première personne à dessiner la carte de la Terre ?",
    "Qui a posé le premier pas sur la Lune ?",
    "Comment s'appelle le parlement chinois ?",
    "Le désert de l'Ogaden est présent dans__________?",
    "La capitale de l'Amérique est___________?",
    "Wadi Rum quelle ressemblance avec la surface de Mars se trouve dans__________ ?",
    "L'île de Bornéo se trouve dans quel océan ?"
                        };
    // Tableau des réponses possibles
    string options[10][4] = {
    {"chad","Chile","Mali","Swaziland"},
    {"America","England","Turkey","None of these"},
    {"MI6","CIA","ISI","N.O.T"},
    {"Heraclitus","phythagoras","Anaximander","Thales"},
    {"LMP Edgar","CMP Stuart","Neil Armstrong","None of them"},
    {"National Assembly","National people�s Congress","Fedral parliament","None"},
    {"Europe","Asia","Africa","America"},
    {"Washington Dc","Alaska","Hawaii","California"},
    {"Argentina","Israel","Jordan","Egypt"},
    {"Indian Ocean","Pacific Ocean","Arctic Ocean","Atlantic"},
                        };
    //Tableau des bonnes réponses
    string correctOptions[10] = {
        "Chile","America","CIA","Anaximander",
        "Neil Armstrong","National people�s Congress","Africa",
        "Washington DC","Jordan","Pacific Ocean"
                                };
    int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int totalQs = 10;
    int op;

    //Quiz
    for( int i=0; i<totalQs; i++ ){
        cout<<"Question # "<<(i+1)<<endl;
        cout<< questions[i]<<endl;
        cout<< "1."<<options[i][0]<<endl;
        cout<< "2."<<options[i][1]<<endl;
        cout<< "3."<<options[i][2]<<endl;
        cout<< "4."<<options[i][3]<<endl<<endl;
        
        cout<<"Select Option (1-4) or 0 to skip and press enter: ";
        cin >> userOptions[i];
        cout<<endl<<"-----------------------------"<<endl<<endl;
    }
    
    //Bonne réponse
    cout<<"======= ======= ======= ======= "<<endl;
    cout<<"======= Correct Options ======= "<<endl;
    cout<<"======= ======= ======= ======= "<<endl;

    for( int i=0; i<totalQs; i++ ){
        cout<<"Question # "<<(i+1)<<endl;
        cout<< questions[i]<<endl;
        cout<< "1."<<options[i][0]<<endl;
        cout<< "2."<<options[i][1]<<endl;
        cout<< "3."<<options[i][2]<<endl;
        cout<< "4."<<options[i][3]<<endl;
        
        if( userOptions[i] == 0 ){
            cout<< "You Skipped this Question."<<endl;
        }else{
            cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;
        }
        cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

        cout<<"Press any key to continue..."<<endl;
        cout<<endl<<"------------------"<<endl;
    }
    
    //Résultat
    cout<<endl<<endl;
    cout<<"======= ======= ======= ======= "<<endl;
    cout<<"=======      Result     ======= "<<endl;
    cout<<"======= ======= ======= ======= "<<endl;

    int correct = 0;
    int incorrect = 0;
    int skipped = 0;
    for( int i=0; i<totalQs; i++ ){
        if( userOptions[i] != 0 ){
            if( correctOptions[i] == options[i][userOptions[i]-1] ){
                correct++;
            }else{
                incorrect++;
            }
        }else{
            skipped++;
        }
    }
    cout<< "Total Questions : "<< totalQs <<endl;
    cout<< "Correct : "<< correct <<endl;
    cout<< "In-Correct : "<< incorrect <<endl;
    cout<< "Skipped : "<< skipped <<endl;
    
    return 0;
}
