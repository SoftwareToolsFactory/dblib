//                                    .-""-.
//                                   / _  _ \
//                                   |(_)(_)|
// .------------------------------ooO(_ /\ _)Ooo-----------------------------.
// |                                  |====|                                 |
// |                                  '-..-'                                 |
// | Desc:     DBDriver interface                                            |
// | By:       Nuroferatu - https://github.com/Nuroferatu                    |
// |           Vasile - https://github.com/Vasile0091                        |
// |                                                                         |
// | Copyright (C)2018 SoftwareToolsFactory                                  |
// |                   http://softwaretoolsfactory.com                       |
// '-------------------------------------------------------------------------'
#include "dbdriver.h"

using namespace stf;

/* ---------------------------------------------------------------------------
 * @brief   Main
 */
int main() {
    const std::string dbName = "testDB.db"; //db to be connected to

    std::unique_ptr<DBDriver>  dbDriverFactory = std::make_unique<DBDriver>();   //create a new connection object "factory"
    std::unique_ptr<IDBDriver> dbDriver = dbDriverFactory->getDriver( DBDriver::DBType::SQLITE );          //return a SQLite db type

    if (dbDriver) {
        dbDriver->open( dbName );  //try to open the connection to SQLite db

        // Execute some SQL Commands

        dbDriver->close();
    }
    return 0;
} // end Main
// vim: ts=4:sw=4:et:nowrap
/* EOF */
