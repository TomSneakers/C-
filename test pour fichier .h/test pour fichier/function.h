#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <string>

bool choixGenre();
void saisieInfoPersonne(std::string& prenom, unsigned int& age, bool& homme);
void calculerZonesEndurance(unsigned int FCRepos, unsigned int FCRéserve, unsigned int& FCMin, unsigned int& FCMax);
void calculerZonesAnaerobie(unsigned int FCRepos, unsigned int FCRéserve, unsigned int& FCMin, unsigned int& FCMax);
void calculerZonesAerobie(unsigned int FCRepos, unsigned int FCRéserve, unsigned int& FCMin, unsigned int& FCMax);

#endif
