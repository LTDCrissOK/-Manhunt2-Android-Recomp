#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035E978
// Address: 0x35e978 - 0x35fe88
void sub_0035E978_0x35e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E978_0x35e978");
#endif

    switch (ctx->pc) {
        case 0x35e978u: goto label_35e978;
        case 0x35e97cu: goto label_35e97c;
        case 0x35e980u: goto label_35e980;
        case 0x35e984u: goto label_35e984;
        case 0x35e988u: goto label_35e988;
        case 0x35e98cu: goto label_35e98c;
        case 0x35e990u: goto label_35e990;
        case 0x35e994u: goto label_35e994;
        case 0x35e998u: goto label_35e998;
        case 0x35e99cu: goto label_35e99c;
        case 0x35e9a0u: goto label_35e9a0;
        case 0x35e9a4u: goto label_35e9a4;
        case 0x35e9a8u: goto label_35e9a8;
        case 0x35e9acu: goto label_35e9ac;
        case 0x35e9b0u: goto label_35e9b0;
        case 0x35e9b4u: goto label_35e9b4;
        case 0x35e9b8u: goto label_35e9b8;
        case 0x35e9bcu: goto label_35e9bc;
        case 0x35e9c0u: goto label_35e9c0;
        case 0x35e9c4u: goto label_35e9c4;
        case 0x35e9c8u: goto label_35e9c8;
        case 0x35e9ccu: goto label_35e9cc;
        case 0x35e9d0u: goto label_35e9d0;
        case 0x35e9d4u: goto label_35e9d4;
        case 0x35e9d8u: goto label_35e9d8;
        case 0x35e9dcu: goto label_35e9dc;
        case 0x35e9e0u: goto label_35e9e0;
        case 0x35e9e4u: goto label_35e9e4;
        case 0x35e9e8u: goto label_35e9e8;
        case 0x35e9ecu: goto label_35e9ec;
        case 0x35e9f0u: goto label_35e9f0;
        case 0x35e9f4u: goto label_35e9f4;
        case 0x35e9f8u: goto label_35e9f8;
        case 0x35e9fcu: goto label_35e9fc;
        case 0x35ea00u: goto label_35ea00;
        case 0x35ea04u: goto label_35ea04;
        case 0x35ea08u: goto label_35ea08;
        case 0x35ea0cu: goto label_35ea0c;
        case 0x35ea10u: goto label_35ea10;
        case 0x35ea14u: goto label_35ea14;
        case 0x35ea18u: goto label_35ea18;
        case 0x35ea1cu: goto label_35ea1c;
        case 0x35ea20u: goto label_35ea20;
        case 0x35ea24u: goto label_35ea24;
        case 0x35ea28u: goto label_35ea28;
        case 0x35ea2cu: goto label_35ea2c;
        case 0x35ea30u: goto label_35ea30;
        case 0x35ea34u: goto label_35ea34;
        case 0x35ea38u: goto label_35ea38;
        case 0x35ea3cu: goto label_35ea3c;
        case 0x35ea40u: goto label_35ea40;
        case 0x35ea44u: goto label_35ea44;
        case 0x35ea48u: goto label_35ea48;
        case 0x35ea4cu: goto label_35ea4c;
        case 0x35ea50u: goto label_35ea50;
        case 0x35ea54u: goto label_35ea54;
        case 0x35ea58u: goto label_35ea58;
        case 0x35ea5cu: goto label_35ea5c;
        case 0x35ea60u: goto label_35ea60;
        case 0x35ea64u: goto label_35ea64;
        case 0x35ea68u: goto label_35ea68;
        case 0x35ea6cu: goto label_35ea6c;
        case 0x35ea70u: goto label_35ea70;
        case 0x35ea74u: goto label_35ea74;
        case 0x35ea78u: goto label_35ea78;
        case 0x35ea7cu: goto label_35ea7c;
        case 0x35ea80u: goto label_35ea80;
        case 0x35ea84u: goto label_35ea84;
        case 0x35ea88u: goto label_35ea88;
        case 0x35ea8cu: goto label_35ea8c;
        case 0x35ea90u: goto label_35ea90;
        case 0x35ea94u: goto label_35ea94;
        case 0x35ea98u: goto label_35ea98;
        case 0x35ea9cu: goto label_35ea9c;
        case 0x35eaa0u: goto label_35eaa0;
        case 0x35eaa4u: goto label_35eaa4;
        case 0x35eaa8u: goto label_35eaa8;
        case 0x35eaacu: goto label_35eaac;
        case 0x35eab0u: goto label_35eab0;
        case 0x35eab4u: goto label_35eab4;
        case 0x35eab8u: goto label_35eab8;
        case 0x35eabcu: goto label_35eabc;
        case 0x35eac0u: goto label_35eac0;
        case 0x35eac4u: goto label_35eac4;
        case 0x35eac8u: goto label_35eac8;
        case 0x35eaccu: goto label_35eacc;
        case 0x35ead0u: goto label_35ead0;
        case 0x35ead4u: goto label_35ead4;
        case 0x35ead8u: goto label_35ead8;
        case 0x35eadcu: goto label_35eadc;
        case 0x35eae0u: goto label_35eae0;
        case 0x35eae4u: goto label_35eae4;
        case 0x35eae8u: goto label_35eae8;
        case 0x35eaecu: goto label_35eaec;
        case 0x35eaf0u: goto label_35eaf0;
        case 0x35eaf4u: goto label_35eaf4;
        case 0x35eaf8u: goto label_35eaf8;
        case 0x35eafcu: goto label_35eafc;
        case 0x35eb00u: goto label_35eb00;
        case 0x35eb04u: goto label_35eb04;
        case 0x35eb08u: goto label_35eb08;
        case 0x35eb0cu: goto label_35eb0c;
        case 0x35eb10u: goto label_35eb10;
        case 0x35eb14u: goto label_35eb14;
        case 0x35eb18u: goto label_35eb18;
        case 0x35eb1cu: goto label_35eb1c;
        case 0x35eb20u: goto label_35eb20;
        case 0x35eb24u: goto label_35eb24;
        case 0x35eb28u: goto label_35eb28;
        case 0x35eb2cu: goto label_35eb2c;
        case 0x35eb30u: goto label_35eb30;
        case 0x35eb34u: goto label_35eb34;
        case 0x35eb38u: goto label_35eb38;
        case 0x35eb3cu: goto label_35eb3c;
        case 0x35eb40u: goto label_35eb40;
        case 0x35eb44u: goto label_35eb44;
        case 0x35eb48u: goto label_35eb48;
        case 0x35eb4cu: goto label_35eb4c;
        case 0x35eb50u: goto label_35eb50;
        case 0x35eb54u: goto label_35eb54;
        case 0x35eb58u: goto label_35eb58;
        case 0x35eb5cu: goto label_35eb5c;
        case 0x35eb60u: goto label_35eb60;
        case 0x35eb64u: goto label_35eb64;
        case 0x35eb68u: goto label_35eb68;
        case 0x35eb6cu: goto label_35eb6c;
        case 0x35eb70u: goto label_35eb70;
        case 0x35eb74u: goto label_35eb74;
        case 0x35eb78u: goto label_35eb78;
        case 0x35eb7cu: goto label_35eb7c;
        case 0x35eb80u: goto label_35eb80;
        case 0x35eb84u: goto label_35eb84;
        case 0x35eb88u: goto label_35eb88;
        case 0x35eb8cu: goto label_35eb8c;
        case 0x35eb90u: goto label_35eb90;
        case 0x35eb94u: goto label_35eb94;
        case 0x35eb98u: goto label_35eb98;
        case 0x35eb9cu: goto label_35eb9c;
        case 0x35eba0u: goto label_35eba0;
        case 0x35eba4u: goto label_35eba4;
        case 0x35eba8u: goto label_35eba8;
        case 0x35ebacu: goto label_35ebac;
        case 0x35ebb0u: goto label_35ebb0;
        case 0x35ebb4u: goto label_35ebb4;
        case 0x35ebb8u: goto label_35ebb8;
        case 0x35ebbcu: goto label_35ebbc;
        case 0x35ebc0u: goto label_35ebc0;
        case 0x35ebc4u: goto label_35ebc4;
        case 0x35ebc8u: goto label_35ebc8;
        case 0x35ebccu: goto label_35ebcc;
        case 0x35ebd0u: goto label_35ebd0;
        case 0x35ebd4u: goto label_35ebd4;
        case 0x35ebd8u: goto label_35ebd8;
        case 0x35ebdcu: goto label_35ebdc;
        case 0x35ebe0u: goto label_35ebe0;
        case 0x35ebe4u: goto label_35ebe4;
        case 0x35ebe8u: goto label_35ebe8;
        case 0x35ebecu: goto label_35ebec;
        case 0x35ebf0u: goto label_35ebf0;
        case 0x35ebf4u: goto label_35ebf4;
        case 0x35ebf8u: goto label_35ebf8;
        case 0x35ebfcu: goto label_35ebfc;
        case 0x35ec00u: goto label_35ec00;
        case 0x35ec04u: goto label_35ec04;
        case 0x35ec08u: goto label_35ec08;
        case 0x35ec0cu: goto label_35ec0c;
        case 0x35ec10u: goto label_35ec10;
        case 0x35ec14u: goto label_35ec14;
        case 0x35ec18u: goto label_35ec18;
        case 0x35ec1cu: goto label_35ec1c;
        case 0x35ec20u: goto label_35ec20;
        case 0x35ec24u: goto label_35ec24;
        case 0x35ec28u: goto label_35ec28;
        case 0x35ec2cu: goto label_35ec2c;
        case 0x35ec30u: goto label_35ec30;
        case 0x35ec34u: goto label_35ec34;
        case 0x35ec38u: goto label_35ec38;
        case 0x35ec3cu: goto label_35ec3c;
        case 0x35ec40u: goto label_35ec40;
        case 0x35ec44u: goto label_35ec44;
        case 0x35ec48u: goto label_35ec48;
        case 0x35ec4cu: goto label_35ec4c;
        case 0x35ec50u: goto label_35ec50;
        case 0x35ec54u: goto label_35ec54;
        case 0x35ec58u: goto label_35ec58;
        case 0x35ec5cu: goto label_35ec5c;
        case 0x35ec60u: goto label_35ec60;
        case 0x35ec64u: goto label_35ec64;
        case 0x35ec68u: goto label_35ec68;
        case 0x35ec6cu: goto label_35ec6c;
        case 0x35ec70u: goto label_35ec70;
        case 0x35ec74u: goto label_35ec74;
        case 0x35ec78u: goto label_35ec78;
        case 0x35ec7cu: goto label_35ec7c;
        case 0x35ec80u: goto label_35ec80;
        case 0x35ec84u: goto label_35ec84;
        case 0x35ec88u: goto label_35ec88;
        case 0x35ec8cu: goto label_35ec8c;
        case 0x35ec90u: goto label_35ec90;
        case 0x35ec94u: goto label_35ec94;
        case 0x35ec98u: goto label_35ec98;
        case 0x35ec9cu: goto label_35ec9c;
        case 0x35eca0u: goto label_35eca0;
        case 0x35eca4u: goto label_35eca4;
        case 0x35eca8u: goto label_35eca8;
        case 0x35ecacu: goto label_35ecac;
        case 0x35ecb0u: goto label_35ecb0;
        case 0x35ecb4u: goto label_35ecb4;
        case 0x35ecb8u: goto label_35ecb8;
        case 0x35ecbcu: goto label_35ecbc;
        case 0x35ecc0u: goto label_35ecc0;
        case 0x35ecc4u: goto label_35ecc4;
        case 0x35ecc8u: goto label_35ecc8;
        case 0x35ecccu: goto label_35eccc;
        case 0x35ecd0u: goto label_35ecd0;
        case 0x35ecd4u: goto label_35ecd4;
        case 0x35ecd8u: goto label_35ecd8;
        case 0x35ecdcu: goto label_35ecdc;
        case 0x35ece0u: goto label_35ece0;
        case 0x35ece4u: goto label_35ece4;
        case 0x35ece8u: goto label_35ece8;
        case 0x35ececu: goto label_35ecec;
        case 0x35ecf0u: goto label_35ecf0;
        case 0x35ecf4u: goto label_35ecf4;
        case 0x35ecf8u: goto label_35ecf8;
        case 0x35ecfcu: goto label_35ecfc;
        case 0x35ed00u: goto label_35ed00;
        case 0x35ed04u: goto label_35ed04;
        case 0x35ed08u: goto label_35ed08;
        case 0x35ed0cu: goto label_35ed0c;
        case 0x35ed10u: goto label_35ed10;
        case 0x35ed14u: goto label_35ed14;
        case 0x35ed18u: goto label_35ed18;
        case 0x35ed1cu: goto label_35ed1c;
        case 0x35ed20u: goto label_35ed20;
        case 0x35ed24u: goto label_35ed24;
        case 0x35ed28u: goto label_35ed28;
        case 0x35ed2cu: goto label_35ed2c;
        case 0x35ed30u: goto label_35ed30;
        case 0x35ed34u: goto label_35ed34;
        case 0x35ed38u: goto label_35ed38;
        case 0x35ed3cu: goto label_35ed3c;
        case 0x35ed40u: goto label_35ed40;
        case 0x35ed44u: goto label_35ed44;
        case 0x35ed48u: goto label_35ed48;
        case 0x35ed4cu: goto label_35ed4c;
        case 0x35ed50u: goto label_35ed50;
        case 0x35ed54u: goto label_35ed54;
        case 0x35ed58u: goto label_35ed58;
        case 0x35ed5cu: goto label_35ed5c;
        case 0x35ed60u: goto label_35ed60;
        case 0x35ed64u: goto label_35ed64;
        case 0x35ed68u: goto label_35ed68;
        case 0x35ed6cu: goto label_35ed6c;
        case 0x35ed70u: goto label_35ed70;
        case 0x35ed74u: goto label_35ed74;
        case 0x35ed78u: goto label_35ed78;
        case 0x35ed7cu: goto label_35ed7c;
        case 0x35ed80u: goto label_35ed80;
        case 0x35ed84u: goto label_35ed84;
        case 0x35ed88u: goto label_35ed88;
        case 0x35ed8cu: goto label_35ed8c;
        case 0x35ed90u: goto label_35ed90;
        case 0x35ed94u: goto label_35ed94;
        case 0x35ed98u: goto label_35ed98;
        case 0x35ed9cu: goto label_35ed9c;
        case 0x35eda0u: goto label_35eda0;
        case 0x35eda4u: goto label_35eda4;
        case 0x35eda8u: goto label_35eda8;
        case 0x35edacu: goto label_35edac;
        case 0x35edb0u: goto label_35edb0;
        case 0x35edb4u: goto label_35edb4;
        case 0x35edb8u: goto label_35edb8;
        case 0x35edbcu: goto label_35edbc;
        case 0x35edc0u: goto label_35edc0;
        case 0x35edc4u: goto label_35edc4;
        case 0x35edc8u: goto label_35edc8;
        case 0x35edccu: goto label_35edcc;
        case 0x35edd0u: goto label_35edd0;
        case 0x35edd4u: goto label_35edd4;
        case 0x35edd8u: goto label_35edd8;
        case 0x35eddcu: goto label_35eddc;
        case 0x35ede0u: goto label_35ede0;
        case 0x35ede4u: goto label_35ede4;
        case 0x35ede8u: goto label_35ede8;
        case 0x35edecu: goto label_35edec;
        case 0x35edf0u: goto label_35edf0;
        case 0x35edf4u: goto label_35edf4;
        case 0x35edf8u: goto label_35edf8;
        case 0x35edfcu: goto label_35edfc;
        case 0x35ee00u: goto label_35ee00;
        case 0x35ee04u: goto label_35ee04;
        case 0x35ee08u: goto label_35ee08;
        case 0x35ee0cu: goto label_35ee0c;
        case 0x35ee10u: goto label_35ee10;
        case 0x35ee14u: goto label_35ee14;
        case 0x35ee18u: goto label_35ee18;
        case 0x35ee1cu: goto label_35ee1c;
        case 0x35ee20u: goto label_35ee20;
        case 0x35ee24u: goto label_35ee24;
        case 0x35ee28u: goto label_35ee28;
        case 0x35ee2cu: goto label_35ee2c;
        case 0x35ee30u: goto label_35ee30;
        case 0x35ee34u: goto label_35ee34;
        case 0x35ee38u: goto label_35ee38;
        case 0x35ee3cu: goto label_35ee3c;
        case 0x35ee40u: goto label_35ee40;
        case 0x35ee44u: goto label_35ee44;
        case 0x35ee48u: goto label_35ee48;
        case 0x35ee4cu: goto label_35ee4c;
        case 0x35ee50u: goto label_35ee50;
        case 0x35ee54u: goto label_35ee54;
        case 0x35ee58u: goto label_35ee58;
        case 0x35ee5cu: goto label_35ee5c;
        case 0x35ee60u: goto label_35ee60;
        case 0x35ee64u: goto label_35ee64;
        case 0x35ee68u: goto label_35ee68;
        case 0x35ee6cu: goto label_35ee6c;
        case 0x35ee70u: goto label_35ee70;
        case 0x35ee74u: goto label_35ee74;
        case 0x35ee78u: goto label_35ee78;
        case 0x35ee7cu: goto label_35ee7c;
        case 0x35ee80u: goto label_35ee80;
        case 0x35ee84u: goto label_35ee84;
        case 0x35ee88u: goto label_35ee88;
        case 0x35ee8cu: goto label_35ee8c;
        case 0x35ee90u: goto label_35ee90;
        case 0x35ee94u: goto label_35ee94;
        case 0x35ee98u: goto label_35ee98;
        case 0x35ee9cu: goto label_35ee9c;
        case 0x35eea0u: goto label_35eea0;
        case 0x35eea4u: goto label_35eea4;
        case 0x35eea8u: goto label_35eea8;
        case 0x35eeacu: goto label_35eeac;
        case 0x35eeb0u: goto label_35eeb0;
        case 0x35eeb4u: goto label_35eeb4;
        case 0x35eeb8u: goto label_35eeb8;
        case 0x35eebcu: goto label_35eebc;
        case 0x35eec0u: goto label_35eec0;
        case 0x35eec4u: goto label_35eec4;
        case 0x35eec8u: goto label_35eec8;
        case 0x35eeccu: goto label_35eecc;
        case 0x35eed0u: goto label_35eed0;
        case 0x35eed4u: goto label_35eed4;
        case 0x35eed8u: goto label_35eed8;
        case 0x35eedcu: goto label_35eedc;
        case 0x35eee0u: goto label_35eee0;
        case 0x35eee4u: goto label_35eee4;
        case 0x35eee8u: goto label_35eee8;
        case 0x35eeecu: goto label_35eeec;
        case 0x35eef0u: goto label_35eef0;
        case 0x35eef4u: goto label_35eef4;
        case 0x35eef8u: goto label_35eef8;
        case 0x35eefcu: goto label_35eefc;
        case 0x35ef00u: goto label_35ef00;
        case 0x35ef04u: goto label_35ef04;
        case 0x35ef08u: goto label_35ef08;
        case 0x35ef0cu: goto label_35ef0c;
        case 0x35ef10u: goto label_35ef10;
        case 0x35ef14u: goto label_35ef14;
        case 0x35ef18u: goto label_35ef18;
        case 0x35ef1cu: goto label_35ef1c;
        case 0x35ef20u: goto label_35ef20;
        case 0x35ef24u: goto label_35ef24;
        case 0x35ef28u: goto label_35ef28;
        case 0x35ef2cu: goto label_35ef2c;
        case 0x35ef30u: goto label_35ef30;
        case 0x35ef34u: goto label_35ef34;
        case 0x35ef38u: goto label_35ef38;
        case 0x35ef3cu: goto label_35ef3c;
        case 0x35ef40u: goto label_35ef40;
        case 0x35ef44u: goto label_35ef44;
        case 0x35ef48u: goto label_35ef48;
        case 0x35ef4cu: goto label_35ef4c;
        case 0x35ef50u: goto label_35ef50;
        case 0x35ef54u: goto label_35ef54;
        case 0x35ef58u: goto label_35ef58;
        case 0x35ef5cu: goto label_35ef5c;
        case 0x35ef60u: goto label_35ef60;
        case 0x35ef64u: goto label_35ef64;
        case 0x35ef68u: goto label_35ef68;
        case 0x35ef6cu: goto label_35ef6c;
        case 0x35ef70u: goto label_35ef70;
        case 0x35ef74u: goto label_35ef74;
        case 0x35ef78u: goto label_35ef78;
        case 0x35ef7cu: goto label_35ef7c;
        case 0x35ef80u: goto label_35ef80;
        case 0x35ef84u: goto label_35ef84;
        case 0x35ef88u: goto label_35ef88;
        case 0x35ef8cu: goto label_35ef8c;
        case 0x35ef90u: goto label_35ef90;
        case 0x35ef94u: goto label_35ef94;
        case 0x35ef98u: goto label_35ef98;
        case 0x35ef9cu: goto label_35ef9c;
        case 0x35efa0u: goto label_35efa0;
        case 0x35efa4u: goto label_35efa4;
        case 0x35efa8u: goto label_35efa8;
        case 0x35efacu: goto label_35efac;
        case 0x35efb0u: goto label_35efb0;
        case 0x35efb4u: goto label_35efb4;
        case 0x35efb8u: goto label_35efb8;
        case 0x35efbcu: goto label_35efbc;
        case 0x35efc0u: goto label_35efc0;
        case 0x35efc4u: goto label_35efc4;
        case 0x35efc8u: goto label_35efc8;
        case 0x35efccu: goto label_35efcc;
        case 0x35efd0u: goto label_35efd0;
        case 0x35efd4u: goto label_35efd4;
        case 0x35efd8u: goto label_35efd8;
        case 0x35efdcu: goto label_35efdc;
        case 0x35efe0u: goto label_35efe0;
        case 0x35efe4u: goto label_35efe4;
        case 0x35efe8u: goto label_35efe8;
        case 0x35efecu: goto label_35efec;
        case 0x35eff0u: goto label_35eff0;
        case 0x35eff4u: goto label_35eff4;
        case 0x35eff8u: goto label_35eff8;
        case 0x35effcu: goto label_35effc;
        case 0x35f000u: goto label_35f000;
        case 0x35f004u: goto label_35f004;
        case 0x35f008u: goto label_35f008;
        case 0x35f00cu: goto label_35f00c;
        case 0x35f010u: goto label_35f010;
        case 0x35f014u: goto label_35f014;
        case 0x35f018u: goto label_35f018;
        case 0x35f01cu: goto label_35f01c;
        case 0x35f020u: goto label_35f020;
        case 0x35f024u: goto label_35f024;
        case 0x35f028u: goto label_35f028;
        case 0x35f02cu: goto label_35f02c;
        case 0x35f030u: goto label_35f030;
        case 0x35f034u: goto label_35f034;
        case 0x35f038u: goto label_35f038;
        case 0x35f03cu: goto label_35f03c;
        case 0x35f040u: goto label_35f040;
        case 0x35f044u: goto label_35f044;
        case 0x35f048u: goto label_35f048;
        case 0x35f04cu: goto label_35f04c;
        case 0x35f050u: goto label_35f050;
        case 0x35f054u: goto label_35f054;
        case 0x35f058u: goto label_35f058;
        case 0x35f05cu: goto label_35f05c;
        case 0x35f060u: goto label_35f060;
        case 0x35f064u: goto label_35f064;
        case 0x35f068u: goto label_35f068;
        case 0x35f06cu: goto label_35f06c;
        case 0x35f070u: goto label_35f070;
        case 0x35f074u: goto label_35f074;
        case 0x35f078u: goto label_35f078;
        case 0x35f07cu: goto label_35f07c;
        case 0x35f080u: goto label_35f080;
        case 0x35f084u: goto label_35f084;
        case 0x35f088u: goto label_35f088;
        case 0x35f08cu: goto label_35f08c;
        case 0x35f090u: goto label_35f090;
        case 0x35f094u: goto label_35f094;
        case 0x35f098u: goto label_35f098;
        case 0x35f09cu: goto label_35f09c;
        case 0x35f0a0u: goto label_35f0a0;
        case 0x35f0a4u: goto label_35f0a4;
        case 0x35f0a8u: goto label_35f0a8;
        case 0x35f0acu: goto label_35f0ac;
        case 0x35f0b0u: goto label_35f0b0;
        case 0x35f0b4u: goto label_35f0b4;
        case 0x35f0b8u: goto label_35f0b8;
        case 0x35f0bcu: goto label_35f0bc;
        case 0x35f0c0u: goto label_35f0c0;
        case 0x35f0c4u: goto label_35f0c4;
        case 0x35f0c8u: goto label_35f0c8;
        case 0x35f0ccu: goto label_35f0cc;
        case 0x35f0d0u: goto label_35f0d0;
        case 0x35f0d4u: goto label_35f0d4;
        case 0x35f0d8u: goto label_35f0d8;
        case 0x35f0dcu: goto label_35f0dc;
        case 0x35f0e0u: goto label_35f0e0;
        case 0x35f0e4u: goto label_35f0e4;
        case 0x35f0e8u: goto label_35f0e8;
        case 0x35f0ecu: goto label_35f0ec;
        case 0x35f0f0u: goto label_35f0f0;
        case 0x35f0f4u: goto label_35f0f4;
        case 0x35f0f8u: goto label_35f0f8;
        case 0x35f0fcu: goto label_35f0fc;
        case 0x35f100u: goto label_35f100;
        case 0x35f104u: goto label_35f104;
        case 0x35f108u: goto label_35f108;
        case 0x35f10cu: goto label_35f10c;
        case 0x35f110u: goto label_35f110;
        case 0x35f114u: goto label_35f114;
        case 0x35f118u: goto label_35f118;
        case 0x35f11cu: goto label_35f11c;
        case 0x35f120u: goto label_35f120;
        case 0x35f124u: goto label_35f124;
        case 0x35f128u: goto label_35f128;
        case 0x35f12cu: goto label_35f12c;
        case 0x35f130u: goto label_35f130;
        case 0x35f134u: goto label_35f134;
        case 0x35f138u: goto label_35f138;
        case 0x35f13cu: goto label_35f13c;
        case 0x35f140u: goto label_35f140;
        case 0x35f144u: goto label_35f144;
        case 0x35f148u: goto label_35f148;
        case 0x35f14cu: goto label_35f14c;
        case 0x35f150u: goto label_35f150;
        case 0x35f154u: goto label_35f154;
        case 0x35f158u: goto label_35f158;
        case 0x35f15cu: goto label_35f15c;
        case 0x35f160u: goto label_35f160;
        case 0x35f164u: goto label_35f164;
        case 0x35f168u: goto label_35f168;
        case 0x35f16cu: goto label_35f16c;
        case 0x35f170u: goto label_35f170;
        case 0x35f174u: goto label_35f174;
        case 0x35f178u: goto label_35f178;
        case 0x35f17cu: goto label_35f17c;
        case 0x35f180u: goto label_35f180;
        case 0x35f184u: goto label_35f184;
        case 0x35f188u: goto label_35f188;
        case 0x35f18cu: goto label_35f18c;
        case 0x35f190u: goto label_35f190;
        case 0x35f194u: goto label_35f194;
        case 0x35f198u: goto label_35f198;
        case 0x35f19cu: goto label_35f19c;
        case 0x35f1a0u: goto label_35f1a0;
        case 0x35f1a4u: goto label_35f1a4;
        case 0x35f1a8u: goto label_35f1a8;
        case 0x35f1acu: goto label_35f1ac;
        case 0x35f1b0u: goto label_35f1b0;
        case 0x35f1b4u: goto label_35f1b4;
        case 0x35f1b8u: goto label_35f1b8;
        case 0x35f1bcu: goto label_35f1bc;
        case 0x35f1c0u: goto label_35f1c0;
        case 0x35f1c4u: goto label_35f1c4;
        case 0x35f1c8u: goto label_35f1c8;
        case 0x35f1ccu: goto label_35f1cc;
        case 0x35f1d0u: goto label_35f1d0;
        case 0x35f1d4u: goto label_35f1d4;
        case 0x35f1d8u: goto label_35f1d8;
        case 0x35f1dcu: goto label_35f1dc;
        case 0x35f1e0u: goto label_35f1e0;
        case 0x35f1e4u: goto label_35f1e4;
        case 0x35f1e8u: goto label_35f1e8;
        case 0x35f1ecu: goto label_35f1ec;
        case 0x35f1f0u: goto label_35f1f0;
        case 0x35f1f4u: goto label_35f1f4;
        case 0x35f1f8u: goto label_35f1f8;
        case 0x35f1fcu: goto label_35f1fc;
        case 0x35f200u: goto label_35f200;
        case 0x35f204u: goto label_35f204;
        case 0x35f208u: goto label_35f208;
        case 0x35f20cu: goto label_35f20c;
        case 0x35f210u: goto label_35f210;
        case 0x35f214u: goto label_35f214;
        case 0x35f218u: goto label_35f218;
        case 0x35f21cu: goto label_35f21c;
        case 0x35f220u: goto label_35f220;
        case 0x35f224u: goto label_35f224;
        case 0x35f228u: goto label_35f228;
        case 0x35f22cu: goto label_35f22c;
        case 0x35f230u: goto label_35f230;
        case 0x35f234u: goto label_35f234;
        case 0x35f238u: goto label_35f238;
        case 0x35f23cu: goto label_35f23c;
        case 0x35f240u: goto label_35f240;
        case 0x35f244u: goto label_35f244;
        case 0x35f248u: goto label_35f248;
        case 0x35f24cu: goto label_35f24c;
        case 0x35f250u: goto label_35f250;
        case 0x35f254u: goto label_35f254;
        case 0x35f258u: goto label_35f258;
        case 0x35f25cu: goto label_35f25c;
        case 0x35f260u: goto label_35f260;
        case 0x35f264u: goto label_35f264;
        case 0x35f268u: goto label_35f268;
        case 0x35f26cu: goto label_35f26c;
        case 0x35f270u: goto label_35f270;
        case 0x35f274u: goto label_35f274;
        case 0x35f278u: goto label_35f278;
        case 0x35f27cu: goto label_35f27c;
        case 0x35f280u: goto label_35f280;
        case 0x35f284u: goto label_35f284;
        case 0x35f288u: goto label_35f288;
        case 0x35f28cu: goto label_35f28c;
        case 0x35f290u: goto label_35f290;
        case 0x35f294u: goto label_35f294;
        case 0x35f298u: goto label_35f298;
        case 0x35f29cu: goto label_35f29c;
        case 0x35f2a0u: goto label_35f2a0;
        case 0x35f2a4u: goto label_35f2a4;
        case 0x35f2a8u: goto label_35f2a8;
        case 0x35f2acu: goto label_35f2ac;
        case 0x35f2b0u: goto label_35f2b0;
        case 0x35f2b4u: goto label_35f2b4;
        case 0x35f2b8u: goto label_35f2b8;
        case 0x35f2bcu: goto label_35f2bc;
        case 0x35f2c0u: goto label_35f2c0;
        case 0x35f2c4u: goto label_35f2c4;
        case 0x35f2c8u: goto label_35f2c8;
        case 0x35f2ccu: goto label_35f2cc;
        case 0x35f2d0u: goto label_35f2d0;
        case 0x35f2d4u: goto label_35f2d4;
        case 0x35f2d8u: goto label_35f2d8;
        case 0x35f2dcu: goto label_35f2dc;
        case 0x35f2e0u: goto label_35f2e0;
        case 0x35f2e4u: goto label_35f2e4;
        case 0x35f2e8u: goto label_35f2e8;
        case 0x35f2ecu: goto label_35f2ec;
        case 0x35f2f0u: goto label_35f2f0;
        case 0x35f2f4u: goto label_35f2f4;
        case 0x35f2f8u: goto label_35f2f8;
        case 0x35f2fcu: goto label_35f2fc;
        case 0x35f300u: goto label_35f300;
        case 0x35f304u: goto label_35f304;
        case 0x35f308u: goto label_35f308;
        case 0x35f30cu: goto label_35f30c;
        case 0x35f310u: goto label_35f310;
        case 0x35f314u: goto label_35f314;
        case 0x35f318u: goto label_35f318;
        case 0x35f31cu: goto label_35f31c;
        case 0x35f320u: goto label_35f320;
        case 0x35f324u: goto label_35f324;
        case 0x35f328u: goto label_35f328;
        case 0x35f32cu: goto label_35f32c;
        case 0x35f330u: goto label_35f330;
        case 0x35f334u: goto label_35f334;
        case 0x35f338u: goto label_35f338;
        case 0x35f33cu: goto label_35f33c;
        case 0x35f340u: goto label_35f340;
        case 0x35f344u: goto label_35f344;
        case 0x35f348u: goto label_35f348;
        case 0x35f34cu: goto label_35f34c;
        case 0x35f350u: goto label_35f350;
        case 0x35f354u: goto label_35f354;
        case 0x35f358u: goto label_35f358;
        case 0x35f35cu: goto label_35f35c;
        case 0x35f360u: goto label_35f360;
        case 0x35f364u: goto label_35f364;
        case 0x35f368u: goto label_35f368;
        case 0x35f36cu: goto label_35f36c;
        case 0x35f370u: goto label_35f370;
        case 0x35f374u: goto label_35f374;
        case 0x35f378u: goto label_35f378;
        case 0x35f37cu: goto label_35f37c;
        case 0x35f380u: goto label_35f380;
        case 0x35f384u: goto label_35f384;
        case 0x35f388u: goto label_35f388;
        case 0x35f38cu: goto label_35f38c;
        case 0x35f390u: goto label_35f390;
        case 0x35f394u: goto label_35f394;
        case 0x35f398u: goto label_35f398;
        case 0x35f39cu: goto label_35f39c;
        case 0x35f3a0u: goto label_35f3a0;
        case 0x35f3a4u: goto label_35f3a4;
        case 0x35f3a8u: goto label_35f3a8;
        case 0x35f3acu: goto label_35f3ac;
        case 0x35f3b0u: goto label_35f3b0;
        case 0x35f3b4u: goto label_35f3b4;
        case 0x35f3b8u: goto label_35f3b8;
        case 0x35f3bcu: goto label_35f3bc;
        case 0x35f3c0u: goto label_35f3c0;
        case 0x35f3c4u: goto label_35f3c4;
        case 0x35f3c8u: goto label_35f3c8;
        case 0x35f3ccu: goto label_35f3cc;
        case 0x35f3d0u: goto label_35f3d0;
        case 0x35f3d4u: goto label_35f3d4;
        case 0x35f3d8u: goto label_35f3d8;
        case 0x35f3dcu: goto label_35f3dc;
        case 0x35f3e0u: goto label_35f3e0;
        case 0x35f3e4u: goto label_35f3e4;
        case 0x35f3e8u: goto label_35f3e8;
        case 0x35f3ecu: goto label_35f3ec;
        case 0x35f3f0u: goto label_35f3f0;
        case 0x35f3f4u: goto label_35f3f4;
        case 0x35f3f8u: goto label_35f3f8;
        case 0x35f3fcu: goto label_35f3fc;
        case 0x35f400u: goto label_35f400;
        case 0x35f404u: goto label_35f404;
        case 0x35f408u: goto label_35f408;
        case 0x35f40cu: goto label_35f40c;
        case 0x35f410u: goto label_35f410;
        case 0x35f414u: goto label_35f414;
        case 0x35f418u: goto label_35f418;
        case 0x35f41cu: goto label_35f41c;
        case 0x35f420u: goto label_35f420;
        case 0x35f424u: goto label_35f424;
        case 0x35f428u: goto label_35f428;
        case 0x35f42cu: goto label_35f42c;
        case 0x35f430u: goto label_35f430;
        case 0x35f434u: goto label_35f434;
        case 0x35f438u: goto label_35f438;
        case 0x35f43cu: goto label_35f43c;
        case 0x35f440u: goto label_35f440;
        case 0x35f444u: goto label_35f444;
        case 0x35f448u: goto label_35f448;
        case 0x35f44cu: goto label_35f44c;
        case 0x35f450u: goto label_35f450;
        case 0x35f454u: goto label_35f454;
        case 0x35f458u: goto label_35f458;
        case 0x35f45cu: goto label_35f45c;
        case 0x35f460u: goto label_35f460;
        case 0x35f464u: goto label_35f464;
        case 0x35f468u: goto label_35f468;
        case 0x35f46cu: goto label_35f46c;
        case 0x35f470u: goto label_35f470;
        case 0x35f474u: goto label_35f474;
        case 0x35f478u: goto label_35f478;
        case 0x35f47cu: goto label_35f47c;
        case 0x35f480u: goto label_35f480;
        case 0x35f484u: goto label_35f484;
        case 0x35f488u: goto label_35f488;
        case 0x35f48cu: goto label_35f48c;
        case 0x35f490u: goto label_35f490;
        case 0x35f494u: goto label_35f494;
        case 0x35f498u: goto label_35f498;
        case 0x35f49cu: goto label_35f49c;
        case 0x35f4a0u: goto label_35f4a0;
        case 0x35f4a4u: goto label_35f4a4;
        case 0x35f4a8u: goto label_35f4a8;
        case 0x35f4acu: goto label_35f4ac;
        case 0x35f4b0u: goto label_35f4b0;
        case 0x35f4b4u: goto label_35f4b4;
        case 0x35f4b8u: goto label_35f4b8;
        case 0x35f4bcu: goto label_35f4bc;
        case 0x35f4c0u: goto label_35f4c0;
        case 0x35f4c4u: goto label_35f4c4;
        case 0x35f4c8u: goto label_35f4c8;
        case 0x35f4ccu: goto label_35f4cc;
        case 0x35f4d0u: goto label_35f4d0;
        case 0x35f4d4u: goto label_35f4d4;
        case 0x35f4d8u: goto label_35f4d8;
        case 0x35f4dcu: goto label_35f4dc;
        case 0x35f4e0u: goto label_35f4e0;
        case 0x35f4e4u: goto label_35f4e4;
        case 0x35f4e8u: goto label_35f4e8;
        case 0x35f4ecu: goto label_35f4ec;
        case 0x35f4f0u: goto label_35f4f0;
        case 0x35f4f4u: goto label_35f4f4;
        case 0x35f4f8u: goto label_35f4f8;
        case 0x35f4fcu: goto label_35f4fc;
        case 0x35f500u: goto label_35f500;
        case 0x35f504u: goto label_35f504;
        case 0x35f508u: goto label_35f508;
        case 0x35f50cu: goto label_35f50c;
        case 0x35f510u: goto label_35f510;
        case 0x35f514u: goto label_35f514;
        case 0x35f518u: goto label_35f518;
        case 0x35f51cu: goto label_35f51c;
        case 0x35f520u: goto label_35f520;
        case 0x35f524u: goto label_35f524;
        case 0x35f528u: goto label_35f528;
        case 0x35f52cu: goto label_35f52c;
        case 0x35f530u: goto label_35f530;
        case 0x35f534u: goto label_35f534;
        case 0x35f538u: goto label_35f538;
        case 0x35f53cu: goto label_35f53c;
        case 0x35f540u: goto label_35f540;
        case 0x35f544u: goto label_35f544;
        case 0x35f548u: goto label_35f548;
        case 0x35f54cu: goto label_35f54c;
        case 0x35f550u: goto label_35f550;
        case 0x35f554u: goto label_35f554;
        case 0x35f558u: goto label_35f558;
        case 0x35f55cu: goto label_35f55c;
        case 0x35f560u: goto label_35f560;
        case 0x35f564u: goto label_35f564;
        case 0x35f568u: goto label_35f568;
        case 0x35f56cu: goto label_35f56c;
        case 0x35f570u: goto label_35f570;
        case 0x35f574u: goto label_35f574;
        case 0x35f578u: goto label_35f578;
        case 0x35f57cu: goto label_35f57c;
        case 0x35f580u: goto label_35f580;
        case 0x35f584u: goto label_35f584;
        case 0x35f588u: goto label_35f588;
        case 0x35f58cu: goto label_35f58c;
        case 0x35f590u: goto label_35f590;
        case 0x35f594u: goto label_35f594;
        case 0x35f598u: goto label_35f598;
        case 0x35f59cu: goto label_35f59c;
        case 0x35f5a0u: goto label_35f5a0;
        case 0x35f5a4u: goto label_35f5a4;
        case 0x35f5a8u: goto label_35f5a8;
        case 0x35f5acu: goto label_35f5ac;
        case 0x35f5b0u: goto label_35f5b0;
        case 0x35f5b4u: goto label_35f5b4;
        case 0x35f5b8u: goto label_35f5b8;
        case 0x35f5bcu: goto label_35f5bc;
        case 0x35f5c0u: goto label_35f5c0;
        case 0x35f5c4u: goto label_35f5c4;
        case 0x35f5c8u: goto label_35f5c8;
        case 0x35f5ccu: goto label_35f5cc;
        case 0x35f5d0u: goto label_35f5d0;
        case 0x35f5d4u: goto label_35f5d4;
        case 0x35f5d8u: goto label_35f5d8;
        case 0x35f5dcu: goto label_35f5dc;
        case 0x35f5e0u: goto label_35f5e0;
        case 0x35f5e4u: goto label_35f5e4;
        case 0x35f5e8u: goto label_35f5e8;
        case 0x35f5ecu: goto label_35f5ec;
        case 0x35f5f0u: goto label_35f5f0;
        case 0x35f5f4u: goto label_35f5f4;
        case 0x35f5f8u: goto label_35f5f8;
        case 0x35f5fcu: goto label_35f5fc;
        case 0x35f600u: goto label_35f600;
        case 0x35f604u: goto label_35f604;
        case 0x35f608u: goto label_35f608;
        case 0x35f60cu: goto label_35f60c;
        case 0x35f610u: goto label_35f610;
        case 0x35f614u: goto label_35f614;
        case 0x35f618u: goto label_35f618;
        case 0x35f61cu: goto label_35f61c;
        case 0x35f620u: goto label_35f620;
        case 0x35f624u: goto label_35f624;
        case 0x35f628u: goto label_35f628;
        case 0x35f62cu: goto label_35f62c;
        case 0x35f630u: goto label_35f630;
        case 0x35f634u: goto label_35f634;
        case 0x35f638u: goto label_35f638;
        case 0x35f63cu: goto label_35f63c;
        case 0x35f640u: goto label_35f640;
        case 0x35f644u: goto label_35f644;
        case 0x35f648u: goto label_35f648;
        case 0x35f64cu: goto label_35f64c;
        case 0x35f650u: goto label_35f650;
        case 0x35f654u: goto label_35f654;
        case 0x35f658u: goto label_35f658;
        case 0x35f65cu: goto label_35f65c;
        case 0x35f660u: goto label_35f660;
        case 0x35f664u: goto label_35f664;
        case 0x35f668u: goto label_35f668;
        case 0x35f66cu: goto label_35f66c;
        case 0x35f670u: goto label_35f670;
        case 0x35f674u: goto label_35f674;
        case 0x35f678u: goto label_35f678;
        case 0x35f67cu: goto label_35f67c;
        case 0x35f680u: goto label_35f680;
        case 0x35f684u: goto label_35f684;
        case 0x35f688u: goto label_35f688;
        case 0x35f68cu: goto label_35f68c;
        case 0x35f690u: goto label_35f690;
        case 0x35f694u: goto label_35f694;
        case 0x35f698u: goto label_35f698;
        case 0x35f69cu: goto label_35f69c;
        case 0x35f6a0u: goto label_35f6a0;
        case 0x35f6a4u: goto label_35f6a4;
        case 0x35f6a8u: goto label_35f6a8;
        case 0x35f6acu: goto label_35f6ac;
        case 0x35f6b0u: goto label_35f6b0;
        case 0x35f6b4u: goto label_35f6b4;
        case 0x35f6b8u: goto label_35f6b8;
        case 0x35f6bcu: goto label_35f6bc;
        case 0x35f6c0u: goto label_35f6c0;
        case 0x35f6c4u: goto label_35f6c4;
        case 0x35f6c8u: goto label_35f6c8;
        case 0x35f6ccu: goto label_35f6cc;
        case 0x35f6d0u: goto label_35f6d0;
        case 0x35f6d4u: goto label_35f6d4;
        case 0x35f6d8u: goto label_35f6d8;
        case 0x35f6dcu: goto label_35f6dc;
        case 0x35f6e0u: goto label_35f6e0;
        case 0x35f6e4u: goto label_35f6e4;
        case 0x35f6e8u: goto label_35f6e8;
        case 0x35f6ecu: goto label_35f6ec;
        case 0x35f6f0u: goto label_35f6f0;
        case 0x35f6f4u: goto label_35f6f4;
        case 0x35f6f8u: goto label_35f6f8;
        case 0x35f6fcu: goto label_35f6fc;
        case 0x35f700u: goto label_35f700;
        case 0x35f704u: goto label_35f704;
        case 0x35f708u: goto label_35f708;
        case 0x35f70cu: goto label_35f70c;
        case 0x35f710u: goto label_35f710;
        case 0x35f714u: goto label_35f714;
        case 0x35f718u: goto label_35f718;
        case 0x35f71cu: goto label_35f71c;
        case 0x35f720u: goto label_35f720;
        case 0x35f724u: goto label_35f724;
        case 0x35f728u: goto label_35f728;
        case 0x35f72cu: goto label_35f72c;
        case 0x35f730u: goto label_35f730;
        case 0x35f734u: goto label_35f734;
        case 0x35f738u: goto label_35f738;
        case 0x35f73cu: goto label_35f73c;
        case 0x35f740u: goto label_35f740;
        case 0x35f744u: goto label_35f744;
        case 0x35f748u: goto label_35f748;
        case 0x35f74cu: goto label_35f74c;
        case 0x35f750u: goto label_35f750;
        case 0x35f754u: goto label_35f754;
        case 0x35f758u: goto label_35f758;
        case 0x35f75cu: goto label_35f75c;
        case 0x35f760u: goto label_35f760;
        case 0x35f764u: goto label_35f764;
        case 0x35f768u: goto label_35f768;
        case 0x35f76cu: goto label_35f76c;
        case 0x35f770u: goto label_35f770;
        case 0x35f774u: goto label_35f774;
        case 0x35f778u: goto label_35f778;
        case 0x35f77cu: goto label_35f77c;
        case 0x35f780u: goto label_35f780;
        case 0x35f784u: goto label_35f784;
        case 0x35f788u: goto label_35f788;
        case 0x35f78cu: goto label_35f78c;
        case 0x35f790u: goto label_35f790;
        case 0x35f794u: goto label_35f794;
        case 0x35f798u: goto label_35f798;
        case 0x35f79cu: goto label_35f79c;
        case 0x35f7a0u: goto label_35f7a0;
        case 0x35f7a4u: goto label_35f7a4;
        case 0x35f7a8u: goto label_35f7a8;
        case 0x35f7acu: goto label_35f7ac;
        case 0x35f7b0u: goto label_35f7b0;
        case 0x35f7b4u: goto label_35f7b4;
        case 0x35f7b8u: goto label_35f7b8;
        case 0x35f7bcu: goto label_35f7bc;
        case 0x35f7c0u: goto label_35f7c0;
        case 0x35f7c4u: goto label_35f7c4;
        case 0x35f7c8u: goto label_35f7c8;
        case 0x35f7ccu: goto label_35f7cc;
        case 0x35f7d0u: goto label_35f7d0;
        case 0x35f7d4u: goto label_35f7d4;
        case 0x35f7d8u: goto label_35f7d8;
        case 0x35f7dcu: goto label_35f7dc;
        case 0x35f7e0u: goto label_35f7e0;
        case 0x35f7e4u: goto label_35f7e4;
        case 0x35f7e8u: goto label_35f7e8;
        case 0x35f7ecu: goto label_35f7ec;
        case 0x35f7f0u: goto label_35f7f0;
        case 0x35f7f4u: goto label_35f7f4;
        case 0x35f7f8u: goto label_35f7f8;
        case 0x35f7fcu: goto label_35f7fc;
        case 0x35f800u: goto label_35f800;
        case 0x35f804u: goto label_35f804;
        case 0x35f808u: goto label_35f808;
        case 0x35f80cu: goto label_35f80c;
        case 0x35f810u: goto label_35f810;
        case 0x35f814u: goto label_35f814;
        case 0x35f818u: goto label_35f818;
        case 0x35f81cu: goto label_35f81c;
        case 0x35f820u: goto label_35f820;
        case 0x35f824u: goto label_35f824;
        case 0x35f828u: goto label_35f828;
        case 0x35f82cu: goto label_35f82c;
        case 0x35f830u: goto label_35f830;
        case 0x35f834u: goto label_35f834;
        case 0x35f838u: goto label_35f838;
        case 0x35f83cu: goto label_35f83c;
        case 0x35f840u: goto label_35f840;
        case 0x35f844u: goto label_35f844;
        case 0x35f848u: goto label_35f848;
        case 0x35f84cu: goto label_35f84c;
        case 0x35f850u: goto label_35f850;
        case 0x35f854u: goto label_35f854;
        case 0x35f858u: goto label_35f858;
        case 0x35f85cu: goto label_35f85c;
        case 0x35f860u: goto label_35f860;
        case 0x35f864u: goto label_35f864;
        case 0x35f868u: goto label_35f868;
        case 0x35f86cu: goto label_35f86c;
        case 0x35f870u: goto label_35f870;
        case 0x35f874u: goto label_35f874;
        case 0x35f878u: goto label_35f878;
        case 0x35f87cu: goto label_35f87c;
        case 0x35f880u: goto label_35f880;
        case 0x35f884u: goto label_35f884;
        case 0x35f888u: goto label_35f888;
        case 0x35f88cu: goto label_35f88c;
        case 0x35f890u: goto label_35f890;
        case 0x35f894u: goto label_35f894;
        case 0x35f898u: goto label_35f898;
        case 0x35f89cu: goto label_35f89c;
        case 0x35f8a0u: goto label_35f8a0;
        case 0x35f8a4u: goto label_35f8a4;
        case 0x35f8a8u: goto label_35f8a8;
        case 0x35f8acu: goto label_35f8ac;
        case 0x35f8b0u: goto label_35f8b0;
        case 0x35f8b4u: goto label_35f8b4;
        case 0x35f8b8u: goto label_35f8b8;
        case 0x35f8bcu: goto label_35f8bc;
        case 0x35f8c0u: goto label_35f8c0;
        case 0x35f8c4u: goto label_35f8c4;
        case 0x35f8c8u: goto label_35f8c8;
        case 0x35f8ccu: goto label_35f8cc;
        case 0x35f8d0u: goto label_35f8d0;
        case 0x35f8d4u: goto label_35f8d4;
        case 0x35f8d8u: goto label_35f8d8;
        case 0x35f8dcu: goto label_35f8dc;
        case 0x35f8e0u: goto label_35f8e0;
        case 0x35f8e4u: goto label_35f8e4;
        case 0x35f8e8u: goto label_35f8e8;
        case 0x35f8ecu: goto label_35f8ec;
        case 0x35f8f0u: goto label_35f8f0;
        case 0x35f8f4u: goto label_35f8f4;
        case 0x35f8f8u: goto label_35f8f8;
        case 0x35f8fcu: goto label_35f8fc;
        case 0x35f900u: goto label_35f900;
        case 0x35f904u: goto label_35f904;
        case 0x35f908u: goto label_35f908;
        case 0x35f90cu: goto label_35f90c;
        case 0x35f910u: goto label_35f910;
        case 0x35f914u: goto label_35f914;
        case 0x35f918u: goto label_35f918;
        case 0x35f91cu: goto label_35f91c;
        case 0x35f920u: goto label_35f920;
        case 0x35f924u: goto label_35f924;
        case 0x35f928u: goto label_35f928;
        case 0x35f92cu: goto label_35f92c;
        case 0x35f930u: goto label_35f930;
        case 0x35f934u: goto label_35f934;
        case 0x35f938u: goto label_35f938;
        case 0x35f93cu: goto label_35f93c;
        case 0x35f940u: goto label_35f940;
        case 0x35f944u: goto label_35f944;
        case 0x35f948u: goto label_35f948;
        case 0x35f94cu: goto label_35f94c;
        case 0x35f950u: goto label_35f950;
        case 0x35f954u: goto label_35f954;
        case 0x35f958u: goto label_35f958;
        case 0x35f95cu: goto label_35f95c;
        case 0x35f960u: goto label_35f960;
        case 0x35f964u: goto label_35f964;
        case 0x35f968u: goto label_35f968;
        case 0x35f96cu: goto label_35f96c;
        case 0x35f970u: goto label_35f970;
        case 0x35f974u: goto label_35f974;
        case 0x35f978u: goto label_35f978;
        case 0x35f97cu: goto label_35f97c;
        case 0x35f980u: goto label_35f980;
        case 0x35f984u: goto label_35f984;
        case 0x35f988u: goto label_35f988;
        case 0x35f98cu: goto label_35f98c;
        case 0x35f990u: goto label_35f990;
        case 0x35f994u: goto label_35f994;
        case 0x35f998u: goto label_35f998;
        case 0x35f99cu: goto label_35f99c;
        case 0x35f9a0u: goto label_35f9a0;
        case 0x35f9a4u: goto label_35f9a4;
        case 0x35f9a8u: goto label_35f9a8;
        case 0x35f9acu: goto label_35f9ac;
        case 0x35f9b0u: goto label_35f9b0;
        case 0x35f9b4u: goto label_35f9b4;
        case 0x35f9b8u: goto label_35f9b8;
        case 0x35f9bcu: goto label_35f9bc;
        case 0x35f9c0u: goto label_35f9c0;
        case 0x35f9c4u: goto label_35f9c4;
        case 0x35f9c8u: goto label_35f9c8;
        case 0x35f9ccu: goto label_35f9cc;
        case 0x35f9d0u: goto label_35f9d0;
        case 0x35f9d4u: goto label_35f9d4;
        case 0x35f9d8u: goto label_35f9d8;
        case 0x35f9dcu: goto label_35f9dc;
        case 0x35f9e0u: goto label_35f9e0;
        case 0x35f9e4u: goto label_35f9e4;
        case 0x35f9e8u: goto label_35f9e8;
        case 0x35f9ecu: goto label_35f9ec;
        case 0x35f9f0u: goto label_35f9f0;
        case 0x35f9f4u: goto label_35f9f4;
        case 0x35f9f8u: goto label_35f9f8;
        case 0x35f9fcu: goto label_35f9fc;
        case 0x35fa00u: goto label_35fa00;
        case 0x35fa04u: goto label_35fa04;
        case 0x35fa08u: goto label_35fa08;
        case 0x35fa0cu: goto label_35fa0c;
        case 0x35fa10u: goto label_35fa10;
        case 0x35fa14u: goto label_35fa14;
        case 0x35fa18u: goto label_35fa18;
        case 0x35fa1cu: goto label_35fa1c;
        case 0x35fa20u: goto label_35fa20;
        case 0x35fa24u: goto label_35fa24;
        case 0x35fa28u: goto label_35fa28;
        case 0x35fa2cu: goto label_35fa2c;
        case 0x35fa30u: goto label_35fa30;
        case 0x35fa34u: goto label_35fa34;
        case 0x35fa38u: goto label_35fa38;
        case 0x35fa3cu: goto label_35fa3c;
        case 0x35fa40u: goto label_35fa40;
        case 0x35fa44u: goto label_35fa44;
        case 0x35fa48u: goto label_35fa48;
        case 0x35fa4cu: goto label_35fa4c;
        case 0x35fa50u: goto label_35fa50;
        case 0x35fa54u: goto label_35fa54;
        case 0x35fa58u: goto label_35fa58;
        case 0x35fa5cu: goto label_35fa5c;
        case 0x35fa60u: goto label_35fa60;
        case 0x35fa64u: goto label_35fa64;
        case 0x35fa68u: goto label_35fa68;
        case 0x35fa6cu: goto label_35fa6c;
        case 0x35fa70u: goto label_35fa70;
        case 0x35fa74u: goto label_35fa74;
        case 0x35fa78u: goto label_35fa78;
        case 0x35fa7cu: goto label_35fa7c;
        case 0x35fa80u: goto label_35fa80;
        case 0x35fa84u: goto label_35fa84;
        case 0x35fa88u: goto label_35fa88;
        case 0x35fa8cu: goto label_35fa8c;
        case 0x35fa90u: goto label_35fa90;
        case 0x35fa94u: goto label_35fa94;
        case 0x35fa98u: goto label_35fa98;
        case 0x35fa9cu: goto label_35fa9c;
        case 0x35faa0u: goto label_35faa0;
        case 0x35faa4u: goto label_35faa4;
        case 0x35faa8u: goto label_35faa8;
        case 0x35faacu: goto label_35faac;
        case 0x35fab0u: goto label_35fab0;
        case 0x35fab4u: goto label_35fab4;
        case 0x35fab8u: goto label_35fab8;
        case 0x35fabcu: goto label_35fabc;
        case 0x35fac0u: goto label_35fac0;
        case 0x35fac4u: goto label_35fac4;
        case 0x35fac8u: goto label_35fac8;
        case 0x35faccu: goto label_35facc;
        case 0x35fad0u: goto label_35fad0;
        case 0x35fad4u: goto label_35fad4;
        case 0x35fad8u: goto label_35fad8;
        case 0x35fadcu: goto label_35fadc;
        case 0x35fae0u: goto label_35fae0;
        case 0x35fae4u: goto label_35fae4;
        case 0x35fae8u: goto label_35fae8;
        case 0x35faecu: goto label_35faec;
        case 0x35faf0u: goto label_35faf0;
        case 0x35faf4u: goto label_35faf4;
        case 0x35faf8u: goto label_35faf8;
        case 0x35fafcu: goto label_35fafc;
        case 0x35fb00u: goto label_35fb00;
        case 0x35fb04u: goto label_35fb04;
        case 0x35fb08u: goto label_35fb08;
        case 0x35fb0cu: goto label_35fb0c;
        case 0x35fb10u: goto label_35fb10;
        case 0x35fb14u: goto label_35fb14;
        case 0x35fb18u: goto label_35fb18;
        case 0x35fb1cu: goto label_35fb1c;
        case 0x35fb20u: goto label_35fb20;
        case 0x35fb24u: goto label_35fb24;
        case 0x35fb28u: goto label_35fb28;
        case 0x35fb2cu: goto label_35fb2c;
        case 0x35fb30u: goto label_35fb30;
        case 0x35fb34u: goto label_35fb34;
        case 0x35fb38u: goto label_35fb38;
        case 0x35fb3cu: goto label_35fb3c;
        case 0x35fb40u: goto label_35fb40;
        case 0x35fb44u: goto label_35fb44;
        case 0x35fb48u: goto label_35fb48;
        case 0x35fb4cu: goto label_35fb4c;
        case 0x35fb50u: goto label_35fb50;
        case 0x35fb54u: goto label_35fb54;
        case 0x35fb58u: goto label_35fb58;
        case 0x35fb5cu: goto label_35fb5c;
        case 0x35fb60u: goto label_35fb60;
        case 0x35fb64u: goto label_35fb64;
        case 0x35fb68u: goto label_35fb68;
        case 0x35fb6cu: goto label_35fb6c;
        case 0x35fb70u: goto label_35fb70;
        case 0x35fb74u: goto label_35fb74;
        case 0x35fb78u: goto label_35fb78;
        case 0x35fb7cu: goto label_35fb7c;
        case 0x35fb80u: goto label_35fb80;
        case 0x35fb84u: goto label_35fb84;
        case 0x35fb88u: goto label_35fb88;
        case 0x35fb8cu: goto label_35fb8c;
        case 0x35fb90u: goto label_35fb90;
        case 0x35fb94u: goto label_35fb94;
        case 0x35fb98u: goto label_35fb98;
        case 0x35fb9cu: goto label_35fb9c;
        case 0x35fba0u: goto label_35fba0;
        case 0x35fba4u: goto label_35fba4;
        case 0x35fba8u: goto label_35fba8;
        case 0x35fbacu: goto label_35fbac;
        case 0x35fbb0u: goto label_35fbb0;
        case 0x35fbb4u: goto label_35fbb4;
        case 0x35fbb8u: goto label_35fbb8;
        case 0x35fbbcu: goto label_35fbbc;
        case 0x35fbc0u: goto label_35fbc0;
        case 0x35fbc4u: goto label_35fbc4;
        case 0x35fbc8u: goto label_35fbc8;
        case 0x35fbccu: goto label_35fbcc;
        case 0x35fbd0u: goto label_35fbd0;
        case 0x35fbd4u: goto label_35fbd4;
        case 0x35fbd8u: goto label_35fbd8;
        case 0x35fbdcu: goto label_35fbdc;
        case 0x35fbe0u: goto label_35fbe0;
        case 0x35fbe4u: goto label_35fbe4;
        case 0x35fbe8u: goto label_35fbe8;
        case 0x35fbecu: goto label_35fbec;
        case 0x35fbf0u: goto label_35fbf0;
        case 0x35fbf4u: goto label_35fbf4;
        case 0x35fbf8u: goto label_35fbf8;
        case 0x35fbfcu: goto label_35fbfc;
        case 0x35fc00u: goto label_35fc00;
        case 0x35fc04u: goto label_35fc04;
        case 0x35fc08u: goto label_35fc08;
        case 0x35fc0cu: goto label_35fc0c;
        case 0x35fc10u: goto label_35fc10;
        case 0x35fc14u: goto label_35fc14;
        case 0x35fc18u: goto label_35fc18;
        case 0x35fc1cu: goto label_35fc1c;
        case 0x35fc20u: goto label_35fc20;
        case 0x35fc24u: goto label_35fc24;
        case 0x35fc28u: goto label_35fc28;
        case 0x35fc2cu: goto label_35fc2c;
        case 0x35fc30u: goto label_35fc30;
        case 0x35fc34u: goto label_35fc34;
        case 0x35fc38u: goto label_35fc38;
        case 0x35fc3cu: goto label_35fc3c;
        case 0x35fc40u: goto label_35fc40;
        case 0x35fc44u: goto label_35fc44;
        case 0x35fc48u: goto label_35fc48;
        case 0x35fc4cu: goto label_35fc4c;
        case 0x35fc50u: goto label_35fc50;
        case 0x35fc54u: goto label_35fc54;
        case 0x35fc58u: goto label_35fc58;
        case 0x35fc5cu: goto label_35fc5c;
        case 0x35fc60u: goto label_35fc60;
        case 0x35fc64u: goto label_35fc64;
        case 0x35fc68u: goto label_35fc68;
        case 0x35fc6cu: goto label_35fc6c;
        case 0x35fc70u: goto label_35fc70;
        case 0x35fc74u: goto label_35fc74;
        case 0x35fc78u: goto label_35fc78;
        case 0x35fc7cu: goto label_35fc7c;
        case 0x35fc80u: goto label_35fc80;
        case 0x35fc84u: goto label_35fc84;
        case 0x35fc88u: goto label_35fc88;
        case 0x35fc8cu: goto label_35fc8c;
        case 0x35fc90u: goto label_35fc90;
        case 0x35fc94u: goto label_35fc94;
        case 0x35fc98u: goto label_35fc98;
        case 0x35fc9cu: goto label_35fc9c;
        case 0x35fca0u: goto label_35fca0;
        case 0x35fca4u: goto label_35fca4;
        case 0x35fca8u: goto label_35fca8;
        case 0x35fcacu: goto label_35fcac;
        case 0x35fcb0u: goto label_35fcb0;
        case 0x35fcb4u: goto label_35fcb4;
        case 0x35fcb8u: goto label_35fcb8;
        case 0x35fcbcu: goto label_35fcbc;
        case 0x35fcc0u: goto label_35fcc0;
        case 0x35fcc4u: goto label_35fcc4;
        case 0x35fcc8u: goto label_35fcc8;
        case 0x35fcccu: goto label_35fccc;
        case 0x35fcd0u: goto label_35fcd0;
        case 0x35fcd4u: goto label_35fcd4;
        case 0x35fcd8u: goto label_35fcd8;
        case 0x35fcdcu: goto label_35fcdc;
        case 0x35fce0u: goto label_35fce0;
        case 0x35fce4u: goto label_35fce4;
        case 0x35fce8u: goto label_35fce8;
        case 0x35fcecu: goto label_35fcec;
        case 0x35fcf0u: goto label_35fcf0;
        case 0x35fcf4u: goto label_35fcf4;
        case 0x35fcf8u: goto label_35fcf8;
        case 0x35fcfcu: goto label_35fcfc;
        case 0x35fd00u: goto label_35fd00;
        case 0x35fd04u: goto label_35fd04;
        case 0x35fd08u: goto label_35fd08;
        case 0x35fd0cu: goto label_35fd0c;
        case 0x35fd10u: goto label_35fd10;
        case 0x35fd14u: goto label_35fd14;
        case 0x35fd18u: goto label_35fd18;
        case 0x35fd1cu: goto label_35fd1c;
        case 0x35fd20u: goto label_35fd20;
        case 0x35fd24u: goto label_35fd24;
        case 0x35fd28u: goto label_35fd28;
        case 0x35fd2cu: goto label_35fd2c;
        case 0x35fd30u: goto label_35fd30;
        case 0x35fd34u: goto label_35fd34;
        case 0x35fd38u: goto label_35fd38;
        case 0x35fd3cu: goto label_35fd3c;
        case 0x35fd40u: goto label_35fd40;
        case 0x35fd44u: goto label_35fd44;
        case 0x35fd48u: goto label_35fd48;
        case 0x35fd4cu: goto label_35fd4c;
        case 0x35fd50u: goto label_35fd50;
        case 0x35fd54u: goto label_35fd54;
        case 0x35fd58u: goto label_35fd58;
        case 0x35fd5cu: goto label_35fd5c;
        case 0x35fd60u: goto label_35fd60;
        case 0x35fd64u: goto label_35fd64;
        case 0x35fd68u: goto label_35fd68;
        case 0x35fd6cu: goto label_35fd6c;
        case 0x35fd70u: goto label_35fd70;
        case 0x35fd74u: goto label_35fd74;
        case 0x35fd78u: goto label_35fd78;
        case 0x35fd7cu: goto label_35fd7c;
        case 0x35fd80u: goto label_35fd80;
        case 0x35fd84u: goto label_35fd84;
        case 0x35fd88u: goto label_35fd88;
        case 0x35fd8cu: goto label_35fd8c;
        case 0x35fd90u: goto label_35fd90;
        case 0x35fd94u: goto label_35fd94;
        case 0x35fd98u: goto label_35fd98;
        case 0x35fd9cu: goto label_35fd9c;
        case 0x35fda0u: goto label_35fda0;
        case 0x35fda4u: goto label_35fda4;
        case 0x35fda8u: goto label_35fda8;
        case 0x35fdacu: goto label_35fdac;
        case 0x35fdb0u: goto label_35fdb0;
        case 0x35fdb4u: goto label_35fdb4;
        case 0x35fdb8u: goto label_35fdb8;
        case 0x35fdbcu: goto label_35fdbc;
        case 0x35fdc0u: goto label_35fdc0;
        case 0x35fdc4u: goto label_35fdc4;
        case 0x35fdc8u: goto label_35fdc8;
        case 0x35fdccu: goto label_35fdcc;
        case 0x35fdd0u: goto label_35fdd0;
        case 0x35fdd4u: goto label_35fdd4;
        case 0x35fdd8u: goto label_35fdd8;
        case 0x35fddcu: goto label_35fddc;
        case 0x35fde0u: goto label_35fde0;
        case 0x35fde4u: goto label_35fde4;
        case 0x35fde8u: goto label_35fde8;
        case 0x35fdecu: goto label_35fdec;
        case 0x35fdf0u: goto label_35fdf0;
        case 0x35fdf4u: goto label_35fdf4;
        case 0x35fdf8u: goto label_35fdf8;
        case 0x35fdfcu: goto label_35fdfc;
        case 0x35fe00u: goto label_35fe00;
        case 0x35fe04u: goto label_35fe04;
        case 0x35fe08u: goto label_35fe08;
        case 0x35fe0cu: goto label_35fe0c;
        case 0x35fe10u: goto label_35fe10;
        case 0x35fe14u: goto label_35fe14;
        case 0x35fe18u: goto label_35fe18;
        case 0x35fe1cu: goto label_35fe1c;
        case 0x35fe20u: goto label_35fe20;
        case 0x35fe24u: goto label_35fe24;
        case 0x35fe28u: goto label_35fe28;
        case 0x35fe2cu: goto label_35fe2c;
        case 0x35fe30u: goto label_35fe30;
        case 0x35fe34u: goto label_35fe34;
        case 0x35fe38u: goto label_35fe38;
        case 0x35fe3cu: goto label_35fe3c;
        case 0x35fe40u: goto label_35fe40;
        case 0x35fe44u: goto label_35fe44;
        case 0x35fe48u: goto label_35fe48;
        case 0x35fe4cu: goto label_35fe4c;
        case 0x35fe50u: goto label_35fe50;
        case 0x35fe54u: goto label_35fe54;
        case 0x35fe58u: goto label_35fe58;
        case 0x35fe5cu: goto label_35fe5c;
        case 0x35fe60u: goto label_35fe60;
        case 0x35fe64u: goto label_35fe64;
        case 0x35fe68u: goto label_35fe68;
        case 0x35fe6cu: goto label_35fe6c;
        case 0x35fe70u: goto label_35fe70;
        case 0x35fe74u: goto label_35fe74;
        case 0x35fe78u: goto label_35fe78;
        case 0x35fe7cu: goto label_35fe7c;
        case 0x35fe80u: goto label_35fe80;
        case 0x35fe84u: goto label_35fe84;
        default: break;
    }

    ctx->pc = 0x35e978u;

label_35e978:
    // 0x35e978: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x35e978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_35e97c:
    // 0x35e97c: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x35e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
label_35e980:
    // 0x35e980: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35e980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35e984:
    // 0x35e984: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x35e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
label_35e988:
    // 0x35e988: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x35e988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
label_35e98c:
    // 0x35e98c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x35e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_35e990:
    // 0x35e990: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x35e990u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_35e994:
    // 0x35e994: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35e994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35e998:
    // 0x35e998: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x35e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
label_35e99c:
    // 0x35e99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35e9a0:
    // 0x35e9a0: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x35e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
label_35e9a4:
    // 0x35e9a4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x35e9a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_35e9a8:
    // 0x35e9a8: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x35e9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
label_35e9ac:
    // 0x35e9ac: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x35e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
label_35e9b0:
    // 0x35e9b0: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x35e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
label_35e9b4:
    // 0x35e9b4: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x35e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_35e9b8:
    // 0x35e9b8: 0xe7b901d8  swc1        $f25, 0x1D8($sp)
    ctx->pc = 0x35e9b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_35e9bc:
    // 0x35e9bc: 0xe7b801d0  swc1        $f24, 0x1D0($sp)
    ctx->pc = 0x35e9bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_35e9c0:
    // 0x35e9c0: 0xe7b701c8  swc1        $f23, 0x1C8($sp)
    ctx->pc = 0x35e9c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_35e9c4:
    // 0x35e9c4: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x35e9c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_35e9c8:
    // 0x35e9c8: 0xc0f6a96  jal         func_3DAA58
label_35e9cc:
    if (ctx->pc == 0x35E9CCu) {
        ctx->pc = 0x35E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9C8u;
        // 0x35e9cc: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E9D0u;
        goto label_35e9d0;
    }
    ctx->pc = 0x35E9C8u;
    SET_GPR_U32(ctx, 31, 0x35E9D0u);
    ctx->pc = 0x35E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9C8u;
    // 0x35e9cc: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35E9C8u, 0x35E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9D0u;
label_35e9d0:
    // 0x35e9d0: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x35e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_35e9d4:
    // 0x35e9d4: 0x104004cc  beqz        $v0, . + 4 + (0x4CC << 2)
label_35e9d8:
    if (ctx->pc == 0x35E9D8u) {
        ctx->pc = 0x35E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9D4u;
        // 0x35e9d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E9DCu;
        goto label_35e9dc;
    }
    ctx->pc = 0x35E9D4u;
    {
        const bool branch_taken_0x35e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9D4u;
        // 0x35e9d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9d4) {
            ctx->pc = 0x35FD08u;
            goto label_35fd08;
        }
    }
    ctx->pc = 0x35E9DCu;
label_35e9dc:
    // 0x35e9dc: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x35e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_35e9e0:
    // 0x35e9e0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x35e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35e9e4:
    // 0x35e9e4: 0x40f809  jalr        $v0
label_35e9e8:
    if (ctx->pc == 0x35E9E8u) {
        ctx->pc = 0x35E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9E4u;
        // 0x35e9e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35E9ECu;
        goto label_35e9ec;
    }
    ctx->pc = 0x35E9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35E9ECu);
        ctx->pc = 0x35E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9E4u;
        // 0x35e9e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E9E4u, 0x35E9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35E9ECu;
label_35e9ec:
    // 0x35e9ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x35e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35e9f0:
    // 0x35e9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e9f4:
    // 0x35e9f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35e9f8:
    // 0x35e9f8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_35e9fc:
    if (ctx->pc == 0x35E9FCu) {
        ctx->pc = 0x35E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9F8u;
        // 0x35e9fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA00u;
        goto label_35ea00;
    }
    ctx->pc = 0x35E9F8u;
    {
        const bool branch_taken_0x35e9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9F8u;
        // 0x35e9fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9f8) {
            ctx->pc = 0x35EA14u;
            goto label_35ea14;
        }
    }
    ctx->pc = 0x35EA00u;
label_35ea00:
    // 0x35ea00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35ea04:
    // 0x35ea04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_35ea08:
    if (ctx->pc == 0x35EA08u) {
        ctx->pc = 0x35EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA04u;
        // 0x35ea08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA0Cu;
        goto label_35ea0c;
    }
    ctx->pc = 0x35EA04u;
    {
        const bool branch_taken_0x35ea04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA04u;
        // 0x35ea08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea04) {
            ctx->pc = 0x35EA14u;
            goto label_35ea14;
        }
    }
    ctx->pc = 0x35EA0Cu;
label_35ea0c:
    // 0x35ea0c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_35ea10:
    if (ctx->pc == 0x35EA10u) {
        ctx->pc = 0x35EA14u;
        goto label_35ea14;
    }
    ctx->pc = 0x35EA0Cu;
    {
        const bool branch_taken_0x35ea0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35ea0c) {
            ctx->pc = 0x35EA18u;
            goto label_35ea18;
        }
    }
    ctx->pc = 0x35EA14u;
label_35ea14:
    // 0x35ea14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ea18:
    // 0x35ea18: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_35ea1c:
    if (ctx->pc == 0x35EA1Cu) {
        ctx->pc = 0x35EA20u;
        goto label_35ea20;
    }
    ctx->pc = 0x35EA18u;
    {
        const bool branch_taken_0x35ea18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ea18) {
            ctx->pc = 0x35EA74u;
            goto label_35ea74;
        }
    }
    ctx->pc = 0x35EA20u;
label_35ea20:
    // 0x35ea20: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x35ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35ea24:
    // 0x35ea24: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x35ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_35ea28:
    // 0x35ea28: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_35ea2c:
    if (ctx->pc == 0x35EA2Cu) {
        ctx->pc = 0x35EA30u;
        goto label_35ea30;
    }
    ctx->pc = 0x35EA28u;
    {
        const bool branch_taken_0x35ea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ea28) {
            ctx->pc = 0x35EA74u;
            goto label_35ea74;
        }
    }
    ctx->pc = 0x35EA30u;
label_35ea30:
    // 0x35ea30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35ea34:
    // 0x35ea34: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_35ea38:
    if (ctx->pc == 0x35EA38u) {
        ctx->pc = 0x35EA3Cu;
        goto label_35ea3c;
    }
    ctx->pc = 0x35EA34u;
    {
        const bool branch_taken_0x35ea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ea34) {
            ctx->pc = 0x35EA74u;
            goto label_35ea74;
        }
    }
    ctx->pc = 0x35EA3Cu;
label_35ea3c:
    // 0x35ea3c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x35ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_35ea40:
    // 0x35ea40: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x35ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_35ea44:
    // 0x35ea44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_35ea48:
    if (ctx->pc == 0x35EA48u) {
        ctx->pc = 0x35EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA44u;
        // 0x35ea48: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA4Cu;
        goto label_35ea4c;
    }
    ctx->pc = 0x35EA44u;
    {
        const bool branch_taken_0x35ea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA44u;
        // 0x35ea48: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea44) {
            ctx->pc = 0x35EA74u;
            goto label_35ea74;
        }
    }
    ctx->pc = 0x35EA4Cu;
label_35ea4c:
    // 0x35ea4c: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x35ea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_35ea50:
    // 0x35ea50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35ea50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ea54:
    // 0x35ea54: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x35ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_35ea58:
    // 0x35ea58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35ea58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ea5c:
    // 0x35ea5c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_35ea60:
    // 0x35ea60: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x35ea60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_35ea64:
    // 0x35ea64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35ea64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_35ea68:
    // 0x35ea68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35ea68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ea6c:
    // 0x35ea6c: 0xc0b98b0  jal         func_2E62C0
label_35ea70:
    if (ctx->pc == 0x35EA70u) {
        ctx->pc = 0x35EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA6Cu;
        // 0x35ea70: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA74u;
        goto label_35ea74;
    }
    ctx->pc = 0x35EA6Cu;
    SET_GPR_U32(ctx, 31, 0x35EA74u);
    ctx->pc = 0x35EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA6Cu;
    // 0x35ea70: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E62C0u, 0x35EA6Cu, 0x35EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA74u;
label_35ea74:
    // 0x35ea74: 0xc0d8de2  jal         func_363788
label_35ea78:
    if (ctx->pc == 0x35EA78u) {
        ctx->pc = 0x35EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA74u;
        // 0x35ea78: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA7Cu;
        goto label_35ea7c;
    }
    ctx->pc = 0x35EA74u;
    SET_GPR_U32(ctx, 31, 0x35EA7Cu);
    ctx->pc = 0x35EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA74u;
    // 0x35ea78: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35EA74u, 0x35EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA7Cu;
label_35ea7c:
    // 0x35ea7c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x35ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_35ea80:
    // 0x35ea80: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
label_35ea84:
    if (ctx->pc == 0x35EA84u) {
        ctx->pc = 0x35EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA80u;
        // 0x35ea84: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA88u;
        goto label_35ea88;
    }
    ctx->pc = 0x35EA80u;
    {
        const bool branch_taken_0x35ea80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ea80) {
            ctx->pc = 0x35EA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EA80u;
            // 0x35ea84: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EC20u;
            goto label_35ec20;
        }
    }
    ctx->pc = 0x35EA88u;
label_35ea88:
    // 0x35ea88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ea8c:
    // 0x35ea8c: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x35ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_35ea90:
    // 0x35ea90: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_35ea94:
    if (ctx->pc == 0x35EA94u) {
        ctx->pc = 0x35EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA90u;
        // 0x35ea94: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EA98u;
        goto label_35ea98;
    }
    ctx->pc = 0x35EA90u;
    {
        const bool branch_taken_0x35ea90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA90u;
        // 0x35ea94: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea90) {
            ctx->pc = 0x35EC1Cu;
            goto label_35ec1c;
        }
    }
    ctx->pc = 0x35EA98u;
label_35ea98:
    // 0x35ea98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35ea98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35ea9c:
    // 0x35ea9c: 0xc0d765e  jal         func_35D978
label_35eaa0:
    if (ctx->pc == 0x35EAA0u) {
        ctx->pc = 0x35EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA9Cu;
        // 0x35eaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EAA4u;
        goto label_35eaa4;
    }
    ctx->pc = 0x35EA9Cu;
    SET_GPR_U32(ctx, 31, 0x35EAA4u);
    ctx->pc = 0x35EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA9Cu;
    // 0x35eaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35EA9Cu, 0x35EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAA4u;
label_35eaa4:
    // 0x35eaa4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35eaa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_35eaa8:
    // 0x35eaa8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35eaa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_35eaac:
    // 0x35eaac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35eaacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35eab0:
    // 0x35eab0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35eab4:
    // 0x35eab4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x35eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35eab8:
    // 0x35eab8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x35eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35eabc:
    // 0x35eabc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x35eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35eac0:
    // 0x35eac0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x35eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35eac4:
    // 0x35eac4: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x35eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35eac8:
    // 0x35eac8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35eac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35eacc:
    // 0x35eacc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35eaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ead0:
    // 0x35ead0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35ead0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35ead4:
    // 0x35ead4: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x35ead4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35ead8:
    // 0x35ead8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35ead8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35eadc:
    // 0x35eadc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x35eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_35eae0:
    // 0x35eae0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x35eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35eae4:
    // 0x35eae4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x35eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35eae8:
    // 0x35eae8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x35eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35eaec:
    // 0x35eaec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35eaecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35eaf0:
    // 0x35eaf0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35eaf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_35eaf4:
    // 0x35eaf4: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x35eaf4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_35eaf8:
    // 0x35eaf8: 0x46140504  c1          0x140504
    ctx->pc = 0x35eaf8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_35eafc:
    // 0x35eafc: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x35eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35eb00:
    // 0x35eb00: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35eb00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35eb04:
    // 0x35eb04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x35eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35eb08:
    // 0x35eb08: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_35eb0c:
    if (ctx->pc == 0x35EB0Cu) {
        ctx->pc = 0x35EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB08u;
        // 0x35eb0c: 0x8ca2005c  lw          $v0, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EB10u;
        goto label_35eb10;
    }
    ctx->pc = 0x35EB08u;
    {
        const bool branch_taken_0x35eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35eb08) {
            ctx->pc = 0x35EB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EB08u;
            // 0x35eb0c: 0x8ca2005c  lw          $v0, 0x5C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EB24u;
            goto label_35eb24;
        }
    }
    ctx->pc = 0x35EB10u;
label_35eb10:
    // 0x35eb10: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x35eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_35eb14:
    // 0x35eb14: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x35eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_35eb18:
    // 0x35eb18: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_35eb1c:
    if (ctx->pc == 0x35EB1Cu) {
        ctx->pc = 0x35EB20u;
        goto label_35eb20;
    }
    ctx->pc = 0x35EB18u;
    {
        const bool branch_taken_0x35eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35eb18) {
            ctx->pc = 0x35EBF4u;
            goto label_35ebf4;
        }
    }
    ctx->pc = 0x35EB20u;
label_35eb20:
    // 0x35eb20: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x35eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_35eb24:
    // 0x35eb24: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x35eb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35eb28:
    // 0x35eb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35eb2c:
    // 0x35eb2c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x35eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_35eb30:
    // 0x35eb30: 0x60f809  jalr        $v1
label_35eb34:
    if (ctx->pc == 0x35EB34u) {
        ctx->pc = 0x35EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB30u;
        // 0x35eb34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EB38u;
        goto label_35eb38;
    }
    ctx->pc = 0x35EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35EB38u);
        ctx->pc = 0x35EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB30u;
        // 0x35eb34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB30u, 0x35EB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35EB38u;
label_35eb38:
    // 0x35eb38: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x35eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_35eb3c:
    // 0x35eb3c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x35eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35eb40:
    // 0x35eb40: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x35eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35eb44:
    // 0x35eb44: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x35eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35eb48:
    // 0x35eb48: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x35eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35eb4c:
    // 0x35eb4c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x35eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_35eb50:
    // 0x35eb50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35eb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35eb54:
    // 0x35eb54: 0x0  nop
    ctx->pc = 0x35eb54u;
    // NOP
label_35eb58:
    // 0x35eb58: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35eb58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_35eb5c:
    // 0x35eb5c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35eb5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_35eb60:
    // 0x35eb60: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x35eb60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_35eb64:
    // 0x35eb64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35eb64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35eb68:
    // 0x35eb68: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x35eb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35eb6c:
    // 0x35eb6c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x35eb6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35eb70:
    // 0x35eb70: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x35eb70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35eb74:
    // 0x35eb74: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x35eb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35eb78:
    // 0x35eb78: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35eb78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35eb7c:
    // 0x35eb7c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35eb7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_35eb80:
    // 0x35eb80: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35eb80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35eb84:
    // 0x35eb84: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x35eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_35eb88:
    // 0x35eb88: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x35eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35eb8c:
    // 0x35eb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35eb90:
    // 0x35eb90: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x35eb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35eb94:
    // 0x35eb94: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x35eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35eb98:
    // 0x35eb98: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x35eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35eb9c:
    // 0x35eb9c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35eb9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35eba0:
    // 0x35eba0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35eba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35eba4:
    // 0x35eba4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35eba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35eba8:
    // 0x35eba8: 0xc0f6a96  jal         func_3DAA58
label_35ebac:
    if (ctx->pc == 0x35EBACu) {
        ctx->pc = 0x35EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBA8u;
        // 0x35ebac: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EBB0u;
        goto label_35ebb0;
    }
    ctx->pc = 0x35EBA8u;
    SET_GPR_U32(ctx, 31, 0x35EBB0u);
    ctx->pc = 0x35EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBA8u;
    // 0x35ebac: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35EBA8u, 0x35EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBB0u;
label_35ebb0:
    // 0x35ebb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_35ebb4:
    // 0x35ebb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35ebb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ebb8:
    // 0x35ebb8: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x35ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_35ebbc:
    // 0x35ebbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ebc0:
    // 0x35ebc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x35ebc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35ebc4:
    // 0x35ebc4: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x35ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_35ebc8:
    // 0x35ebc8: 0xc0791fe  jal         func_1E47F8
label_35ebcc:
    if (ctx->pc == 0x35EBCCu) {
        ctx->pc = 0x35EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBC8u;
        // 0x35ebcc: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EBD0u;
        goto label_35ebd0;
    }
    ctx->pc = 0x35EBC8u;
    SET_GPR_U32(ctx, 31, 0x35EBD0u);
    ctx->pc = 0x35EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBC8u;
    // 0x35ebcc: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x35EBC8u, 0x35EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBD0u;
label_35ebd0:
    // 0x35ebd0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x35ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_35ebd4:
    // 0x35ebd4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x35ebd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_35ebd8:
    // 0x35ebd8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x35ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_35ebdc:
    // 0x35ebdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ebdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ebe0:
    // 0x35ebe0: 0x24e76be0  addiu       $a3, $a3, 0x6BE0
    ctx->pc = 0x35ebe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27616));
label_35ebe4:
    // 0x35ebe4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x35ebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35ebe8:
    // 0x35ebe8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35ebe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35ebec:
    // 0x35ebec: 0xc07f672  jal         func_1FD9C8
label_35ebf0:
    if (ctx->pc == 0x35EBF0u) {
        ctx->pc = 0x35EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBECu;
        // 0x35ebf0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EBF4u;
        goto label_35ebf4;
    }
    ctx->pc = 0x35EBECu;
    SET_GPR_U32(ctx, 31, 0x35EBF4u);
    ctx->pc = 0x35EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBECu;
    // 0x35ebf0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x35EBECu, 0x35EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBF4u;
label_35ebf4:
    // 0x35ebf4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x35ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_35ebf8:
    // 0x35ebf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35ebf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ebfc:
    // 0x35ebfc: 0x0  nop
    ctx->pc = 0x35ebfcu;
    // NOP
label_35ec00:
    // 0x35ec00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x35ec00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35ec04:
    // 0x35ec04: 0x0  nop
    ctx->pc = 0x35ec04u;
    // NOP
label_35ec08:
    // 0x35ec08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_35ec0c:
    if (ctx->pc == 0x35EC0Cu) {
        ctx->pc = 0x35EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC08u;
        // 0x35ec0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC10u;
        goto label_35ec10;
    }
    ctx->pc = 0x35EC08u;
    {
        const bool branch_taken_0x35ec08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC08u;
        // 0x35ec0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec08) {
            ctx->pc = 0x35EC1Cu;
            goto label_35ec1c;
        }
    }
    ctx->pc = 0x35EC10u;
label_35ec10:
    // 0x35ec10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35ec14:
    // 0x35ec14: 0xc0d7746  jal         func_35DD18
label_35ec18:
    if (ctx->pc == 0x35EC18u) {
        ctx->pc = 0x35EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC14u;
        // 0x35ec18: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC1Cu;
        goto label_35ec1c;
    }
    ctx->pc = 0x35EC14u;
    SET_GPR_U32(ctx, 31, 0x35EC1Cu);
    ctx->pc = 0x35EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC14u;
    // 0x35ec18: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DD18u, 0x35EC14u, 0x35EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC1Cu;
label_35ec1c:
    // 0x35ec1c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x35ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_35ec20:
    // 0x35ec20: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x35ec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_35ec24:
    // 0x35ec24: 0x54400123  bnel        $v0, $zero, . + 4 + (0x123 << 2)
label_35ec28:
    if (ctx->pc == 0x35EC28u) {
        ctx->pc = 0x35EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC24u;
        // 0x35ec28: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC2Cu;
        goto label_35ec2c;
    }
    ctx->pc = 0x35EC24u;
    {
        const bool branch_taken_0x35ec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ec24) {
            ctx->pc = 0x35EC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EC24u;
            // 0x35ec28: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F0B4u;
            goto label_35f0b4;
        }
    }
    ctx->pc = 0x35EC2Cu;
label_35ec2c:
    // 0x35ec2c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x35ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35ec30:
    // 0x35ec30: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x35ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_35ec34:
    // 0x35ec34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35ec38:
    if (ctx->pc == 0x35EC38u) {
        ctx->pc = 0x35EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC34u;
        // 0x35ec38: 0x8e920034  lw          $s2, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC3Cu;
        goto label_35ec3c;
    }
    ctx->pc = 0x35EC34u;
    {
        const bool branch_taken_0x35ec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC34u;
        // 0x35ec38: 0x8e920034  lw          $s2, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec34) {
            ctx->pc = 0x35EC44u;
            goto label_35ec44;
        }
    }
    ctx->pc = 0x35EC3Cu;
label_35ec3c:
    // 0x35ec3c: 0x10000480  b           . + 4 + (0x480 << 2)
label_35ec40:
    if (ctx->pc == 0x35EC40u) {
        ctx->pc = 0x35EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC3Cu;
        // 0x35ec40: 0xac720054  sw          $s2, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC44u;
        goto label_35ec44;
    }
    ctx->pc = 0x35EC3Cu;
    {
        const bool branch_taken_0x35ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC3Cu;
        // 0x35ec40: 0xac720054  sw          $s2, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec3c) {
            ctx->pc = 0x35FE40u;
            goto label_35fe40;
        }
    }
    ctx->pc = 0x35EC44u;
label_35ec44:
    // 0x35ec44: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x35ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ec48:
    // 0x35ec48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35ec4c:
    // 0x35ec4c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x35ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_35ec50:
    // 0x35ec50: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35ec50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_35ec54:
    // 0x35ec54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_35ec58:
    if (ctx->pc == 0x35EC58u) {
        ctx->pc = 0x35EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC54u;
        // 0x35ec58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC5Cu;
        goto label_35ec5c;
    }
    ctx->pc = 0x35EC54u;
    {
        const bool branch_taken_0x35ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC54u;
        // 0x35ec58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec54) {
            ctx->pc = 0x35EC80u;
            goto label_35ec80;
        }
    }
    ctx->pc = 0x35EC5Cu;
label_35ec5c:
    // 0x35ec5c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x35ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35ec60:
    // 0x35ec60: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_35ec64:
    if (ctx->pc == 0x35EC64u) {
        ctx->pc = 0x35EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC60u;
        // 0x35ec64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC68u;
        goto label_35ec68;
    }
    ctx->pc = 0x35EC60u;
    {
        const bool branch_taken_0x35ec60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC60u;
        // 0x35ec64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec60) {
            ctx->pc = 0x35EC78u;
            goto label_35ec78;
        }
    }
    ctx->pc = 0x35EC68u;
label_35ec68:
    // 0x35ec68: 0xc084bbc  jal         func_212EF0
label_35ec6c:
    if (ctx->pc == 0x35EC6Cu) {
        ctx->pc = 0x35EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC68u;
        // 0x35ec6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC70u;
        goto label_35ec70;
    }
    ctx->pc = 0x35EC68u;
    SET_GPR_U32(ctx, 31, 0x35EC70u);
    ctx->pc = 0x35EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC68u;
    // 0x35ec6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212EF0u, 0x35EC68u, 0x35EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC70u;
label_35ec70:
    // 0x35ec70: 0x10000004  b           . + 4 + (0x4 << 2)
label_35ec74:
    if (ctx->pc == 0x35EC74u) {
        ctx->pc = 0x35EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC70u;
        // 0x35ec74: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC78u;
        goto label_35ec78;
    }
    ctx->pc = 0x35EC70u;
    {
        const bool branch_taken_0x35ec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC70u;
        // 0x35ec74: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec70) {
            ctx->pc = 0x35EC84u;
            goto label_35ec84;
        }
    }
    ctx->pc = 0x35EC78u;
label_35ec78:
    // 0x35ec78: 0xc084bdc  jal         func_212F70
label_35ec7c:
    if (ctx->pc == 0x35EC7Cu) {
        ctx->pc = 0x35EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC78u;
        // 0x35ec7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC80u;
        goto label_35ec80;
    }
    ctx->pc = 0x35EC78u;
    SET_GPR_U32(ctx, 31, 0x35EC80u);
    ctx->pc = 0x35EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EC78u;
    // 0x35ec7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F70u, 0x35EC78u, 0x35EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EC80u;
label_35ec80:
    // 0x35ec80: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x35ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_35ec84:
    // 0x35ec84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x35ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ec88:
    // 0x35ec88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ec8c:
    // 0x35ec8c: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x35ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
label_35ec90:
    // 0x35ec90: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x35ec90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
label_35ec94:
    // 0x35ec94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_35ec98:
    if (ctx->pc == 0x35EC98u) {
        ctx->pc = 0x35EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC94u;
        // 0x35ec98: 0xc46c0014  lwc1        $f12, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EC9Cu;
        goto label_35ec9c;
    }
    ctx->pc = 0x35EC94u;
    {
        const bool branch_taken_0x35ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC94u;
        // 0x35ec98: 0xc46c0014  lwc1        $f12, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec94) {
            ctx->pc = 0x35ECB8u;
            goto label_35ecb8;
        }
    }
    ctx->pc = 0x35EC9Cu;
label_35ec9c:
    // 0x35ec9c: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x35ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_35eca0:
    // 0x35eca0: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x35eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_35eca4:
    // 0x35eca4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x35eca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_35eca8:
    // 0x35eca8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_35ecac:
    if (ctx->pc == 0x35ECACu) {
        ctx->pc = 0x35ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECA8u;
        // 0x35ecac: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ECB0u;
        goto label_35ecb0;
    }
    ctx->pc = 0x35ECA8u;
    {
        const bool branch_taken_0x35eca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECA8u;
        // 0x35ecac: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eca8) {
            ctx->pc = 0x35ECBCu;
            goto label_35ecbc;
        }
    }
    ctx->pc = 0x35ECB0u;
label_35ecb0:
    // 0x35ecb0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x35ecb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_35ecb4:
    // 0x35ecb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35ecb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ecb8:
    // 0x35ecb8: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x35ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_35ecbc:
    // 0x35ecbc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35ecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_35ecc0:
    // 0x35ecc0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x35ecc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_35ecc4:
    // 0x35ecc4: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_35ecc8:
    if (ctx->pc == 0x35ECC8u) {
        ctx->pc = 0x35ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECC4u;
        // 0x35ecc8: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ECCCu;
        goto label_35eccc;
    }
    ctx->pc = 0x35ECC4u;
    {
        const bool branch_taken_0x35ecc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35ecc4) {
            ctx->pc = 0x35ECC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ECC4u;
            // 0x35ecc8: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35ED0Cu;
            goto label_35ed0c;
        }
    }
    ctx->pc = 0x35ECCCu;
label_35eccc:
    // 0x35eccc: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x35ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_35ecd0:
    // 0x35ecd0: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x35ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_35ecd4:
    // 0x35ecd4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x35ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_35ecd8:
    // 0x35ecd8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_35ecdc:
    if (ctx->pc == 0x35ECDCu) {
        ctx->pc = 0x35ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECD8u;
        // 0x35ecdc: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ECE0u;
        goto label_35ece0;
    }
    ctx->pc = 0x35ECD8u;
    {
        const bool branch_taken_0x35ecd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ecd8) {
            ctx->pc = 0x35ECDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ECD8u;
            // 0x35ecdc: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35ED0Cu;
            goto label_35ed0c;
        }
    }
    ctx->pc = 0x35ECE0u;
label_35ece0:
    // 0x35ece0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x35ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35ece4:
    // 0x35ece4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x35ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35ece8:
    // 0x35ece8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_35ecec:
    if (ctx->pc == 0x35ECECu) {
        ctx->pc = 0x35ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECE8u;
        // 0x35ecec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ECF0u;
        goto label_35ecf0;
    }
    ctx->pc = 0x35ECE8u;
    {
        const bool branch_taken_0x35ece8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECE8u;
        // 0x35ecec: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ece8) {
            ctx->pc = 0x35ED08u;
            goto label_35ed08;
        }
    }
    ctx->pc = 0x35ECF0u;
label_35ecf0:
    // 0x35ecf0: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x35ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_35ecf4:
    // 0x35ecf4: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x35ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_35ecf8:
    // 0x35ecf8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_35ecfc:
    if (ctx->pc == 0x35ECFCu) {
        ctx->pc = 0x35ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ECF8u;
        // 0x35ecfc: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED00u;
        goto label_35ed00;
    }
    ctx->pc = 0x35ECF8u;
    {
        const bool branch_taken_0x35ecf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x35ecf8) {
            ctx->pc = 0x35ECFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ECF8u;
            // 0x35ecfc: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35ED0Cu;
            goto label_35ed0c;
        }
    }
    ctx->pc = 0x35ED00u;
label_35ed00:
    // 0x35ed00: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x35ed00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_35ed04:
    // 0x35ed04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35ed04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ed08:
    // 0x35ed08: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x35ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_35ed0c:
    // 0x35ed0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ed10:
    // 0x35ed10: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x35ed10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ed14:
    // 0x35ed14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ed14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ed18:
    // 0x35ed18: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x35ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_35ed1c:
    // 0x35ed1c: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x35ed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_35ed20:
    // 0x35ed20: 0x40f809  jalr        $v0
label_35ed24:
    if (ctx->pc == 0x35ED24u) {
        ctx->pc = 0x35ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED20u;
        // 0x35ed24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED28u;
        goto label_35ed28;
    }
    ctx->pc = 0x35ED20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35ED28u);
        ctx->pc = 0x35ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED20u;
        // 0x35ed24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ED20u, 0x35ED28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35ED28u;
label_35ed28:
    // 0x35ed28: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x35ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_35ed2c:
    // 0x35ed2c: 0x506000e5  beql        $v1, $zero, . + 4 + (0xE5 << 2)
label_35ed30:
    if (ctx->pc == 0x35ED30u) {
        ctx->pc = 0x35ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED2Cu;
        // 0x35ed30: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED34u;
        goto label_35ed34;
    }
    ctx->pc = 0x35ED2Cu;
    {
        const bool branch_taken_0x35ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ed2c) {
            ctx->pc = 0x35ED30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ED2Cu;
            // 0x35ed30: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35ED34u;
label_35ed34:
    // 0x35ed34: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x35ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_35ed38:
    // 0x35ed38: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x35ed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_35ed3c:
    // 0x35ed3c: 0x544000e1  bnel        $v0, $zero, . + 4 + (0xE1 << 2)
label_35ed40:
    if (ctx->pc == 0x35ED40u) {
        ctx->pc = 0x35ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED3Cu;
        // 0x35ed40: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED44u;
        goto label_35ed44;
    }
    ctx->pc = 0x35ED3Cu;
    {
        const bool branch_taken_0x35ed3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ed3c) {
            ctx->pc = 0x35ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35ED3Cu;
            // 0x35ed40: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35ED44u;
label_35ed44:
    // 0x35ed44: 0xc083bc0  jal         func_20EF00
label_35ed48:
    if (ctx->pc == 0x35ED48u) {
        ctx->pc = 0x35ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED44u;
        // 0x35ed48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED4Cu;
        goto label_35ed4c;
    }
    ctx->pc = 0x35ED44u;
    SET_GPR_U32(ctx, 31, 0x35ED4Cu);
    ctx->pc = 0x35ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED44u;
    // 0x35ed48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x35ED44u, 0x35ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED4Cu;
label_35ed4c:
    // 0x35ed4c: 0xc0f6a96  jal         func_3DAA58
label_35ed50:
    if (ctx->pc == 0x35ED50u) {
        ctx->pc = 0x35ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED4Cu;
        // 0x35ed50: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED54u;
        goto label_35ed54;
    }
    ctx->pc = 0x35ED4Cu;
    SET_GPR_U32(ctx, 31, 0x35ED54u);
    ctx->pc = 0x35ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED4Cu;
    // 0x35ed50: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35ED4Cu, 0x35ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED54u;
label_35ed54:
    // 0x35ed54: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ed58:
    // 0x35ed58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35ed5c:
    // 0x35ed5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35ed60:
    // 0x35ed60: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
label_35ed64:
    if (ctx->pc == 0x35ED64u) {
        ctx->pc = 0x35ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED60u;
        // 0x35ed64: 0x26820010  addiu       $v0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35ED68u;
        goto label_35ed68;
    }
    ctx->pc = 0x35ED60u;
    {
        const bool branch_taken_0x35ed60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED60u;
        // 0x35ed64: 0x26820010  addiu       $v0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed60) {
            ctx->pc = 0x35EDD0u;
            goto label_35edd0;
        }
    }
    ctx->pc = 0x35ED68u;
label_35ed68:
    // 0x35ed68: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x35ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35ed6c:
    // 0x35ed6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x35ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35ed70:
    // 0x35ed70: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x35ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_35ed74:
    // 0x35ed74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35ed78:
    // 0x35ed78: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x35ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_35ed7c:
    // 0x35ed7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35ed7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35ed80:
    // 0x35ed80: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35ed84:
    // 0x35ed84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35ed84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_35ed88:
    // 0x35ed88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35ed88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ed8c:
    // 0x35ed8c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x35ed8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_35ed90:
    // 0x35ed90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x35ed90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35ed94:
    // 0x35ed94: 0xc0b12b0  jal         func_2C4AC0
label_35ed98:
    if (ctx->pc == 0x35ED98u) {
        ctx->pc = 0x35ED9Cu;
        goto label_35ed9c;
    }
    ctx->pc = 0x35ED94u;
    SET_GPR_U32(ctx, 31, 0x35ED9Cu);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x35ED94u, 0x35ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED9Cu;
label_35ed9c:
    // 0x35ed9c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x35ed9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_35eda0:
    // 0x35eda0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x35eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35eda4:
    // 0x35eda4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35eda4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35eda8:
    // 0x35eda8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35eda8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35edac:
    // 0x35edac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35edacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35edb0:
    // 0x35edb0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35edb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35edb4:
    // 0x35edb4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35edb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35edb8:
    // 0x35edb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x35edb8u;
    // VWAITQ (Q already resolved in this runtime)
label_35edbc:
    // 0x35edbc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35edbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35edc0:
    // 0x35edc0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35edc4:
    // 0x35edc4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x35edc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35edc8:
    // 0x35edc8: 0x10000010  b           . + 4 + (0x10 << 2)
label_35edcc:
    if (ctx->pc == 0x35EDCCu) {
        ctx->pc = 0x35EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDC8u;
        // 0x35edcc: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EDD0u;
        goto label_35edd0;
    }
    ctx->pc = 0x35EDC8u;
    {
        const bool branch_taken_0x35edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDC8u;
        // 0x35edcc: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35edc8) {
            ctx->pc = 0x35EE0Cu;
            goto label_35ee0c;
        }
    }
    ctx->pc = 0x35EDD0u;
label_35edd0:
    // 0x35edd0: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x35edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35edd4:
    // 0x35edd4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x35edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35edd8:
    // 0x35edd8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35eddc:
    // 0x35eddc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ede0:
    // 0x35ede0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35ede0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_35ede4:
    // 0x35ede4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x35ede4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_35ede8:
    // 0x35ede8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x35ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_35edec:
    // 0x35edec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35edecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_35edf0:
    // 0x35edf0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x35edf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35edf4:
    // 0x35edf4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x35edf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35edf8:
    // 0x35edf8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35edf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35edfc:
    // 0x35edfc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35edfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35ee00:
    // 0x35ee00: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35ee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35ee04:
    // 0x35ee04: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x35ee04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35ee08:
    // 0x35ee08: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x35ee08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ee0c:
    // 0x35ee0c: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x35ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_35ee10:
    // 0x35ee10: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x35ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_35ee14:
    // 0x35ee14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35ee18:
    // 0x35ee18: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x35ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_35ee1c:
    // 0x35ee1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35ee1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_35ee20:
    // 0x35ee20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_35ee24:
    if (ctx->pc == 0x35EE24u) {
        ctx->pc = 0x35EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE20u;
        // 0x35ee24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE28u;
        goto label_35ee28;
    }
    ctx->pc = 0x35EE20u;
    {
        const bool branch_taken_0x35ee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE20u;
        // 0x35ee24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee20) {
            ctx->pc = 0x35EE40u;
            goto label_35ee40;
        }
    }
    ctx->pc = 0x35EE28u;
label_35ee28:
    // 0x35ee28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35ee2c:
    // 0x35ee2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_35ee30:
    if (ctx->pc == 0x35EE30u) {
        ctx->pc = 0x35EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE2Cu;
        // 0x35ee30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE34u;
        goto label_35ee34;
    }
    ctx->pc = 0x35EE2Cu;
    {
        const bool branch_taken_0x35ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE2Cu;
        // 0x35ee30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee2c) {
            ctx->pc = 0x35EE3Cu;
            goto label_35ee3c;
        }
    }
    ctx->pc = 0x35EE34u;
label_35ee34:
    // 0x35ee34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_35ee38:
    if (ctx->pc == 0x35EE38u) {
        ctx->pc = 0x35EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE34u;
        // 0x35ee38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE3Cu;
        goto label_35ee3c;
    }
    ctx->pc = 0x35EE34u;
    {
        const bool branch_taken_0x35ee34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE34u;
        // 0x35ee38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee34) {
            ctx->pc = 0x35EE40u;
            goto label_35ee40;
        }
    }
    ctx->pc = 0x35EE3Cu;
label_35ee3c:
    // 0x35ee3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ee40:
    // 0x35ee40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35ee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35ee44:
    // 0x35ee44: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
label_35ee48:
    if (ctx->pc == 0x35EE48u) {
        ctx->pc = 0x35EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE44u;
        // 0x35ee48: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE4Cu;
        goto label_35ee4c;
    }
    ctx->pc = 0x35EE44u;
    {
        const bool branch_taken_0x35ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ee44) {
            ctx->pc = 0x35EE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EE44u;
            // 0x35ee48: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F018u;
            goto label_35f018;
        }
    }
    ctx->pc = 0x35EE4Cu;
label_35ee4c:
    // 0x35ee4c: 0xc0d8de2  jal         func_363788
label_35ee50:
    if (ctx->pc == 0x35EE50u) {
        ctx->pc = 0x35EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE4Cu;
        // 0x35ee50: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE54u;
        goto label_35ee54;
    }
    ctx->pc = 0x35EE4Cu;
    SET_GPR_U32(ctx, 31, 0x35EE54u);
    ctx->pc = 0x35EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE4Cu;
    // 0x35ee50: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35EE4Cu, 0x35EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE54u;
label_35ee54:
    // 0x35ee54: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x35ee54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_35ee58:
    // 0x35ee58: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_35ee5c:
    if (ctx->pc == 0x35EE5Cu) {
        ctx->pc = 0x35EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE58u;
        // 0x35ee5c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE60u;
        goto label_35ee60;
    }
    ctx->pc = 0x35EE58u;
    {
        const bool branch_taken_0x35ee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ee58) {
            ctx->pc = 0x35EE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EE58u;
            // 0x35ee5c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EF28u;
            goto label_35ef28;
        }
    }
    ctx->pc = 0x35EE60u;
label_35ee60:
    // 0x35ee60: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x35ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_35ee64:
    // 0x35ee64: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x35ee64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35ee68:
    // 0x35ee68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ee6c:
    // 0x35ee6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35ee6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35ee70:
    // 0x35ee70: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x35ee70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35ee74:
    // 0x35ee74: 0xc0d765e  jal         func_35D978
label_35ee78:
    if (ctx->pc == 0x35EE78u) {
        ctx->pc = 0x35EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE74u;
        // 0x35ee78: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EE7Cu;
        goto label_35ee7c;
    }
    ctx->pc = 0x35EE74u;
    SET_GPR_U32(ctx, 31, 0x35EE7Cu);
    ctx->pc = 0x35EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE74u;
    // 0x35ee78: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35EE74u, 0x35EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE7Cu;
label_35ee7c:
    // 0x35ee7c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35ee7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35ee80:
    // 0x35ee80: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35ee80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_35ee84:
    // 0x35ee84: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35ee84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35ee88:
    // 0x35ee88: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35ee8c:
    // 0x35ee8c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x35ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ee90:
    // 0x35ee90: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x35ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35ee94:
    // 0x35ee94: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x35ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35ee98:
    // 0x35ee98: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x35ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_35ee9c:
    // 0x35ee9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35ee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35eea0:
    // 0x35eea0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35eea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35eea4:
    // 0x35eea4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x35eea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35eea8:
    // 0x35eea8: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x35eea8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35eeac:
    // 0x35eeac: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x35eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35eeb0:
    // 0x35eeb0: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x35eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35eeb4:
    // 0x35eeb4: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x35eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35eeb8:
    // 0x35eeb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35eeb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35eebc:
    // 0x35eebc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35eebcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_35eec0:
    // 0x35eec0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x35eec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_35eec4:
    // 0x35eec4: 0x46010044  c1          0x10044
    ctx->pc = 0x35eec4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_35eec8:
    // 0x35eec8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35eecc:
    // 0x35eecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35eeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35eed0:
    // 0x35eed0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35eed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35eed4:
    // 0x35eed4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x35eed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35eed8:
    // 0x35eed8: 0x0  nop
    ctx->pc = 0x35eed8u;
    // NOP
label_35eedc:
    // 0x35eedc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x35eedcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_35eee0:
    // 0x35eee0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x35eee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35eee4:
    // 0x35eee4: 0x0  nop
    ctx->pc = 0x35eee4u;
    // NOP
label_35eee8:
    // 0x35eee8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_35eeec:
    if (ctx->pc == 0x35EEECu) {
        ctx->pc = 0x35EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EEE8u;
        // 0x35eeec: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EEF0u;
        goto label_35eef0;
    }
    ctx->pc = 0x35EEE8u;
    {
        const bool branch_taken_0x35eee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35eee8) {
            ctx->pc = 0x35EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EEE8u;
            // 0x35eeec: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EEF0u;
            goto label_35eef0;
        }
    }
    ctx->pc = 0x35EEF0u;
label_35eef0:
    // 0x35eef0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35eef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_35eef4:
    // 0x35eef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35eef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35eef8:
    // 0x35eef8: 0x0  nop
    ctx->pc = 0x35eef8u;
    // NOP
label_35eefc:
    // 0x35eefc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35eefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35ef00:
    // 0x35ef00: 0x0  nop
    ctx->pc = 0x35ef00u;
    // NOP
label_35ef04:
    // 0x35ef04: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_35ef08:
    if (ctx->pc == 0x35EF08u) {
        ctx->pc = 0x35EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF04u;
        // 0x35ef08: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EF0Cu;
        goto label_35ef0c;
    }
    ctx->pc = 0x35EF04u;
    {
        const bool branch_taken_0x35ef04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ef04) {
            ctx->pc = 0x35EF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EF04u;
            // 0x35ef08: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EF14u;
            goto label_35ef14;
        }
    }
    ctx->pc = 0x35EF0Cu;
label_35ef0c:
    // 0x35ef0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_35ef10:
    if (ctx->pc == 0x35EF10u) {
        ctx->pc = 0x35EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF0Cu;
        // 0x35ef10: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EF14u;
        goto label_35ef14;
    }
    ctx->pc = 0x35EF0Cu;
    {
        const bool branch_taken_0x35ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF0Cu;
        // 0x35ef10: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef0c) {
            ctx->pc = 0x35EF18u;
            goto label_35ef18;
        }
    }
    ctx->pc = 0x35EF14u;
label_35ef14:
    // 0x35ef14: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x35ef14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35ef18:
    // 0x35ef18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ef1c:
    // 0x35ef1c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x35ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ef20:
    // 0x35ef20: 0x10000002  b           . + 4 + (0x2 << 2)
label_35ef24:
    if (ctx->pc == 0x35EF24u) {
        ctx->pc = 0x35EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF20u;
        // 0x35ef24: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EF28u;
        goto label_35ef28;
    }
    ctx->pc = 0x35EF20u;
    {
        const bool branch_taken_0x35ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF20u;
        // 0x35ef24: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef20) {
            ctx->pc = 0x35EF2Cu;
            goto label_35ef2c;
        }
    }
    ctx->pc = 0x35EF28u;
label_35ef28:
    // 0x35ef28: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x35ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ef2c:
    // 0x35ef2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35ef2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35ef30:
    // 0x35ef30: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x35ef30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_35ef34:
    // 0x35ef34: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x35ef34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_35ef38:
    // 0x35ef38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35ef38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35ef3c:
    // 0x35ef3c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35ef40:
    // 0x35ef40: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x35ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_35ef44:
    // 0x35ef44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35ef48:
    // 0x35ef48: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_35ef4c:
    // 0x35ef4c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35ef4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_35ef50:
    // 0x35ef50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35ef50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35ef54:
    // 0x35ef54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35ef54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35ef58:
    // 0x35ef58: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35ef5c:
    // 0x35ef5c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x35ef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35ef60:
    // 0x35ef60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ef64:
    // 0x35ef64: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x35ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35ef68:
    // 0x35ef68: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35ef6c:
    // 0x35ef6c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x35ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35ef70:
    // 0x35ef70: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x35ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ef74:
    // 0x35ef74: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35ef74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35ef78:
    // 0x35ef78: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x35ef78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ef7c:
    // 0x35ef7c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35ef7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35ef80:
    // 0x35ef80: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x35ef80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35ef84:
    // 0x35ef84: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x35ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_35ef88:
    // 0x35ef88: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x35ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35ef8c:
    // 0x35ef8c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x35ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_35ef90:
    // 0x35ef90: 0x40f809  jalr        $v0
label_35ef94:
    if (ctx->pc == 0x35EF94u) {
        ctx->pc = 0x35EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF90u;
        // 0x35ef94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EF98u;
        goto label_35ef98;
    }
    ctx->pc = 0x35EF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35EF98u);
        ctx->pc = 0x35EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF90u;
        // 0x35ef94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF90u, 0x35EF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35EF98u;
label_35ef98:
    // 0x35ef98: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35ef9c:
    // 0x35ef9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x35ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_35efa0:
    // 0x35efa0: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
label_35efa4:
    if (ctx->pc == 0x35EFA4u) {
        ctx->pc = 0x35EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFA0u;
        // 0x35efa4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EFA8u;
        goto label_35efa8;
    }
    ctx->pc = 0x35EFA0u;
    {
        const bool branch_taken_0x35efa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFA0u;
        // 0x35efa4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efa0) {
            ctx->pc = 0x35F0C0u;
            goto label_35f0c0;
        }
    }
    ctx->pc = 0x35EFA8u;
label_35efa8:
    // 0x35efa8: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x35efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_35efac:
    // 0x35efac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_35efb0:
    // 0x35efb0: 0x54620044  bnel        $v1, $v0, . + 4 + (0x44 << 2)
label_35efb4:
    if (ctx->pc == 0x35EFB4u) {
        ctx->pc = 0x35EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFB0u;
        // 0x35efb4: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EFB8u;
        goto label_35efb8;
    }
    ctx->pc = 0x35EFB0u;
    {
        const bool branch_taken_0x35efb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35efb0) {
            ctx->pc = 0x35EFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EFB0u;
            // 0x35efb4: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35EFB8u;
label_35efb8:
    // 0x35efb8: 0xc097f26  jal         func_25FC98
label_35efbc:
    if (ctx->pc == 0x35EFBCu) {
        ctx->pc = 0x35EFC0u;
        goto label_35efc0;
    }
    ctx->pc = 0x35EFB8u;
    SET_GPR_U32(ctx, 31, 0x35EFC0u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35EFB8u, 0x35EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFC0u;
label_35efc0:
    // 0x35efc0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x35efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_35efc4:
    // 0x35efc4: 0x5443003f  bnel        $v0, $v1, . + 4 + (0x3F << 2)
label_35efc8:
    if (ctx->pc == 0x35EFC8u) {
        ctx->pc = 0x35EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFC4u;
        // 0x35efc8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EFCCu;
        goto label_35efcc;
    }
    ctx->pc = 0x35EFC4u;
    {
        const bool branch_taken_0x35efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35efc4) {
            ctx->pc = 0x35EFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EFC4u;
            // 0x35efc8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35EFCCu;
label_35efcc:
    // 0x35efcc: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x35efccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_35efd0:
    // 0x35efd0: 0xc08665e  jal         func_219978
label_35efd4:
    if (ctx->pc == 0x35EFD4u) {
        ctx->pc = 0x35EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFD0u;
        // 0x35efd4: 0x24846bf0  addiu       $a0, $a0, 0x6BF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EFD8u;
        goto label_35efd8;
    }
    ctx->pc = 0x35EFD0u;
    SET_GPR_U32(ctx, 31, 0x35EFD8u);
    ctx->pc = 0x35EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFD0u;
    // 0x35efd4: 0x24846bf0  addiu       $a0, $a0, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219978u, 0x35EFD0u, 0x35EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFD8u;
label_35efd8:
    // 0x35efd8: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x35efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_35efdc:
    // 0x35efdc: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x35efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_35efe0:
    // 0x35efe0: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_35efe4:
    // 0x35efe4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35efe8:
    if (ctx->pc == 0x35EFE8u) {
        ctx->pc = 0x35EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFE4u;
        // 0x35efe8: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EFECu;
        goto label_35efec;
    }
    ctx->pc = 0x35EFE4u;
    {
        const bool branch_taken_0x35efe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35efe4) {
            ctx->pc = 0x35EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EFE4u;
            // 0x35efe8: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F000u;
            goto label_35f000;
        }
    }
    ctx->pc = 0x35EFECu;
label_35efec:
    // 0x35efec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x35efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35eff0:
    // 0x35eff0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x35eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_35eff4:
    // 0x35eff4: 0x40f809  jalr        $v0
label_35eff8:
    if (ctx->pc == 0x35EFF8u) {
        ctx->pc = 0x35EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFF4u;
        // 0x35eff8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EFFCu;
        goto label_35effc;
    }
    ctx->pc = 0x35EFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35EFFCu);
        ctx->pc = 0x35EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFF4u;
        // 0x35eff8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EFF4u, 0x35EFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35EFFCu;
label_35effc:
    // 0x35effc: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x35effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_35f000:
    // 0x35f000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f004:
    // 0x35f004: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x35f004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_35f008:
    // 0x35f008: 0xc0831c6  jal         func_20C718
label_35f00c:
    if (ctx->pc == 0x35F00Cu) {
        ctx->pc = 0x35F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F008u;
        // 0x35f00c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F010u;
        goto label_35f010;
    }
    ctx->pc = 0x35F008u;
    SET_GPR_U32(ctx, 31, 0x35F010u);
    ctx->pc = 0x35F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F008u;
    // 0x35f00c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C718u, 0x35F008u, 0x35F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F010u;
label_35f010:
    // 0x35f010: 0x1000002b  b           . + 4 + (0x2B << 2)
label_35f014:
    if (ctx->pc == 0x35F014u) {
        ctx->pc = 0x35F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F010u;
        // 0x35f014: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F018u;
        goto label_35f018;
    }
    ctx->pc = 0x35F010u;
    {
        const bool branch_taken_0x35f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F010u;
        // 0x35f014: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f010) {
            ctx->pc = 0x35F0C0u;
            goto label_35f0c0;
        }
    }
    ctx->pc = 0x35F018u;
label_35f018:
    // 0x35f018: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x35f018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_35f01c:
    // 0x35f01c: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x35f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_35f020:
    // 0x35f020: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_35f024:
    if (ctx->pc == 0x35F024u) {
        ctx->pc = 0x35F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F020u;
        // 0x35f024: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F028u;
        goto label_35f028;
    }
    ctx->pc = 0x35F020u;
    {
        const bool branch_taken_0x35f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F020u;
        // 0x35f024: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f020) {
            ctx->pc = 0x35F088u;
            goto label_35f088;
        }
    }
    ctx->pc = 0x35F028u;
label_35f028:
    // 0x35f028: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35f02c:
    // 0x35f02c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35f030:
    // 0x35f030: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
label_35f034:
    if (ctx->pc == 0x35F034u) {
        ctx->pc = 0x35F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F030u;
        // 0x35f034: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F038u;
        goto label_35f038;
    }
    ctx->pc = 0x35F030u;
    {
        const bool branch_taken_0x35f030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F030u;
        // 0x35f034: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f030) {
            ctx->pc = 0x35F08Cu;
            goto label_35f08c;
        }
    }
    ctx->pc = 0x35F038u;
label_35f038:
    // 0x35f038: 0xc097f26  jal         func_25FC98
label_35f03c:
    if (ctx->pc == 0x35F03Cu) {
        ctx->pc = 0x35F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F038u;
        // 0x35f03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F040u;
        goto label_35f040;
    }
    ctx->pc = 0x35F038u;
    SET_GPR_U32(ctx, 31, 0x35F040u);
    ctx->pc = 0x35F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F038u;
    // 0x35f03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35F038u, 0x35F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F040u;
label_35f040:
    // 0x35f040: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x35f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_35f044:
    // 0x35f044: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_35f048:
    if (ctx->pc == 0x35F048u) {
        ctx->pc = 0x35F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F044u;
        // 0x35f048: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F04Cu;
        goto label_35f04c;
    }
    ctx->pc = 0x35F044u;
    {
        const bool branch_taken_0x35f044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35f044) {
            ctx->pc = 0x35F048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F044u;
            // 0x35f048: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F088u;
            goto label_35f088;
        }
    }
    ctx->pc = 0x35F04Cu;
label_35f04c:
    // 0x35f04c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x35f04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_35f050:
    // 0x35f050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35f050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35f054:
    // 0x35f054: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35f054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35f058:
    // 0x35f058: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35f058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35f05c:
    // 0x35f05c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35f05cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_35f060:
    // 0x35f060: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x35f060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_35f064:
    // 0x35f064: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35f064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f068:
    // 0x35f068: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f06c:
    // 0x35f06c: 0xc0d8e26  jal         func_363898
label_35f070:
    if (ctx->pc == 0x35F070u) {
        ctx->pc = 0x35F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F06Cu;
        // 0x35f070: 0x8e440274  lw          $a0, 0x274($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F074u;
        goto label_35f074;
    }
    ctx->pc = 0x35F06Cu;
    SET_GPR_U32(ctx, 31, 0x35F074u);
    ctx->pc = 0x35F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F06Cu;
    // 0x35f070: 0x8e440274  lw          $a0, 0x274($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x35F06Cu, 0x35F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F074u;
label_35f074:
    // 0x35f074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f078:
    // 0x35f078: 0xc0989a0  jal         func_262680
label_35f07c:
    if (ctx->pc == 0x35F07Cu) {
        ctx->pc = 0x35F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F078u;
        // 0x35f07c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F080u;
        goto label_35f080;
    }
    ctx->pc = 0x35F078u;
    SET_GPR_U32(ctx, 31, 0x35F080u);
    ctx->pc = 0x35F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F078u;
    // 0x35f07c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262680u, 0x35F078u, 0x35F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F080u;
label_35f080:
    // 0x35f080: 0x10000010  b           . + 4 + (0x10 << 2)
label_35f084:
    if (ctx->pc == 0x35F084u) {
        ctx->pc = 0x35F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F080u;
        // 0x35f084: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F088u;
        goto label_35f088;
    }
    ctx->pc = 0x35F080u;
    {
        const bool branch_taken_0x35f080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F080u;
        // 0x35f084: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f080) {
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35F088u;
label_35f088:
    // 0x35f088: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35f08c:
    // 0x35f08c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x35f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f090:
    // 0x35f090: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35f090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35f094:
    // 0x35f094: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35f094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_35f098:
    // 0x35f098: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x35f098u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_35f09c:
    // 0x35f09c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35f09cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f0a0:
    // 0x35f0a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f0a4:
    // 0x35f0a4: 0xc0b71e0  jal         func_2DC780
label_35f0a8:
    if (ctx->pc == 0x35F0A8u) {
        ctx->pc = 0x35F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0A4u;
        // 0x35f0a8: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0ACu;
        goto label_35f0ac;
    }
    ctx->pc = 0x35F0A4u;
    SET_GPR_U32(ctx, 31, 0x35F0ACu);
    ctx->pc = 0x35F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0A4u;
    // 0x35f0a8: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x35F0A4u, 0x35F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0ACu;
label_35f0ac:
    // 0x35f0ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_35f0b0:
    if (ctx->pc == 0x35F0B0u) {
        ctx->pc = 0x35F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0ACu;
        // 0x35f0b0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0B4u;
        goto label_35f0b4;
    }
    ctx->pc = 0x35F0ACu;
    {
        const bool branch_taken_0x35f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0ACu;
        // 0x35f0b0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0ac) {
            ctx->pc = 0x35F0C4u;
            goto label_35f0c4;
        }
    }
    ctx->pc = 0x35F0B4u;
label_35f0b4:
    // 0x35f0b4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x35f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_35f0b8:
    // 0x35f0b8: 0x14600362  bnez        $v1, . + 4 + (0x362 << 2)
label_35f0bc:
    if (ctx->pc == 0x35F0BCu) {
        ctx->pc = 0x35F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0B8u;
        // 0x35f0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0C0u;
        goto label_35f0c0;
    }
    ctx->pc = 0x35F0B8u;
    {
        const bool branch_taken_0x35f0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0B8u;
        // 0x35f0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0b8) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35F0C0u;
label_35f0c0:
    // 0x35f0c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x35f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35f0c4:
    // 0x35f0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f0c8:
    // 0x35f0c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35f0cc:
    // 0x35f0cc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_35f0d0:
    if (ctx->pc == 0x35F0D0u) {
        ctx->pc = 0x35F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0CCu;
        // 0x35f0d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0D4u;
        goto label_35f0d4;
    }
    ctx->pc = 0x35F0CCu;
    {
        const bool branch_taken_0x35f0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0CCu;
        // 0x35f0d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0cc) {
            ctx->pc = 0x35F0E8u;
            goto label_35f0e8;
        }
    }
    ctx->pc = 0x35F0D4u;
label_35f0d4:
    // 0x35f0d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35f0d8:
    // 0x35f0d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_35f0dc:
    if (ctx->pc == 0x35F0DCu) {
        ctx->pc = 0x35F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0D8u;
        // 0x35f0dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0E0u;
        goto label_35f0e0;
    }
    ctx->pc = 0x35F0D8u;
    {
        const bool branch_taken_0x35f0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0D8u;
        // 0x35f0dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f0d8) {
            ctx->pc = 0x35F0E8u;
            goto label_35f0e8;
        }
    }
    ctx->pc = 0x35F0E0u;
label_35f0e0:
    // 0x35f0e0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_35f0e4:
    if (ctx->pc == 0x35F0E4u) {
        ctx->pc = 0x35F0E8u;
        goto label_35f0e8;
    }
    ctx->pc = 0x35F0E0u;
    {
        const bool branch_taken_0x35f0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35f0e0) {
            ctx->pc = 0x35F0ECu;
            goto label_35f0ec;
        }
    }
    ctx->pc = 0x35F0E8u;
label_35f0e8:
    // 0x35f0e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f0ec:
    // 0x35f0ec: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_35f0f0:
    if (ctx->pc == 0x35F0F0u) {
        ctx->pc = 0x35F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0ECu;
        // 0x35f0f0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0F4u;
        goto label_35f0f4;
    }
    ctx->pc = 0x35F0ECu;
    {
        const bool branch_taken_0x35f0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f0ec) {
            ctx->pc = 0x35F0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F0ECu;
            // 0x35f0f0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F110u;
            goto label_35f110;
        }
    }
    ctx->pc = 0x35F0F4u;
label_35f0f4:
    // 0x35f0f4: 0xc07a8e4  jal         func_1EA390
label_35f0f8:
    if (ctx->pc == 0x35F0F8u) {
        ctx->pc = 0x35F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F0F4u;
        // 0x35f0f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F0FCu;
        goto label_35f0fc;
    }
    ctx->pc = 0x35F0F4u;
    SET_GPR_U32(ctx, 31, 0x35F0FCu);
    ctx->pc = 0x35F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0F4u;
    // 0x35f0f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x35F0F4u, 0x35F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0FCu;
label_35f0fc:
    // 0x35f0fc: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x35f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35f100:
    // 0x35f100: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x35f100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_35f104:
    // 0x35f104: 0xc0d89ba  jal         func_3626E8
label_35f108:
    if (ctx->pc == 0x35F108u) {
        ctx->pc = 0x35F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F104u;
        // 0x35f108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F10Cu;
        goto label_35f10c;
    }
    ctx->pc = 0x35F104u;
    SET_GPR_U32(ctx, 31, 0x35F10Cu);
    ctx->pc = 0x35F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F104u;
    // 0x35f108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626E8u, 0x35F104u, 0x35F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F10Cu;
label_35f10c:
    // 0x35f10c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x35f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35f110:
    // 0x35f110: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_35f114:
    // 0x35f114: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
label_35f118:
    if (ctx->pc == 0x35F118u) {
        ctx->pc = 0x35F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F114u;
        // 0x35f118: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F11Cu;
        goto label_35f11c;
    }
    ctx->pc = 0x35F114u;
    {
        const bool branch_taken_0x35f114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F114u;
        // 0x35f118: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f114) {
            ctx->pc = 0x35F524u;
            goto label_35f524;
        }
    }
    ctx->pc = 0x35F11Cu;
label_35f11c:
    // 0x35f11c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x35f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_35f120:
    // 0x35f120: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_35f124:
    if (ctx->pc == 0x35F124u) {
        ctx->pc = 0x35F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F120u;
        // 0x35f124: 0x8c950008  lw          $s5, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F128u;
        goto label_35f128;
    }
    ctx->pc = 0x35F120u;
    {
        const bool branch_taken_0x35f120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F120u;
        // 0x35f124: 0x8c950008  lw          $s5, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f120) {
            ctx->pc = 0x35F174u;
            goto label_35f174;
        }
    }
    ctx->pc = 0x35F128u;
label_35f128:
    // 0x35f128: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x35f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_35f12c:
    // 0x35f12c: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x35f12cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_35f130:
    // 0x35f130: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x35f130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_35f134:
    // 0x35f134: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x35f134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_35f138:
    // 0x35f138: 0x90520054  lbu         $s2, 0x54($v0)
    ctx->pc = 0x35f138u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
label_35f13c:
    // 0x35f13c: 0xc07a8e4  jal         func_1EA390
label_35f140:
    if (ctx->pc == 0x35F140u) {
        ctx->pc = 0x35F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F13Cu;
        // 0x35f140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F144u;
        goto label_35f144;
    }
    ctx->pc = 0x35F13Cu;
    SET_GPR_U32(ctx, 31, 0x35F144u);
    ctx->pc = 0x35F140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F13Cu;
    // 0x35f140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x35F13Cu, 0x35F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F144u;
label_35f144:
    // 0x35f144: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x35f144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_35f148:
    // 0x35f148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35f148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35f14c:
    // 0x35f14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f150:
    // 0x35f150: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x35f150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35f154:
    // 0x35f154: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35f154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f158:
    // 0x35f158: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x35f158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f15c:
    // 0x35f15c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x35f15cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35f160:
    // 0x35f160: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35f160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35f164:
    // 0x35f164: 0xc07f550  jal         func_1FD540
label_35f168:
    if (ctx->pc == 0x35F168u) {
        ctx->pc = 0x35F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F164u;
        // 0x35f168: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F16Cu;
        goto label_35f16c;
    }
    ctx->pc = 0x35F164u;
    SET_GPR_U32(ctx, 31, 0x35F16Cu);
    ctx->pc = 0x35F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F164u;
    // 0x35f168: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x35F164u, 0x35F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F16Cu;
label_35f16c:
    // 0x35f16c: 0x10000012  b           . + 4 + (0x12 << 2)
label_35f170:
    if (ctx->pc == 0x35F170u) {
        ctx->pc = 0x35F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F16Cu;
        // 0x35f170: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F174u;
        goto label_35f174;
    }
    ctx->pc = 0x35F16Cu;
    {
        const bool branch_taken_0x35f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F16Cu;
        // 0x35f170: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f16c) {
            ctx->pc = 0x35F1B8u;
            goto label_35f1b8;
        }
    }
    ctx->pc = 0x35F174u;
label_35f174:
    // 0x35f174: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x35f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_35f178:
    // 0x35f178: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x35f178u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_35f17c:
    // 0x35f17c: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x35f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_35f180:
    // 0x35f180: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35f184:
    // 0x35f184: 0xc07a8e4  jal         func_1EA390
label_35f188:
    if (ctx->pc == 0x35F188u) {
        ctx->pc = 0x35F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F184u;
        // 0x35f188: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F18Cu;
        goto label_35f18c;
    }
    ctx->pc = 0x35F184u;
    SET_GPR_U32(ctx, 31, 0x35F18Cu);
    ctx->pc = 0x35F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F184u;
    // 0x35f188: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x35F184u, 0x35F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F18Cu;
label_35f18c:
    // 0x35f18c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x35f18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_35f190:
    // 0x35f190: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35f190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35f194:
    // 0x35f194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f198:
    // 0x35f198: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x35f198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35f19c:
    // 0x35f19c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x35f19cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f1a0:
    // 0x35f1a0: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x35f1a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35f1a4:
    // 0x35f1a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35f1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35f1a8:
    // 0x35f1a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35f1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35f1ac:
    // 0x35f1ac: 0xc07f550  jal         func_1FD540
label_35f1b0:
    if (ctx->pc == 0x35F1B0u) {
        ctx->pc = 0x35F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1ACu;
        // 0x35f1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F1B4u;
        goto label_35f1b4;
    }
    ctx->pc = 0x35F1ACu;
    SET_GPR_U32(ctx, 31, 0x35F1B4u);
    ctx->pc = 0x35F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F1ACu;
    // 0x35f1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x35F1ACu, 0x35F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1B4u;
label_35f1b4:
    // 0x35f1b4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x35f1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35f1b8:
    // 0x35f1b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35f1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35f1bc:
    // 0x35f1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f1c0:
    // 0x35f1c0: 0xc0d765e  jal         func_35D978
label_35f1c4:
    if (ctx->pc == 0x35F1C4u) {
        ctx->pc = 0x35F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1C0u;
        // 0x35f1c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F1C8u;
        goto label_35f1c8;
    }
    ctx->pc = 0x35F1C0u;
    SET_GPR_U32(ctx, 31, 0x35F1C8u);
    ctx->pc = 0x35F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F1C0u;
    // 0x35f1c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35F1C0u, 0x35F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1C8u;
label_35f1c8:
    // 0x35f1c8: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x35f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f1cc:
    // 0x35f1cc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x35f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35f1d0:
    // 0x35f1d0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x35f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f1d4:
    // 0x35f1d4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x35f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f1d8:
    // 0x35f1d8: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x35f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35f1dc:
    // 0x35f1dc: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35f1dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35f1e0:
    // 0x35f1e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35f1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35f1e4:
    // 0x35f1e4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35f1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35f1e8:
    // 0x35f1e8: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x35f1e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_35f1ec:
    // 0x35f1ec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35f1ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35f1f0:
    // 0x35f1f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35f1f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35f1f4:
    // 0x35f1f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35f1f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f1f8:
    // 0x35f1f8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f1fc:
    // 0x35f1fc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x35f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f200:
    // 0x35f200: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x35f200u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f204:
    // 0x35f204: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x35f204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35f208:
    // 0x35f208: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35f208u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f20c:
    // 0x35f20c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x35f20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f210:
    // 0x35f210: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x35f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35f214:
    // 0x35f214: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x35f214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f218:
    // 0x35f218: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x35f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f21c:
    // 0x35f21c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35f220:
    // 0x35f220: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x35f220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35f224:
    // 0x35f224: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x35f224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35f228:
    // 0x35f228: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_35f22c:
    if (ctx->pc == 0x35F22Cu) {
        ctx->pc = 0x35F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F228u;
        // 0x35f22c: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F230u;
        goto label_35f230;
    }
    ctx->pc = 0x35F228u;
    {
        const bool branch_taken_0x35f228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F228u;
        // 0x35f22c: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f228) {
            ctx->pc = 0x35F250u;
            goto label_35f250;
        }
    }
    ctx->pc = 0x35F230u;
label_35f230:
    // 0x35f230: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x35f230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f234:
    // 0x35f234: 0x0  nop
    ctx->pc = 0x35f234u;
    // NOP
label_35f238:
    // 0x35f238: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_35f23c:
    if (ctx->pc == 0x35F23Cu) {
        ctx->pc = 0x35F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F238u;
        // 0x35f23c: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F240u;
        goto label_35f240;
    }
    ctx->pc = 0x35F238u;
    {
        const bool branch_taken_0x35f238 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F238u;
        // 0x35f23c: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f238) {
            ctx->pc = 0x35F254u;
            goto label_35f254;
        }
    }
    ctx->pc = 0x35F240u;
label_35f240:
    // 0x35f240: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x35f240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f244:
    // 0x35f244: 0x0  nop
    ctx->pc = 0x35f244u;
    // NOP
label_35f248:
    // 0x35f248: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_35f24c:
    if (ctx->pc == 0x35F24Cu) {
        ctx->pc = 0x35F250u;
        goto label_35f250;
    }
    ctx->pc = 0x35F248u;
    {
        const bool branch_taken_0x35f248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f248) {
            ctx->pc = 0x35F278u;
            goto label_35f278;
        }
    }
    ctx->pc = 0x35F250u;
label_35f250:
    // 0x35f250: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35f254:
    // 0x35f254: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35f254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35f258:
    // 0x35f258: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35f258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35f25c:
    // 0x35f25c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35f25cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35f260:
    // 0x35f260: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35f260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35f264:
    // 0x35f264: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35f264u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35f268:
    // 0x35f268: 0x4a0003bf  vwaitq
    ctx->pc = 0x35f268u;
    // VWAITQ (Q already resolved in this runtime)
label_35f26c:
    // 0x35f26c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35f26cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f270:
    // 0x35f270: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35f270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f274:
    // 0x35f274: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x35f274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f278:
    // 0x35f278: 0x522000be  beql        $s1, $zero, . + 4 + (0xBE << 2)
label_35f27c:
    if (ctx->pc == 0x35F27Cu) {
        ctx->pc = 0x35F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F278u;
        // 0x35f27c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F280u;
        goto label_35f280;
    }
    ctx->pc = 0x35F278u;
    {
        const bool branch_taken_0x35f278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f278) {
            ctx->pc = 0x35F27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F278u;
            // 0x35f27c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F574u;
            goto label_35f574;
        }
    }
    ctx->pc = 0x35F280u;
label_35f280:
    // 0x35f280: 0xc0f6a96  jal         func_3DAA58
label_35f284:
    if (ctx->pc == 0x35F284u) {
        ctx->pc = 0x35F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F280u;
        // 0x35f284: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F288u;
        goto label_35f288;
    }
    ctx->pc = 0x35F280u;
    SET_GPR_U32(ctx, 31, 0x35F288u);
    ctx->pc = 0x35F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F280u;
    // 0x35f284: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35F280u, 0x35F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F288u;
label_35f288:
    // 0x35f288: 0xc0f6a96  jal         func_3DAA58
label_35f28c:
    if (ctx->pc == 0x35F28Cu) {
        ctx->pc = 0x35F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F288u;
        // 0x35f28c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F290u;
        goto label_35f290;
    }
    ctx->pc = 0x35F288u;
    SET_GPR_U32(ctx, 31, 0x35F290u);
    ctx->pc = 0x35F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F288u;
    // 0x35f28c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35F288u, 0x35F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F290u;
label_35f290:
    // 0x35f290: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x35f290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_35f294:
    // 0x35f294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35f294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35f298:
    // 0x35f298: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x35f298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_35f29c:
    // 0x35f29c: 0xc0f6a96  jal         func_3DAA58
label_35f2a0:
    if (ctx->pc == 0x35F2A0u) {
        ctx->pc = 0x35F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F29Cu;
        // 0x35f2a0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F2A4u;
        goto label_35f2a4;
    }
    ctx->pc = 0x35F29Cu;
    SET_GPR_U32(ctx, 31, 0x35F2A4u);
    ctx->pc = 0x35F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F29Cu;
    // 0x35f2a0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35F29Cu, 0x35F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2A4u;
label_35f2a4:
    // 0x35f2a4: 0xc0f6a96  jal         func_3DAA58
label_35f2a8:
    if (ctx->pc == 0x35F2A8u) {
        ctx->pc = 0x35F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2A4u;
        // 0x35f2a8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F2ACu;
        goto label_35f2ac;
    }
    ctx->pc = 0x35F2A4u;
    SET_GPR_U32(ctx, 31, 0x35F2ACu);
    ctx->pc = 0x35F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2A4u;
    // 0x35f2a8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35F2A4u, 0x35F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2ACu;
label_35f2ac:
    // 0x35f2ac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x35f2acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35f2b0:
    // 0x35f2b0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x35f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_35f2b4:
    // 0x35f2b4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x35f2b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35f2b8:
    // 0x35f2b8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x35f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35f2bc:
    // 0x35f2bc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x35f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_35f2c0:
    // 0x35f2c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35f2c4:
    // 0x35f2c4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x35f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_35f2c8:
    // 0x35f2c8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35f2c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_35f2cc:
    // 0x35f2cc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35f2ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_35f2d0:
    // 0x35f2d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35f2d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f2d4:
    // 0x35f2d4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x35f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f2d8:
    // 0x35f2d8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x35f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35f2dc:
    // 0x35f2dc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x35f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f2e0:
    // 0x35f2e0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x35f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35f2e4:
    // 0x35f2e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35f2e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_35f2e8:
    // 0x35f2e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35f2e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_35f2ec:
    // 0x35f2ec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x35f2ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_35f2f0:
    // 0x35f2f0: 0x0  nop
    ctx->pc = 0x35f2f0u;
    // NOP
label_35f2f4:
    // 0x35f2f4: 0x0  nop
    ctx->pc = 0x35f2f4u;
    // NOP
label_35f2f8:
    // 0x35f2f8: 0x46010084  c1          0x10084
    ctx->pc = 0x35f2f8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_35f2fc:
    // 0x35f2fc: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x35f2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_35f300:
    // 0x35f300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35f304:
    // 0x35f304: 0x0  nop
    ctx->pc = 0x35f304u;
    // NOP
label_35f308:
    // 0x35f308: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x35f308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f30c:
    // 0x35f30c: 0x0  nop
    ctx->pc = 0x35f30cu;
    // NOP
label_35f310:
    // 0x35f310: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_35f314:
    if (ctx->pc == 0x35F314u) {
        ctx->pc = 0x35F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F310u;
        // 0x35f314: 0xe7a200d0  swc1        $f2, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F318u;
        goto label_35f318;
    }
    ctx->pc = 0x35F310u;
    {
        const bool branch_taken_0x35f310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F310u;
        // 0x35f314: 0xe7a200d0  swc1        $f2, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f310) {
            ctx->pc = 0x35F33Cu;
            goto label_35f33c;
        }
    }
    ctx->pc = 0x35F318u;
label_35f318:
    // 0x35f318: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35f31c:
    // 0x35f31c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35f31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35f320:
    // 0x35f320: 0x0  nop
    ctx->pc = 0x35f320u;
    // NOP
label_35f324:
    // 0x35f324: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x35f324u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_35f328:
    // 0x35f328: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35f328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35f32c:
    // 0x35f32c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35f32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_35f330:
    // 0x35f330: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x35f330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_35f334:
    // 0x35f334: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35f334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f338:
    // 0x35f338: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x35f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f33c:
    // 0x35f33c: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x35f33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35f340:
    // 0x35f340: 0xc07a8b2  jal         func_1EA2C8
label_35f344:
    if (ctx->pc == 0x35F344u) {
        ctx->pc = 0x35F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F340u;
        // 0x35f344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F348u;
        goto label_35f348;
    }
    ctx->pc = 0x35F340u;
    SET_GPR_U32(ctx, 31, 0x35F348u);
    ctx->pc = 0x35F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F340u;
    // 0x35f344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x35F340u, 0x35F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F348u;
label_35f348:
    // 0x35f348: 0x7fa000e0  sq          $zero, 0xE0($sp)
    ctx->pc = 0x35f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 0));
label_35f34c:
    // 0x35f34c: 0x7fa000f0  sq          $zero, 0xF0($sp)
    ctx->pc = 0x35f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 0));
label_35f350:
    // 0x35f350: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x35f350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_35f354:
    // 0x35f354: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x35f354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_35f358:
    // 0x35f358: 0xc4406c00  lwc1        $f0, 0x6C00($v0)
    ctx->pc = 0x35f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f35c:
    // 0x35f35c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f360:
    // 0x35f360: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x35f360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_35f364:
    // 0x35f364: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35f364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35f368:
    // 0x35f368: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x35f368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_35f36c:
    // 0x35f36c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35f36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f370:
    // 0x35f370: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x35f370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_35f374:
    // 0x35f374: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x35f374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_35f378:
    // 0x35f378: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x35f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_35f37c:
    // 0x35f37c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x35f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_35f380:
    // 0x35f380: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x35f380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_35f384:
    // 0x35f384: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x35f384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_35f388:
    // 0x35f388: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x35f388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_35f38c:
    // 0x35f38c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x35f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_35f390:
    // 0x35f390: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x35f390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_35f394:
    // 0x35f394: 0xc077824  jal         func_1DE090
label_35f398:
    if (ctx->pc == 0x35F398u) {
        ctx->pc = 0x35F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F394u;
        // 0x35f398: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F39Cu;
        goto label_35f39c;
    }
    ctx->pc = 0x35F394u;
    SET_GPR_U32(ctx, 31, 0x35F39Cu);
    ctx->pc = 0x35F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F394u;
    // 0x35f398: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x35F394u, 0x35F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F39Cu;
label_35f39c:
    // 0x35f39c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35f3a0:
    if (ctx->pc == 0x35F3A0u) {
        ctx->pc = 0x35F3A4u;
        goto label_35f3a4;
    }
    ctx->pc = 0x35F39Cu;
    {
        const bool branch_taken_0x35f39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f39c) {
            ctx->pc = 0x35F3ACu;
            goto label_35f3ac;
        }
    }
    ctx->pc = 0x35F3A4u;
label_35f3a4:
    // 0x35f3a4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35f3a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35f3a8:
    // 0x35f3a8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f3ac:
    // 0x35f3ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x35f3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_35f3b0:
    // 0x35f3b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35f3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_35f3b4:
    // 0x35f3b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x35f3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_35f3b8:
    // 0x35f3b8: 0xc0f6a96  jal         func_3DAA58
label_35f3bc:
    if (ctx->pc == 0x35F3BCu) {
        ctx->pc = 0x35F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3B8u;
        // 0x35f3bc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F3C0u;
        goto label_35f3c0;
    }
    ctx->pc = 0x35F3B8u;
    SET_GPR_U32(ctx, 31, 0x35F3C0u);
    ctx->pc = 0x35F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3B8u;
    // 0x35f3bc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35F3B8u, 0x35F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3C0u;
label_35f3c0:
    // 0x35f3c0: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x35f3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_35f3c4:
    // 0x35f3c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35f3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_35f3c8:
    // 0x35f3c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x35f3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_35f3cc:
    // 0x35f3cc: 0xc0dc10e  jal         func_370438
label_35f3d0:
    if (ctx->pc == 0x35F3D0u) {
        ctx->pc = 0x35F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3CCu;
        // 0x35f3d0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F3D4u;
        goto label_35f3d4;
    }
    ctx->pc = 0x35F3CCu;
    SET_GPR_U32(ctx, 31, 0x35F3D4u);
    ctx->pc = 0x35F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3CCu;
    // 0x35f3d0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x35F3CCu, 0x35F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3D4u;
label_35f3d4:
    // 0x35f3d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x35f3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_35f3d8:
    // 0x35f3d8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x35f3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_35f3dc:
    // 0x35f3dc: 0xc0dc10e  jal         func_370438
label_35f3e0:
    if (ctx->pc == 0x35F3E0u) {
        ctx->pc = 0x35F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3DCu;
        // 0x35f3e0: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F3E4u;
        goto label_35f3e4;
    }
    ctx->pc = 0x35F3DCu;
    SET_GPR_U32(ctx, 31, 0x35F3E4u);
    ctx->pc = 0x35F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3DCu;
    // 0x35f3e0: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x35F3DCu, 0x35F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3E4u;
label_35f3e4:
    // 0x35f3e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x35f3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_35f3e8:
    // 0x35f3e8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x35f3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_35f3ec:
    // 0x35f3ec: 0xc0dc10e  jal         func_370438
label_35f3f0:
    if (ctx->pc == 0x35F3F0u) {
        ctx->pc = 0x35F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3ECu;
        // 0x35f3f0: 0xe7a00144  swc1        $f0, 0x144($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F3F4u;
        goto label_35f3f4;
    }
    ctx->pc = 0x35F3ECu;
    SET_GPR_U32(ctx, 31, 0x35F3F4u);
    ctx->pc = 0x35F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3ECu;
    // 0x35f3f0: 0xe7a00144  swc1        $f0, 0x144($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x35F3ECu, 0x35F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3F4u;
label_35f3f4:
    // 0x35f3f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x35f3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_35f3f8:
    // 0x35f3f8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x35f3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35f3fc:
    // 0x35f3fc: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x35f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_35f400:
    // 0x35f400: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x35f400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_35f404:
    // 0x35f404: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x35f404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_35f408:
    // 0x35f408: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35f408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35f40c:
    // 0x35f40c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35f40cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35f410:
    // 0x35f410: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35f410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f414:
    // 0x35f414: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35f414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f418:
    // 0x35f418: 0xc097f26  jal         func_25FC98
label_35f41c:
    if (ctx->pc == 0x35F41Cu) {
        ctx->pc = 0x35F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F418u;
        // 0x35f41c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F420u;
        goto label_35f420;
    }
    ctx->pc = 0x35F418u;
    SET_GPR_U32(ctx, 31, 0x35F420u);
    ctx->pc = 0x35F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F418u;
    // 0x35f41c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35F418u, 0x35F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F420u;
label_35f420:
    // 0x35f420: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x35f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_35f424:
    // 0x35f424: 0x2c62007b  sltiu       $v0, $v1, 0x7B
    ctx->pc = 0x35f424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
label_35f428:
    // 0x35f428: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_35f42c:
    if (ctx->pc == 0x35F42Cu) {
        ctx->pc = 0x35F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F428u;
        // 0x35f42c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F430u;
        goto label_35f430;
    }
    ctx->pc = 0x35F428u;
    {
        const bool branch_taken_0x35f428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F428u;
        // 0x35f42c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f428) {
            ctx->pc = 0x35F4BCu;
            goto label_35f4bc;
        }
    }
    ctx->pc = 0x35F430u;
label_35f430:
    // 0x35f430: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35f430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35f434:
    // 0x35f434: 0x24426c10  addiu       $v0, $v0, 0x6C10
    ctx->pc = 0x35f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27664));
label_35f438:
    // 0x35f438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35f43c:
    // 0x35f43c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35f440:
    // 0x35f440: 0x800008  jr          $a0
label_35f444:
    if (ctx->pc == 0x35F444u) {
        ctx->pc = 0x35F448u;
        goto label_35f448;
    }
    ctx->pc = 0x35F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35F448u: goto label_35f448;
            case 0x35F470u: goto label_35f470;
            case 0x35F498u: goto label_35f498;
            case 0x35F4BCu: goto label_35f4bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F440u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35F448u;
label_35f448:
    // 0x35f448: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x35f448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_35f44c:
    // 0x35f44c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x35f44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_35f450:
    // 0x35f450: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x35f450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_35f454:
    // 0x35f454: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x35f454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_35f458:
    // 0x35f458: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x35f458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_35f45c:
    // 0x35f45c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x35f45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_35f460:
    // 0x35f460: 0x3c014304  lui         $at, 0x4304
    ctx->pc = 0x35f460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17156 << 16));
label_35f464:
    // 0x35f464: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x35f464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_35f468:
    // 0x35f468: 0x10000014  b           . + 4 + (0x14 << 2)
label_35f46c:
    if (ctx->pc == 0x35F46Cu) {
        ctx->pc = 0x35F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F468u;
        // 0x35f46c: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F470u;
        goto label_35f470;
    }
    ctx->pc = 0x35F468u;
    {
        const bool branch_taken_0x35f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F468u;
        // 0x35f46c: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f468) {
            ctx->pc = 0x35F4BCu;
            goto label_35f4bc;
        }
    }
    ctx->pc = 0x35F470u;
label_35f470:
    // 0x35f470: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x35f470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_35f474:
    // 0x35f474: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x35f474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_35f478:
    // 0x35f478: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x35f478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_35f47c:
    // 0x35f47c: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x35f47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
label_35f480:
    // 0x35f480: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x35f480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_35f484:
    // 0x35f484: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x35f484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_35f488:
    // 0x35f488: 0x3c014304  lui         $at, 0x4304
    ctx->pc = 0x35f488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17156 << 16));
label_35f48c:
    // 0x35f48c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x35f48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_35f490:
    // 0x35f490: 0x1000000a  b           . + 4 + (0xA << 2)
label_35f494:
    if (ctx->pc == 0x35F494u) {
        ctx->pc = 0x35F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F490u;
        // 0x35f494: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F498u;
        goto label_35f498;
    }
    ctx->pc = 0x35F490u;
    {
        const bool branch_taken_0x35f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F490u;
        // 0x35f494: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f490) {
            ctx->pc = 0x35F4BCu;
            goto label_35f4bc;
        }
    }
    ctx->pc = 0x35F498u;
label_35f498:
    // 0x35f498: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x35f498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
label_35f49c:
    // 0x35f49c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x35f49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_35f4a0:
    // 0x35f4a0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x35f4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_35f4a4:
    // 0x35f4a4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x35f4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35f4a8:
    // 0x35f4a8: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x35f4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_35f4ac:
    // 0x35f4ac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x35f4acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_35f4b0:
    // 0x35f4b0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x35f4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_35f4b4:
    // 0x35f4b4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x35f4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_35f4b8:
    // 0x35f4b8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x35f4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_35f4bc:
    // 0x35f4bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f4c0:
    // 0x35f4c0: 0x1222002b  beq         $s1, $v0, . + 4 + (0x2B << 2)
label_35f4c4:
    if (ctx->pc == 0x35F4C4u) {
        ctx->pc = 0x35F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4C0u;
        // 0x35f4c4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F4C8u;
        goto label_35f4c8;
    }
    ctx->pc = 0x35F4C0u;
    {
        const bool branch_taken_0x35f4c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4C0u;
        // 0x35f4c4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4c0) {
            ctx->pc = 0x35F570u;
            goto label_35f570;
        }
    }
    ctx->pc = 0x35F4C8u;
label_35f4c8:
    // 0x35f4c8: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35f4c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35f4cc:
    // 0x35f4cc: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x35f4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_35f4d0:
    // 0x35f4d0: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x35f4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_35f4d4:
    // 0x35f4d4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x35f4d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_35f4d8:
    // 0x35f4d8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35f4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_35f4dc:
    // 0x35f4dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f4e0:
    // 0x35f4e0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x35f4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35f4e4:
    // 0x35f4e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_35f4e8:
    // 0x35f4e8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x35f4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_35f4ec:
    // 0x35f4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f4f0:
    // 0x35f4f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35f4f4:
    // 0x35f4f4: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x35f4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_35f4f8:
    // 0x35f4f8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x35f4f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_35f4fc:
    // 0x35f4fc: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x35f4fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f500:
    // 0x35f500: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35f500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_35f504:
    // 0x35f504: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35f504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35f508:
    // 0x35f508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f50c:
    // 0x35f50c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35f50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f510:
    // 0x35f510: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35f510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f514:
    // 0x35f514: 0xc0cf430  jal         func_33D0C0
label_35f518:
    if (ctx->pc == 0x35F518u) {
        ctx->pc = 0x35F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F514u;
        // 0x35f518: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F51Cu;
        goto label_35f51c;
    }
    ctx->pc = 0x35F514u;
    SET_GPR_U32(ctx, 31, 0x35F51Cu);
    ctx->pc = 0x35F518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F514u;
    // 0x35f518: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x35F514u, 0x35F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F51Cu;
label_35f51c:
    // 0x35f51c: 0x10000015  b           . + 4 + (0x15 << 2)
label_35f520:
    if (ctx->pc == 0x35F520u) {
        ctx->pc = 0x35F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F51Cu;
        // 0x35f520: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F524u;
        goto label_35f524;
    }
    ctx->pc = 0x35F51Cu;
    {
        const bool branch_taken_0x35f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F51Cu;
        // 0x35f520: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f51c) {
            ctx->pc = 0x35F574u;
            goto label_35f574;
        }
    }
    ctx->pc = 0x35F524u;
label_35f524:
    // 0x35f524: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x35f524u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35f528:
    // 0x35f528: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x35f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_35f52c:
    // 0x35f52c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_35f530:
    if (ctx->pc == 0x35F530u) {
        ctx->pc = 0x35F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F52Cu;
        // 0x35f530: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F534u;
        goto label_35f534;
    }
    ctx->pc = 0x35F52Cu;
    {
        const bool branch_taken_0x35f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F52Cu;
        // 0x35f530: 0x27b60030  addiu       $s6, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f52c) {
            ctx->pc = 0x35F570u;
            goto label_35f570;
        }
    }
    ctx->pc = 0x35F534u;
label_35f534:
    // 0x35f534: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x35f534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_35f538:
    // 0x35f538: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x35f538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_35f53c:
    // 0x35f53c: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x35f53cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_35f540:
    // 0x35f540: 0xc07a8e4  jal         func_1EA390
label_35f544:
    if (ctx->pc == 0x35F544u) {
        ctx->pc = 0x35F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F540u;
        // 0x35f544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F548u;
        goto label_35f548;
    }
    ctx->pc = 0x35F540u;
    SET_GPR_U32(ctx, 31, 0x35F548u);
    ctx->pc = 0x35F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F540u;
    // 0x35f544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x35F540u, 0x35F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F548u;
label_35f548:
    // 0x35f548: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x35f548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_35f54c:
    // 0x35f54c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35f54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35f550:
    // 0x35f550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f554:
    // 0x35f554: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x35f554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35f558:
    // 0x35f558: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35f558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f55c:
    // 0x35f55c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x35f55cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35f560:
    // 0x35f560: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35f560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35f564:
    // 0x35f564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f568:
    // 0x35f568: 0xc07f550  jal         func_1FD540
label_35f56c:
    if (ctx->pc == 0x35F56Cu) {
        ctx->pc = 0x35F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F568u;
        // 0x35f56c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F570u;
        goto label_35f570;
    }
    ctx->pc = 0x35F568u;
    SET_GPR_U32(ctx, 31, 0x35F570u);
    ctx->pc = 0x35F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F568u;
    // 0x35f56c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x35F568u, 0x35F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F570u;
label_35f570:
    // 0x35f570: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35f570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35f574:
    // 0x35f574: 0xc0d765e  jal         func_35D978
label_35f578:
    if (ctx->pc == 0x35F578u) {
        ctx->pc = 0x35F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F574u;
        // 0x35f578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F57Cu;
        goto label_35f57c;
    }
    ctx->pc = 0x35F574u;
    SET_GPR_U32(ctx, 31, 0x35F57Cu);
    ctx->pc = 0x35F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F574u;
    // 0x35f578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35F574u, 0x35F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F57Cu;
label_35f57c:
    // 0x35f57c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35f57cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_35f580:
    // 0x35f580: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x35f580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_35f584:
    // 0x35f584: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35f584u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f588:
    // 0x35f588: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35f588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f58c:
    // 0x35f58c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x35f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f590:
    // 0x35f590: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x35f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_35f594:
    // 0x35f594: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x35f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_35f598:
    // 0x35f598: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x35f598u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
label_35f59c:
    // 0x35f59c: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x35f59cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
label_35f5a0:
    // 0x35f5a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x35f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f5a4:
    // 0x35f5a4: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x35f5a4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
label_35f5a8:
    // 0x35f5a8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x35f5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_35f5ac:
    // 0x35f5ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x35f5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_35f5b0:
    // 0x35f5b0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35f5b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35f5b4:
    // 0x35f5b4: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x35f5b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35f5b8:
    // 0x35f5b8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x35f5b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35f5bc:
    // 0x35f5bc: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x35f5bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_35f5c0:
    // 0x35f5c0: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x35f5c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_35f5c4:
    // 0x35f5c4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x35f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_35f5c8:
    // 0x35f5c8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x35f5c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_35f5cc:
    // 0x35f5cc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35f5ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35f5d0:
    // 0x35f5d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35f5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35f5d4:
    // 0x35f5d4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35f5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35f5d8:
    // 0x35f5d8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35f5d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35f5dc:
    // 0x35f5dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x35f5dcu;
    // VWAITQ (Q already resolved in this runtime)
label_35f5e0:
    // 0x35f5e0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35f5e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f5e4:
    // 0x35f5e4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f5e8:
    // 0x35f5e8: 0xc0d8de2  jal         func_363788
label_35f5ec:
    if (ctx->pc == 0x35F5ECu) {
        ctx->pc = 0x35F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F5E8u;
        // 0x35f5ec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F5F0u;
        goto label_35f5f0;
    }
    ctx->pc = 0x35F5E8u;
    SET_GPR_U32(ctx, 31, 0x35F5F0u);
    ctx->pc = 0x35F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F5E8u;
    // 0x35f5ec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35F5E8u, 0x35F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5F0u;
label_35f5f0:
    // 0x35f5f0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x35f5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_35f5f4:
    // 0x35f5f4: 0x54400165  bnel        $v0, $zero, . + 4 + (0x165 << 2)
label_35f5f8:
    if (ctx->pc == 0x35F5F8u) {
        ctx->pc = 0x35F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F5F4u;
        // 0x35f5f8: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F5FCu;
        goto label_35f5fc;
    }
    ctx->pc = 0x35F5F4u;
    {
        const bool branch_taken_0x35f5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f5f4) {
            ctx->pc = 0x35F5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F5F4u;
            // 0x35f5f8: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FB8Cu;
            goto label_35fb8c;
        }
    }
    ctx->pc = 0x35F5FCu;
label_35f5fc:
    // 0x35f5fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x35f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f600:
    // 0x35f600: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x35f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f604:
    // 0x35f604: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x35f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35f608:
    // 0x35f608: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x35f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f60c:
    // 0x35f60c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35f60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35f610:
    // 0x35f610: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x35f610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35f614:
    // 0x35f614: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x35f614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35f618:
    // 0x35f618: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x35f618u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35f61c:
    // 0x35f61c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x35f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35f620:
    // 0x35f620: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35f624:
    // 0x35f624: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
label_35f628:
    if (ctx->pc == 0x35F628u) {
        ctx->pc = 0x35F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F624u;
        // 0x35f628: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F62Cu;
        goto label_35f62c;
    }
    ctx->pc = 0x35F624u;
    {
        const bool branch_taken_0x35f624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f624) {
            ctx->pc = 0x35F628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F624u;
            // 0x35f628: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F7A0u;
            goto label_35f7a0;
        }
    }
    ctx->pc = 0x35F62Cu;
label_35f62c:
    // 0x35f62c: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x35f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_35f630:
    // 0x35f630: 0x8c430590  lw          $v1, 0x590($v0)
    ctx->pc = 0x35f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
label_35f634:
    // 0x35f634: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_35f638:
    if (ctx->pc == 0x35F638u) {
        ctx->pc = 0x35F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F634u;
        // 0x35f638: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F63Cu;
        goto label_35f63c;
    }
    ctx->pc = 0x35F634u;
    {
        const bool branch_taken_0x35f634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F634u;
        // 0x35f638: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f634) {
            ctx->pc = 0x35F7A0u;
            goto label_35f7a0;
        }
    }
    ctx->pc = 0x35F63Cu;
label_35f63c:
    // 0x35f63c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x35f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_35f640:
    // 0x35f640: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x35f640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_35f644:
    // 0x35f644: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x35f644u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35f648:
    // 0x35f648: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_35f64c:
    if (ctx->pc == 0x35F64Cu) {
        ctx->pc = 0x35F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F648u;
        // 0x35f64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F650u;
        goto label_35f650;
    }
    ctx->pc = 0x35F648u;
    {
        const bool branch_taken_0x35f648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F648u;
        // 0x35f64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f648) {
            ctx->pc = 0x35F680u;
            goto label_35f680;
        }
    }
    ctx->pc = 0x35F650u;
label_35f650:
    // 0x35f650: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x35f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_35f654:
    // 0x35f654: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x35f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_35f658:
    // 0x35f658: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x35f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_35f65c:
    // 0x35f65c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x35f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_35f660:
    // 0x35f660: 0x104001f8  beqz        $v0, . + 4 + (0x1F8 << 2)
label_35f664:
    if (ctx->pc == 0x35F664u) {
        ctx->pc = 0x35F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F660u;
        // 0x35f664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F668u;
        goto label_35f668;
    }
    ctx->pc = 0x35F660u;
    {
        const bool branch_taken_0x35f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F660u;
        // 0x35f664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f660) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35F668u;
label_35f668:
    // 0x35f668: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_35f66c:
    if (ctx->pc == 0x35F66Cu) {
        ctx->pc = 0x35F670u;
        goto label_35f670;
    }
    ctx->pc = 0x35F668u;
    {
        const bool branch_taken_0x35f668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f668) {
            ctx->pc = 0x35F680u;
            goto label_35f680;
        }
    }
    ctx->pc = 0x35F670u;
label_35f670:
    // 0x35f670: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x35f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_35f674:
    // 0x35f674: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x35f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_35f678:
    // 0x35f678: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_35f67c:
    if (ctx->pc == 0x35F67Cu) {
        ctx->pc = 0x35F680u;
        goto label_35f680;
    }
    ctx->pc = 0x35F678u;
    {
        const bool branch_taken_0x35f678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f678) {
            ctx->pc = 0x35F6BCu;
            goto label_35f6bc;
        }
    }
    ctx->pc = 0x35F680u;
label_35f680:
    // 0x35f680: 0xc07a8e4  jal         func_1EA390
label_35f684:
    if (ctx->pc == 0x35F684u) {
        ctx->pc = 0x35F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F680u;
        // 0x35f684: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F688u;
        goto label_35f688;
    }
    ctx->pc = 0x35F680u;
    SET_GPR_U32(ctx, 31, 0x35F688u);
    ctx->pc = 0x35F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F680u;
    // 0x35f684: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x35F680u, 0x35F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F688u;
label_35f688:
    // 0x35f688: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x35f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_35f68c:
    // 0x35f68c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_35f690:
    // 0x35f690: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x35f690u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_35f694:
    // 0x35f694: 0x2c620039  sltiu       $v0, $v1, 0x39
    ctx->pc = 0x35f694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
label_35f698:
    // 0x35f698: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_35f69c:
    if (ctx->pc == 0x35F69Cu) {
        ctx->pc = 0x35F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F698u;
        // 0x35f69c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F6A0u;
        goto label_35f6a0;
    }
    ctx->pc = 0x35F698u;
    {
        const bool branch_taken_0x35f698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F698u;
        // 0x35f69c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f698) {
            ctx->pc = 0x35F6BCu;
            goto label_35f6bc;
        }
    }
    ctx->pc = 0x35F6A0u;
label_35f6a0:
    // 0x35f6a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35f6a4:
    // 0x35f6a4: 0x24426e00  addiu       $v0, $v0, 0x6E00
    ctx->pc = 0x35f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28160));
label_35f6a8:
    // 0x35f6a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35f6ac:
    // 0x35f6ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35f6b0:
    // 0x35f6b0: 0x800008  jr          $a0
label_35f6b4:
    if (ctx->pc == 0x35F6B4u) {
        ctx->pc = 0x35F6B8u;
        goto label_35f6b8;
    }
    ctx->pc = 0x35F6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35F6B8u: goto label_35f6b8;
            case 0x35F6BCu: goto label_35f6bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35F6B8u;
label_35f6b8:
    // 0x35f6b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x35f6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f6bc:
    // 0x35f6bc: 0xc0f6a96  jal         func_3DAA58
label_35f6c0:
    if (ctx->pc == 0x35F6C0u) {
        ctx->pc = 0x35F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6BCu;
        // 0x35f6c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F6C4u;
        goto label_35f6c4;
    }
    ctx->pc = 0x35F6BCu;
    SET_GPR_U32(ctx, 31, 0x35F6C4u);
    ctx->pc = 0x35F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6BCu;
    // 0x35f6c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35F6BCu, 0x35F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6C4u;
label_35f6c4:
    // 0x35f6c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_35f6c8:
    if (ctx->pc == 0x35F6C8u) {
        ctx->pc = 0x35F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6C4u;
        // 0x35f6c8: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F6CCu;
        goto label_35f6cc;
    }
    ctx->pc = 0x35F6C4u;
    {
        const bool branch_taken_0x35f6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6C4u;
        // 0x35f6c8: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6c4) {
            ctx->pc = 0x35F708u;
            goto label_35f708;
        }
    }
    ctx->pc = 0x35F6CCu;
label_35f6cc:
    // 0x35f6cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x35f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35f6d0:
    // 0x35f6d0: 0xc097f26  jal         func_25FC98
label_35f6d4:
    if (ctx->pc == 0x35F6D4u) {
        ctx->pc = 0x35F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6D0u;
        // 0x35f6d4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F6D8u;
        goto label_35f6d8;
    }
    ctx->pc = 0x35F6D0u;
    SET_GPR_U32(ctx, 31, 0x35F6D8u);
    ctx->pc = 0x35F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6D0u;
    // 0x35f6d4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35F6D0u, 0x35F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6D8u;
label_35f6d8:
    // 0x35f6d8: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x35f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_35f6dc:
    // 0x35f6dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_35f6e0:
    if (ctx->pc == 0x35F6E0u) {
        ctx->pc = 0x35F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6DCu;
        // 0x35f6e0: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F6E4u;
        goto label_35f6e4;
    }
    ctx->pc = 0x35F6DCu;
    {
        const bool branch_taken_0x35f6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6DCu;
        // 0x35f6e0: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6dc) {
            ctx->pc = 0x35F6F8u;
            goto label_35f6f8;
        }
    }
    ctx->pc = 0x35F6E4u;
label_35f6e4:
    // 0x35f6e4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x35f6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_35f6e8:
    // 0x35f6e8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x35f6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_35f6ec:
    // 0x35f6ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35f6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35f6f0:
    // 0x35f6f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_35f6f4:
    if (ctx->pc == 0x35F6F4u) {
        ctx->pc = 0x35F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6F0u;
        // 0x35f6f4: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F6F8u;
        goto label_35f6f8;
    }
    ctx->pc = 0x35F6F0u;
    {
        const bool branch_taken_0x35f6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6F0u;
        // 0x35f6f4: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6f0) {
            ctx->pc = 0x35F718u;
            goto label_35f718;
        }
    }
    ctx->pc = 0x35F6F8u;
label_35f6f8:
    // 0x35f6f8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35f6f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_35f6fc:
    // 0x35f6fc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35f6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f700:
    // 0x35f700: 0x10000020  b           . + 4 + (0x20 << 2)
label_35f704:
    if (ctx->pc == 0x35F704u) {
        ctx->pc = 0x35F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F700u;
        // 0x35f704: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F708u;
        goto label_35f708;
    }
    ctx->pc = 0x35F700u;
    {
        const bool branch_taken_0x35f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F700u;
        // 0x35f704: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f700) {
            ctx->pc = 0x35F784u;
            goto label_35f784;
        }
    }
    ctx->pc = 0x35F708u;
label_35f708:
    // 0x35f708: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x35f708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_35f70c:
    // 0x35f70c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35f70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_35f710:
    // 0x35f710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35f710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35f714:
    // 0x35f714: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x35f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35f718:
    // 0x35f718: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x35f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f71c:
    // 0x35f71c: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x35f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35f720:
    // 0x35f720: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x35f720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_35f724:
    // 0x35f724: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x35f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f728:
    // 0x35f728: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x35f728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_35f72c:
    // 0x35f72c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x35f72cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_35f730:
    // 0x35f730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35f730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35f734:
    // 0x35f734: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x35f734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_35f738:
    // 0x35f738: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x35f738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_35f73c:
    // 0x35f73c: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x35f73cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_35f740:
    // 0x35f740: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x35f740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_35f744:
    // 0x35f744: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35f744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_35f748:
    // 0x35f748: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35f748u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35f74c:
    // 0x35f74c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35f74cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35f750:
    // 0x35f750: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x35f750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f754:
    // 0x35f754: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x35f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f758:
    // 0x35f758: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x35f758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35f75c:
    // 0x35f75c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x35f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f760:
    // 0x35f760: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x35f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f764:
    // 0x35f764: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x35f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35f768:
    // 0x35f768: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x35f768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_35f76c:
    // 0x35f76c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x35f76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_35f770:
    // 0x35f770: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x35f770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_35f774:
    // 0x35f774: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x35f774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_35f778:
    // 0x35f778: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35f778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35f77c:
    // 0x35f77c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35f780:
    // 0x35f780: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x35f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35f784:
    // 0x35f784: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x35f784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_35f788:
    // 0x35f788: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x35f788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f78c:
    // 0x35f78c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x35f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35f790:
    // 0x35f790: 0xc098d70  jal         func_2635C0
label_35f794:
    if (ctx->pc == 0x35F794u) {
        ctx->pc = 0x35F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F790u;
        // 0x35f794: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F798u;
        goto label_35f798;
    }
    ctx->pc = 0x35F790u;
    SET_GPR_U32(ctx, 31, 0x35F798u);
    ctx->pc = 0x35F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F790u;
    // 0x35f794: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2635C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2635C0u, 0x35F790u, 0x35F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F798u;
label_35f798:
    // 0x35f798: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_35f79c:
    if (ctx->pc == 0x35F79Cu) {
        ctx->pc = 0x35F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F798u;
        // 0x35f79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F7A0u;
        goto label_35f7a0;
    }
    ctx->pc = 0x35F798u;
    {
        const bool branch_taken_0x35f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F798u;
        // 0x35f79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f798) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35F7A0u;
label_35f7a0:
    // 0x35f7a0: 0x8c43c330  lw          $v1, -0x3CD0($v0)
    ctx->pc = 0x35f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951728)));
label_35f7a4:
    // 0x35f7a4: 0x146000d9  bnez        $v1, . + 4 + (0xD9 << 2)
label_35f7a8:
    if (ctx->pc == 0x35F7A8u) {
        ctx->pc = 0x35F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7A4u;
        // 0x35f7a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F7ACu;
        goto label_35f7ac;
    }
    ctx->pc = 0x35F7A4u;
    {
        const bool branch_taken_0x35f7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7A4u;
        // 0x35f7a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f7a4) {
            ctx->pc = 0x35FB0Cu;
            goto label_35fb0c;
        }
    }
    ctx->pc = 0x35F7ACu;
label_35f7ac:
    // 0x35f7ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x35f7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35f7b0:
    // 0x35f7b0: 0x0  nop
    ctx->pc = 0x35f7b0u;
    // NOP
label_35f7b4:
    // 0x35f7b4: 0x46167034  c.lt.s      $f14, $f22
    ctx->pc = 0x35f7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f7b8:
    // 0x35f7b8: 0x0  nop
    ctx->pc = 0x35f7b8u;
    // NOP
label_35f7bc:
    // 0x35f7bc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_35f7c0:
    if (ctx->pc == 0x35F7C0u) {
        ctx->pc = 0x35F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7BCu;
        // 0x35f7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F7C4u;
        goto label_35f7c4;
    }
    ctx->pc = 0x35F7BCu;
    {
        const bool branch_taken_0x35f7bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F7BCu;
        // 0x35f7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f7bc) {
            ctx->pc = 0x35F830u;
            goto label_35f830;
        }
    }
    ctx->pc = 0x35F7C4u;
label_35f7c4:
    // 0x35f7c4: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x35f7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_35f7c8:
    // 0x35f7c8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x35f7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_35f7cc:
    // 0x35f7cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35f7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35f7d0:
    // 0x35f7d0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x35f7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_35f7d4:
    // 0x35f7d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x35f7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_35f7d8:
    // 0x35f7d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x35f7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35f7dc:
    // 0x35f7dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35f7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35f7e0:
    // 0x35f7e0: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x35f7e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_35f7e4:
    // 0x35f7e4: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x35f7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_35f7e8:
    // 0x35f7e8: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x35f7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_35f7ec:
    // 0x35f7ec: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35f7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_35f7f0:
    // 0x35f7f0: 0x460db342  mul.s       $f13, $f22, $f13
    ctx->pc = 0x35f7f0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[22], ctx->f[13]);
label_35f7f4:
    // 0x35f7f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_35f7f8:
    // 0x35f7f8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x35f7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_35f7fc:
    // 0x35f7fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35f7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35f800:
    // 0x35f800: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x35f800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_35f804:
    // 0x35f804: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35f804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35f808:
    // 0x35f808: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35f808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_35f80c:
    // 0x35f80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f810:
    // 0x35f810: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35f810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f814:
    // 0x35f814: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35f814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f818:
    // 0x35f818: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x35f818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f81c:
    // 0x35f81c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x35f81cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f820:
    // 0x35f820: 0xc0cf430  jal         func_33D0C0
label_35f824:
    if (ctx->pc == 0x35F824u) {
        ctx->pc = 0x35F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F820u;
        // 0x35f824: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F828u;
        goto label_35f828;
    }
    ctx->pc = 0x35F820u;
    SET_GPR_U32(ctx, 31, 0x35F828u);
    ctx->pc = 0x35F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F820u;
    // 0x35f824: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x35F820u, 0x35F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F828u;
label_35f828:
    // 0x35f828: 0x10000186  b           . + 4 + (0x186 << 2)
label_35f82c:
    if (ctx->pc == 0x35F82Cu) {
        ctx->pc = 0x35F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F828u;
        // 0x35f82c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F830u;
        goto label_35f830;
    }
    ctx->pc = 0x35F828u;
    {
        const bool branch_taken_0x35f828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F828u;
        // 0x35f82c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f828) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35F830u;
label_35f830:
    // 0x35f830: 0x460eb032  c.eq.s      $f22, $f14
    ctx->pc = 0x35f830u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f834:
    // 0x35f834: 0x0  nop
    ctx->pc = 0x35f834u;
    // NOP
label_35f838:
    // 0x35f838: 0x45000183  bc1f        . + 4 + (0x183 << 2)
label_35f83c:
    if (ctx->pc == 0x35F83Cu) {
        ctx->pc = 0x35F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F838u;
        // 0x35f83c: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F840u;
        goto label_35f840;
    }
    ctx->pc = 0x35F838u;
    {
        const bool branch_taken_0x35f838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F838u;
        // 0x35f83c: 0xdfb00160  ld          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f838) {
            ctx->pc = 0x35FE48u;
            goto label_35fe48;
        }
    }
    ctx->pc = 0x35F840u;
label_35f840:
    // 0x35f840: 0xc07a8e4  jal         func_1EA390
label_35f844:
    if (ctx->pc == 0x35F844u) {
        ctx->pc = 0x35F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F840u;
        // 0x35f844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F848u;
        goto label_35f848;
    }
    ctx->pc = 0x35F840u;
    SET_GPR_U32(ctx, 31, 0x35F848u);
    ctx->pc = 0x35F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F840u;
    // 0x35f844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x35F840u, 0x35F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F848u;
label_35f848:
    // 0x35f848: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x35f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35f84c:
    // 0x35f84c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x35f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_35f850:
    // 0x35f850: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x35f850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
label_35f854:
    // 0x35f854: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35f854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_35f858:
    // 0x35f858: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x35f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_35f85c:
    // 0x35f85c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_35f860:
    if (ctx->pc == 0x35F860u) {
        ctx->pc = 0x35F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F85Cu;
        // 0x35f860: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F864u;
        goto label_35f864;
    }
    ctx->pc = 0x35F85Cu;
    {
        const bool branch_taken_0x35f85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F85Cu;
        // 0x35f860: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f85c) {
            ctx->pc = 0x35F898u;
            goto label_35f898;
        }
    }
    ctx->pc = 0x35F864u;
label_35f864:
    // 0x35f864: 0xc097f26  jal         func_25FC98
label_35f868:
    if (ctx->pc == 0x35F868u) {
        ctx->pc = 0x35F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F864u;
        // 0x35f868: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F86Cu;
        goto label_35f86c;
    }
    ctx->pc = 0x35F864u;
    SET_GPR_U32(ctx, 31, 0x35F86Cu);
    ctx->pc = 0x35F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F864u;
    // 0x35f868: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35F864u, 0x35F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F86Cu;
label_35f86c:
    // 0x35f86c: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x35f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_35f870:
    // 0x35f870: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_35f874:
    if (ctx->pc == 0x35F874u) {
        ctx->pc = 0x35F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F870u;
        // 0x35f874: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F878u;
        goto label_35f878;
    }
    ctx->pc = 0x35F870u;
    {
        const bool branch_taken_0x35f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F870u;
        // 0x35f874: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f870) {
            ctx->pc = 0x35F898u;
            goto label_35f898;
        }
    }
    ctx->pc = 0x35F878u;
label_35f878:
    // 0x35f878: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x35f878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
label_35f87c:
    // 0x35f87c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x35f87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_35f880:
    // 0x35f880: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x35f880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_35f884:
    // 0x35f884: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x35f884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_35f888:
    // 0x35f888: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x35f888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_35f88c:
    // 0x35f88c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x35f88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_35f890:
    // 0x35f890: 0x10000008  b           . + 4 + (0x8 << 2)
label_35f894:
    if (ctx->pc == 0x35F894u) {
        ctx->pc = 0x35F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F890u;
        // 0x35f894: 0x241100dc  addiu       $s1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F898u;
        goto label_35f898;
    }
    ctx->pc = 0x35F890u;
    {
        const bool branch_taken_0x35f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F890u;
        // 0x35f894: 0x241100dc  addiu       $s1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f890) {
            ctx->pc = 0x35F8B4u;
            goto label_35f8b4;
        }
    }
    ctx->pc = 0x35F898u;
label_35f898:
    // 0x35f898: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35f898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_35f89c:
    // 0x35f89c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x35f89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_35f8a0:
    // 0x35f8a0: 0xc0c351e  jal         func_30D478
label_35f8a4:
    if (ctx->pc == 0x35F8A4u) {
        ctx->pc = 0x35F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8A0u;
        // 0x35f8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F8A8u;
        goto label_35f8a8;
    }
    ctx->pc = 0x35F8A0u;
    SET_GPR_U32(ctx, 31, 0x35F8A8u);
    ctx->pc = 0x35F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8A0u;
    // 0x35f8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D478u, 0x35F8A0u, 0x35F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8A8u;
label_35f8a8:
    // 0x35f8a8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x35f8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f8ac:
    // 0x35f8ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35f8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f8b0:
    // 0x35f8b0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x35f8b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_35f8b4:
    // 0x35f8b4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_35f8b8:
    if (ctx->pc == 0x35F8B8u) {
        ctx->pc = 0x35F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8B4u;
        // 0x35f8b8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F8BCu;
        goto label_35f8bc;
    }
    ctx->pc = 0x35F8B4u;
    {
        const bool branch_taken_0x35f8b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8B4u;
        // 0x35f8b8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f8b4) {
            ctx->pc = 0x35F934u;
            goto label_35f934;
        }
    }
    ctx->pc = 0x35F8BCu;
label_35f8bc:
    // 0x35f8bc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x35f8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_35f8c0:
    // 0x35f8c0: 0x24422828  addiu       $v0, $v0, 0x2828
    ctx->pc = 0x35f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
label_35f8c4:
    // 0x35f8c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35f8c8:
    // 0x35f8c8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x35f8c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_35f8cc:
    // 0x35f8cc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_35f8d0:
    if (ctx->pc == 0x35F8D0u) {
        ctx->pc = 0x35F8D4u;
        goto label_35f8d4;
    }
    ctx->pc = 0x35F8CCu;
    {
        const bool branch_taken_0x35f8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f8cc) {
            ctx->pc = 0x35F934u;
            goto label_35f934;
        }
    }
    ctx->pc = 0x35F8D4u;
label_35f8d4:
    // 0x35f8d4: 0xc0c3504  jal         func_30D410
label_35f8d8:
    if (ctx->pc == 0x35F8D8u) {
        ctx->pc = 0x35F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8D4u;
        // 0x35f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F8DCu;
        goto label_35f8dc;
    }
    ctx->pc = 0x35F8D4u;
    SET_GPR_U32(ctx, 31, 0x35F8DCu);
    ctx->pc = 0x35F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8D4u;
    // 0x35f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D410u, 0x35F8D4u, 0x35F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8DCu;
label_35f8dc:
    // 0x35f8dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_35f8e0:
    if (ctx->pc == 0x35F8E0u) {
        ctx->pc = 0x35F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8DCu;
        // 0x35f8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F8E4u;
        goto label_35f8e4;
    }
    ctx->pc = 0x35F8DCu;
    {
        const bool branch_taken_0x35f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8DCu;
        // 0x35f8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f8dc) {
            ctx->pc = 0x35F934u;
            goto label_35f934;
        }
    }
    ctx->pc = 0x35F8E4u;
label_35f8e4:
    // 0x35f8e4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x35f8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35f8e8:
    // 0x35f8e8: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x35f8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_35f8ec:
    // 0x35f8ec: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x35f8ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_35f8f0:
    // 0x35f8f0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35f8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_35f8f4:
    // 0x35f8f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35f8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35f8f8:
    // 0x35f8f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35f8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_35f8fc:
    // 0x35f8fc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x35f8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_35f900:
    // 0x35f900: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35f900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_35f904:
    // 0x35f904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35f904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35f908:
    // 0x35f908: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x35f908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_35f90c:
    // 0x35f90c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x35f90cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_35f910:
    // 0x35f910: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35f910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_35f914:
    // 0x35f914: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x35f914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f918:
    // 0x35f918: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x35f918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f91c:
    // 0x35f91c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35f920:
    // 0x35f920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f924:
    // 0x35f924: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35f924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f928:
    // 0x35f928: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35f928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35f92c:
    // 0x35f92c: 0xc0cf430  jal         func_33D0C0
label_35f930:
    if (ctx->pc == 0x35F930u) {
        ctx->pc = 0x35F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F92Cu;
        // 0x35f930: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F934u;
        goto label_35f934;
    }
    ctx->pc = 0x35F92Cu;
    SET_GPR_U32(ctx, 31, 0x35F934u);
    ctx->pc = 0x35F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F92Cu;
    // 0x35f930: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x35F92Cu, 0x35F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F934u;
label_35f934:
    // 0x35f934: 0xc0c3526  jal         func_30D498
label_35f938:
    if (ctx->pc == 0x35F938u) {
        ctx->pc = 0x35F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F934u;
        // 0x35f938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F93Cu;
        goto label_35f93c;
    }
    ctx->pc = 0x35F934u;
    SET_GPR_U32(ctx, 31, 0x35F93Cu);
    ctx->pc = 0x35F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F934u;
    // 0x35f938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D498u, 0x35F934u, 0x35F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F93Cu;
label_35f93c:
    // 0x35f93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f940:
    // 0x35f940: 0xc0c3536  jal         func_30D4D8
label_35f944:
    if (ctx->pc == 0x35F944u) {
        ctx->pc = 0x35F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F940u;
        // 0x35f944: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F948u;
        goto label_35f948;
    }
    ctx->pc = 0x35F940u;
    SET_GPR_U32(ctx, 31, 0x35F948u);
    ctx->pc = 0x35F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F940u;
    // 0x35f944: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4D8u, 0x35F940u, 0x35F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F948u;
label_35f948:
    // 0x35f948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35f948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f94c:
    // 0x35f94c: 0x122000ec  beqz        $s1, . + 4 + (0xEC << 2)
label_35f950:
    if (ctx->pc == 0x35F950u) {
        ctx->pc = 0x35F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F94Cu;
        // 0x35f950: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F954u;
        goto label_35f954;
    }
    ctx->pc = 0x35F94Cu;
    {
        const bool branch_taken_0x35f94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F94Cu;
        // 0x35f950: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f94c) {
            ctx->pc = 0x35FD00u;
            goto label_35fd00;
        }
    }
    ctx->pc = 0x35F954u;
label_35f954:
    // 0x35f954: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x35f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_35f958:
    // 0x35f958: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35f95c:
    // 0x35f95c: 0xc0b2af0  jal         func_2CABC0
label_35f960:
    if (ctx->pc == 0x35F960u) {
        ctx->pc = 0x35F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F95Cu;
        // 0x35f960: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F964u;
        goto label_35f964;
    }
    ctx->pc = 0x35F95Cu;
    SET_GPR_U32(ctx, 31, 0x35F964u);
    ctx->pc = 0x35F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F95Cu;
    // 0x35f960: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x35F95Cu, 0x35F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F964u;
label_35f964:
    // 0x35f964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35f964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f968:
    // 0x35f968: 0xc0b1488  jal         func_2C5220
label_35f96c:
    if (ctx->pc == 0x35F96Cu) {
        ctx->pc = 0x35F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F968u;
        // 0x35f96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F970u;
        goto label_35f970;
    }
    ctx->pc = 0x35F968u;
    SET_GPR_U32(ctx, 31, 0x35F970u);
    ctx->pc = 0x35F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F968u;
    // 0x35f96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35F968u, 0x35F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F970u;
label_35f970:
    // 0x35f970: 0xc0b1488  jal         func_2C5220
label_35f974:
    if (ctx->pc == 0x35F974u) {
        ctx->pc = 0x35F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F970u;
        // 0x35f974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F978u;
        goto label_35f978;
    }
    ctx->pc = 0x35F970u;
    SET_GPR_U32(ctx, 31, 0x35F978u);
    ctx->pc = 0x35F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F970u;
    // 0x35f974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35F970u, 0x35F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F978u;
label_35f978:
    // 0x35f978: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x35f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_35f97c:
    // 0x35f97c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x35f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f980:
    // 0x35f980: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f984:
    // 0x35f984: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x35f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35f988:
    // 0x35f988: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35f988u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_35f98c:
    // 0x35f98c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35f98cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_35f990:
    // 0x35f990: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35f990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_35f994:
    // 0x35f994: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x35f994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_35f998:
    // 0x35f998: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x35f998u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_35f99c:
    // 0x35f99c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_35f9a0:
    // 0x35f9a0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x35f9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35f9a4:
    // 0x35f9a4: 0x460000c5  abs.s       $f3, $f0
    ctx->pc = 0x35f9a4u;
    ctx->f[3] = FPU_ABS_S(ctx->f[0]);
label_35f9a8:
    // 0x35f9a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x35f9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_35f9ac:
    // 0x35f9ac: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x35f9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f9b0:
    // 0x35f9b0: 0x0  nop
    ctx->pc = 0x35f9b0u;
    // NOP
label_35f9b4:
    // 0x35f9b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_35f9b8:
    if (ctx->pc == 0x35F9B8u) {
        ctx->pc = 0x35F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9B4u;
        // 0x35f9b8: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F9BCu;
        goto label_35f9bc;
    }
    ctx->pc = 0x35F9B4u;
    {
        const bool branch_taken_0x35f9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9B4u;
        // 0x35f9b8: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9b4) {
            ctx->pc = 0x35F9C8u;
            goto label_35f9c8;
        }
    }
    ctx->pc = 0x35F9BCu;
label_35f9bc:
    // 0x35f9bc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_35f9c0:
    // 0x35f9c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_35f9c4:
    if (ctx->pc == 0x35F9C4u) {
        ctx->pc = 0x35F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9C0u;
        // 0x35f9c4: 0x24455b40  addiu       $a1, $v0, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F9C8u;
        goto label_35f9c8;
    }
    ctx->pc = 0x35F9C0u;
    {
        const bool branch_taken_0x35f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9C0u;
        // 0x35f9c4: 0x24455b40  addiu       $a1, $v0, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9c0) {
            ctx->pc = 0x35F9D0u;
            goto label_35f9d0;
        }
    }
    ctx->pc = 0x35F9C8u;
label_35f9c8:
    // 0x35f9c8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_35f9cc:
    // 0x35f9cc: 0x24455b30  addiu       $a1, $v0, 0x5B30
    ctx->pc = 0x35f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
label_35f9d0:
    // 0x35f9d0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x35f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f9d4:
    // 0x35f9d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35f9d8:
    // 0x35f9d8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x35f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35f9dc:
    // 0x35f9dc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x35f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35f9e0:
    // 0x35f9e0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x35f9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_35f9e4:
    // 0x35f9e4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x35f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f9e8:
    // 0x35f9e8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x35f9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_35f9ec:
    // 0x35f9ec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x35f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f9f0:
    // 0x35f9f0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x35f9f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_35f9f4:
    // 0x35f9f4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x35f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f9f8:
    // 0x35f9f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x35f9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_35f9fc:
    // 0x35f9fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35f9fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35fa00:
    // 0x35fa00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35fa00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35fa04:
    // 0x35fa04: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35fa04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_35fa08:
    // 0x35fa08: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x35fa08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35fa0c:
    // 0x35fa0c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x35fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fa10:
    // 0x35fa10: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x35fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35fa14:
    // 0x35fa14: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x35fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35fa18:
    // 0x35fa18: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x35fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fa1c:
    // 0x35fa1c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x35fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fa20:
    // 0x35fa20: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x35fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35fa24:
    // 0x35fa24: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x35fa24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_35fa28:
    // 0x35fa28: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x35fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_35fa2c:
    // 0x35fa2c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x35fa2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_35fa30:
    // 0x35fa30: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x35fa30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_35fa34:
    // 0x35fa34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35fa34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35fa38:
    // 0x35fa38: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35fa38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35fa3c:
    // 0x35fa3c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35fa3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35fa40:
    // 0x35fa40: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35fa40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35fa44:
    // 0x35fa44: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35fa44u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35fa48:
    // 0x35fa48: 0x4a0003bf  vwaitq
    ctx->pc = 0x35fa48u;
    // VWAITQ (Q already resolved in this runtime)
label_35fa4c:
    // 0x35fa4c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35fa4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35fa50:
    // 0x35fa50: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x35fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fa54:
    // 0x35fa54: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35fa54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35fa58:
    // 0x35fa58: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x35fa58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35fa5c:
    // 0x35fa5c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35fa5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_35fa60:
    // 0x35fa60: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x35fa60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35fa64:
    // 0x35fa64: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x35fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fa68:
    // 0x35fa68: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x35fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fa6c:
    // 0x35fa6c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x35fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fa70:
    // 0x35fa70: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x35fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35fa74:
    // 0x35fa74: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x35fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35fa78:
    // 0x35fa78: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x35fa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_35fa7c:
    // 0x35fa7c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x35fa7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_35fa80:
    // 0x35fa80: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x35fa80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_35fa84:
    // 0x35fa84: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x35fa84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_35fa88:
    // 0x35fa88: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35fa88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_35fa8c:
    // 0x35fa8c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35fa8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35fa90:
    // 0x35fa90: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35fa90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35fa94:
    // 0x35fa94: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35fa94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_35fa98:
    // 0x35fa98: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35fa98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_35fa9c:
    // 0x35fa9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x35fa9cu;
    // VWAITQ (Q already resolved in this runtime)
label_35faa0:
    // 0x35faa0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35faa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35faa4:
    // 0x35faa4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x35faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_35faa8:
    // 0x35faa8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35faa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_35faac:
    // 0x35faac: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x35faacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fab0:
    // 0x35fab0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35fab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_35fab4:
    // 0x35fab4: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35fab4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fab8:
    // 0x35fab8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35fab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_35fabc:
    // 0x35fabc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x35fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fac0:
    // 0x35fac0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35fac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_35fac4:
    // 0x35fac4: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x35fac4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fac8:
    // 0x35fac8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x35fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_35facc:
    // 0x35facc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35faccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35fad0:
    // 0x35fad0: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x35fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_35fad4:
    // 0x35fad4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fad8:
    // 0x35fad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35fad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fadc:
    // 0x35fadc: 0xc0b0a1c  jal         func_2C2870
label_35fae0:
    if (ctx->pc == 0x35FAE0u) {
        ctx->pc = 0x35FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FADCu;
        // 0x35fae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FAE4u;
        goto label_35fae4;
    }
    ctx->pc = 0x35FADCu;
    SET_GPR_U32(ctx, 31, 0x35FAE4u);
    ctx->pc = 0x35FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FADCu;
    // 0x35fae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x35FADCu, 0x35FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAE4u;
label_35fae4:
    // 0x35fae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35fae8:
    if (ctx->pc == 0x35FAE8u) {
        ctx->pc = 0x35FAECu;
        goto label_35faec;
    }
    ctx->pc = 0x35FAE4u;
    {
        const bool branch_taken_0x35fae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fae4) {
            ctx->pc = 0x35FAF4u;
            goto label_35faf4;
        }
    }
    ctx->pc = 0x35FAECu;
label_35faec:
    // 0x35faec: 0xc0b0ef2  jal         func_2C3BC8
label_35faf0:
    if (ctx->pc == 0x35FAF0u) {
        ctx->pc = 0x35FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAECu;
        // 0x35faf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FAF4u;
        goto label_35faf4;
    }
    ctx->pc = 0x35FAECu;
    SET_GPR_U32(ctx, 31, 0x35FAF4u);
    ctx->pc = 0x35FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAECu;
    // 0x35faf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x35FAECu, 0x35FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAF4u;
label_35faf4:
    // 0x35faf4: 0x12000082  beqz        $s0, . + 4 + (0x82 << 2)
label_35faf8:
    if (ctx->pc == 0x35FAF8u) {
        ctx->pc = 0x35FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAF4u;
        // 0x35faf8: 0x26445ad0  addiu       $a0, $s2, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FAFCu;
        goto label_35fafc;
    }
    ctx->pc = 0x35FAF4u;
    {
        const bool branch_taken_0x35faf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAF4u;
        // 0x35faf8: 0x26445ad0  addiu       $a0, $s2, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35faf4) {
            ctx->pc = 0x35FD00u;
            goto label_35fd00;
        }
    }
    ctx->pc = 0x35FAFCu;
label_35fafc:
    // 0x35fafc: 0xc0b2b08  jal         func_2CAC20
label_35fb00:
    if (ctx->pc == 0x35FB00u) {
        ctx->pc = 0x35FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FAFCu;
        // 0x35fb00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB04u;
        goto label_35fb04;
    }
    ctx->pc = 0x35FAFCu;
    SET_GPR_U32(ctx, 31, 0x35FB04u);
    ctx->pc = 0x35FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAFCu;
    // 0x35fb00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x35FAFCu, 0x35FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB04u;
label_35fb04:
    // 0x35fb04: 0x100000cf  b           . + 4 + (0xCF << 2)
label_35fb08:
    if (ctx->pc == 0x35FB08u) {
        ctx->pc = 0x35FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB04u;
        // 0x35fb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB0Cu;
        goto label_35fb0c;
    }
    ctx->pc = 0x35FB04u;
    {
        const bool branch_taken_0x35fb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB04u;
        // 0x35fb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb04) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FB0Cu;
label_35fb0c:
    // 0x35fb0c: 0x8c43c33c  lw          $v1, -0x3CC4($v0)
    ctx->pc = 0x35fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951740)));
label_35fb10:
    // 0x35fb10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_35fb14:
    if (ctx->pc == 0x35FB14u) {
        ctx->pc = 0x35FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB10u;
        // 0x35fb14: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB18u;
        goto label_35fb18;
    }
    ctx->pc = 0x35FB10u;
    {
        const bool branch_taken_0x35fb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB10u;
        // 0x35fb14: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb10) {
            ctx->pc = 0x35FB30u;
            goto label_35fb30;
        }
    }
    ctx->pc = 0x35FB18u;
label_35fb18:
    // 0x35fb18: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x35fb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35fb1c:
    // 0x35fb1c: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x35fb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_35fb20:
    // 0x35fb20: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x35fb20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_35fb24:
    // 0x35fb24: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35fb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_35fb28:
    // 0x35fb28: 0x10000005  b           . + 4 + (0x5 << 2)
label_35fb2c:
    if (ctx->pc == 0x35FB2Cu) {
        ctx->pc = 0x35FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB28u;
        // 0x35fb2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB30u;
        goto label_35fb30;
    }
    ctx->pc = 0x35FB28u;
    {
        const bool branch_taken_0x35fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB28u;
        // 0x35fb2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb28) {
            ctx->pc = 0x35FB40u;
            goto label_35fb40;
        }
    }
    ctx->pc = 0x35FB30u;
label_35fb30:
    // 0x35fb30: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x35fb30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_35fb34:
    // 0x35fb34: 0x0  nop
    ctx->pc = 0x35fb34u;
    // NOP
label_35fb38:
    // 0x35fb38: 0x46007b86  mov.s       $f14, $f15
    ctx->pc = 0x35fb38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[15]);
label_35fb3c:
    // 0x35fb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fb40:
    // 0x35fb40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x35fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_35fb44:
    // 0x35fb44: 0xc44cc334  lwc1        $f12, -0x3CCC($v0)
    ctx->pc = 0x35fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35fb48:
    // 0x35fb48: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x35fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_35fb4c:
    // 0x35fb4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35fb50:
    // 0x35fb50: 0x8c6bc338  lw          $t3, -0x3CC8($v1)
    ctx->pc = 0x35fb50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951736)));
label_35fb54:
    // 0x35fb54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35fb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fb58:
    // 0x35fb58: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35fb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_35fb5c:
    // 0x35fb5c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x35fb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_35fb60:
    // 0x35fb60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fb64:
    // 0x35fb64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35fb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35fb68:
    // 0x35fb68: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x35fb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_35fb6c:
    // 0x35fb6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35fb6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35fb70:
    // 0x35fb70: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35fb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fb74:
    // 0x35fb74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35fb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fb78:
    // 0x35fb78: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x35fb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fb7c:
    // 0x35fb7c: 0xc0cf430  jal         func_33D0C0
label_35fb80:
    if (ctx->pc == 0x35FB80u) {
        ctx->pc = 0x35FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB7Cu;
        // 0x35fb80: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB84u;
        goto label_35fb84;
    }
    ctx->pc = 0x35FB7Cu;
    SET_GPR_U32(ctx, 31, 0x35FB84u);
    ctx->pc = 0x35FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB7Cu;
    // 0x35fb80: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x35FB7Cu, 0x35FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB84u;
label_35fb84:
    // 0x35fb84: 0x100000af  b           . + 4 + (0xAF << 2)
label_35fb88:
    if (ctx->pc == 0x35FB88u) {
        ctx->pc = 0x35FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB84u;
        // 0x35fb88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB8Cu;
        goto label_35fb8c;
    }
    ctx->pc = 0x35FB84u;
    {
        const bool branch_taken_0x35fb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB84u;
        // 0x35fb88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fb84) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FB8Cu;
label_35fb8c:
    // 0x35fb8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35fb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fb90:
    // 0x35fb90: 0xc0d8de2  jal         func_363788
label_35fb94:
    if (ctx->pc == 0x35FB94u) {
        ctx->pc = 0x35FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB90u;
        // 0x35fb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FB98u;
        goto label_35fb98;
    }
    ctx->pc = 0x35FB90u;
    SET_GPR_U32(ctx, 31, 0x35FB98u);
    ctx->pc = 0x35FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB90u;
    // 0x35fb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35FB90u, 0x35FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB98u;
label_35fb98:
    // 0x35fb98: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_35fb9c:
    if (ctx->pc == 0x35FB9Cu) {
        ctx->pc = 0x35FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB98u;
        // 0x35fb9c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBA0u;
        goto label_35fba0;
    }
    ctx->pc = 0x35FB98u;
    {
        const bool branch_taken_0x35fb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fb98) {
            ctx->pc = 0x35FB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FB98u;
            // 0x35fb9c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FBB4u;
            goto label_35fbb4;
        }
    }
    ctx->pc = 0x35FBA0u;
label_35fba0:
    // 0x35fba0: 0xc0d8de2  jal         func_363788
label_35fba4:
    if (ctx->pc == 0x35FBA4u) {
        ctx->pc = 0x35FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBA0u;
        // 0x35fba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBA8u;
        goto label_35fba8;
    }
    ctx->pc = 0x35FBA0u;
    SET_GPR_U32(ctx, 31, 0x35FBA8u);
    ctx->pc = 0x35FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBA0u;
    // 0x35fba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35FBA0u, 0x35FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBA8u;
label_35fba8:
    // 0x35fba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fbac:
    // 0x35fbac: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_35fbb0:
    if (ctx->pc == 0x35FBB0u) {
        ctx->pc = 0x35FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBACu;
        // 0x35fbb0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBB4u;
        goto label_35fbb4;
    }
    ctx->pc = 0x35FBACu;
    {
        const bool branch_taken_0x35fbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fbac) {
            ctx->pc = 0x35FBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FBACu;
            // 0x35fbb0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FBB4u;
            goto label_35fbb4;
        }
    }
    ctx->pc = 0x35FBB4u;
label_35fbb4:
    // 0x35fbb4: 0x122000a3  beqz        $s1, . + 4 + (0xA3 << 2)
label_35fbb8:
    if (ctx->pc == 0x35FBB8u) {
        ctx->pc = 0x35FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBB4u;
        // 0x35fbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBBCu;
        goto label_35fbbc;
    }
    ctx->pc = 0x35FBB4u;
    {
        const bool branch_taken_0x35fbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBB4u;
        // 0x35fbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fbb4) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FBBCu;
label_35fbbc:
    // 0x35fbbc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x35fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35fbc0:
    // 0x35fbc0: 0xc0899bc  jal         func_2266F0
label_35fbc4:
    if (ctx->pc == 0x35FBC4u) {
        ctx->pc = 0x35FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBC0u;
        // 0x35fbc4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBC8u;
        goto label_35fbc8;
    }
    ctx->pc = 0x35FBC0u;
    SET_GPR_U32(ctx, 31, 0x35FBC8u);
    ctx->pc = 0x35FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBC0u;
    // 0x35fbc4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x35FBC0u, 0x35FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBC8u;
label_35fbc8:
    // 0x35fbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35fbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35fbcc:
    // 0x35fbcc: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x35fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_35fbd0:
    // 0x35fbd0: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x35fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_35fbd4:
    // 0x35fbd4: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x35fbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_35fbd8:
    // 0x35fbd8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_35fbdc:
    if (ctx->pc == 0x35FBDCu) {
        ctx->pc = 0x35FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBD8u;
        // 0x35fbdc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBE0u;
        goto label_35fbe0;
    }
    ctx->pc = 0x35FBD8u;
    {
        const bool branch_taken_0x35fbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fbd8) {
            ctx->pc = 0x35FBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FBD8u;
            // 0x35fbdc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FBF0u;
            goto label_35fbf0;
        }
    }
    ctx->pc = 0x35FBE0u;
label_35fbe0:
    // 0x35fbe0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x35fbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_35fbe4:
    // 0x35fbe4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_35fbe8:
    if (ctx->pc == 0x35FBE8u) {
        ctx->pc = 0x35FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBE4u;
        // 0x35fbe8: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FBECu;
        goto label_35fbec;
    }
    ctx->pc = 0x35FBE4u;
    {
        const bool branch_taken_0x35fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fbe4) {
            ctx->pc = 0x35FBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FBE4u;
            // 0x35fbe8: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FC20u;
            goto label_35fc20;
        }
    }
    ctx->pc = 0x35FBECu;
label_35fbec:
    // 0x35fbec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x35fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35fbf0:
    // 0x35fbf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35fbf4:
    // 0x35fbf4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x35fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_35fbf8:
    // 0x35fbf8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35fbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_35fbfc:
    // 0x35fbfc: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
label_35fc00:
    if (ctx->pc == 0x35FC00u) {
        ctx->pc = 0x35FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBFCu;
        // 0x35fc00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC04u;
        goto label_35fc04;
    }
    ctx->pc = 0x35FBFCu;
    {
        const bool branch_taken_0x35fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBFCu;
        // 0x35fc00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fbfc) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FC04u;
label_35fc04:
    // 0x35fc04: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x35fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_35fc08:
    // 0x35fc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fc0c:
    // 0x35fc0c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x35fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_35fc10:
    // 0x35fc10: 0x40f809  jalr        $v0
label_35fc14:
    if (ctx->pc == 0x35FC14u) {
        ctx->pc = 0x35FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC10u;
        // 0x35fc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC18u;
        goto label_35fc18;
    }
    ctx->pc = 0x35FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35FC18u);
        ctx->pc = 0x35FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC10u;
        // 0x35fc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC10u, 0x35FC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35FC18u;
label_35fc18:
    // 0x35fc18: 0x1000008a  b           . + 4 + (0x8A << 2)
label_35fc1c:
    if (ctx->pc == 0x35FC1Cu) {
        ctx->pc = 0x35FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC18u;
        // 0x35fc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC20u;
        goto label_35fc20;
    }
    ctx->pc = 0x35FC18u;
    {
        const bool branch_taken_0x35fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC18u;
        // 0x35fc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc18) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FC20u;
label_35fc20:
    // 0x35fc20: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x35fc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_35fc24:
    // 0x35fc24: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_35fc28:
    if (ctx->pc == 0x35FC28u) {
        ctx->pc = 0x35FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC24u;
        // 0x35fc28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC2Cu;
        goto label_35fc2c;
    }
    ctx->pc = 0x35FC24u;
    {
        const bool branch_taken_0x35fc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC24u;
        // 0x35fc28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc24) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FC2Cu;
label_35fc2c:
    // 0x35fc2c: 0xc097f26  jal         func_25FC98
label_35fc30:
    if (ctx->pc == 0x35FC30u) {
        ctx->pc = 0x35FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC2Cu;
        // 0x35fc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC34u;
        goto label_35fc34;
    }
    ctx->pc = 0x35FC2Cu;
    SET_GPR_U32(ctx, 31, 0x35FC34u);
    ctx->pc = 0x35FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC2Cu;
    // 0x35fc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x35FC2Cu, 0x35FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC34u;
label_35fc34:
    // 0x35fc34: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x35fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_35fc38:
    // 0x35fc38: 0x54430082  bnel        $v0, $v1, . + 4 + (0x82 << 2)
label_35fc3c:
    if (ctx->pc == 0x35FC3Cu) {
        ctx->pc = 0x35FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC38u;
        // 0x35fc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC40u;
        goto label_35fc40;
    }
    ctx->pc = 0x35FC38u;
    {
        const bool branch_taken_0x35fc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35fc38) {
            ctx->pc = 0x35FC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FC38u;
            // 0x35fc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FC40u;
label_35fc40:
    // 0x35fc40: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x35fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_35fc44:
    // 0x35fc44: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x35fc44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fc48:
    // 0x35fc48: 0x8e6c0004  lw          $t4, 0x4($s3)
    ctx->pc = 0x35fc48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35fc4c:
    // 0x35fc4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35fc50:
    // 0x35fc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35fc54:
    // 0x35fc54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x35fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35fc58:
    // 0x35fc58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35fc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_35fc5c:
    // 0x35fc5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35fc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35fc60:
    // 0x35fc60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fc64:
    // 0x35fc64: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x35fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fc68:
    // 0x35fc68: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35fc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fc6c:
    // 0x35fc6c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_35fc70:
    // 0x35fc70: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x35fc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_35fc74:
    // 0x35fc74: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x35fc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_35fc78:
    // 0x35fc78: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35fc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_35fc7c:
    // 0x35fc7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35fc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35fc80:
    // 0x35fc80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35fc80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35fc84:
    // 0x35fc84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35fc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_35fc88:
    // 0x35fc88: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x35fc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_35fc8c:
    // 0x35fc8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35fc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fc90:
    // 0x35fc90: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fc94:
    // 0x35fc94: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x35fc94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fc98:
    // 0x35fc98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35fc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35fc9c:
    // 0x35fc9c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x35fc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_35fca0:
    // 0x35fca0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x35fca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fca4:
    // 0x35fca4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35fca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35fca8:
    // 0x35fca8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x35fca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35fcac:
    // 0x35fcac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x35fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fcb0:
    // 0x35fcb0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x35fcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35fcb4:
    // 0x35fcb4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x35fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fcb8:
    // 0x35fcb8: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x35fcb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35fcbc:
    // 0x35fcbc: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x35fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_35fcc0:
    // 0x35fcc0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x35fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_35fcc4:
    // 0x35fcc4: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x35fcc4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35fcc8:
    // 0x35fcc8: 0x25820060  addiu       $v0, $t4, 0x60
    ctx->pc = 0x35fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
label_35fccc:
    // 0x35fccc: 0xc5810060  lwc1        $f1, 0x60($t4)
    ctx->pc = 0x35fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fcd0:
    // 0x35fcd0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x35fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35fcd4:
    // 0x35fcd4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fcd8:
    // 0x35fcd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35fcd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_35fcdc:
    // 0x35fcdc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_35fce0:
    // 0x35fce0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x35fce0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_35fce4:
    // 0x35fce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35fce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_35fce8:
    // 0x35fce8: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x35fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
label_35fcec:
    // 0x35fcec: 0xc7ae005c  lwc1        $f14, 0x5C($sp)
    ctx->pc = 0x35fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_35fcf0:
    // 0x35fcf0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x35fcf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35fcf4:
    // 0x35fcf4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x35fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_35fcf8:
    // 0x35fcf8: 0xc0cf430  jal         func_33D0C0
label_35fcfc:
    if (ctx->pc == 0x35FCFCu) {
        ctx->pc = 0x35FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCF8u;
        // 0x35fcfc: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD00u;
        goto label_35fd00;
    }
    ctx->pc = 0x35FCF8u;
    SET_GPR_U32(ctx, 31, 0x35FD00u);
    ctx->pc = 0x35FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCF8u;
    // 0x35fcfc: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x35FCF8u, 0x35FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD00u;
label_35fd00:
    // 0x35fd00: 0x10000050  b           . + 4 + (0x50 << 2)
label_35fd04:
    if (ctx->pc == 0x35FD04u) {
        ctx->pc = 0x35FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD00u;
        // 0x35fd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD08u;
        goto label_35fd08;
    }
    ctx->pc = 0x35FD00u;
    {
        const bool branch_taken_0x35fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD00u;
        // 0x35fd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd00) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FD08u;
label_35fd08:
    // 0x35fd08: 0xc0d8de2  jal         func_363788
label_35fd0c:
    if (ctx->pc == 0x35FD0Cu) {
        ctx->pc = 0x35FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD08u;
        // 0x35fd0c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD10u;
        goto label_35fd10;
    }
    ctx->pc = 0x35FD08u;
    SET_GPR_U32(ctx, 31, 0x35FD10u);
    ctx->pc = 0x35FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FD08u;
    // 0x35fd0c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35FD08u, 0x35FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD10u;
label_35fd10:
    // 0x35fd10: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x35fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_35fd14:
    // 0x35fd14: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_35fd18:
    if (ctx->pc == 0x35FD18u) {
        ctx->pc = 0x35FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD14u;
        // 0x35fd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD1Cu;
        goto label_35fd1c;
    }
    ctx->pc = 0x35FD14u;
    {
        const bool branch_taken_0x35fd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD14u;
        // 0x35fd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd14) {
            ctx->pc = 0x35FE44u;
            goto label_35fe44;
        }
    }
    ctx->pc = 0x35FD1Cu;
label_35fd1c:
    // 0x35fd1c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x35fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35fd20:
    // 0x35fd20: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x35fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35fd24:
    // 0x35fd24: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_35fd28:
    if (ctx->pc == 0x35FD28u) {
        ctx->pc = 0x35FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD24u;
        // 0x35fd28: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD2Cu;
        goto label_35fd2c;
    }
    ctx->pc = 0x35FD24u;
    {
        const bool branch_taken_0x35fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fd24) {
            ctx->pc = 0x35FD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FD24u;
            // 0x35fd28: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FE14u;
            goto label_35fe14;
        }
    }
    ctx->pc = 0x35FD2Cu;
label_35fd2c:
    // 0x35fd2c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x35fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_35fd30:
    // 0x35fd30: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x35fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_35fd34:
    // 0x35fd34: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_35fd38:
    if (ctx->pc == 0x35FD38u) {
        ctx->pc = 0x35FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD34u;
        // 0x35fd38: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD3Cu;
        goto label_35fd3c;
    }
    ctx->pc = 0x35FD34u;
    {
        const bool branch_taken_0x35fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD34u;
        // 0x35fd38: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd34) {
            ctx->pc = 0x35FE10u;
            goto label_35fe10;
        }
    }
    ctx->pc = 0x35FD3Cu;
label_35fd3c:
    // 0x35fd3c: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x35fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_35fd40:
    // 0x35fd40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35fd44:
    // 0x35fd44: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x35fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_35fd48:
    // 0x35fd48: 0x60f809  jalr        $v1
label_35fd4c:
    if (ctx->pc == 0x35FD4Cu) {
        ctx->pc = 0x35FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD48u;
        // 0x35fd4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FD50u;
        goto label_35fd50;
    }
    ctx->pc = 0x35FD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35FD50u);
        ctx->pc = 0x35FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD48u;
        // 0x35fd4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD48u, 0x35FD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35FD50u;
label_35fd50:
    // 0x35fd50: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x35fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_35fd54:
    // 0x35fd54: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x35fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fd58:
    // 0x35fd58: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x35fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35fd5c:
    // 0x35fd5c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x35fd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35fd60:
    // 0x35fd60: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x35fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35fd64:
    // 0x35fd64: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x35fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35fd68:
    // 0x35fd68: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x35fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_35fd6c:
    // 0x35fd6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35fd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35fd70:
    // 0x35fd70: 0x0  nop
    ctx->pc = 0x35fd70u;
    // NOP
label_35fd74:
    // 0x35fd74: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x35fd74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_35fd78:
    // 0x35fd78: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x35fd78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_35fd7c:
    // 0x35fd7c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x35fd7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_35fd80:
    // 0x35fd80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35fd80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_35fd84:
    // 0x35fd84: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x35fd84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35fd88:
    // 0x35fd88: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x35fd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_35fd8c:
    // 0x35fd8c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x35fd8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35fd90:
    // 0x35fd90: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35fd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35fd94:
    // 0x35fd94: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x35fd94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_35fd98:
    // 0x35fd98: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x35fd98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_35fd9c:
    // 0x35fd9c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35fd9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_35fda0:
    // 0x35fda0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_35fda4:
    // 0x35fda4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x35fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35fda8:
    // 0x35fda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fdac:
    // 0x35fdac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x35fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fdb0:
    // 0x35fdb0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x35fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fdb4:
    // 0x35fdb4: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x35fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35fdb8:
    // 0x35fdb8: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x35fdb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_35fdbc:
    // 0x35fdbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35fdc0:
    // 0x35fdc0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35fdc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_35fdc4:
    // 0x35fdc4: 0xc0f6a96  jal         func_3DAA58
label_35fdc8:
    if (ctx->pc == 0x35FDC8u) {
        ctx->pc = 0x35FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FDC4u;
        // 0x35fdc8: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FDCCu;
        goto label_35fdcc;
    }
    ctx->pc = 0x35FDC4u;
    SET_GPR_U32(ctx, 31, 0x35FDCCu);
    ctx->pc = 0x35FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDC4u;
    // 0x35fdc8: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35FDC4u, 0x35FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDCCu;
label_35fdcc:
    // 0x35fdcc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_35fdd0:
    // 0x35fdd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x35fdd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fdd4:
    // 0x35fdd4: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x35fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_35fdd8:
    // 0x35fdd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35fdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35fddc:
    // 0x35fddc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35fde0:
    // 0x35fde0: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x35fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_35fde4:
    // 0x35fde4: 0xc0791fe  jal         func_1E47F8
label_35fde8:
    if (ctx->pc == 0x35FDE8u) {
        ctx->pc = 0x35FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FDE4u;
        // 0x35fde8: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FDECu;
        goto label_35fdec;
    }
    ctx->pc = 0x35FDE4u;
    SET_GPR_U32(ctx, 31, 0x35FDECu);
    ctx->pc = 0x35FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDE4u;
    // 0x35fde8: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x35FDE4u, 0x35FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDECu;
label_35fdec:
    // 0x35fdec: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x35fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_35fdf0:
    // 0x35fdf0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_35fdf4:
    // 0x35fdf4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x35fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_35fdf8:
    // 0x35fdf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35fdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fdfc:
    // 0x35fdfc: 0x24e76be0  addiu       $a3, $a3, 0x6BE0
    ctx->pc = 0x35fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27616));
label_35fe00:
    // 0x35fe00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x35fe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35fe04:
    // 0x35fe04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35fe04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35fe08:
    // 0x35fe08: 0xc07f672  jal         func_1FD9C8
label_35fe0c:
    if (ctx->pc == 0x35FE0Cu) {
        ctx->pc = 0x35FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE08u;
        // 0x35fe0c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FE10u;
        goto label_35fe10;
    }
    ctx->pc = 0x35FE08u;
    SET_GPR_U32(ctx, 31, 0x35FE10u);
    ctx->pc = 0x35FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE08u;
    // 0x35fe0c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x35FE08u, 0x35FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE10u;
label_35fe10:
    // 0x35fe10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35fe14:
    // 0x35fe14: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x35fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_35fe18:
    // 0x35fe18: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_35fe1c:
    if (ctx->pc == 0x35FE1Cu) {
        ctx->pc = 0x35FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE18u;
        // 0x35fe1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FE20u;
        goto label_35fe20;
    }
    ctx->pc = 0x35FE18u;
    {
        const bool branch_taken_0x35fe18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE18u;
        // 0x35fe1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe18) {
            ctx->pc = 0x35FE40u;
            goto label_35fe40;
        }
    }
    ctx->pc = 0x35FE20u;
label_35fe20:
    // 0x35fe20: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x35fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_35fe24:
    // 0x35fe24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35fe24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_35fe28:
    // 0x35fe28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35fe28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35fe2c:
    // 0x35fe2c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x35fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_35fe30:
    // 0x35fe30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35fe34:
    // 0x35fe34: 0xc44c0058  lwc1        $f12, 0x58($v0)
    ctx->pc = 0x35fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35fe38:
    // 0x35fe38: 0xc0d7746  jal         func_35DD18
label_35fe3c:
    if (ctx->pc == 0x35FE3Cu) {
        ctx->pc = 0x35FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE38u;
        // 0x35fe3c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FE40u;
        goto label_35fe40;
    }
    ctx->pc = 0x35FE38u;
    SET_GPR_U32(ctx, 31, 0x35FE40u);
    ctx->pc = 0x35FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE38u;
    // 0x35fe3c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DD18u, 0x35FE38u, 0x35FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE40u;
label_35fe40:
    // 0x35fe40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fe40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fe44:
    // 0x35fe44: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x35fe44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_35fe48:
    // 0x35fe48: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x35fe48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_35fe4c:
    // 0x35fe4c: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x35fe4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_35fe50:
    // 0x35fe50: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x35fe50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_35fe54:
    // 0x35fe54: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x35fe54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_35fe58:
    // 0x35fe58: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x35fe58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_35fe5c:
    // 0x35fe5c: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x35fe5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_35fe60:
    // 0x35fe60: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x35fe60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_35fe64:
    // 0x35fe64: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x35fe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_35fe68:
    // 0x35fe68: 0xc7b901d8  lwc1        $f25, 0x1D8($sp)
    ctx->pc = 0x35fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_35fe6c:
    // 0x35fe6c: 0xc7b801d0  lwc1        $f24, 0x1D0($sp)
    ctx->pc = 0x35fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_35fe70:
    // 0x35fe70: 0xc7b701c8  lwc1        $f23, 0x1C8($sp)
    ctx->pc = 0x35fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_35fe74:
    // 0x35fe74: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x35fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_35fe78:
    // 0x35fe78: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x35fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35fe7c:
    // 0x35fe7c: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x35fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35fe80:
    // 0x35fe80: 0x3e00008  jr          $ra
label_35fe84:
    if (ctx->pc == 0x35FE84u) {
        ctx->pc = 0x35FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE80u;
        // 0x35fe84: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FE88u;
        goto label_fallthrough_0x35fe80;
    }
    ctx->pc = 0x35FE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE80u;
        // 0x35fe84: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35fe80:
    ctx->pc = 0x35FE88u;
}
