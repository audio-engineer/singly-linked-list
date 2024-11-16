#ifndef MAIN_H
#define MAIN_H

#include <wchar.h>

// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables, readability-identifier-naming)
constexpr wchar_t kVerticalLine = 0x2503;
constexpr wchar_t kVerticalLineDashed = 0x2506;
constexpr wchar_t kArrow = 0x2B95;
constexpr int kBase = 10;
// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables, readability-identifier-naming)

enum Commands { kAdd = 1, kRemove, kInsert, kPrint, kQuit };

typedef struct NodeOptions {
  long data;
  long index;
} NodeOptions;

typedef struct Node Node;

typedef struct Head {
  Node* first_node;
} Head;

struct Node {
  long data;
  Node* next_node;
};

#endif  // MAIN_H
