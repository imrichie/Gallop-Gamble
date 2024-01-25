#ifndef BET_H
#define BET_H

void processBet(int betType, int *userBalance);
void processExactaBet(int *userBalance, const int *raceResults, int horse1, int horse2);
void processExactaBoxBet(int *userBalance, const int *raceResults, int horse1, int horse2);
void processTrifectaBet(int *userBalance, const int *raceResults, int horse1, int horse2, int horse3);
void processTrifectaBoxBet(int *userBalance, const int *raceResults, int horse1, int horse2, int horse3);

#endif // BET_H
