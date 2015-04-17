#include "gtest/gtest.h"
#include "config_parser.h"

TEST(NginxConfigParserTest, SimpleConfig) {
// This tests the example file given to us. It should pass.

  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_config", &out_config);

  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTestTwo, SimpleConfig) {
// This tests a unit that has nested brackets. Specifically,
// two locations. It should be parsed, but this tests fails.

  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("exampletwo_config", &out_config);
  EXPECT_TRUE(success);
}
