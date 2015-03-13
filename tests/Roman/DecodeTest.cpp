#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "Decode.h"
}

TEST_GROUP(Roman)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

TEST(Roman, Decode_I)
{
  CHECK_EQUAL(1, roman_decode("I"));
}

TEST(Roman, Decode_V)
{
  CHECK_EQUAL(5, roman_decode("V"));
}

TEST(Roman, Decode_X)
{
  CHECK_EQUAL(10, roman_decode("X"));
}

TEST(Roman, Decode_L)
{
  CHECK_EQUAL(50, roman_decode("L"));
}

TEST(Roman, Decode_C)
{
  CHECK_EQUAL(100, roman_decode("C"));
}

TEST(Roman, Decode_D)
{
  CHECK_EQUAL(500, roman_decode("D"));
}

TEST(Roman, Decode_M)
{
  CHECK_EQUAL(1000, roman_decode("M"));
}

TEST(Roman, Decode_II)
{
  CHECK_EQUAL(2, roman_decode("II"));
}

TEST(Roman, Decode_IV)
{
  CHECK_EQUAL(4, roman_decode("IV"));
}

TEST(Roman, Decode_VI)
{
  CHECK_EQUAL(6, roman_decode("VI"));
}

TEST(Roman, Decode_III)
{
  CHECK_EQUAL(3, roman_decode("III"));
}

TEST(Roman, Decode_VII)
{
  CHECK_EQUAL(7, roman_decode("VII"));
}

TEST(Roman, Decode_XXX)
{
  CHECK_EQUAL(30, roman_decode("XXX"));
}

TEST(Roman, Decode_XIV)
{
  CHECK_EQUAL(14, roman_decode("XIV"));
}

TEST(Roman, Decode_CCX)
{
  CHECK_EQUAL(210, roman_decode("CCX"));
}

TEST(Roman, Decode_CCCLXIX)
{
  CHECK_EQUAL(369, roman_decode("CCCLXIX"));
}

TEST(Roman, Decode_MMDCCLI)
{
  CHECK_EQUAL(2751, roman_decode("MMDCCLI"));
}





