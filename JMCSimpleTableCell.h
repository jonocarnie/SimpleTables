//
//  JMCSimpleTableCell.h
//  SimpleTable
//
//  Created by Jonathan Carnie on 5/04/2014.
//  Copyright (c) 2014 Jonathan Carnie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMCSimpleTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;


@end
