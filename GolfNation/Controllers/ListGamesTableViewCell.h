//
//  ListGamesTableViewCell.h
//  GolfNation
//
//  Created by Thanh Tran on 5/22/15.
//  Copyright (c) 2015 Giang Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ListGamesTableViewCell : UITableViewCell{

}

@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblDate;

@property (weak, nonatomic) IBOutlet UILabel *lblPrice;


@end
