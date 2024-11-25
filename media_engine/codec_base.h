/*
 * @Descripttion: 
 * @version: 
 * @Author: zzy
 * @Date: 2024-11-25 18:52:30
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2024-11-25 18:56:43
 */

class CodecInfo {

};

class EncoderBase {
public:
    virtual bool init_encoder() = 0;
    virtual bool encode() = 0; 
    virtual bool update_encoder() = 0;
    virtual bool close_encoder() = 0;
};

class DecoderBase {
public:
    virtual bool init_decoder() = 0;
    virtual bool decode() = 0; 
    virtual bool update_encoder() = 0;
    virtual bool close_decoder() = 0;
};