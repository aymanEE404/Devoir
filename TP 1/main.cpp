#include <iostream>
#include <string>

using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:

    Voiture() : marque(" "), modele(" "), annee(0), kilometrage(0.0), vitesse(0.0) {}


    Voiture(string m, string mod, int an, float km, float vit)
        : marque(m), modele(mod), annee(an), kilometrage(km), vitesse(vit) {}


    void accelerer(float valeur) {
        vitesse += valeur;
    }


    void freiner(float valeur) {
        vitesse -= valeur;
       ;
    }


    void afficherInfo() const {
        cout << "Marque : " << marque << endl;
        cout << "Mod�le : " << modele << endl;
        cout << "Ann�e : " << annee << endl;
        cout << "Kilom�trage en KM : " << kilometrage << endl;
        cout << "Vitesse en km/h : " << vitesse <<  endl;
    }


    void avancer(float distance) {
        kilometrage += distance;
    }


    ~Voiture() {
        cout << "La voiture est d�truite." << endl;
    }
};

int main() {
    // Test de la classe Voiture
    Voiture v1("dacia", "logan", 2022, 20000, 300);
    v1.afficherInfo();

    v1.accelerer(60);
    cout << "Apr�s acc�l�ration :" << endl;
    v1.afficherInfo();

    v1.freiner(40);
    cout << "Apr�s freinage :" << endl;
    v1.afficherInfo();

    v1.avancer(150);
    cout << "Apr�s avoir avanc� :" << endl;
    v1.afficherInfo();

    return 0;
}
