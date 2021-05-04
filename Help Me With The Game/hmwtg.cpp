#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

void getPiece(char pieceType, int row, int col, std::vector<std::string>& pieces) {
    std::string piece;
    char letter = col + 'a';
    char number = 7 - row + '1';

    if (pieceType != 'p' && pieceType != 'P') {
        piece.push_back(toupper(pieceType));
    }
    piece.push_back(letter);
    piece.push_back(number);
    
    pieces.push_back(piece);
}

int main() {
    std::string line;
    std::vector<std::string> whitePieces, blackPieces;

    int row = 0;
    for (int i=0; i<17; i++) {
        std::cin >> line;
        if (i % 2 == 0) {
            continue;
        } else {
            int j = 2;
            for (int col=0; col<8; col++) {
                j += 4;
                if (line[j-4] == '.' || line[j-4] == ':') {
                    continue;
                } else {
                    if (islower(line[j-4])) {
                        getPiece(line[j-4], row, col, blackPieces);
                    } else {
                        getPiece(line[j-4], row, col, whitePieces);
                    }
                }
                
            }
            row++;
        }
    }

    std::string white = "White: ", black = "Black: ";
    std::unordered_map<char, int> pieceRank = {
        {'K', 0}, {'Q', 1}, {'R', 2}, {'B', 3}, {'N', 4}
    };

    sort(whitePieces.begin(), whitePieces.end(), [&pieceRank](std::string p1, std::string p2) {
        int l1 = p1.length();
        int l2 = p2.length();
        if (l1 != l2) {
            return l1 > l2;
        }

        char num1 = p1[l1-1];
        char num2 = p2[l2-1];
        char let1 = p1[l1-2];
        char let2 = p2[l2-2];
        if (l1 == 2) {
            if (num1 != num2) {
                return num1 < num2;
            }
            return let1 < let2;
        }

        char type1 = p1[0];
        char type2 = p2[0];
        if (type1 == type2) {
            if (num1 != num2) {
                return num1 < num2;
            }
            return let1 < let2;
        }
        return pieceRank[type1] < pieceRank[type2];
    });

    sort(blackPieces.begin(), blackPieces.end(), [&pieceRank](std::string p1, std::string p2) {
        int l1 = p1.length();
        int l2 = p2.length();
        if (l1 != l2) {
            return l1 > l2;
        }

        char num1 = p1[l1-1];
        char num2 = p2[l2-1];
        char let1 = p1[l1-2];
        char let2 = p2[l2-2];
        if (l1 == 2) {
            if (num1 != num2) {
                return num1 > num2;
            }
            return let1 < let2;
        }

        char type1 = p1[0];
        char type2 = p2[0];
        if (type1 == type2) {
            if (num1 != num2) {
                return num1 > num2;
            }
            return let1 < let2;
        }
        return pieceRank[type1] < pieceRank[type2];
    });

    for (std::string p: whitePieces) {
        white.append(p);
        white.push_back(',');
    }
    white.pop_back();

    for (std::string p: blackPieces) {
        black.append(p);
        black.push_back(',');
    }
    black.pop_back();

    std::cout << white << std::endl;
    std::cout << black << std::endl;
    
    return 0;
}