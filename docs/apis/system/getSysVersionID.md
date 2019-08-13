---
title: getSysVersionID
---

## syber.system.getSysVersionID(Object object)

获取系统版本号，支持Promise调用

### 参数

**Object object**

| 属性    | 类型     | 是否必填 | 描述                   |
| ------- | -------- | -------- | ---------------------- |
| success | function | 否       | 接口调用成功的回调函数 |
| fail    | function | 否       | 接口调用失败的回调函数 |

**object.success 回调函数参数**

**String result**

| 属性   | 类型   | 描述     |
| ------ | ------ | -------- |
| result | String | 手机型号 |

**object.fail回调函数参数**

**Object object**

| 属性 | 类型   | 描述     |
| ---- | ------ | -------- |
| code | String | 错误码   |
| msg  | String | 错误信息 |

### 示例

```
syber.system.getSysVersionID({
	success:function(result){
        console.log('result: ', result);
    }
    fail:function(error){
        console.log('code: ', error.code);
    	console.log('msg: ', error.msg);
    }
});

syber.system.getSysVersionID().then(function(result) {
    console.log('result: ', result);
}).catch(function(error) {
    console.log('code: ', error.code);
    console.log('msg: ', error.msg);
});
```
