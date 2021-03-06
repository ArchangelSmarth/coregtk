/*
 * CGTKRecentChooserMenu.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenu.h"

@interface CGTKRecentChooserMenu : CGTKMenu
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initForManager:(GtkRecentManager*) manager;

/**
 * Methods
 */

-(GtkRecentChooserMenu*)RECENTCHOOSERMENU;

/**
 * -(BOOL*)getShowNumbers;
 *
 * @returns BOOL
 */
-(BOOL)getShowNumbers;

/**
 * -(void*)setShowNumbers:(BOOL) showNumbers;
 *
 * @param showNumbers
 */
-(void)setShowNumbers:(BOOL) showNumbers;

@end
