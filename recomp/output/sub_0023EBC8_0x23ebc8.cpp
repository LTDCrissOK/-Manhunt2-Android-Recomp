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

// Function: sub_0023EBC8
// Address: 0x23ebc8 - 0x23f138
void sub_0023EBC8_0x23ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EBC8_0x23ebc8");
#endif

    switch (ctx->pc) {
        case 0x23ebc8u: goto label_23ebc8;
        case 0x23ebccu: goto label_23ebcc;
        case 0x23ebd0u: goto label_23ebd0;
        case 0x23ebd4u: goto label_23ebd4;
        case 0x23ebd8u: goto label_23ebd8;
        case 0x23ebdcu: goto label_23ebdc;
        case 0x23ebe0u: goto label_23ebe0;
        case 0x23ebe4u: goto label_23ebe4;
        case 0x23ebe8u: goto label_23ebe8;
        case 0x23ebecu: goto label_23ebec;
        case 0x23ebf0u: goto label_23ebf0;
        case 0x23ebf4u: goto label_23ebf4;
        case 0x23ebf8u: goto label_23ebf8;
        case 0x23ebfcu: goto label_23ebfc;
        case 0x23ec00u: goto label_23ec00;
        case 0x23ec04u: goto label_23ec04;
        case 0x23ec08u: goto label_23ec08;
        case 0x23ec0cu: goto label_23ec0c;
        case 0x23ec10u: goto label_23ec10;
        case 0x23ec14u: goto label_23ec14;
        case 0x23ec18u: goto label_23ec18;
        case 0x23ec1cu: goto label_23ec1c;
        case 0x23ec20u: goto label_23ec20;
        case 0x23ec24u: goto label_23ec24;
        case 0x23ec28u: goto label_23ec28;
        case 0x23ec2cu: goto label_23ec2c;
        case 0x23ec30u: goto label_23ec30;
        case 0x23ec34u: goto label_23ec34;
        case 0x23ec38u: goto label_23ec38;
        case 0x23ec3cu: goto label_23ec3c;
        case 0x23ec40u: goto label_23ec40;
        case 0x23ec44u: goto label_23ec44;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec4cu: goto label_23ec4c;
        case 0x23ec50u: goto label_23ec50;
        case 0x23ec54u: goto label_23ec54;
        case 0x23ec58u: goto label_23ec58;
        case 0x23ec5cu: goto label_23ec5c;
        case 0x23ec60u: goto label_23ec60;
        case 0x23ec64u: goto label_23ec64;
        case 0x23ec68u: goto label_23ec68;
        case 0x23ec6cu: goto label_23ec6c;
        case 0x23ec70u: goto label_23ec70;
        case 0x23ec74u: goto label_23ec74;
        case 0x23ec78u: goto label_23ec78;
        case 0x23ec7cu: goto label_23ec7c;
        case 0x23ec80u: goto label_23ec80;
        case 0x23ec84u: goto label_23ec84;
        case 0x23ec88u: goto label_23ec88;
        case 0x23ec8cu: goto label_23ec8c;
        case 0x23ec90u: goto label_23ec90;
        case 0x23ec94u: goto label_23ec94;
        case 0x23ec98u: goto label_23ec98;
        case 0x23ec9cu: goto label_23ec9c;
        case 0x23eca0u: goto label_23eca0;
        case 0x23eca4u: goto label_23eca4;
        case 0x23eca8u: goto label_23eca8;
        case 0x23ecacu: goto label_23ecac;
        case 0x23ecb0u: goto label_23ecb0;
        case 0x23ecb4u: goto label_23ecb4;
        case 0x23ecb8u: goto label_23ecb8;
        case 0x23ecbcu: goto label_23ecbc;
        case 0x23ecc0u: goto label_23ecc0;
        case 0x23ecc4u: goto label_23ecc4;
        case 0x23ecc8u: goto label_23ecc8;
        case 0x23ecccu: goto label_23eccc;
        case 0x23ecd0u: goto label_23ecd0;
        case 0x23ecd4u: goto label_23ecd4;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ecdcu: goto label_23ecdc;
        case 0x23ece0u: goto label_23ece0;
        case 0x23ece4u: goto label_23ece4;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ececu: goto label_23ecec;
        case 0x23ecf0u: goto label_23ecf0;
        case 0x23ecf4u: goto label_23ecf4;
        case 0x23ecf8u: goto label_23ecf8;
        case 0x23ecfcu: goto label_23ecfc;
        case 0x23ed00u: goto label_23ed00;
        case 0x23ed04u: goto label_23ed04;
        case 0x23ed08u: goto label_23ed08;
        case 0x23ed0cu: goto label_23ed0c;
        case 0x23ed10u: goto label_23ed10;
        case 0x23ed14u: goto label_23ed14;
        case 0x23ed18u: goto label_23ed18;
        case 0x23ed1cu: goto label_23ed1c;
        case 0x23ed20u: goto label_23ed20;
        case 0x23ed24u: goto label_23ed24;
        case 0x23ed28u: goto label_23ed28;
        case 0x23ed2cu: goto label_23ed2c;
        case 0x23ed30u: goto label_23ed30;
        case 0x23ed34u: goto label_23ed34;
        case 0x23ed38u: goto label_23ed38;
        case 0x23ed3cu: goto label_23ed3c;
        case 0x23ed40u: goto label_23ed40;
        case 0x23ed44u: goto label_23ed44;
        case 0x23ed48u: goto label_23ed48;
        case 0x23ed4cu: goto label_23ed4c;
        case 0x23ed50u: goto label_23ed50;
        case 0x23ed54u: goto label_23ed54;
        case 0x23ed58u: goto label_23ed58;
        case 0x23ed5cu: goto label_23ed5c;
        case 0x23ed60u: goto label_23ed60;
        case 0x23ed64u: goto label_23ed64;
        case 0x23ed68u: goto label_23ed68;
        case 0x23ed6cu: goto label_23ed6c;
        case 0x23ed70u: goto label_23ed70;
        case 0x23ed74u: goto label_23ed74;
        case 0x23ed78u: goto label_23ed78;
        case 0x23ed7cu: goto label_23ed7c;
        case 0x23ed80u: goto label_23ed80;
        case 0x23ed84u: goto label_23ed84;
        case 0x23ed88u: goto label_23ed88;
        case 0x23ed8cu: goto label_23ed8c;
        case 0x23ed90u: goto label_23ed90;
        case 0x23ed94u: goto label_23ed94;
        case 0x23ed98u: goto label_23ed98;
        case 0x23ed9cu: goto label_23ed9c;
        case 0x23eda0u: goto label_23eda0;
        case 0x23eda4u: goto label_23eda4;
        case 0x23eda8u: goto label_23eda8;
        case 0x23edacu: goto label_23edac;
        case 0x23edb0u: goto label_23edb0;
        case 0x23edb4u: goto label_23edb4;
        case 0x23edb8u: goto label_23edb8;
        case 0x23edbcu: goto label_23edbc;
        case 0x23edc0u: goto label_23edc0;
        case 0x23edc4u: goto label_23edc4;
        case 0x23edc8u: goto label_23edc8;
        case 0x23edccu: goto label_23edcc;
        case 0x23edd0u: goto label_23edd0;
        case 0x23edd4u: goto label_23edd4;
        case 0x23edd8u: goto label_23edd8;
        case 0x23eddcu: goto label_23eddc;
        case 0x23ede0u: goto label_23ede0;
        case 0x23ede4u: goto label_23ede4;
        case 0x23ede8u: goto label_23ede8;
        case 0x23edecu: goto label_23edec;
        case 0x23edf0u: goto label_23edf0;
        case 0x23edf4u: goto label_23edf4;
        case 0x23edf8u: goto label_23edf8;
        case 0x23edfcu: goto label_23edfc;
        case 0x23ee00u: goto label_23ee00;
        case 0x23ee04u: goto label_23ee04;
        case 0x23ee08u: goto label_23ee08;
        case 0x23ee0cu: goto label_23ee0c;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee14u: goto label_23ee14;
        case 0x23ee18u: goto label_23ee18;
        case 0x23ee1cu: goto label_23ee1c;
        case 0x23ee20u: goto label_23ee20;
        case 0x23ee24u: goto label_23ee24;
        case 0x23ee28u: goto label_23ee28;
        case 0x23ee2cu: goto label_23ee2c;
        case 0x23ee30u: goto label_23ee30;
        case 0x23ee34u: goto label_23ee34;
        case 0x23ee38u: goto label_23ee38;
        case 0x23ee3cu: goto label_23ee3c;
        case 0x23ee40u: goto label_23ee40;
        case 0x23ee44u: goto label_23ee44;
        case 0x23ee48u: goto label_23ee48;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee50u: goto label_23ee50;
        case 0x23ee54u: goto label_23ee54;
        case 0x23ee58u: goto label_23ee58;
        case 0x23ee5cu: goto label_23ee5c;
        case 0x23ee60u: goto label_23ee60;
        case 0x23ee64u: goto label_23ee64;
        case 0x23ee68u: goto label_23ee68;
        case 0x23ee6cu: goto label_23ee6c;
        case 0x23ee70u: goto label_23ee70;
        case 0x23ee74u: goto label_23ee74;
        case 0x23ee78u: goto label_23ee78;
        case 0x23ee7cu: goto label_23ee7c;
        case 0x23ee80u: goto label_23ee80;
        case 0x23ee84u: goto label_23ee84;
        case 0x23ee88u: goto label_23ee88;
        case 0x23ee8cu: goto label_23ee8c;
        case 0x23ee90u: goto label_23ee90;
        case 0x23ee94u: goto label_23ee94;
        case 0x23ee98u: goto label_23ee98;
        case 0x23ee9cu: goto label_23ee9c;
        case 0x23eea0u: goto label_23eea0;
        case 0x23eea4u: goto label_23eea4;
        case 0x23eea8u: goto label_23eea8;
        case 0x23eeacu: goto label_23eeac;
        case 0x23eeb0u: goto label_23eeb0;
        case 0x23eeb4u: goto label_23eeb4;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23eebcu: goto label_23eebc;
        case 0x23eec0u: goto label_23eec0;
        case 0x23eec4u: goto label_23eec4;
        case 0x23eec8u: goto label_23eec8;
        case 0x23eeccu: goto label_23eecc;
        case 0x23eed0u: goto label_23eed0;
        case 0x23eed4u: goto label_23eed4;
        case 0x23eed8u: goto label_23eed8;
        case 0x23eedcu: goto label_23eedc;
        case 0x23eee0u: goto label_23eee0;
        case 0x23eee4u: goto label_23eee4;
        case 0x23eee8u: goto label_23eee8;
        case 0x23eeecu: goto label_23eeec;
        case 0x23eef0u: goto label_23eef0;
        case 0x23eef4u: goto label_23eef4;
        case 0x23eef8u: goto label_23eef8;
        case 0x23eefcu: goto label_23eefc;
        case 0x23ef00u: goto label_23ef00;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef08u: goto label_23ef08;
        case 0x23ef0cu: goto label_23ef0c;
        case 0x23ef10u: goto label_23ef10;
        case 0x23ef14u: goto label_23ef14;
        case 0x23ef18u: goto label_23ef18;
        case 0x23ef1cu: goto label_23ef1c;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef2cu: goto label_23ef2c;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef34u: goto label_23ef34;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef3cu: goto label_23ef3c;
        case 0x23ef40u: goto label_23ef40;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef48u: goto label_23ef48;
        case 0x23ef4cu: goto label_23ef4c;
        case 0x23ef50u: goto label_23ef50;
        case 0x23ef54u: goto label_23ef54;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef5cu: goto label_23ef5c;
        case 0x23ef60u: goto label_23ef60;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef68u: goto label_23ef68;
        case 0x23ef6cu: goto label_23ef6c;
        case 0x23ef70u: goto label_23ef70;
        case 0x23ef74u: goto label_23ef74;
        case 0x23ef78u: goto label_23ef78;
        case 0x23ef7cu: goto label_23ef7c;
        case 0x23ef80u: goto label_23ef80;
        case 0x23ef84u: goto label_23ef84;
        case 0x23ef88u: goto label_23ef88;
        case 0x23ef8cu: goto label_23ef8c;
        case 0x23ef90u: goto label_23ef90;
        case 0x23ef94u: goto label_23ef94;
        case 0x23ef98u: goto label_23ef98;
        case 0x23ef9cu: goto label_23ef9c;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efa4u: goto label_23efa4;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efacu: goto label_23efac;
        case 0x23efb0u: goto label_23efb0;
        case 0x23efb4u: goto label_23efb4;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efbcu: goto label_23efbc;
        case 0x23efc0u: goto label_23efc0;
        case 0x23efc4u: goto label_23efc4;
        case 0x23efc8u: goto label_23efc8;
        case 0x23efccu: goto label_23efcc;
        case 0x23efd0u: goto label_23efd0;
        case 0x23efd4u: goto label_23efd4;
        case 0x23efd8u: goto label_23efd8;
        case 0x23efdcu: goto label_23efdc;
        case 0x23efe0u: goto label_23efe0;
        case 0x23efe4u: goto label_23efe4;
        case 0x23efe8u: goto label_23efe8;
        case 0x23efecu: goto label_23efec;
        case 0x23eff0u: goto label_23eff0;
        case 0x23eff4u: goto label_23eff4;
        case 0x23eff8u: goto label_23eff8;
        case 0x23effcu: goto label_23effc;
        case 0x23f000u: goto label_23f000;
        case 0x23f004u: goto label_23f004;
        case 0x23f008u: goto label_23f008;
        case 0x23f00cu: goto label_23f00c;
        case 0x23f010u: goto label_23f010;
        case 0x23f014u: goto label_23f014;
        case 0x23f018u: goto label_23f018;
        case 0x23f01cu: goto label_23f01c;
        case 0x23f020u: goto label_23f020;
        case 0x23f024u: goto label_23f024;
        case 0x23f028u: goto label_23f028;
        case 0x23f02cu: goto label_23f02c;
        case 0x23f030u: goto label_23f030;
        case 0x23f034u: goto label_23f034;
        case 0x23f038u: goto label_23f038;
        case 0x23f03cu: goto label_23f03c;
        case 0x23f040u: goto label_23f040;
        case 0x23f044u: goto label_23f044;
        case 0x23f048u: goto label_23f048;
        case 0x23f04cu: goto label_23f04c;
        case 0x23f050u: goto label_23f050;
        case 0x23f054u: goto label_23f054;
        case 0x23f058u: goto label_23f058;
        case 0x23f05cu: goto label_23f05c;
        case 0x23f060u: goto label_23f060;
        case 0x23f064u: goto label_23f064;
        case 0x23f068u: goto label_23f068;
        case 0x23f06cu: goto label_23f06c;
        case 0x23f070u: goto label_23f070;
        case 0x23f074u: goto label_23f074;
        case 0x23f078u: goto label_23f078;
        case 0x23f07cu: goto label_23f07c;
        case 0x23f080u: goto label_23f080;
        case 0x23f084u: goto label_23f084;
        case 0x23f088u: goto label_23f088;
        case 0x23f08cu: goto label_23f08c;
        case 0x23f090u: goto label_23f090;
        case 0x23f094u: goto label_23f094;
        case 0x23f098u: goto label_23f098;
        case 0x23f09cu: goto label_23f09c;
        case 0x23f0a0u: goto label_23f0a0;
        case 0x23f0a4u: goto label_23f0a4;
        case 0x23f0a8u: goto label_23f0a8;
        case 0x23f0acu: goto label_23f0ac;
        case 0x23f0b0u: goto label_23f0b0;
        case 0x23f0b4u: goto label_23f0b4;
        case 0x23f0b8u: goto label_23f0b8;
        case 0x23f0bcu: goto label_23f0bc;
        case 0x23f0c0u: goto label_23f0c0;
        case 0x23f0c4u: goto label_23f0c4;
        case 0x23f0c8u: goto label_23f0c8;
        case 0x23f0ccu: goto label_23f0cc;
        case 0x23f0d0u: goto label_23f0d0;
        case 0x23f0d4u: goto label_23f0d4;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f0dcu: goto label_23f0dc;
        case 0x23f0e0u: goto label_23f0e0;
        case 0x23f0e4u: goto label_23f0e4;
        case 0x23f0e8u: goto label_23f0e8;
        case 0x23f0ecu: goto label_23f0ec;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f0f4u: goto label_23f0f4;
        case 0x23f0f8u: goto label_23f0f8;
        case 0x23f0fcu: goto label_23f0fc;
        case 0x23f100u: goto label_23f100;
        case 0x23f104u: goto label_23f104;
        case 0x23f108u: goto label_23f108;
        case 0x23f10cu: goto label_23f10c;
        case 0x23f110u: goto label_23f110;
        case 0x23f114u: goto label_23f114;
        case 0x23f118u: goto label_23f118;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f120u: goto label_23f120;
        case 0x23f124u: goto label_23f124;
        case 0x23f128u: goto label_23f128;
        case 0x23f12cu: goto label_23f12c;
        case 0x23f130u: goto label_23f130;
        case 0x23f134u: goto label_23f134;
        default: break;
    }

    ctx->pc = 0x23ebc8u;

label_23ebc8:
    // 0x23ebc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23ebcc:
    // 0x23ebcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ebd0:
    // 0x23ebd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ebd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ebd4:
    // 0x23ebd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23ebd8:
    // 0x23ebd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23ebdc:
    // 0x23ebdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ebe0:
    // 0x23ebe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23ebe4:
    // 0x23ebe4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23ebe8:
    // 0x23ebe8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_23ebec:
    // 0x23ebec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_23ebf0:
    // 0x23ebf0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x23ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_23ebf4:
    // 0x23ebf4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23ebf8:
    if (ctx->pc == 0x23EBF8u) {
        ctx->pc = 0x23EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBF4u;
        // 0x23ebf8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBFCu;
        goto label_23ebfc;
    }
    ctx->pc = 0x23EBF4u;
    {
        const bool branch_taken_0x23ebf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBF4u;
        // 0x23ebf8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebf4) {
            ctx->pc = 0x23EC0Cu;
            goto label_23ec0c;
        }
    }
    ctx->pc = 0x23EBFCu;
label_23ebfc:
    // 0x23ebfc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_23ec00:
    // 0x23ec00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23ec04:
    // 0x23ec04: 0x40f809  jalr        $v0
label_23ec08:
    if (ctx->pc == 0x23EC08u) {
        ctx->pc = 0x23EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC04u;
        // 0x23ec08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC0Cu;
        goto label_23ec0c;
    }
    ctx->pc = 0x23EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23EC0Cu);
        ctx->pc = 0x23EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC04u;
        // 0x23ec08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EC04u, 0x23EC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EC0Cu;
label_23ec0c:
    // 0x23ec0c: 0xc0f5240  jal         func_3D4900
label_23ec10:
    if (ctx->pc == 0x23EC10u) {
        ctx->pc = 0x23EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC0Cu;
        // 0x23ec10: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC14u;
        goto label_23ec14;
    }
    ctx->pc = 0x23EC0Cu;
    SET_GPR_U32(ctx, 31, 0x23EC14u);
    ctx->pc = 0x23EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC0Cu;
    // 0x23ec10: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EC0Cu, 0x23EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC14u;
label_23ec14:
    // 0x23ec14: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ec18:
    // 0x23ec18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec1c:
    // 0x23ec1c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ec20:
    // 0x23ec20: 0xc0769a6  jal         func_1DA698
label_23ec24:
    if (ctx->pc == 0x23EC24u) {
        ctx->pc = 0x23EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC20u;
        // 0x23ec24: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC28u;
        goto label_23ec28;
    }
    ctx->pc = 0x23EC20u;
    SET_GPR_U32(ctx, 31, 0x23EC28u);
    ctx->pc = 0x23EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC20u;
    // 0x23ec24: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EC20u, 0x23EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC28u;
label_23ec28:
    // 0x23ec28: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_23ec2c:
    // 0x23ec2c: 0xae020734  sw          $v0, 0x734($s0)
    ctx->pc = 0x23ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 2));
label_23ec30:
    // 0x23ec30: 0xc085d78  jal         func_2175E0
label_23ec34:
    if (ctx->pc == 0x23EC34u) {
        ctx->pc = 0x23EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC30u;
        // 0x23ec34: 0x248451c8  addiu       $a0, $a0, 0x51C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC38u;
        goto label_23ec38;
    }
    ctx->pc = 0x23EC30u;
    SET_GPR_U32(ctx, 31, 0x23EC38u);
    ctx->pc = 0x23EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC30u;
    // 0x23ec34: 0x248451c8  addiu       $a0, $a0, 0x51C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EC30u, 0x23EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC38u;
label_23ec38:
    // 0x23ec38: 0x8e040734  lw          $a0, 0x734($s0)
    ctx->pc = 0x23ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
label_23ec3c:
    // 0x23ec3c: 0xc076574  jal         func_1D95D0
label_23ec40:
    if (ctx->pc == 0x23EC40u) {
        ctx->pc = 0x23EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC3Cu;
        // 0x23ec40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC44u;
        goto label_23ec44;
    }
    ctx->pc = 0x23EC3Cu;
    SET_GPR_U32(ctx, 31, 0x23EC44u);
    ctx->pc = 0x23EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC3Cu;
    // 0x23ec40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EC3Cu, 0x23EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC44u;
label_23ec44:
    // 0x23ec44: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ec48:
    // 0x23ec48: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ec4c:
    // 0x23ec4c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ec50:
    // 0x23ec50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ec54:
    if (ctx->pc == 0x23EC54u) {
        ctx->pc = 0x23EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC50u;
        // 0x23ec54: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC58u;
        goto label_23ec58;
    }
    ctx->pc = 0x23EC50u;
    {
        const bool branch_taken_0x23ec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC50u;
        // 0x23ec54: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec50) {
            ctx->pc = 0x23EC60u;
            goto label_23ec60;
        }
    }
    ctx->pc = 0x23EC58u;
label_23ec58:
    // 0x23ec58: 0x8e020734  lw          $v0, 0x734($s0)
    ctx->pc = 0x23ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
label_23ec5c:
    // 0x23ec5c: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23ec60:
    // 0x23ec60: 0xc085d78  jal         func_2175E0
label_23ec64:
    if (ctx->pc == 0x23EC64u) {
        ctx->pc = 0x23EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC60u;
        // 0x23ec64: 0x248451d0  addiu       $a0, $a0, 0x51D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC68u;
        goto label_23ec68;
    }
    ctx->pc = 0x23EC60u;
    SET_GPR_U32(ctx, 31, 0x23EC68u);
    ctx->pc = 0x23EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC60u;
    // 0x23ec64: 0x248451d0  addiu       $a0, $a0, 0x51D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EC60u, 0x23EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC68u;
label_23ec68:
    // 0x23ec68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23ec68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec6c:
    // 0x23ec6c: 0xc0f5240  jal         func_3D4900
label_23ec70:
    if (ctx->pc == 0x23EC70u) {
        ctx->pc = 0x23EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC6Cu;
        // 0x23ec70: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC74u;
        goto label_23ec74;
    }
    ctx->pc = 0x23EC6Cu;
    SET_GPR_U32(ctx, 31, 0x23EC74u);
    ctx->pc = 0x23EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC6Cu;
    // 0x23ec70: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EC6Cu, 0x23EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC74u;
label_23ec74:
    // 0x23ec74: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ec78:
    // 0x23ec78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec7c:
    // 0x23ec7c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ec80:
    // 0x23ec80: 0xc0769a6  jal         func_1DA698
label_23ec84:
    if (ctx->pc == 0x23EC84u) {
        ctx->pc = 0x23EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC80u;
        // 0x23ec84: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC88u;
        goto label_23ec88;
    }
    ctx->pc = 0x23EC80u;
    SET_GPR_U32(ctx, 31, 0x23EC88u);
    ctx->pc = 0x23EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC80u;
    // 0x23ec84: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EC80u, 0x23EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC88u;
label_23ec88:
    // 0x23ec88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec8c:
    // 0x23ec8c: 0xae020748  sw          $v0, 0x748($s0)
    ctx->pc = 0x23ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1864), GPR_U32(ctx, 2));
label_23ec90:
    // 0x23ec90: 0xc076574  jal         func_1D95D0
label_23ec94:
    if (ctx->pc == 0x23EC94u) {
        ctx->pc = 0x23EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC90u;
        // 0x23ec94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC98u;
        goto label_23ec98;
    }
    ctx->pc = 0x23EC90u;
    SET_GPR_U32(ctx, 31, 0x23EC98u);
    ctx->pc = 0x23EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC90u;
    // 0x23ec94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EC90u, 0x23EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC98u;
label_23ec98:
    // 0x23ec98: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ec9c:
    // 0x23ec9c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23eca0:
    // 0x23eca0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23eca4:
    // 0x23eca4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_23eca8:
    if (ctx->pc == 0x23ECA8u) {
        ctx->pc = 0x23ECACu;
        goto label_23ecac;
    }
    ctx->pc = 0x23ECA4u;
    {
        const bool branch_taken_0x23eca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eca4) {
            ctx->pc = 0x23EDC4u;
            goto label_23edc4;
        }
    }
    ctx->pc = 0x23ECACu;
label_23ecac:
    // 0x23ecac: 0x8e030748  lw          $v1, 0x748($s0)
    ctx->pc = 0x23ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_23ecb0:
    // 0x23ecb0: 0xac700040  sw          $s0, 0x40($v1)
    ctx->pc = 0x23ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 16));
label_23ecb4:
    // 0x23ecb4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ecb8:
    // 0x23ecb8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ecb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ecbc:
    // 0x23ecbc: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ecc0:
    // 0x23ecc0: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_23ecc4:
    if (ctx->pc == 0x23ECC4u) {
        ctx->pc = 0x23ECC8u;
        goto label_23ecc8;
    }
    ctx->pc = 0x23ECC0u;
    {
        const bool branch_taken_0x23ecc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ecc0) {
            ctx->pc = 0x23EDC4u;
            goto label_23edc4;
        }
    }
    ctx->pc = 0x23ECC8u;
label_23ecc8:
    // 0x23ecc8: 0xc0f5240  jal         func_3D4900
label_23eccc:
    if (ctx->pc == 0x23ECCCu) {
        ctx->pc = 0x23ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECC8u;
        // 0x23eccc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECD0u;
        goto label_23ecd0;
    }
    ctx->pc = 0x23ECC8u;
    SET_GPR_U32(ctx, 31, 0x23ECD0u);
    ctx->pc = 0x23ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECC8u;
    // 0x23eccc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23ECC8u, 0x23ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECD0u;
label_23ecd0:
    // 0x23ecd0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ecd4:
    // 0x23ecd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ecd8:
    // 0x23ecd8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ecdc:
    // 0x23ecdc: 0xc0769a6  jal         func_1DA698
label_23ece0:
    if (ctx->pc == 0x23ECE0u) {
        ctx->pc = 0x23ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECDCu;
        // 0x23ece0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECE4u;
        goto label_23ece4;
    }
    ctx->pc = 0x23ECDCu;
    SET_GPR_U32(ctx, 31, 0x23ECE4u);
    ctx->pc = 0x23ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECDCu;
    // 0x23ece0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23ECDCu, 0x23ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECE4u;
label_23ece4:
    // 0x23ece4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_23ece8:
    // 0x23ece8: 0xae020738  sw          $v0, 0x738($s0)
    ctx->pc = 0x23ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 2));
label_23ecec:
    // 0x23ecec: 0xc085d78  jal         func_2175E0
label_23ecf0:
    if (ctx->pc == 0x23ECF0u) {
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0x248451e0  addiu       $a0, $a0, 0x51E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECF4u;
        goto label_23ecf4;
    }
    ctx->pc = 0x23ECECu;
    SET_GPR_U32(ctx, 31, 0x23ECF4u);
    ctx->pc = 0x23ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECECu;
    // 0x23ecf0: 0x248451e0  addiu       $a0, $a0, 0x51E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23ECECu, 0x23ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECF4u;
label_23ecf4:
    // 0x23ecf4: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x23ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_23ecf8:
    // 0x23ecf8: 0xc076574  jal         func_1D95D0
label_23ecfc:
    if (ctx->pc == 0x23ECFCu) {
        ctx->pc = 0x23ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECF8u;
        // 0x23ecfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED00u;
        goto label_23ed00;
    }
    ctx->pc = 0x23ECF8u;
    SET_GPR_U32(ctx, 31, 0x23ED00u);
    ctx->pc = 0x23ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECF8u;
    // 0x23ecfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23ECF8u, 0x23ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED00u;
label_23ed00:
    // 0x23ed00: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ed04:
    // 0x23ed04: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ed08:
    // 0x23ed08: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ed0c:
    // 0x23ed0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ed10:
    if (ctx->pc == 0x23ED10u) {
        ctx->pc = 0x23ED14u;
        goto label_23ed14;
    }
    ctx->pc = 0x23ED0Cu;
    {
        const bool branch_taken_0x23ed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ed0c) {
            ctx->pc = 0x23ED1Cu;
            goto label_23ed1c;
        }
    }
    ctx->pc = 0x23ED14u;
label_23ed14:
    // 0x23ed14: 0x8e020738  lw          $v0, 0x738($s0)
    ctx->pc = 0x23ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_23ed18:
    // 0x23ed18: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23ed1c:
    // 0x23ed1c: 0xc0f5240  jal         func_3D4900
label_23ed20:
    if (ctx->pc == 0x23ED20u) {
        ctx->pc = 0x23ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED1Cu;
        // 0x23ed20: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED24u;
        goto label_23ed24;
    }
    ctx->pc = 0x23ED1Cu;
    SET_GPR_U32(ctx, 31, 0x23ED24u);
    ctx->pc = 0x23ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED1Cu;
    // 0x23ed20: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23ED1Cu, 0x23ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED24u;
label_23ed24:
    // 0x23ed24: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ed28:
    // 0x23ed28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ed2c:
    // 0x23ed2c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ed30:
    // 0x23ed30: 0xc0769a6  jal         func_1DA698
label_23ed34:
    if (ctx->pc == 0x23ED34u) {
        ctx->pc = 0x23ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED30u;
        // 0x23ed34: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED38u;
        goto label_23ed38;
    }
    ctx->pc = 0x23ED30u;
    SET_GPR_U32(ctx, 31, 0x23ED38u);
    ctx->pc = 0x23ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED30u;
    // 0x23ed34: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23ED30u, 0x23ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED38u;
label_23ed38:
    // 0x23ed38: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_23ed3c:
    // 0x23ed3c: 0xae02073c  sw          $v0, 0x73C($s0)
    ctx->pc = 0x23ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 2));
label_23ed40:
    // 0x23ed40: 0xc085d78  jal         func_2175E0
label_23ed44:
    if (ctx->pc == 0x23ED44u) {
        ctx->pc = 0x23ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED40u;
        // 0x23ed44: 0x248451e8  addiu       $a0, $a0, 0x51E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED48u;
        goto label_23ed48;
    }
    ctx->pc = 0x23ED40u;
    SET_GPR_U32(ctx, 31, 0x23ED48u);
    ctx->pc = 0x23ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED40u;
    // 0x23ed44: 0x248451e8  addiu       $a0, $a0, 0x51E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23ED40u, 0x23ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED48u;
label_23ed48:
    // 0x23ed48: 0x8e04073c  lw          $a0, 0x73C($s0)
    ctx->pc = 0x23ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
label_23ed4c:
    // 0x23ed4c: 0xc076574  jal         func_1D95D0
label_23ed50:
    if (ctx->pc == 0x23ED50u) {
        ctx->pc = 0x23ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED4Cu;
        // 0x23ed50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED54u;
        goto label_23ed54;
    }
    ctx->pc = 0x23ED4Cu;
    SET_GPR_U32(ctx, 31, 0x23ED54u);
    ctx->pc = 0x23ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED4Cu;
    // 0x23ed50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23ED4Cu, 0x23ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED54u;
label_23ed54:
    // 0x23ed54: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ed58:
    // 0x23ed58: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ed5c:
    // 0x23ed5c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ed60:
    // 0x23ed60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ed64:
    if (ctx->pc == 0x23ED64u) {
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED68u;
        goto label_23ed68;
    }
    ctx->pc = 0x23ED60u;
    {
        const bool branch_taken_0x23ed60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED60u;
        // 0x23ed64: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed60) {
            ctx->pc = 0x23ED70u;
            goto label_23ed70;
        }
    }
    ctx->pc = 0x23ED68u;
label_23ed68:
    // 0x23ed68: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x23ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
label_23ed6c:
    // 0x23ed6c: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23ed70:
    // 0x23ed70: 0xc085d78  jal         func_2175E0
label_23ed74:
    if (ctx->pc == 0x23ED74u) {
        ctx->pc = 0x23ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED70u;
        // 0x23ed74: 0x248451f0  addiu       $a0, $a0, 0x51F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED78u;
        goto label_23ed78;
    }
    ctx->pc = 0x23ED70u;
    SET_GPR_U32(ctx, 31, 0x23ED78u);
    ctx->pc = 0x23ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED70u;
    // 0x23ed74: 0x248451f0  addiu       $a0, $a0, 0x51F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23ED70u, 0x23ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED78u;
label_23ed78:
    // 0x23ed78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23ed78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ed7c:
    // 0x23ed7c: 0xc0f5240  jal         func_3D4900
label_23ed80:
    if (ctx->pc == 0x23ED80u) {
        ctx->pc = 0x23ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED7Cu;
        // 0x23ed80: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED84u;
        goto label_23ed84;
    }
    ctx->pc = 0x23ED7Cu;
    SET_GPR_U32(ctx, 31, 0x23ED84u);
    ctx->pc = 0x23ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED7Cu;
    // 0x23ed80: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23ED7Cu, 0x23ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED84u;
label_23ed84:
    // 0x23ed84: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ed88:
    // 0x23ed88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ed8c:
    // 0x23ed8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ed90:
    // 0x23ed90: 0xc0769a6  jal         func_1DA698
label_23ed94:
    if (ctx->pc == 0x23ED94u) {
        ctx->pc = 0x23ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED90u;
        // 0x23ed94: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ED98u;
        goto label_23ed98;
    }
    ctx->pc = 0x23ED90u;
    SET_GPR_U32(ctx, 31, 0x23ED98u);
    ctx->pc = 0x23ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED90u;
    // 0x23ed94: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23ED90u, 0x23ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED98u;
label_23ed98:
    // 0x23ed98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ed98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ed9c:
    // 0x23ed9c: 0xae020744  sw          $v0, 0x744($s0)
    ctx->pc = 0x23ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1860), GPR_U32(ctx, 2));
label_23eda0:
    // 0x23eda0: 0xc076574  jal         func_1D95D0
label_23eda4:
    if (ctx->pc == 0x23EDA4u) {
        ctx->pc = 0x23EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDA0u;
        // 0x23eda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDA8u;
        goto label_23eda8;
    }
    ctx->pc = 0x23EDA0u;
    SET_GPR_U32(ctx, 31, 0x23EDA8u);
    ctx->pc = 0x23EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDA0u;
    // 0x23eda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EDA0u, 0x23EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA8u;
label_23eda8:
    // 0x23eda8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23edac:
    // 0x23edac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23edb0:
    // 0x23edb0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23edb4:
    // 0x23edb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23edb8:
    if (ctx->pc == 0x23EDB8u) {
        ctx->pc = 0x23EDBCu;
        goto label_23edbc;
    }
    ctx->pc = 0x23EDB4u;
    {
        const bool branch_taken_0x23edb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23edb4) {
            ctx->pc = 0x23EDC4u;
            goto label_23edc4;
        }
    }
    ctx->pc = 0x23EDBCu;
label_23edbc:
    // 0x23edbc: 0x8e020744  lw          $v0, 0x744($s0)
    ctx->pc = 0x23edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_23edc0:
    // 0x23edc0: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23edc4:
    // 0x23edc4: 0xc0f5240  jal         func_3D4900
label_23edc8:
    if (ctx->pc == 0x23EDC8u) {
        ctx->pc = 0x23EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDC4u;
        // 0x23edc8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDCCu;
        goto label_23edcc;
    }
    ctx->pc = 0x23EDC4u;
    SET_GPR_U32(ctx, 31, 0x23EDCCu);
    ctx->pc = 0x23EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDC4u;
    // 0x23edc8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EDC4u, 0x23EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDCCu;
label_23edcc:
    // 0x23edcc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23edd0:
    // 0x23edd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23edd4:
    // 0x23edd4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23edd8:
    // 0x23edd8: 0xc0769a6  jal         func_1DA698
label_23eddc:
    if (ctx->pc == 0x23EDDCu) {
        ctx->pc = 0x23EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDD8u;
        // 0x23eddc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDE0u;
        goto label_23ede0;
    }
    ctx->pc = 0x23EDD8u;
    SET_GPR_U32(ctx, 31, 0x23EDE0u);
    ctx->pc = 0x23EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDD8u;
    // 0x23eddc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EDD8u, 0x23EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDE0u;
label_23ede0:
    // 0x23ede0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_23ede4:
    // 0x23ede4: 0xae020740  sw          $v0, 0x740($s0)
    ctx->pc = 0x23ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1856), GPR_U32(ctx, 2));
label_23ede8:
    // 0x23ede8: 0xc085d78  jal         func_2175E0
label_23edec:
    if (ctx->pc == 0x23EDECu) {
        ctx->pc = 0x23EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE8u;
        // 0x23edec: 0x248451f8  addiu       $a0, $a0, 0x51F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDF0u;
        goto label_23edf0;
    }
    ctx->pc = 0x23EDE8u;
    SET_GPR_U32(ctx, 31, 0x23EDF0u);
    ctx->pc = 0x23EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDE8u;
    // 0x23edec: 0x248451f8  addiu       $a0, $a0, 0x51F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EDE8u, 0x23EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDF0u;
label_23edf0:
    // 0x23edf0: 0x8e040740  lw          $a0, 0x740($s0)
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
label_23edf4:
    // 0x23edf4: 0xc076574  jal         func_1D95D0
label_23edf8:
    if (ctx->pc == 0x23EDF8u) {
        ctx->pc = 0x23EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDF4u;
        // 0x23edf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EDFCu;
        goto label_23edfc;
    }
    ctx->pc = 0x23EDF4u;
    SET_GPR_U32(ctx, 31, 0x23EDFCu);
    ctx->pc = 0x23EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDF4u;
    // 0x23edf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EDF4u, 0x23EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDFCu;
label_23edfc:
    // 0x23edfc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ee00:
    // 0x23ee00: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ee04:
    // 0x23ee04: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ee08:
    // 0x23ee08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23ee0c:
    if (ctx->pc == 0x23EE0Cu) {
        ctx->pc = 0x23EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE08u;
        // 0x23ee0c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE10u;
        goto label_23ee10;
    }
    ctx->pc = 0x23EE08u;
    {
        const bool branch_taken_0x23ee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE08u;
        // 0x23ee0c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee08) {
            ctx->pc = 0x23EE1Cu;
            goto label_23ee1c;
        }
    }
    ctx->pc = 0x23EE10u;
label_23ee10:
    // 0x23ee10: 0x8e020740  lw          $v0, 0x740($s0)
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1856)));
label_23ee14:
    // 0x23ee14: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23ee18:
    // 0x23ee18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23ee1c:
    // 0x23ee1c: 0x24515200  addiu       $s1, $v0, 0x5200
    ctx->pc = 0x23ee1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
label_23ee20:
    // 0x23ee20: 0xc085d78  jal         func_2175E0
label_23ee24:
    if (ctx->pc == 0x23EE24u) {
        ctx->pc = 0x23EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE20u;
        // 0x23ee24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE28u;
        goto label_23ee28;
    }
    ctx->pc = 0x23EE20u;
    SET_GPR_U32(ctx, 31, 0x23EE28u);
    ctx->pc = 0x23EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE20u;
    // 0x23ee24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EE20u, 0x23EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE28u;
label_23ee28:
    // 0x23ee28: 0xc0dbe86  jal         func_36FA18
label_23ee2c:
    if (ctx->pc == 0x23EE2Cu) {
        ctx->pc = 0x23EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE28u;
        // 0x23ee2c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE30u;
        goto label_23ee30;
    }
    ctx->pc = 0x23EE28u;
    SET_GPR_U32(ctx, 31, 0x23EE30u);
    ctx->pc = 0x23EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE28u;
    // 0x23ee2c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EE28u, 0x23EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE30u;
label_23ee30:
    // 0x23ee30: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23ee34:
    // 0x23ee34: 0x24525218  addiu       $s2, $v0, 0x5218
    ctx->pc = 0x23ee34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21016));
label_23ee38:
    // 0x23ee38: 0xc085d78  jal         func_2175E0
label_23ee3c:
    if (ctx->pc == 0x23EE3Cu) {
        ctx->pc = 0x23EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE38u;
        // 0x23ee3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE40u;
        goto label_23ee40;
    }
    ctx->pc = 0x23EE38u;
    SET_GPR_U32(ctx, 31, 0x23EE40u);
    ctx->pc = 0x23EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE38u;
    // 0x23ee3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EE38u, 0x23EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE40u;
label_23ee40:
    // 0x23ee40: 0xc0dbe86  jal         func_36FA18
label_23ee44:
    if (ctx->pc == 0x23EE44u) {
        ctx->pc = 0x23EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE40u;
        // 0x23ee44: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE48u;
        goto label_23ee48;
    }
    ctx->pc = 0x23EE40u;
    SET_GPR_U32(ctx, 31, 0x23EE48u);
    ctx->pc = 0x23EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE40u;
    // 0x23ee44: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EE40u, 0x23EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE48u;
label_23ee48:
    // 0x23ee48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23ee4c:
    // 0x23ee4c: 0x24535230  addiu       $s3, $v0, 0x5230
    ctx->pc = 0x23ee4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21040));
label_23ee50:
    // 0x23ee50: 0xc085d78  jal         func_2175E0
label_23ee54:
    if (ctx->pc == 0x23EE54u) {
        ctx->pc = 0x23EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE50u;
        // 0x23ee54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE58u;
        goto label_23ee58;
    }
    ctx->pc = 0x23EE50u;
    SET_GPR_U32(ctx, 31, 0x23EE58u);
    ctx->pc = 0x23EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE50u;
    // 0x23ee54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EE50u, 0x23EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE58u;
label_23ee58:
    // 0x23ee58: 0xc0dbe86  jal         func_36FA18
label_23ee5c:
    if (ctx->pc == 0x23EE5Cu) {
        ctx->pc = 0x23EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE58u;
        // 0x23ee5c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE60u;
        goto label_23ee60;
    }
    ctx->pc = 0x23EE58u;
    SET_GPR_U32(ctx, 31, 0x23EE60u);
    ctx->pc = 0x23EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE58u;
    // 0x23ee5c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EE58u, 0x23EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE60u;
label_23ee60:
    // 0x23ee60: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23ee64:
    // 0x23ee64: 0x24545248  addiu       $s4, $v0, 0x5248
    ctx->pc = 0x23ee64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 21064));
label_23ee68:
    // 0x23ee68: 0xc085d78  jal         func_2175E0
label_23ee6c:
    if (ctx->pc == 0x23EE6Cu) {
        ctx->pc = 0x23EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE68u;
        // 0x23ee6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE70u;
        goto label_23ee70;
    }
    ctx->pc = 0x23EE68u;
    SET_GPR_U32(ctx, 31, 0x23EE70u);
    ctx->pc = 0x23EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE68u;
    // 0x23ee6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EE68u, 0x23EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE70u;
label_23ee70:
    // 0x23ee70: 0xc0dbe86  jal         func_36FA18
label_23ee74:
    if (ctx->pc == 0x23EE74u) {
        ctx->pc = 0x23EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE70u;
        // 0x23ee74: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE78u;
        goto label_23ee78;
    }
    ctx->pc = 0x23EE70u;
    SET_GPR_U32(ctx, 31, 0x23EE78u);
    ctx->pc = 0x23EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE70u;
    // 0x23ee74: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EE70u, 0x23EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE78u;
label_23ee78:
    // 0x23ee78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23ee7c:
    // 0x23ee7c: 0x24555260  addiu       $s5, $v0, 0x5260
    ctx->pc = 0x23ee7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 21088));
label_23ee80:
    // 0x23ee80: 0xc085d78  jal         func_2175E0
label_23ee84:
    if (ctx->pc == 0x23EE84u) {
        ctx->pc = 0x23EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE80u;
        // 0x23ee84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE88u;
        goto label_23ee88;
    }
    ctx->pc = 0x23EE80u;
    SET_GPR_U32(ctx, 31, 0x23EE88u);
    ctx->pc = 0x23EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE80u;
    // 0x23ee84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EE80u, 0x23EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE88u;
label_23ee88:
    // 0x23ee88: 0xc0dbe86  jal         func_36FA18
label_23ee8c:
    if (ctx->pc == 0x23EE8Cu) {
        ctx->pc = 0x23EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE88u;
        // 0x23ee8c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EE90u;
        goto label_23ee90;
    }
    ctx->pc = 0x23EE88u;
    SET_GPR_U32(ctx, 31, 0x23EE90u);
    ctx->pc = 0x23EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE88u;
    // 0x23ee8c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EE88u, 0x23EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE90u;
label_23ee90:
    // 0x23ee90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23ee94:
    // 0x23ee94: 0x24565270  addiu       $s6, $v0, 0x5270
    ctx->pc = 0x23ee94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
label_23ee98:
    // 0x23ee98: 0xc085d78  jal         func_2175E0
label_23ee9c:
    if (ctx->pc == 0x23EE9Cu) {
        ctx->pc = 0x23EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE98u;
        // 0x23ee9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEA0u;
        goto label_23eea0;
    }
    ctx->pc = 0x23EE98u;
    SET_GPR_U32(ctx, 31, 0x23EEA0u);
    ctx->pc = 0x23EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE98u;
    // 0x23ee9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EE98u, 0x23EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEA0u;
label_23eea0:
    // 0x23eea0: 0xc0dbe86  jal         func_36FA18
label_23eea4:
    if (ctx->pc == 0x23EEA4u) {
        ctx->pc = 0x23EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA0u;
        // 0x23eea4: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEA8u;
        goto label_23eea8;
    }
    ctx->pc = 0x23EEA0u;
    SET_GPR_U32(ctx, 31, 0x23EEA8u);
    ctx->pc = 0x23EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEA0u;
    // 0x23eea4: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EEA0u, 0x23EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEA8u;
label_23eea8:
    // 0x23eea8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_23eeac:
    // 0x23eeac: 0x24575288  addiu       $s7, $v0, 0x5288
    ctx->pc = 0x23eeacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 21128));
label_23eeb0:
    // 0x23eeb0: 0xc085d78  jal         func_2175E0
label_23eeb4:
    if (ctx->pc == 0x23EEB4u) {
        ctx->pc = 0x23EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB0u;
        // 0x23eeb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEB8u;
        goto label_23eeb8;
    }
    ctx->pc = 0x23EEB0u;
    SET_GPR_U32(ctx, 31, 0x23EEB8u);
    ctx->pc = 0x23EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEB0u;
    // 0x23eeb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EEB0u, 0x23EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEB8u;
label_23eeb8:
    // 0x23eeb8: 0xc0dbe86  jal         func_36FA18
label_23eebc:
    if (ctx->pc == 0x23EEBCu) {
        ctx->pc = 0x23EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEB8u;
        // 0x23eebc: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEC0u;
        goto label_23eec0;
    }
    ctx->pc = 0x23EEB8u;
    SET_GPR_U32(ctx, 31, 0x23EEC0u);
    ctx->pc = 0x23EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEB8u;
    // 0x23eebc: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x23EEB8u, 0x23EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEC0u;
label_23eec0:
    // 0x23eec0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23eec4:
    // 0x23eec4: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x23eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_23eec8:
    // 0x23eec8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23eecc:
    // 0x23eecc: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_23eed0:
    if (ctx->pc == 0x23EED0u) {
        ctx->pc = 0x23EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EECCu;
        // 0x23eed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EED4u;
        goto label_23eed4;
    }
    ctx->pc = 0x23EECCu;
    {
        const bool branch_taken_0x23eecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EECCu;
        // 0x23eed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eecc) {
            ctx->pc = 0x23F104u;
            goto label_23f104;
        }
    }
    ctx->pc = 0x23EED4u;
label_23eed4:
    // 0x23eed4: 0xc0f5240  jal         func_3D4900
label_23eed8:
    if (ctx->pc == 0x23EED8u) {
        ctx->pc = 0x23EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EED4u;
        // 0x23eed8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEDCu;
        goto label_23eedc;
    }
    ctx->pc = 0x23EED4u;
    SET_GPR_U32(ctx, 31, 0x23EEDCu);
    ctx->pc = 0x23EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EED4u;
    // 0x23eed8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EED4u, 0x23EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEDCu;
label_23eedc:
    // 0x23eedc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23eee0:
    // 0x23eee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23eee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23eee4:
    // 0x23eee4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23eee8:
    // 0x23eee8: 0xc0769a6  jal         func_1DA698
label_23eeec:
    if (ctx->pc == 0x23EEECu) {
        ctx->pc = 0x23EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEE8u;
        // 0x23eeec: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEF0u;
        goto label_23eef0;
    }
    ctx->pc = 0x23EEE8u;
    SET_GPR_U32(ctx, 31, 0x23EEF0u);
    ctx->pc = 0x23EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEE8u;
    // 0x23eeec: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EEE8u, 0x23EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEF0u;
label_23eef0:
    // 0x23eef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23eef4:
    // 0x23eef4: 0xc085d78  jal         func_2175E0
label_23eef8:
    if (ctx->pc == 0x23EEF8u) {
        ctx->pc = 0x23EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF4u;
        // 0x23eef8: 0xae020718  sw          $v0, 0x718($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EEFCu;
        goto label_23eefc;
    }
    ctx->pc = 0x23EEF4u;
    SET_GPR_U32(ctx, 31, 0x23EEFCu);
    ctx->pc = 0x23EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEF4u;
    // 0x23eef8: 0xae020718  sw          $v0, 0x718($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1816), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EEF4u, 0x23EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEFCu;
label_23eefc:
    // 0x23eefc: 0x8e040718  lw          $a0, 0x718($s0)
    ctx->pc = 0x23eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1816)));
label_23ef00:
    // 0x23ef00: 0xc076574  jal         func_1D95D0
label_23ef04:
    if (ctx->pc == 0x23EF04u) {
        ctx->pc = 0x23EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF00u;
        // 0x23ef04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF08u;
        goto label_23ef08;
    }
    ctx->pc = 0x23EF00u;
    SET_GPR_U32(ctx, 31, 0x23EF08u);
    ctx->pc = 0x23EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF00u;
    // 0x23ef04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EF00u, 0x23EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF08u;
label_23ef08:
    // 0x23ef08: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ef0c:
    // 0x23ef0c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ef0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ef10:
    // 0x23ef10: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ef14:
    // 0x23ef14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ef18:
    if (ctx->pc == 0x23EF18u) {
        ctx->pc = 0x23EF1Cu;
        goto label_23ef1c;
    }
    ctx->pc = 0x23EF14u;
    {
        const bool branch_taken_0x23ef14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef14) {
            ctx->pc = 0x23EF24u;
            goto label_23ef24;
        }
    }
    ctx->pc = 0x23EF1Cu;
label_23ef1c:
    // 0x23ef1c: 0x8e020718  lw          $v0, 0x718($s0)
    ctx->pc = 0x23ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1816)));
label_23ef20:
    // 0x23ef20: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23ef24:
    // 0x23ef24: 0xc0f5240  jal         func_3D4900
label_23ef28:
    if (ctx->pc == 0x23EF28u) {
        ctx->pc = 0x23EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF24u;
        // 0x23ef28: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF2Cu;
        goto label_23ef2c;
    }
    ctx->pc = 0x23EF24u;
    SET_GPR_U32(ctx, 31, 0x23EF2Cu);
    ctx->pc = 0x23EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF24u;
    // 0x23ef28: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EF24u, 0x23EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF2Cu;
label_23ef2c:
    // 0x23ef2c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ef30:
    // 0x23ef30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ef30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ef34:
    // 0x23ef34: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ef38:
    // 0x23ef38: 0xc0769a6  jal         func_1DA698
label_23ef3c:
    if (ctx->pc == 0x23EF3Cu) {
        ctx->pc = 0x23EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF38u;
        // 0x23ef3c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF40u;
        goto label_23ef40;
    }
    ctx->pc = 0x23EF38u;
    SET_GPR_U32(ctx, 31, 0x23EF40u);
    ctx->pc = 0x23EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF38u;
    // 0x23ef3c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EF38u, 0x23EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF40u;
label_23ef40:
    // 0x23ef40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ef40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ef44:
    // 0x23ef44: 0xc085d78  jal         func_2175E0
label_23ef48:
    if (ctx->pc == 0x23EF48u) {
        ctx->pc = 0x23EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF44u;
        // 0x23ef48: 0xae02071c  sw          $v0, 0x71C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF4Cu;
        goto label_23ef4c;
    }
    ctx->pc = 0x23EF44u;
    SET_GPR_U32(ctx, 31, 0x23EF4Cu);
    ctx->pc = 0x23EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF44u;
    // 0x23ef48: 0xae02071c  sw          $v0, 0x71C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EF44u, 0x23EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF4Cu;
label_23ef4c:
    // 0x23ef4c: 0x8e04071c  lw          $a0, 0x71C($s0)
    ctx->pc = 0x23ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1820)));
label_23ef50:
    // 0x23ef50: 0xc076574  jal         func_1D95D0
label_23ef54:
    if (ctx->pc == 0x23EF54u) {
        ctx->pc = 0x23EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF50u;
        // 0x23ef54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF58u;
        goto label_23ef58;
    }
    ctx->pc = 0x23EF50u;
    SET_GPR_U32(ctx, 31, 0x23EF58u);
    ctx->pc = 0x23EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF50u;
    // 0x23ef54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EF50u, 0x23EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF58u;
label_23ef58:
    // 0x23ef58: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ef5c:
    // 0x23ef5c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23ef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23ef60:
    // 0x23ef60: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23ef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23ef64:
    // 0x23ef64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ef68:
    if (ctx->pc == 0x23EF68u) {
        ctx->pc = 0x23EF6Cu;
        goto label_23ef6c;
    }
    ctx->pc = 0x23EF64u;
    {
        const bool branch_taken_0x23ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef64) {
            ctx->pc = 0x23EF74u;
            goto label_23ef74;
        }
    }
    ctx->pc = 0x23EF6Cu;
label_23ef6c:
    // 0x23ef6c: 0x8e02071c  lw          $v0, 0x71C($s0)
    ctx->pc = 0x23ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1820)));
label_23ef70:
    // 0x23ef70: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23ef74:
    // 0x23ef74: 0xc0f5240  jal         func_3D4900
label_23ef78:
    if (ctx->pc == 0x23EF78u) {
        ctx->pc = 0x23EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF74u;
        // 0x23ef78: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF7Cu;
        goto label_23ef7c;
    }
    ctx->pc = 0x23EF74u;
    SET_GPR_U32(ctx, 31, 0x23EF7Cu);
    ctx->pc = 0x23EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF74u;
    // 0x23ef78: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EF74u, 0x23EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF7Cu;
label_23ef7c:
    // 0x23ef7c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23ef80:
    // 0x23ef80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ef84:
    // 0x23ef84: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ef88:
    // 0x23ef88: 0xc0769a6  jal         func_1DA698
label_23ef8c:
    if (ctx->pc == 0x23EF8Cu) {
        ctx->pc = 0x23EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF88u;
        // 0x23ef8c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF90u;
        goto label_23ef90;
    }
    ctx->pc = 0x23EF88u;
    SET_GPR_U32(ctx, 31, 0x23EF90u);
    ctx->pc = 0x23EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF88u;
    // 0x23ef8c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EF88u, 0x23EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF90u;
label_23ef90:
    // 0x23ef90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ef94:
    // 0x23ef94: 0xc085d78  jal         func_2175E0
label_23ef98:
    if (ctx->pc == 0x23EF98u) {
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0xae020720  sw          $v0, 0x720($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF9Cu;
        goto label_23ef9c;
    }
    ctx->pc = 0x23EF94u;
    SET_GPR_U32(ctx, 31, 0x23EF9Cu);
    ctx->pc = 0x23EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF94u;
    // 0x23ef98: 0xae020720  sw          $v0, 0x720($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EF94u, 0x23EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF9Cu;
label_23ef9c:
    // 0x23ef9c: 0x8e040720  lw          $a0, 0x720($s0)
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1824)));
label_23efa0:
    // 0x23efa0: 0xc076574  jal         func_1D95D0
label_23efa4:
    if (ctx->pc == 0x23EFA4u) {
        ctx->pc = 0x23EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA0u;
        // 0x23efa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFA8u;
        goto label_23efa8;
    }
    ctx->pc = 0x23EFA0u;
    SET_GPR_U32(ctx, 31, 0x23EFA8u);
    ctx->pc = 0x23EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFA0u;
    // 0x23efa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EFA0u, 0x23EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFA8u;
label_23efa8:
    // 0x23efa8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23efac:
    // 0x23efac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23efb0:
    // 0x23efb0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23efb4:
    // 0x23efb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23efb8:
    if (ctx->pc == 0x23EFB8u) {
        ctx->pc = 0x23EFBCu;
        goto label_23efbc;
    }
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFC4u;
            goto label_23efc4;
        }
    }
    ctx->pc = 0x23EFBCu;
label_23efbc:
    // 0x23efbc: 0x8e020720  lw          $v0, 0x720($s0)
    ctx->pc = 0x23efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1824)));
label_23efc0:
    // 0x23efc0: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23efc4:
    // 0x23efc4: 0xc0f5240  jal         func_3D4900
label_23efc8:
    if (ctx->pc == 0x23EFC8u) {
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFCCu;
        goto label_23efcc;
    }
    ctx->pc = 0x23EFC4u;
    SET_GPR_U32(ctx, 31, 0x23EFCCu);
    ctx->pc = 0x23EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFC4u;
    // 0x23efc8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23EFC4u, 0x23EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFCCu;
label_23efcc:
    // 0x23efcc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23efd0:
    // 0x23efd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23efd4:
    // 0x23efd4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23efd8:
    // 0x23efd8: 0xc0769a6  jal         func_1DA698
label_23efdc:
    if (ctx->pc == 0x23EFDCu) {
        ctx->pc = 0x23EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFD8u;
        // 0x23efdc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFE0u;
        goto label_23efe0;
    }
    ctx->pc = 0x23EFD8u;
    SET_GPR_U32(ctx, 31, 0x23EFE0u);
    ctx->pc = 0x23EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFD8u;
    // 0x23efdc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23EFD8u, 0x23EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFE0u;
label_23efe0:
    // 0x23efe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23efe4:
    // 0x23efe4: 0xc085d78  jal         func_2175E0
label_23efe8:
    if (ctx->pc == 0x23EFE8u) {
        ctx->pc = 0x23EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFE4u;
        // 0x23efe8: 0xae020724  sw          $v0, 0x724($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFECu;
        goto label_23efec;
    }
    ctx->pc = 0x23EFE4u;
    SET_GPR_U32(ctx, 31, 0x23EFECu);
    ctx->pc = 0x23EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFE4u;
    // 0x23efe8: 0xae020724  sw          $v0, 0x724($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1828), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23EFE4u, 0x23EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFECu;
label_23efec:
    // 0x23efec: 0x8e040724  lw          $a0, 0x724($s0)
    ctx->pc = 0x23efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1828)));
label_23eff0:
    // 0x23eff0: 0xc076574  jal         func_1D95D0
label_23eff4:
    if (ctx->pc == 0x23EFF4u) {
        ctx->pc = 0x23EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFF0u;
        // 0x23eff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFF8u;
        goto label_23eff8;
    }
    ctx->pc = 0x23EFF0u;
    SET_GPR_U32(ctx, 31, 0x23EFF8u);
    ctx->pc = 0x23EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFF0u;
    // 0x23eff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23EFF0u, 0x23EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFF8u;
label_23eff8:
    // 0x23eff8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23effc:
    // 0x23effc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23f000:
    // 0x23f000: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23f004:
    // 0x23f004: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23f008:
    if (ctx->pc == 0x23F008u) {
        ctx->pc = 0x23F00Cu;
        goto label_23f00c;
    }
    ctx->pc = 0x23F004u;
    {
        const bool branch_taken_0x23f004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f004) {
            ctx->pc = 0x23F014u;
            goto label_23f014;
        }
    }
    ctx->pc = 0x23F00Cu;
label_23f00c:
    // 0x23f00c: 0x8e020724  lw          $v0, 0x724($s0)
    ctx->pc = 0x23f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1828)));
label_23f010:
    // 0x23f010: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23f010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23f014:
    // 0x23f014: 0xc0f5240  jal         func_3D4900
label_23f018:
    if (ctx->pc == 0x23F018u) {
        ctx->pc = 0x23F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F014u;
        // 0x23f018: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F01Cu;
        goto label_23f01c;
    }
    ctx->pc = 0x23F014u;
    SET_GPR_U32(ctx, 31, 0x23F01Cu);
    ctx->pc = 0x23F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F014u;
    // 0x23f018: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23F014u, 0x23F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F01Cu;
label_23f01c:
    // 0x23f01c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23f020:
    // 0x23f020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f024:
    // 0x23f024: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23f024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f028:
    // 0x23f028: 0xc0769a6  jal         func_1DA698
label_23f02c:
    if (ctx->pc == 0x23F02Cu) {
        ctx->pc = 0x23F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F028u;
        // 0x23f02c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F030u;
        goto label_23f030;
    }
    ctx->pc = 0x23F028u;
    SET_GPR_U32(ctx, 31, 0x23F030u);
    ctx->pc = 0x23F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F028u;
    // 0x23f02c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23F028u, 0x23F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F030u;
label_23f030:
    // 0x23f030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23f034:
    // 0x23f034: 0xc085d78  jal         func_2175E0
label_23f038:
    if (ctx->pc == 0x23F038u) {
        ctx->pc = 0x23F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F034u;
        // 0x23f038: 0xae020728  sw          $v0, 0x728($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F03Cu;
        goto label_23f03c;
    }
    ctx->pc = 0x23F034u;
    SET_GPR_U32(ctx, 31, 0x23F03Cu);
    ctx->pc = 0x23F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F034u;
    // 0x23f038: 0xae020728  sw          $v0, 0x728($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23F034u, 0x23F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F03Cu;
label_23f03c:
    // 0x23f03c: 0x8e040728  lw          $a0, 0x728($s0)
    ctx->pc = 0x23f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1832)));
label_23f040:
    // 0x23f040: 0xc076574  jal         func_1D95D0
label_23f044:
    if (ctx->pc == 0x23F044u) {
        ctx->pc = 0x23F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F040u;
        // 0x23f044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F048u;
        goto label_23f048;
    }
    ctx->pc = 0x23F040u;
    SET_GPR_U32(ctx, 31, 0x23F048u);
    ctx->pc = 0x23F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F040u;
    // 0x23f044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23F040u, 0x23F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F048u;
label_23f048:
    // 0x23f048: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23f04c:
    // 0x23f04c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23f050:
    // 0x23f050: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23f054:
    // 0x23f054: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23f058:
    if (ctx->pc == 0x23F058u) {
        ctx->pc = 0x23F05Cu;
        goto label_23f05c;
    }
    ctx->pc = 0x23F054u;
    {
        const bool branch_taken_0x23f054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f054) {
            ctx->pc = 0x23F064u;
            goto label_23f064;
        }
    }
    ctx->pc = 0x23F05Cu;
label_23f05c:
    // 0x23f05c: 0x8e020728  lw          $v0, 0x728($s0)
    ctx->pc = 0x23f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1832)));
label_23f060:
    // 0x23f060: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23f060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23f064:
    // 0x23f064: 0xc0f5240  jal         func_3D4900
label_23f068:
    if (ctx->pc == 0x23F068u) {
        ctx->pc = 0x23F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F064u;
        // 0x23f068: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F06Cu;
        goto label_23f06c;
    }
    ctx->pc = 0x23F064u;
    SET_GPR_U32(ctx, 31, 0x23F06Cu);
    ctx->pc = 0x23F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F064u;
    // 0x23f068: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23F064u, 0x23F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F06Cu;
label_23f06c:
    // 0x23f06c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23f070:
    // 0x23f070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f074:
    // 0x23f074: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23f074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f078:
    // 0x23f078: 0xc0769a6  jal         func_1DA698
label_23f07c:
    if (ctx->pc == 0x23F07Cu) {
        ctx->pc = 0x23F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F078u;
        // 0x23f07c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F080u;
        goto label_23f080;
    }
    ctx->pc = 0x23F078u;
    SET_GPR_U32(ctx, 31, 0x23F080u);
    ctx->pc = 0x23F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F078u;
    // 0x23f07c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23F078u, 0x23F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F080u;
label_23f080:
    // 0x23f080: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23f084:
    // 0x23f084: 0xc085d78  jal         func_2175E0
label_23f088:
    if (ctx->pc == 0x23F088u) {
        ctx->pc = 0x23F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F084u;
        // 0x23f088: 0xae02072c  sw          $v0, 0x72C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F08Cu;
        goto label_23f08c;
    }
    ctx->pc = 0x23F084u;
    SET_GPR_U32(ctx, 31, 0x23F08Cu);
    ctx->pc = 0x23F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F084u;
    // 0x23f088: 0xae02072c  sw          $v0, 0x72C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23F084u, 0x23F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F08Cu;
label_23f08c:
    // 0x23f08c: 0x8e04072c  lw          $a0, 0x72C($s0)
    ctx->pc = 0x23f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1836)));
label_23f090:
    // 0x23f090: 0xc076574  jal         func_1D95D0
label_23f094:
    if (ctx->pc == 0x23F094u) {
        ctx->pc = 0x23F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F090u;
        // 0x23f094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F098u;
        goto label_23f098;
    }
    ctx->pc = 0x23F090u;
    SET_GPR_U32(ctx, 31, 0x23F098u);
    ctx->pc = 0x23F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F090u;
    // 0x23f094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23F090u, 0x23F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F098u;
label_23f098:
    // 0x23f098: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23f09c:
    // 0x23f09c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23f0a0:
    // 0x23f0a0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23f0a4:
    // 0x23f0a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23f0a8:
    if (ctx->pc == 0x23F0A8u) {
        ctx->pc = 0x23F0ACu;
        goto label_23f0ac;
    }
    ctx->pc = 0x23F0A4u;
    {
        const bool branch_taken_0x23f0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f0a4) {
            ctx->pc = 0x23F0B4u;
            goto label_23f0b4;
        }
    }
    ctx->pc = 0x23F0ACu;
label_23f0ac:
    // 0x23f0ac: 0x8e02072c  lw          $v0, 0x72C($s0)
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1836)));
label_23f0b0:
    // 0x23f0b0: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23f0b4:
    // 0x23f0b4: 0xc0f5240  jal         func_3D4900
label_23f0b8:
    if (ctx->pc == 0x23F0B8u) {
        ctx->pc = 0x23F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0B4u;
        // 0x23f0b8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0BCu;
        goto label_23f0bc;
    }
    ctx->pc = 0x23F0B4u;
    SET_GPR_U32(ctx, 31, 0x23F0BCu);
    ctx->pc = 0x23F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0B4u;
    // 0x23f0b8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x23F0B4u, 0x23F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0BCu;
label_23f0bc:
    // 0x23f0bc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23f0c0:
    // 0x23f0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f0c4:
    // 0x23f0c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f0c8:
    // 0x23f0c8: 0xc0769a6  jal         func_1DA698
label_23f0cc:
    if (ctx->pc == 0x23F0CCu) {
        ctx->pc = 0x23F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C8u;
        // 0x23f0cc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0D0u;
        goto label_23f0d0;
    }
    ctx->pc = 0x23F0C8u;
    SET_GPR_U32(ctx, 31, 0x23F0D0u);
    ctx->pc = 0x23F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0C8u;
    // 0x23f0cc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x23F0C8u, 0x23F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0D0u;
label_23f0d0:
    // 0x23f0d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23f0d4:
    // 0x23f0d4: 0xc085d78  jal         func_2175E0
label_23f0d8:
    if (ctx->pc == 0x23F0D8u) {
        ctx->pc = 0x23F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D4u;
        // 0x23f0d8: 0xae020730  sw          $v0, 0x730($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0DCu;
        goto label_23f0dc;
    }
    ctx->pc = 0x23F0D4u;
    SET_GPR_U32(ctx, 31, 0x23F0DCu);
    ctx->pc = 0x23F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0D4u;
    // 0x23f0d8: 0xae020730  sw          $v0, 0x730($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2175E0u, 0x23F0D4u, 0x23F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0DCu;
label_23f0dc:
    // 0x23f0dc: 0x8e040730  lw          $a0, 0x730($s0)
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
label_23f0e0:
    // 0x23f0e0: 0xc076574  jal         func_1D95D0
label_23f0e4:
    if (ctx->pc == 0x23F0E4u) {
        ctx->pc = 0x23F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E0u;
        // 0x23f0e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0E8u;
        goto label_23f0e8;
    }
    ctx->pc = 0x23F0E0u;
    SET_GPR_U32(ctx, 31, 0x23F0E8u);
    ctx->pc = 0x23F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0E0u;
    // 0x23f0e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x23F0E0u, 0x23F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0E8u;
label_23f0e8:
    // 0x23f0e8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23f0ec:
    // 0x23f0ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23f0f0:
    // 0x23f0f0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x23f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_23f0f4:
    // 0x23f0f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23f0f8:
    if (ctx->pc == 0x23F0F8u) {
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F4u;
        // 0x23f0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0FCu;
        goto label_23f0fc;
    }
    ctx->pc = 0x23F0F4u;
    {
        const bool branch_taken_0x23f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F4u;
        // 0x23f0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0f4) {
            ctx->pc = 0x23F104u;
            goto label_23f104;
        }
    }
    ctx->pc = 0x23F0FCu;
label_23f0fc:
    // 0x23f0fc: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
label_23f100:
    // 0x23f100: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x23f100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_23f104:
    // 0x23f104: 0xc08fc4e  jal         func_23F138
label_23f108:
    if (ctx->pc == 0x23F108u) {
        ctx->pc = 0x23F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F104u;
        // 0x23f108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F10Cu;
        goto label_23f10c;
    }
    ctx->pc = 0x23F104u;
    SET_GPR_U32(ctx, 31, 0x23F10Cu);
    ctx->pc = 0x23F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F104u;
    // 0x23f108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x23F104u, 0x23F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F10Cu;
label_23f10c:
    // 0x23f10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f110:
    // 0x23f110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23f114:
    // 0x23f114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f118:
    // 0x23f118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23f11c:
    // 0x23f11c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23f11cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f120:
    // 0x23f120: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23f120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23f124:
    // 0x23f124: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23f128:
    // 0x23f128: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x23f128u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23f12c:
    // 0x23f12c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23f12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23f130:
    // 0x23f130: 0x3e00008  jr          $ra
label_23f134:
    if (ctx->pc == 0x23F134u) {
        ctx->pc = 0x23F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F130u;
        // 0x23f134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F138u;
        goto label_fallthrough_0x23f130;
    }
    ctx->pc = 0x23F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F130u;
        // 0x23f134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23f130:
    ctx->pc = 0x23F138u;
}
