//
//  config.h
//  gongfudai
//
//  Created by EriceWang Lan on 15/7/12.
//  Copyright (c) 2017年 dashu. All rights reserved.
//

#ifndef gongfudai_config_h
#define gongfudai_config_h

#define INDEX   [[[TreefinanceService sharedInstance] valueForKey:@"enviromentType"] integerValue]
#define SERVICE_BASE_URL ({\
NSString *url = nil;\
if (INDEX == 7001){\
url = @"http://gateway.test.99gfd.cn";}\
else if (INDEX == 7002){\
url = @"https://approach.saas.treefinance.com.cn/gateway";}\
else if (INDEX == 7003){\
url = @"https://api.saas.treefinance.com.cn/gateway";}\
else url = @"https://api.saas.treefinance.com.cn/gateway";\
url;\
})


#define GFD_H5_BASE_URL  ({\
NSString *url = nil;\
if (INDEX == 7001){\
url = @"http://h5.saas.test.treefinance.com.cn";}\
else if (INDEX == 7002){\
url = @"https://approach.saas.treefinance.com.cn/h5";}\
else if (INDEX == 7003){\
url = @"https://api.saas.treefinance.com.cn/h5";}\
else url = @"https://api.saas.treefinance.com.cn/h5";\
url;\
})
#define GET_SERVICE(s)  [NSString stringWithFormat:@"%@%@",SERVICE_BASE_URL,s]
#define GET_H5_URL(path) [NSString stringWithFormat:@"%@%@",GFD_H5_BASE_URL,path]

#define PC_UA               @"Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/43.0.2357.130 Safari/537.36"
//超时设置（单位：秒）
#define ENTER_BACKGROUND_TIMEOUT 300

//MBProgressHud显示时间（单位：秒）
#define DEFAULT_DISMISS_TIMEUOT 2.0

#endif
