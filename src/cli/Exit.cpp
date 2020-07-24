/*
 *  Copyright (C) 2019 KeePassXC Team <team@keepassxc.org>
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

#include "Exit.h"

#include <QCommandLineParser>
#include <QObject>
#include <QtGlobal>

Exit::Exit()
{
    this->name = "exit";
    description = QObject::tr("Exit interactive mode.");
}

int Exit::execImpl(CommandCtx &ctx, const QCommandLineParser &parser)
{
    Q_UNUSED(parser);
    Q_ASSERT(ctx.getRunmode() == Runmode::InteractiveCmd);

    ctx.stopInteractive();
    return EXIT_SUCCESS;
}
