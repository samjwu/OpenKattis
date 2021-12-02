#include <iostream>
#include <string>
#include <vector>

// exponents 0 to 63
std::vector<std::string> powOfThree = {
    "1",
    "3",
    "9",
    "27",
    "81",
    "243",
    "729",
    "2187",
    "6561",
    "19683",
    "59049",
    "177147",
    "531441",
    "1594323",
    "4782969",
    "14348907",
    "43046721",
    "129140163",
    "387420489",
    "1162261467",
    "3486784401",
    "10460353203",
    "31381059609",
    "94143178827",
    "282429536481",
    "847288609443",
    "2541865828329",
    "7625597484987",
    "22876792454961",
    "68630377364883",
    "205891132094649",
    "617673396283947",
    "1853020188851841",
    "5559060566555523",
    "16677181699666569",
    "50031545098999707",
    "150094635296999121",
    "450283905890997363",
    "1350851717672992089",
    "4052555153018976267",
    "12157665459056928801",
    "36472996377170786403",
    "109418989131512359209",
    "328256967394537077627",
    "984770902183611232881",
    "2954312706550833698643",
    "8862938119652501095929",
    "26588814358957503287787",
    "79766443076872509863361",
    "239299329230617529590083",
    "717897987691852588770249",
    "2153693963075557766310747",
    "6461081889226673298932241",
    "19383245667680019896796723",
    "58149737003040059690390169",
    "174449211009120179071170507",
    "523347633027360537213511521",
    "1570042899082081611640534563",
    "4710128697246244834921603689",
    "14130386091738734504764811067",
    "42391158275216203514294433201",
    "127173474825648610542883299603",
    "381520424476945831628649898809",
    "1144561273430837494885949696427" // 3^63
};

int main(){
    unsigned long long n;

    while (true) {
        std::cin >> n;

        if (n == 0) {
            break;
        }

        n--;
        bool firstElement = true;
        std::cout << "{";

        // treat input as bitmask of 2^63-1 = 0xb111...111 (63 ones)
        for (int i=0; i<64; i++) {
            // if there is a 1 at n's ith position (binary), then this element exists in the nth largest set
            if ((1ull << i) & n) {
                if (!firstElement) {
                    std::cout << ",";
                }

                firstElement = false;
                std::cout << " " << powOfThree[i];
            }
        }

        std::cout << " }" << std::endl;
    }
}