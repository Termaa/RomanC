#include "Decode.h"

int char_value(char in) {
  switch (in)
	{
		case 'I' : 
			return 1;
		case 'V' :
			return 5;
		case 'X' : 
			return 10;
		case 'L' :
			return 50;
		case 'C' :
			return 100;
		case 'D' :
			return 500;
		case 'M' : 
			return 1000;
	}
}

int roman_decode(char* in){
  if (in[1] != '\0') {
    if(char_value(in[0]) >= char_value(in[1]))
      return char_value(in[0]) + char_value(in[1]);
    else
      return char_value(in[1]) - char_value(in[0]);
  }
  else {
    return char_value(in[0]);
  }
}
