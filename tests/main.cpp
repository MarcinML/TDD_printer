#include <iostream>
#include "printer.h"
#include "gtest/gtest.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_EQ(1, 1);
}

TEST(printer_xml, getInputFile_takes_string_and_assign_to_input_file)
{
    PrinterXML p;
    p.setInputFile("dummy_string");
    EXPECT_EQ("dummy_string",p.getInput());
}

TEST(printer_xml, getInputFile_takes_string_and_assign_to_input_file_21)
{
    PrinterXML p;
    p.setInputFile("ąść");
    EXPECT_EQ("ąść",p.getInput());
}

TEST(sum, przypadek_testoewy)
{
    int zmienna_pisana_po_polsku_specjalnie_dla_Agaty = sum(2,3);
    EXPECT_EQ(zmienna_pisana_po_polsku_specjalnie_dla_Agaty,5);
}

TEST(sum, przypadek_testowy1)
{
    int zmienna_pisana_po_polsku_specjalnie_dla_Agaty = sum(3,5);
    EXPECT_EQ(zmienna_pisana_po_polsku_specjalnie_dla_Agaty,8);

}

int main (int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
