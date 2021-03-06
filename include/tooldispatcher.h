/**
 * goiovalues - Guns of Icarus Online damage simulator
 * Copyright (C) 2016  Dominique Lasserre
 *
 * This file is part of goiovalues.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TOOLDISPATCHER_H_
#define TOOLDISPATCHER_H_

#include "./tool.h"


namespace goio {

class HelmTool;
class Ammunition;
class BuffTool;

class ToolDispatcher {
 public:
    void apply_tool(Ship* ship, const HelmTool* tool, bool activate);
    void apply_tool(Engine* engine, const HelmTool* tool, bool activate);
    void apply_tool(Balloon* balloon, const HelmTool* tool, bool activate);

    void apply_tool(Gun* gun, const Ammunition* tool, bool activate);

    void apply_tool(Ship* ship, const BuffTool* tool, bool activate);
    void apply_tool(Engine* engine, const BuffTool* tool, bool activate);
    void apply_tool(Balloon* balloon, const BuffTool* tool, bool activate);
    void apply_tool(Gun* gun, const BuffTool* tool, bool activate);
};

}  // namespace goio


#endif  // TOOLDISPATCHER_H_
