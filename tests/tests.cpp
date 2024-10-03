#include <catch2/catch_test_macros.hpp>
#include "caller.cpp"
#include <string>


TEST_CASE( "struct_to_string" ) {
    clr::caller A;
    A.name = "KTI";
    A.number = "+71234567890";
    A.lastcall = 1724784458;
    REQUIRE_NOTHROW(clr::struct_to_string(A, "record") == "record[name]=KTI&record[number]=+71234567890&record[lastcall]=1724784458");
    A.name = "";
    REQUIRE_THROWS(clr::struct_to_string(A, "record"));
}


TEST_CASE("string_to_struct") {
    clr::caller A;
    SECTION("std::string") {
        std::string s = "record[name]=KTI&record[number]=+71234567890&record[lastcall]=1724784458";
        REQUIRE_NOTHROW(A = clr::string_to_struct(s));
        REQUIRE(A.name == "KTI");
        REQUIRE(A.number == "+71234567890");
        REQUIRE(A.lastcall == 1724784458);
    }
    SECTION("char*") {
        const char* s = "record[name]=KTI&record[number]=+71234567890&record[lastcall]=1724784458";
        REQUIRE_NOTHROW(A = clr::string_to_struct(s));
        REQUIRE(A.name == "KTI");
        REQUIRE(A.number == "+71234567890");
        REQUIRE(A.lastcall == 1724784458);
        REQUIRE_THROWS(clr::string_to_struct(nullptr));
        REQUIRE_THROWS(clr::string_to_struct("r[name]=KTI&dsdfs[]"));
        REQUIRE_THROWS(clr::string_to_struct("r[name]=KTI&r[number]=asd"));
        REQUIRE_THROWS(clr::string_to_struct("r[name]=KTI&r[number]=+79251234567&r[lastcall]=dgdd"));
    }
    SECTION("char* + length") {
        unsigned int length = 72;
        const char *s = "record[name]=KTI&record[number]=+71234567890&record[lastcall]=1724784458";
        REQUIRE_NOTHROW(A = clr::string_to_struct(s, length));
        REQUIRE(A.name == "KTI");
        REQUIRE(A.number == "+71234567890");
        REQUIRE(A.lastcall == 1724784458);
    }
}

TEST_CASE("is_number") {
    REQUIRE(clr::is_number("93572782"));
    REQUIRE_FALSE(clr::is_number("bjwdgburfgh"));
}

TEST_CASE("is_phonenumber") {
    REQUIRE(clr::is_phonenumber("93572782"));
    REQUIRE_FALSE(clr::is_phonenumber("bjwdgburfgh"));
    REQUIRE_FALSE(clr::is_phonenumber("a5235236262"));
    REQUIRE_FALSE(clr::is_phonenumber("23769276897689789"));
}

