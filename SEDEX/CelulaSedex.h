//
//  CelulaSedex.h
//  SEDEX
//
//  Created by Matheus Brum on 28/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CelulaSedex : UITableViewCell{
    UILabel *labelData;
    UILabel *labelDetalhe;
    UILabel *labelLocal;
}
@property (nonatomic,retain)  IBOutlet  UILabel *labelData;
@property (nonatomic,retain)   IBOutlet UILabel *labelDetalhe;
@property (nonatomic,retain)   IBOutlet UILabel *labelLocal;

@end
