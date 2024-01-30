//-----Visual Novel content!! °˖✧◝(⁰▿⁰)◜✧˖°
//0'v' 1 :) 	2 :| 3 :( 4 :D 5 D: 6 A_A 7 / 8 \ 9 é 10 è
const Passage SCRPT[] = {
{N, "WXZ<,6F=NPQR......"},
{N, "......"},
{H, "show"},
{A, "53......53......"},
{N, "12J[>90."},
{N, "43J908>."},
{N, ":......"},
{A, "?\\]^/"},
{N, "......"},
{A, "?_`7/"},
{A, "53......"},
{A, "49?......"},
{A, "KL4."},
{N, "4KLE7?."},
{A, ":......"},
{A, "4......53......G6a7......"},
{A, "4GMb98."},
{N, ":......"},
{A, ":......"},
{A, "EH;<8>53cEde......"},
{A, "EH;<8>."},
{A, "53fghij7."},
{N, ":......"},
{H, "hide"},
  
{N, "6F=NPQR."},
{N, "I9......"},
{N, "MG4S126;8IT."},
{N, "4UV712."},
{N, "4H;<7."},
{N, "UV712."},
{N, "6k=S4l6;."},
{N, "48IT......"},
{N, "6F=NPQR."},
};

const Choice ListeChoix[]= {
{"Yes, I'm fine! And you?", 12},
{"Sorry for the delay",24},
{"It was hard to find you",33},

{"Yes, it's very pretty!",55},
{"Bof, c'est la mer quoi.",66},

{"I can see the end of it!", 97},
{"I'm having trouble moving forward...",113},
{"Yes",129},
{"I don't know if it would help me", 143 },
{"I've moved on", 162},

{"Too good!",191},
{"What did they tell you?",198},

{"It's just questions",218},
{"They're not going to eat you haha",238},
{"I've forgotten me too",263},

{"Yes, it sounds serious",282},
{"No, be casual' ",310},
{"Wear whatever you like",335},

{"Of course!",362},
{"I can't help you",374},
{"Well, if you insist",390},

{"Vanilla",416},
{"Chocolate",433},
{"Fruit",468},
{"Whatever",499},
{"I love all perfumes",504},
{"Not too much",512},

 {"Yes, I can't stand it",554},
 {"It doesn't really bother me",573},
 {"I love crowds!",604},

//--Ice branch
{"I was going to give it to you",667},
{"Think about paying me back",680},
{"Frankly, you're abusing it",692},

{"Everything makes me envy!", 737},
{"Take what you want",737},
{"It's really expensive!",737},
{"Wouldn't you like a pancake instead?",737},

{"Ask a passer-by",744},
{"Search the crowd",752},
{"Return to the beach",763},

{"No, you're here!",775},
{"What happened?",784},
{"Are you all right?", 789},

{"Habit?",818},
{"And so you waited for me here",1},

{"It's a good reflex",842},
{"In the end we were able to find each other again",855},
{"You don't talk much about your mother",864},
{"It's nothing",881},
//--Main and last branch (?)
{"Yes, all over the world!",935},
{"Yes, but close to home",956},
{"Not at all",974},

{"How about ice cream?",403},

{"Yeah, I agree",448},
{"I think that's just you",457},

{"The last?",705},

};

const char ChoiceCollection[][5] = {
//{nb_choice,choice,...};
{3,0,1,2},
{2,3,4},
{3,5,6,9},
{2,7,8},
{2,10,11},

{3,12,13,14},
{3,15,16,17},

{2,18,19},
{1,20},

{4,21,22,23,24}, //vanilla, chocolate ...
{2,25,26},
{3,27,28,29}, // Ice-less branch
{3,30,31,32},

{4,33,34,35,36},

{3,37,38,39},

{3,40,41,42},

{1,43,43}, //

{3,46,45,47},
{1,48},
{3,49,50,51},//where you want to travel

{1,52}, // what about buying an ice cream?
{2,53,54}, // I agree // I think it's movies...
{1.55}, //The last one?
};