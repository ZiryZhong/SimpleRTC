/*
 * @Descripttion: 
 * @version: 
 * @Author: zzy
 * @Date: 2024-11-25 18:24:56
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2024-11-25 18:26:31
 */

class SessionBase {
public:
    virtual bool init_session() = 0;
    virtual bool send() = 0;
    virtual bool receive() = 0;
    virtual bool close_session() = 0;
};