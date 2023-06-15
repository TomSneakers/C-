//
//  Personnage.hpp
//  POO
//
//  Created by Gaspar Musitelli on 14/06/2023.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <stdio.h>
#include <string>

namespace Personnages
{

class Personnage
{
public:
    Personnage(std::string nom);
    ~Personnage();
    
    std::string     GetNom() const { return m_nom; };
    double          GetVie() const { return m_vie; };
    int             GetNiveau() const { return m_niveau; };
    
    bool Attaquer(Personnage* ennemi);
    bool EstVivant() const;
    
protected:
    bool Defendre(Personnage* attaquant);
    
private:
    std::string m_nom;
    
protected:
    double      m_vie;
    int         m_niveau;
};

}; // namespace Personnages

#endif /* Personnage_hpp */
