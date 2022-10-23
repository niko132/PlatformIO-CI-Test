#include <EspTest.h>
#include "Dithering.h"

void setUp() {

}

void tearDown() {

}

void test_dither_is_initialized() {
    TEST_ASSERT_TRUE(_updatesPerFrame == 0);
    initDither(8);
    TEST_ASSERT_TRUE(_updatesPerFrame == 8);
}

void some_useless_test() {
    TEST_ASSERT_TRUE(true);
}

void setup() {
    ESP_TEST_BEGIN();
    RUN_TEST(test_dither_is_initialized);
    RUN_TEST(some_useless_test);
    ESP_TEST_END();
}

void loop() {
    
}