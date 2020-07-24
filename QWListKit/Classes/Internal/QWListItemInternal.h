//
//  QWListItem.m
//  QWListKit
//
//  Created by guawaji on 2020/7/14.
//  Copyright © 2020 guawaji. All rights reserved.
//

#import "QWListItem.h"

@interface QWListItem ()

@property (nonatomic, readwrite) NSIndexPath *indexPath;
@property (nonatomic, readwrite) BOOL isInFirstSection;
@property (nonatomic, readwrite) BOOL isInLastSection;
@property (nonatomic, readwrite) BOOL isFirstItemInSection;
@property (nonatomic, readwrite) BOOL isLastItemInSection;

@end