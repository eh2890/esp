#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>
#include <string>
#include <vector>

/* ---------- combo_arch ---------- */

// combo_arch options: {<name>, <noc_width>}
const std::vector<std::vector<std::string>> combo_arch_to_nocw = {
    {"leon3",  "32"},
    {"ariane", "64"},
    {"ibex",   "32"},
    {"tester", "128"}
};



/* ---------- Cache Configuration ---------- */

/* ----- l2 ----- */
// l2_ways
const std::vector<std::string> l2_ways = {
    "2 ways",
    "4 ways",
    "8 ways",
    "testing"
};

// l2_ways_i
const unsigned l2_ways_i = 1;

// l2_sets
const std::vector<std::string> l2_sets = {
    "32 sets",
    "64 sets",
    "128 sets",
    "256 sets",
    "512 sets",
    "1024 sets",
    "2048 sets",
    "4096 sets",
    "testing"
};

// l2_sets_i
const unsigned l2_sets_i = 4;

/* ----- llc ----- */
// llc_ways
const std::vector<std::string> llc_ways = {
    "4 ways",
    "8 ways",
    "16 ways",
    "testing"
};

// llc_ways_i
const unsigned llc_ways_i = 2;

// llc_sets
const std::vector<std::string> llc_sets = {
    "32 sets",
    "64 sets",
    "128 sets",
    "256 sets",
    "512 sets",
    "1024 sets",
    "2048 sets",
    "4096 sets",
    "testing"
};

// llc_sets_i
const unsigned llc_sets_i = 5;

/* ----- al2 ----- */
// al2_ways
const std::vector<std::string> al2_ways = {
    "2 ways",
    "4 ways",
    "8 ways",
    "testing"
};

// al2_ways_i
const unsigned al2_ways_i = 1;

// al2 sets
const std::vector<std::string> al2_sets = {
    "32 sets",
    "64 sets",
    "128 sets",
    "256 sets",
    "512 sets",
    "1024 sets",
    "2048 sets",
    "4096 sets",
    "testing"
};

// al2_sets_i
const unsigned al2_sets_i = 4;

/* ----- implem ----- */
// implem
const std::vector<std::string> implem = {
    "SystemVerilog",
    "SystemC (HLS)",
    "testing"
};

#endif // CONSTANTS_H
