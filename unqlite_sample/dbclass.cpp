
#include "dbclass.h"

DB::DB()
{
  int result = unqlite_open(&this->db_pointer, "test.db", UNQLITE_OPEN_CREATE);
}
