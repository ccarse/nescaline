/*
 Nescaline
 Copyright (c) 2007, Jonathan A. Zdziarski
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; version 2
 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 
 */

#import <UIKit/UIKit.h>
#import "GameROMViewController.h"

#define BOOKMARKS_PLIST [ NSString stringWithFormat: @"%@/Library/Preferences/bookmarks.plist", NSHomeDirectory() ]
#define RECENTS_PLIST [ NSString stringWithFormat: @"%@/Library/Preferences/recents.plist", NSHomeDirectory() ]

@interface BookmarkedGameController : UITableViewController {
    id delegate;
	NSMutableArray *bookmarks;
	NSString *propertyListFilePath;
}
+ (BOOL)isBookmarked:(NSString *)path inPropertyList:(NSString *)propertyList;
+ (void)deleteBookmark:(NSString *)path inPropertyList:(NSString *)propertyList;
+ (void)addBookmark:(NSString *)path inPropertyList:(NSString *)propertyList;
+ (void)addBookmarkToTop:(NSString *)path inPropertyList:(NSString *)propertyList;

- (void)reloadData;

@property(nonatomic,assign)	id <GameROMSelectionDelegate>	delegate;
@property(nonatomic,copy)	NSString *propertyListFilePath;

@end
