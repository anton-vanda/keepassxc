/*
 *  Copyright (C) 2017 KeePassXC Team <team@keepassxc.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSXC_REMOVE_H
#define KEEPASSXC_REMOVE_H

#include "DatabaseCommand.h"

class Remove : public DatabaseCommand
{
public:
    Remove();

    int executeWithDatabase(CommandCtx& ctx, const QCommandLineParser& parser);
};
DECL_TRAITS(Remove, "rm", "Remove an entry from the database.");

#endif // KEEPASSXC_REMOVE_H
