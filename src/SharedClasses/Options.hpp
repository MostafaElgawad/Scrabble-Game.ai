
#pragma once
#include <vector>
#include "Move.hpp"
#include "../MoveGeneration/MoveGenerate.h"
#include "../ScoreEvaluation/LoadHeuristics.hpp"

// This class acts as utility class functions for anyone who want to use ... add any like the bellow functions.
class Options
{
public:
    static std::vector<char> *unusedRackTiles(std::vector<char> *Rack, Move *move); // Returns unusedTile in a rack given a move.
    static std::vector<char> *sortRack(std::vector<char> *Rack);                    // Returns Alphabetic Sorted Rack.
    static bool isVowel(char *letter);                                              // Returns if the given letter is vowel.
    static vector<char> *readSuperLeave(const char *rack, unsigned int rackSize);   // Returns rack-leave read from superLeaves File.
    static string regularWordString(Move *move);                                    // Returns a regular and readable format of the Move string without wierd chars.
    static vector<char> *moveTiles(Move *move);                                     // Returns Move Tiles Used only.
    static vector<char> *setRackGrounded(std::vector<char> *Rack);                  // Returns Offset Chars starting from ZERO.
    static int rackScore(std::vector<char> *Rack);                                  // Returns Rack Leave Score for Individuals Chars.
private:
    Options();
};