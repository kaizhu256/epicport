/*
 * Copyright 2010-2013 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM_OPTIONSBATTLESCAPESTATE_H
#define OPENXCOM_OPTIONSBATTLESCAPESTATE_H

#include "OptionsBaseState.h"

namespace OpenXcom
{

class Window;
class Text;
class TextButton;

/**
 * Screen that lets the user configure various
 * Battlescape options.
 */
class OptionsBattlescapeState : public OptionsBaseState
{
private:
	Window *_window;
	Text *_txtTitle;
	Text *_txtScrollSpeed;
	TextButton *_scrollSpeed, *_btnScrollSpeed1, *_btnScrollSpeed2, *_btnScrollSpeed3, *_btnScrollSpeed4, *_btnScrollSpeed5;
	Text *_txtScrollType, *_txtTriggerScroll, *_txtAutoScroll, *_txtDragScroll;
	TextButton *_scrollType, *_btnScrollType1, *_btnScrollType2, *_btnScrollType3;
	Text *_txtFireSpeed;
	TextButton *_fireSpeed, *_btnFireSpeed1, *_btnFireSpeed2, *_btnFireSpeed3, *_btnFireSpeed4, *_btnFireSpeed5, *_btnFireSpeed6;
	Text *_txtXcomSpeed;
	TextButton *_xcomSpeed, *_btnXcomSpeed1, *_btnXcomSpeed2, *_btnXcomSpeed3, *_btnXcomSpeed4, *_btnXcomSpeed5, *_btnXcomSpeed6;
	Text *_txtAlienSpeed;
	TextButton *_alienSpeed, *_btnAlienSpeed1, *_btnAlienSpeed2, *_btnAlienSpeed3, *_btnAlienSpeed4, *_btnAlienSpeed5, *_btnAlienSpeed6;
	TextButton *_btnOk, *_btnCancel;
public:
	/// Creates the Battlescape Options state.
	OptionsBattlescapeState(Game *game, OptionsOrigin origin);
	/// Cleans up the Battlescape Options state.
	~OptionsBattlescapeState();
	/// Handler for clicking the OK button.
	void btnOkClick(Action *action);
	/// Handler for clicking the Cancel button.
	void btnCancelClick(Action *action);
};

}

#endif
