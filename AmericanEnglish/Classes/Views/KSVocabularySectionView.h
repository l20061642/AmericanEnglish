//
//  KSVocabularySectionView.h
//  AmericanEnglish
//
//  Created by kesalin on 7/29/11.
//  Copyright 2011 kesalin@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KSSectionView.h"

@interface KSVocabularySectionView : KSSectionView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView;
}

@end
