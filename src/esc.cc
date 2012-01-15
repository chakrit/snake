// esc.cc - Console escape sequences
#ifndef _ESC_CC
#define _ESC_CC

#define ESCSTR(name, value) \
  const char *name = "\033[" value;

/*  var esc =
    { 'lineUp': '2A'
    , 'cls': '2J'
    , 'reset': '0m'
    , 'unbold': '0m'
    , 'bold': '1m'
    , 'white': '0;0m'
    , 'silver': '0;37m'
    , 'gray': '0;30m'
    , 'yellow': '0;33m'
    , 'green': '0;32m'
    , 'red': '1;91m'
    , 'cyan': '0;36m'
    , 'bgRed': '41m' }; */
namespace esc {
  ESCSTR(cursorUp, "2A");
  ESCSTR(resetFormat, "0m");
  ESCSTR(cls, "2J");
}

#endif
