/*
 * @Descripttion: 
 * @version: 
 * @Author: zzy
 * @Date: 2024-11-25 18:31:36
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2024-11-25 18:48:24
 */

// 拥塞控制算法本质也是输入和输出结合
class CongestionInfo {
    
};

class ControlInfo {
    
};

class CongestionControlBase {
public:
    virtual bool update_info(CongestionInfo cc_info) = 0;
    virtual ControlInfo control() = 0;
};