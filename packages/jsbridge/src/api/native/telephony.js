/**
 * 电话接口
 */
import hybridJs from '../../hybrid';

export default function telephonyMixin () {
  const innerUtil = hybridJs.innerUtil;


  hybridJs.extendModule('telephony', [{
    namespace: 'dial',
    os: ['syberos'],
    defaultParams: {
      //对方号码
      tel: '',
    },
    runCode (...rest) {
      // 兼容字符串形式
      const args = innerUtil.compatibleStringParamsToObject.call(
        this,
        rest,
        'tel',
      );

      hybridJs.callInner.apply(this, args);
    },
  }]);
}