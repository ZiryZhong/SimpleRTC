/*
 * @Descripttion: 
 * @version: 
 * @Author: zzy
 * @Date: 2024-11-25 18:22:13
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2024-11-25 18:25:41
 */

class ProtocolBase {
public:
    virtual bool init_protocol() = 0;
    virtual bool encode() = 0;
    virtual bool decode() = 0;
};