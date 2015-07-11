//
//  UUPhotoActionSheet.h
//  UUPhotoActionSheet
//
//  Created by zhangyu on 15/7/10.
//  Copyright (c) 2015年 zhangyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UUPhotoActionSheet : UIView

- (instancetype)initWithFrame:(CGRect)frame weakSuper:(id)weakSuper;

- (void)showAnimation;

@end

@protocol UUPhotoActionSheetDelegate < NSObject >

//- (void)imagePickerDidFinished:(JFImagePickerController *)picker;
//
//- (void)imagePickerDidCancel:(JFImagePickerController *)picker;

@end
