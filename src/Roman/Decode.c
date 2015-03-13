#include "Decode.h"
#include "string.h"

int char_value(char in) {
  switch (in)
	{
		case 'I' : 
			return 1;
      break;
		case 'V' :
			return 5;
      break;  
		case 'X' : 
			return 10;
      break;
		case 'L' :
			return 50;
      break;
		case 'C' :
			return 100;
      break;
		case 'D' :
			return 500;
      break;
		case 'M' : 
			return 1000;
      break;
	}
}

int roman_decode(const char* in){
  /*if (strlen(in) == 3) 
  {
    if (char_value(in[1]) >= char_value(in[2]))
      return char_value(in[0]) + char_value(in[1]) + char_value(in[2]);
    if (char_value(in[1]) < char_value(in[2]))
      return char_value(in[0]) + char_value(in[2]) - char_value(in[1]);
  }
  else if(strlen(in) == 2) 
  {
    if(char_value(in[0]) >= char_value(in[1]))
      return char_value(in[0]) + char_value(in[1]);
    else
      return char_value(in[1]) - char_value(in[0]);
  }
  else{
    return char_value(in[0]);
  }*/
  int total = 0;
  unsigned i = 0;
  while (i < strlen(in))
  {
    if (i+1 < strlen(in))
    {
      if (char_value(in[i]) >= char_value(in[i+1])) {
        total += char_value(in[i++]);
      }
      else {
        total += char_value(in[i+1]) - char_value(in[i]);
        i += 2;
      }
    }
    else
      total += char_value(in[i++]);
  }
  return total;
}