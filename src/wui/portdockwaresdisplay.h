/*
 * Copyright (C) 2011-2025 by the Widelands Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses/>.
 *
 */

#ifndef WL_WUI_PORTDOCKWARESDISPLAY_H
#define WL_WUI_PORTDOCKWARESDISPLAY_H

#include "ui_basic/box.h"
#include "wui/buildingwindow.h"
#include "wui/interactive_gamebase.h"
#include "wui/waresdisplay.h"

namespace Widelands {
class PortDock;
}  // namespace Widelands

AbstractWaresDisplay* create_portdock_wares_display(UI::Panel* parent,
                                                    uint32_t width,
                                                    const Widelands::PortDock& pd,
                                                    Widelands::WareWorker type);

UI::Box* create_portdock_expedition_display(UI::Panel* parent,
                                            Widelands::Warehouse& wh,
                                            InteractiveGameBase&,
                                            BuildingWindow::CollapsedState* priority_collapsed);

#endif  // end of include guard: WL_WUI_PORTDOCKWARESDISPLAY_H
