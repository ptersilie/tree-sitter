#ifndef COMPILER_BUILD_TABLES_LEX_CONFLICT_MANAGER_H_
#define COMPILER_BUILD_TABLES_LEX_CONFLICT_MANAGER_H_

#include <set>
#include "compiler/lexical_grammar.h"
#include "compiler/rules/symbol.h"

namespace tree_sitter {

struct AdvanceAction;
struct AcceptTokenAction;

namespace build_tables {

class LexConflictManager {
 public:
  bool resolve(const AdvanceAction &, const AcceptTokenAction &);
  bool resolve(const AcceptTokenAction &, const AcceptTokenAction &);

  std::set<rules::Symbol> fragile_tokens;
};

}  // namespace build_tables
}  // namespace tree_sitter

#endif  // COMPILER_BUILD_TABLES_LEX_CONFLICT_MANAGER_H_
