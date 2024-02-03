"" + 1 + 0 // "10" XXX should have been 1,  1  + 0 is 1
"" - 1 + 0 // "-10" XXX should be -1, same reason as above
true + false // comparing to obejects is always false XXX should have been 1
6 / "3"  // "2"
"2" * "3" // "6"
4 + 5 + "px" // "45px" XXX 4 + 5 is done firdt and they are not stinrgs, "9px"
"$" + 4 + 5 // "$45"
"4" - 2 // "4 - 2" XXX should be 2
"4px" - 2 //  "-24px" XXX NAN
"  -9  " + 5 // " -9  + 5"
"  -9  " - 5 // -14
null + 1 // NAN, should have ben 1
undefined + 1 // NAN
" \t \n" - 2 // "-2" (on a newc line tabbed)