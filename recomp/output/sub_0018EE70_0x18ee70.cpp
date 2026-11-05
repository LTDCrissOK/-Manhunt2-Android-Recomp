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

// Function: sub_0018EE70
// Address: 0x18ee70 - 0x18f108
void sub_0018EE70_0x18ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EE70_0x18ee70");
#endif

    switch (ctx->pc) {
        case 0x18ee70u: goto label_18ee70;
        case 0x18ee74u: goto label_18ee74;
        case 0x18ee78u: goto label_18ee78;
        case 0x18ee7cu: goto label_18ee7c;
        case 0x18ee80u: goto label_18ee80;
        case 0x18ee84u: goto label_18ee84;
        case 0x18ee88u: goto label_18ee88;
        case 0x18ee8cu: goto label_18ee8c;
        case 0x18ee90u: goto label_18ee90;
        case 0x18ee94u: goto label_18ee94;
        case 0x18ee98u: goto label_18ee98;
        case 0x18ee9cu: goto label_18ee9c;
        case 0x18eea0u: goto label_18eea0;
        case 0x18eea4u: goto label_18eea4;
        case 0x18eea8u: goto label_18eea8;
        case 0x18eeacu: goto label_18eeac;
        case 0x18eeb0u: goto label_18eeb0;
        case 0x18eeb4u: goto label_18eeb4;
        case 0x18eeb8u: goto label_18eeb8;
        case 0x18eebcu: goto label_18eebc;
        case 0x18eec0u: goto label_18eec0;
        case 0x18eec4u: goto label_18eec4;
        case 0x18eec8u: goto label_18eec8;
        case 0x18eeccu: goto label_18eecc;
        case 0x18eed0u: goto label_18eed0;
        case 0x18eed4u: goto label_18eed4;
        case 0x18eed8u: goto label_18eed8;
        case 0x18eedcu: goto label_18eedc;
        case 0x18eee0u: goto label_18eee0;
        case 0x18eee4u: goto label_18eee4;
        case 0x18eee8u: goto label_18eee8;
        case 0x18eeecu: goto label_18eeec;
        case 0x18eef0u: goto label_18eef0;
        case 0x18eef4u: goto label_18eef4;
        case 0x18eef8u: goto label_18eef8;
        case 0x18eefcu: goto label_18eefc;
        case 0x18ef00u: goto label_18ef00;
        case 0x18ef04u: goto label_18ef04;
        case 0x18ef08u: goto label_18ef08;
        case 0x18ef0cu: goto label_18ef0c;
        case 0x18ef10u: goto label_18ef10;
        case 0x18ef14u: goto label_18ef14;
        case 0x18ef18u: goto label_18ef18;
        case 0x18ef1cu: goto label_18ef1c;
        case 0x18ef20u: goto label_18ef20;
        case 0x18ef24u: goto label_18ef24;
        case 0x18ef28u: goto label_18ef28;
        case 0x18ef2cu: goto label_18ef2c;
        case 0x18ef30u: goto label_18ef30;
        case 0x18ef34u: goto label_18ef34;
        case 0x18ef38u: goto label_18ef38;
        case 0x18ef3cu: goto label_18ef3c;
        case 0x18ef40u: goto label_18ef40;
        case 0x18ef44u: goto label_18ef44;
        case 0x18ef48u: goto label_18ef48;
        case 0x18ef4cu: goto label_18ef4c;
        case 0x18ef50u: goto label_18ef50;
        case 0x18ef54u: goto label_18ef54;
        case 0x18ef58u: goto label_18ef58;
        case 0x18ef5cu: goto label_18ef5c;
        case 0x18ef60u: goto label_18ef60;
        case 0x18ef64u: goto label_18ef64;
        case 0x18ef68u: goto label_18ef68;
        case 0x18ef6cu: goto label_18ef6c;
        case 0x18ef70u: goto label_18ef70;
        case 0x18ef74u: goto label_18ef74;
        case 0x18ef78u: goto label_18ef78;
        case 0x18ef7cu: goto label_18ef7c;
        case 0x18ef80u: goto label_18ef80;
        case 0x18ef84u: goto label_18ef84;
        case 0x18ef88u: goto label_18ef88;
        case 0x18ef8cu: goto label_18ef8c;
        case 0x18ef90u: goto label_18ef90;
        case 0x18ef94u: goto label_18ef94;
        case 0x18ef98u: goto label_18ef98;
        case 0x18ef9cu: goto label_18ef9c;
        case 0x18efa0u: goto label_18efa0;
        case 0x18efa4u: goto label_18efa4;
        case 0x18efa8u: goto label_18efa8;
        case 0x18efacu: goto label_18efac;
        case 0x18efb0u: goto label_18efb0;
        case 0x18efb4u: goto label_18efb4;
        case 0x18efb8u: goto label_18efb8;
        case 0x18efbcu: goto label_18efbc;
        case 0x18efc0u: goto label_18efc0;
        case 0x18efc4u: goto label_18efc4;
        case 0x18efc8u: goto label_18efc8;
        case 0x18efccu: goto label_18efcc;
        case 0x18efd0u: goto label_18efd0;
        case 0x18efd4u: goto label_18efd4;
        case 0x18efd8u: goto label_18efd8;
        case 0x18efdcu: goto label_18efdc;
        case 0x18efe0u: goto label_18efe0;
        case 0x18efe4u: goto label_18efe4;
        case 0x18efe8u: goto label_18efe8;
        case 0x18efecu: goto label_18efec;
        case 0x18eff0u: goto label_18eff0;
        case 0x18eff4u: goto label_18eff4;
        case 0x18eff8u: goto label_18eff8;
        case 0x18effcu: goto label_18effc;
        case 0x18f000u: goto label_18f000;
        case 0x18f004u: goto label_18f004;
        case 0x18f008u: goto label_18f008;
        case 0x18f00cu: goto label_18f00c;
        case 0x18f010u: goto label_18f010;
        case 0x18f014u: goto label_18f014;
        case 0x18f018u: goto label_18f018;
        case 0x18f01cu: goto label_18f01c;
        case 0x18f020u: goto label_18f020;
        case 0x18f024u: goto label_18f024;
        case 0x18f028u: goto label_18f028;
        case 0x18f02cu: goto label_18f02c;
        case 0x18f030u: goto label_18f030;
        case 0x18f034u: goto label_18f034;
        case 0x18f038u: goto label_18f038;
        case 0x18f03cu: goto label_18f03c;
        case 0x18f040u: goto label_18f040;
        case 0x18f044u: goto label_18f044;
        case 0x18f048u: goto label_18f048;
        case 0x18f04cu: goto label_18f04c;
        case 0x18f050u: goto label_18f050;
        case 0x18f054u: goto label_18f054;
        case 0x18f058u: goto label_18f058;
        case 0x18f05cu: goto label_18f05c;
        case 0x18f060u: goto label_18f060;
        case 0x18f064u: goto label_18f064;
        case 0x18f068u: goto label_18f068;
        case 0x18f06cu: goto label_18f06c;
        case 0x18f070u: goto label_18f070;
        case 0x18f074u: goto label_18f074;
        case 0x18f078u: goto label_18f078;
        case 0x18f07cu: goto label_18f07c;
        case 0x18f080u: goto label_18f080;
        case 0x18f084u: goto label_18f084;
        case 0x18f088u: goto label_18f088;
        case 0x18f08cu: goto label_18f08c;
        case 0x18f090u: goto label_18f090;
        case 0x18f094u: goto label_18f094;
        case 0x18f098u: goto label_18f098;
        case 0x18f09cu: goto label_18f09c;
        case 0x18f0a0u: goto label_18f0a0;
        case 0x18f0a4u: goto label_18f0a4;
        case 0x18f0a8u: goto label_18f0a8;
        case 0x18f0acu: goto label_18f0ac;
        case 0x18f0b0u: goto label_18f0b0;
        case 0x18f0b4u: goto label_18f0b4;
        case 0x18f0b8u: goto label_18f0b8;
        case 0x18f0bcu: goto label_18f0bc;
        case 0x18f0c0u: goto label_18f0c0;
        case 0x18f0c4u: goto label_18f0c4;
        case 0x18f0c8u: goto label_18f0c8;
        case 0x18f0ccu: goto label_18f0cc;
        case 0x18f0d0u: goto label_18f0d0;
        case 0x18f0d4u: goto label_18f0d4;
        case 0x18f0d8u: goto label_18f0d8;
        case 0x18f0dcu: goto label_18f0dc;
        case 0x18f0e0u: goto label_18f0e0;
        case 0x18f0e4u: goto label_18f0e4;
        case 0x18f0e8u: goto label_18f0e8;
        case 0x18f0ecu: goto label_18f0ec;
        case 0x18f0f0u: goto label_18f0f0;
        case 0x18f0f4u: goto label_18f0f4;
        case 0x18f0f8u: goto label_18f0f8;
        case 0x18f0fcu: goto label_18f0fc;
        case 0x18f100u: goto label_18f100;
        case 0x18f104u: goto label_18f104;
        default: break;
    }

    ctx->pc = 0x18ee70u;

label_18ee70:
    // 0x18ee70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18ee74:
    // 0x18ee74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_18ee78:
    // 0x18ee78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18ee7c:
    // 0x18ee7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ee7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ee80:
    // 0x18ee80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x18ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_18ee84:
    // 0x18ee84: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x18ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_18ee88:
    // 0x18ee88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x18ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_18ee8c:
    // 0x18ee8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18ee90:
    // 0x18ee90: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x18ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_18ee94:
    // 0x18ee94: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x18ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_18ee98:
    // 0x18ee98: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_18ee9c:
    if (ctx->pc == 0x18EE9Cu) {
        ctx->pc = 0x18EEA0u;
        goto label_18eea0;
    }
    ctx->pc = 0x18EE98u;
    {
        const bool branch_taken_0x18ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee98) {
            ctx->pc = 0x18EEDCu;
            goto label_18eedc;
        }
    }
    ctx->pc = 0x18EEA0u;
label_18eea0:
    // 0x18eea0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18eea4:
    // 0x18eea4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x18eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_18eea8:
    // 0x18eea8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x18eea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_18eeac:
    // 0x18eeac: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x18eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_18eeb0:
    // 0x18eeb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_18eeb4:
    if (ctx->pc == 0x18EEB4u) {
        ctx->pc = 0x18EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEB0u;
        // 0x18eeb4: 0x8c920014  lw          $s2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEB8u;
        goto label_18eeb8;
    }
    ctx->pc = 0x18EEB0u;
    {
        const bool branch_taken_0x18eeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEB0u;
        // 0x18eeb4: 0x8c920014  lw          $s2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eeb0) {
            ctx->pc = 0x18EEDCu;
            goto label_18eedc;
        }
    }
    ctx->pc = 0x18EEB8u;
label_18eeb8:
    // 0x18eeb8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x18eeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_18eebc:
    // 0x18eebc: 0xc095368  jal         func_254DA0
label_18eec0:
    if (ctx->pc == 0x18EEC0u) {
        ctx->pc = 0x18EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEBCu;
        // 0x18eec0: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEC4u;
        goto label_18eec4;
    }
    ctx->pc = 0x18EEBCu;
    SET_GPR_U32(ctx, 31, 0x18EEC4u);
    ctx->pc = 0x18EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEBCu;
    // 0x18eec0: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x18EEBCu, 0x18EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEC4u;
label_18eec4:
    // 0x18eec4: 0x10520089  beq         $v0, $s2, . + 4 + (0x89 << 2)
label_18eec8:
    if (ctx->pc == 0x18EEC8u) {
        ctx->pc = 0x18EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEC4u;
        // 0x18eec8: 0x8e02bd50  lw          $v0, -0x42B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EECCu;
        goto label_18eecc;
    }
    ctx->pc = 0x18EEC4u;
    {
        const bool branch_taken_0x18eec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x18EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEC4u;
        // 0x18eec8: 0x8e02bd50  lw          $v0, -0x42B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eec4) {
            ctx->pc = 0x18F0ECu;
            goto label_18f0ec;
        }
    }
    ctx->pc = 0x18EECCu;
label_18eecc:
    // 0x18eecc: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
label_18eed0:
    // 0x18eed0: 0x8c6401b0  lw          $a0, 0x1B0($v1)
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_18eed4:
    // 0x18eed4: 0x50920086  beql        $a0, $s2, . + 4 + (0x86 << 2)
label_18eed8:
    if (ctx->pc == 0x18EED8u) {
        ctx->pc = 0x18EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED4u;
        // 0x18eed8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEDCu;
        goto label_18eedc;
    }
    ctx->pc = 0x18EED4u;
    {
        const bool branch_taken_0x18eed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x18eed4) {
            ctx->pc = 0x18EED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EED4u;
            // 0x18eed8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18EEDCu;
label_18eedc:
    // 0x18eedc: 0xc061a12  jal         func_186848
label_18eee0:
    if (ctx->pc == 0x18EEE0u) {
        ctx->pc = 0x18EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEDCu;
        // 0x18eee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEE4u;
        goto label_18eee4;
    }
    ctx->pc = 0x18EEDCu;
    SET_GPR_U32(ctx, 31, 0x18EEE4u);
    ctx->pc = 0x18EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEDCu;
    // 0x18eee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EEDCu, 0x18EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EEE4u;
label_18eee4:
    // 0x18eee4: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x18eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_18eee8:
    // 0x18eee8: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x18eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
label_18eeec:
    // 0x18eeec: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x18eeecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_18eef0:
    // 0x18eef0: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
label_18eef4:
    if (ctx->pc == 0x18EEF4u) {
        ctx->pc = 0x18EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEF0u;
        // 0x18eef4: 0x24520310  addiu       $s2, $v0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EEF8u;
        goto label_18eef8;
    }
    ctx->pc = 0x18EEF0u;
    {
        const bool branch_taken_0x18eef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEF0u;
        // 0x18eef4: 0x24520310  addiu       $s2, $v0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eef0) {
            ctx->pc = 0x18EFB0u;
            goto label_18efb0;
        }
    }
    ctx->pc = 0x18EEF8u;
label_18eef8:
    // 0x18eef8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_18eefc:
    // 0x18eefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18eefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18ef00:
    // 0x18ef00: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x18ef00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
label_18ef04:
    // 0x18ef04: 0xc041196  jal         func_104658
label_18ef08:
    if (ctx->pc == 0x18EF08u) {
        ctx->pc = 0x18EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF04u;
        // 0x18ef08: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF0Cu;
        goto label_18ef0c;
    }
    ctx->pc = 0x18EF04u;
    SET_GPR_U32(ctx, 31, 0x18EF0Cu);
    ctx->pc = 0x18EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF04u;
    // 0x18ef08: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104658u, 0x18EF04u, 0x18EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF0Cu;
label_18ef0c:
    // 0x18ef0c: 0xc0f6a96  jal         func_3DAA58
label_18ef10:
    if (ctx->pc == 0x18EF10u) {
        ctx->pc = 0x18EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF0Cu;
        // 0x18ef10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF14u;
        goto label_18ef14;
    }
    ctx->pc = 0x18EF0Cu;
    SET_GPR_U32(ctx, 31, 0x18EF14u);
    ctx->pc = 0x18EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF0Cu;
    // 0x18ef10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18EF0Cu, 0x18EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF14u;
label_18ef14:
    // 0x18ef14: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ef18:
    if (ctx->pc == 0x18EF18u) {
        ctx->pc = 0x18EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF14u;
        // 0x18ef18: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF1Cu;
        goto label_18ef1c;
    }
    ctx->pc = 0x18EF14u;
    {
        const bool branch_taken_0x18ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF14u;
        // 0x18ef18: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef14) {
            ctx->pc = 0x18EF2Cu;
            goto label_18ef2c;
        }
    }
    ctx->pc = 0x18EF1Cu;
label_18ef1c:
    // 0x18ef1c: 0x0  nop
    ctx->pc = 0x18ef1cu;
    // NOP
label_18ef20:
    // 0x18ef20: 0xc041196  jal         func_104658
label_18ef24:
    if (ctx->pc == 0x18EF24u) {
        ctx->pc = 0x18EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF20u;
        // 0x18ef24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF28u;
        goto label_18ef28;
    }
    ctx->pc = 0x18EF20u;
    SET_GPR_U32(ctx, 31, 0x18EF28u);
    ctx->pc = 0x18EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF20u;
    // 0x18ef24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104658u, 0x18EF20u, 0x18EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF28u;
label_18ef28:
    // 0x18ef28: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18ef2c:
    // 0x18ef2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18ef30:
    if (ctx->pc == 0x18EF30u) {
        ctx->pc = 0x18EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF2Cu;
        // 0x18ef30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF34u;
        goto label_18ef34;
    }
    ctx->pc = 0x18EF2Cu;
    {
        const bool branch_taken_0x18ef2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF2Cu;
        // 0x18ef30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef2c) {
            ctx->pc = 0x18EF38u;
            goto label_18ef38;
        }
    }
    ctx->pc = 0x18EF34u;
label_18ef34:
    // 0x18ef34: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x18ef34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ef38:
    // 0x18ef38: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_18ef3c:
    if (ctx->pc == 0x18EF3Cu) {
        ctx->pc = 0x18EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF38u;
        // 0x18ef3c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF40u;
        goto label_18ef40;
    }
    ctx->pc = 0x18EF38u;
    {
        const bool branch_taken_0x18ef38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef38) {
            ctx->pc = 0x18EF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EF38u;
            // 0x18ef3c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EF74u;
            goto label_18ef74;
        }
    }
    ctx->pc = 0x18EF40u;
label_18ef40:
    // 0x18ef40: 0xc061a12  jal         func_186848
label_18ef44:
    if (ctx->pc == 0x18EF44u) {
        ctx->pc = 0x18EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF40u;
        // 0x18ef44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF48u;
        goto label_18ef48;
    }
    ctx->pc = 0x18EF40u;
    SET_GPR_U32(ctx, 31, 0x18EF48u);
    ctx->pc = 0x18EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF40u;
    // 0x18ef44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EF40u, 0x18EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF48u;
label_18ef48:
    // 0x18ef48: 0x2664f140  addiu       $a0, $s3, -0xEC0
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963520));
label_18ef4c:
    // 0x18ef4c: 0xc0f62ca  jal         func_3D8B28
label_18ef50:
    if (ctx->pc == 0x18EF50u) {
        ctx->pc = 0x18EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF4Cu;
        // 0x18ef50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF54u;
        goto label_18ef54;
    }
    ctx->pc = 0x18EF4Cu;
    SET_GPR_U32(ctx, 31, 0x18EF54u);
    ctx->pc = 0x18EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF4Cu;
    // 0x18ef50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x18EF4Cu, 0x18EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF54u;
label_18ef54:
    // 0x18ef54: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18ef58:
    if (ctx->pc == 0x18EF58u) {
        ctx->pc = 0x18EF5Cu;
        goto label_18ef5c;
    }
    ctx->pc = 0x18EF54u;
    {
        const bool branch_taken_0x18ef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef54) {
            ctx->pc = 0x18EF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef20;
        }
    }
    ctx->pc = 0x18EF5Cu;
label_18ef5c:
    // 0x18ef5c: 0xc0414a2  jal         func_105288
label_18ef60:
    if (ctx->pc == 0x18EF60u) {
        ctx->pc = 0x18EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF5Cu;
        // 0x18ef60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF64u;
        goto label_18ef64;
    }
    ctx->pc = 0x18EF5Cu;
    SET_GPR_U32(ctx, 31, 0x18EF64u);
    ctx->pc = 0x18EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF5Cu;
    // 0x18ef60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x18EF5Cu, 0x18EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF64u;
label_18ef64:
    // 0x18ef64: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_18ef68:
    if (ctx->pc == 0x18EF68u) {
        ctx->pc = 0x18EF6Cu;
        goto label_18ef6c;
    }
    ctx->pc = 0x18EF64u;
    {
        const bool branch_taken_0x18ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef64) {
            ctx->pc = 0x18EF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef20;
        }
    }
    ctx->pc = 0x18EF6Cu;
label_18ef6c:
    // 0x18ef6c: 0xae300060  sw          $s0, 0x60($s1)
    ctx->pc = 0x18ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
label_18ef70:
    // 0x18ef70: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x18ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_18ef74:
    // 0x18ef74: 0x10a0005e  beqz        $a1, . + 4 + (0x5E << 2)
label_18ef78:
    if (ctx->pc == 0x18EF78u) {
        ctx->pc = 0x18EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF74u;
        // 0x18ef78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF7Cu;
        goto label_18ef7c;
    }
    ctx->pc = 0x18EF74u;
    {
        const bool branch_taken_0x18ef74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF74u;
        // 0x18ef78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef74) {
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18EF7Cu;
label_18ef7c:
    // 0x18ef7c: 0xc06fb38  jal         func_1BECE0
label_18ef80:
    if (ctx->pc == 0x18EF80u) {
        ctx->pc = 0x18EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF7Cu;
        // 0x18ef80: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF84u;
        goto label_18ef84;
    }
    ctx->pc = 0x18EF7Cu;
    SET_GPR_U32(ctx, 31, 0x18EF84u);
    ctx->pc = 0x18EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF7Cu;
    // 0x18ef80: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x18EF7Cu, 0x18EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF84u;
label_18ef84:
    // 0x18ef84: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x18ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_18ef88:
    // 0x18ef88: 0xc06fb38  jal         func_1BECE0
label_18ef8c:
    if (ctx->pc == 0x18EF8Cu) {
        ctx->pc = 0x18EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF88u;
        // 0x18ef8c: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EF90u;
        goto label_18ef90;
    }
    ctx->pc = 0x18EF88u;
    SET_GPR_U32(ctx, 31, 0x18EF90u);
    ctx->pc = 0x18EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF88u;
    // 0x18ef8c: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x18EF88u, 0x18EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF90u;
label_18ef90:
    // 0x18ef90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18ef94:
    // 0x18ef94: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_18ef98:
    // 0x18ef98: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_18ef9c:
    // 0x18ef9c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18efa0:
    // 0x18efa0: 0x40f809  jalr        $v0
label_18efa4:
    if (ctx->pc == 0x18EFA4u) {
        ctx->pc = 0x18EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA0u;
        // 0x18efa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFA8u;
        goto label_18efa8;
    }
    ctx->pc = 0x18EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EFA8u);
        ctx->pc = 0x18EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA0u;
        // 0x18efa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EFA0u, 0x18EFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EFA8u;
label_18efa8:
    // 0x18efa8: 0x10000051  b           . + 4 + (0x51 << 2)
label_18efac:
    if (ctx->pc == 0x18EFACu) {
        ctx->pc = 0x18EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA8u;
        // 0x18efac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFB0u;
        goto label_18efb0;
    }
    ctx->pc = 0x18EFA8u;
    {
        const bool branch_taken_0x18efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFA8u;
        // 0x18efac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efa8) {
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18EFB0u;
label_18efb0:
    // 0x18efb0: 0xc061a2a  jal         func_1868A8
label_18efb4:
    if (ctx->pc == 0x18EFB4u) {
        ctx->pc = 0x18EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFB0u;
        // 0x18efb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFB8u;
        goto label_18efb8;
    }
    ctx->pc = 0x18EFB0u;
    SET_GPR_U32(ctx, 31, 0x18EFB8u);
    ctx->pc = 0x18EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFB0u;
    // 0x18efb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18EFB0u, 0x18EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFB8u;
label_18efb8:
    // 0x18efb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18efbc:
    // 0x18efbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18efbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18efc0:
    // 0x18efc0: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18efc4:
    // 0x18efc4: 0xc0952e8  jal         func_254BA0
label_18efc8:
    if (ctx->pc == 0x18EFC8u) {
        ctx->pc = 0x18EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFC4u;
        // 0x18efc8: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFCCu;
        goto label_18efcc;
    }
    ctx->pc = 0x18EFC4u;
    SET_GPR_U32(ctx, 31, 0x18EFCCu);
    ctx->pc = 0x18EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFC4u;
    // 0x18efc8: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18EFC4u, 0x18EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFCCu;
label_18efcc:
    // 0x18efcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18efd0:
    // 0x18efd0: 0xc061a2e  jal         func_1868B8
label_18efd4:
    if (ctx->pc == 0x18EFD4u) {
        ctx->pc = 0x18EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFD0u;
        // 0x18efd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFD8u;
        goto label_18efd8;
    }
    ctx->pc = 0x18EFD0u;
    SET_GPR_U32(ctx, 31, 0x18EFD8u);
    ctx->pc = 0x18EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFD0u;
    // 0x18efd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18EFD0u, 0x18EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFD8u;
label_18efd8:
    // 0x18efd8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18efdc:
    // 0x18efdc: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18efe0:
    // 0x18efe0: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18efe4:
    // 0x18efe4: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18efe8:
    // 0x18efe8: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
label_18efec:
    if (ctx->pc == 0x18EFECu) {
        ctx->pc = 0x18EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE8u;
        // 0x18efec: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFF0u;
        goto label_18eff0;
    }
    ctx->pc = 0x18EFE8u;
    {
        const bool branch_taken_0x18efe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18efe8) {
            ctx->pc = 0x18EFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EFE8u;
            // 0x18efec: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F020u;
            goto label_18f020;
        }
    }
    ctx->pc = 0x18EFF0u;
label_18eff0:
    // 0x18eff0: 0xc061a12  jal         func_186848
label_18eff4:
    if (ctx->pc == 0x18EFF4u) {
        ctx->pc = 0x18EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFF0u;
        // 0x18eff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EFF8u;
        goto label_18eff8;
    }
    ctx->pc = 0x18EFF0u;
    SET_GPR_U32(ctx, 31, 0x18EFF8u);
    ctx->pc = 0x18EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFF0u;
    // 0x18eff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EFF0u, 0x18EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFF8u;
label_18eff8:
    // 0x18eff8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18effc:
    // 0x18effc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f000:
    // 0x18f000: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_18f004:
    // 0x18f004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18f004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f008:
    // 0x18f008: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18f00c:
    // 0x18f00c: 0x40f809  jalr        $v0
label_18f010:
    if (ctx->pc == 0x18F010u) {
        ctx->pc = 0x18F014u;
        goto label_18f014;
    }
    ctx->pc = 0x18F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F014u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F00Cu, 0x18F014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F014u;
label_18f014:
    // 0x18f014: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_18f018:
    if (ctx->pc == 0x18F018u) {
        ctx->pc = 0x18F01Cu;
        goto label_18f01c;
    }
    ctx->pc = 0x18F014u;
    {
        const bool branch_taken_0x18f014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f014) {
            ctx->pc = 0x18F060u;
            goto label_18f060;
        }
    }
    ctx->pc = 0x18F01Cu;
label_18f01c:
    // 0x18f01c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18f020:
    // 0x18f020: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x18f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_18f024:
    // 0x18f024: 0x40f809  jalr        $v0
label_18f028:
    if (ctx->pc == 0x18F028u) {
        ctx->pc = 0x18F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F024u;
        // 0x18f028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F02Cu;
        goto label_18f02c;
    }
    ctx->pc = 0x18F024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F02Cu);
        ctx->pc = 0x18F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F024u;
        // 0x18f028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F024u, 0x18F02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F02Cu;
label_18f02c:
    // 0x18f02c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_18f030:
    if (ctx->pc == 0x18F030u) {
        ctx->pc = 0x18F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F02Cu;
        // 0x18f030: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F034u;
        goto label_18f034;
    }
    ctx->pc = 0x18F02Cu;
    {
        const bool branch_taken_0x18f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F02Cu;
        // 0x18f030: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f02c) {
            ctx->pc = 0x18F0C0u;
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F034u;
label_18f034:
    // 0x18f034: 0xc061a12  jal         func_186848
label_18f038:
    if (ctx->pc == 0x18F038u) {
        ctx->pc = 0x18F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F034u;
        // 0x18f038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F03Cu;
        goto label_18f03c;
    }
    ctx->pc = 0x18F034u;
    SET_GPR_U32(ctx, 31, 0x18F03Cu);
    ctx->pc = 0x18F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F034u;
    // 0x18f038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F034u, 0x18F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F03Cu;
label_18f03c:
    // 0x18f03c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f040:
    // 0x18f040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f044:
    // 0x18f044: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_18f048:
    // 0x18f048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18f048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f04c:
    // 0x18f04c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18f050:
    // 0x18f050: 0x40f809  jalr        $v0
label_18f054:
    if (ctx->pc == 0x18F054u) {
        ctx->pc = 0x18F058u;
        goto label_18f058;
    }
    ctx->pc = 0x18F050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F058u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F050u, 0x18F058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F058u;
label_18f058:
    // 0x18f058: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_18f05c:
    if (ctx->pc == 0x18F05Cu) {
        ctx->pc = 0x18F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F058u;
        // 0x18f05c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F060u;
        goto label_18f060;
    }
    ctx->pc = 0x18F058u;
    {
        const bool branch_taken_0x18f058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F058u;
        // 0x18f05c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f058) {
            ctx->pc = 0x18F0C0u;
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F060u;
label_18f060:
    // 0x18f060: 0xc061a12  jal         func_186848
label_18f064:
    if (ctx->pc == 0x18F064u) {
        ctx->pc = 0x18F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F060u;
        // 0x18f064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F068u;
        goto label_18f068;
    }
    ctx->pc = 0x18F060u;
    SET_GPR_U32(ctx, 31, 0x18F068u);
    ctx->pc = 0x18F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F060u;
    // 0x18f064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F060u, 0x18F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F068u;
label_18f068:
    // 0x18f068: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f06c:
    // 0x18f06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f070:
    // 0x18f070: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18f074:
    // 0x18f074: 0x40f809  jalr        $v0
label_18f078:
    if (ctx->pc == 0x18F078u) {
        ctx->pc = 0x18F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F074u;
        // 0x18f078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F07Cu;
        goto label_18f07c;
    }
    ctx->pc = 0x18F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F07Cu);
        ctx->pc = 0x18F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F074u;
        // 0x18f078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F074u, 0x18F07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F07Cu;
label_18f07c:
    // 0x18f07c: 0xc061a12  jal         func_186848
label_18f080:
    if (ctx->pc == 0x18F080u) {
        ctx->pc = 0x18F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F07Cu;
        // 0x18f080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F084u;
        goto label_18f084;
    }
    ctx->pc = 0x18F07Cu;
    SET_GPR_U32(ctx, 31, 0x18F084u);
    ctx->pc = 0x18F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F07Cu;
    // 0x18f080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F07Cu, 0x18F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F084u;
label_18f084:
    // 0x18f084: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x18f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f088:
    // 0x18f088: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x18f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_18f08c:
    // 0x18f08c: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_18f090:
    // 0x18f090: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18f090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f094:
    // 0x18f094: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x18f094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_18f098:
    // 0x18f098: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f09c:
    // 0x18f09c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x18f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_18f0a0:
    // 0x18f0a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x18f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f0a4:
    // 0x18f0a4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x18f0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_18f0a8:
    // 0x18f0a8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x18f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18f0ac:
    // 0x18f0ac: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x18f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_18f0b0:
    // 0x18f0b0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x18f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_18f0b4:
    // 0x18f0b4: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x18f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_18f0b8:
    // 0x18f0b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_18f0bc:
    if (ctx->pc == 0x18F0BCu) {
        ctx->pc = 0x18F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B8u;
        // 0x18f0bc: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0C0u;
        goto label_18f0c0;
    }
    ctx->pc = 0x18F0B8u;
    {
        const bool branch_taken_0x18f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B8u;
        // 0x18f0bc: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0b8) {
            ctx->pc = 0x18F0ECu;
            goto label_18f0ec;
        }
    }
    ctx->pc = 0x18F0C0u;
label_18f0c0:
    // 0x18f0c0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_18f0c4:
    // 0x18f0c4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_18f0c8:
    // 0x18f0c8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18f0cc:
    // 0x18f0cc: 0x40f809  jalr        $v0
label_18f0d0:
    if (ctx->pc == 0x18F0D0u) {
        ctx->pc = 0x18F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0CCu;
        // 0x18f0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0D4u;
        goto label_18f0d4;
    }
    ctx->pc = 0x18F0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F0D4u);
        ctx->pc = 0x18F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0CCu;
        // 0x18f0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F0CCu, 0x18F0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F0D4u;
label_18f0d4:
    // 0x18f0d4: 0xc061a12  jal         func_186848
label_18f0d8:
    if (ctx->pc == 0x18F0D8u) {
        ctx->pc = 0x18F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0D4u;
        // 0x18f0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0DCu;
        goto label_18f0dc;
    }
    ctx->pc = 0x18F0D4u;
    SET_GPR_U32(ctx, 31, 0x18F0DCu);
    ctx->pc = 0x18F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0D4u;
    // 0x18f0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F0D4u, 0x18F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0DCu;
label_18f0dc:
    // 0x18f0dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18f0e0:
    // 0x18f0e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18f0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f0e4:
    // 0x18f0e4: 0xc06fa7e  jal         func_1BE9F8
label_18f0e8:
    if (ctx->pc == 0x18F0E8u) {
        ctx->pc = 0x18F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E4u;
        // 0x18f0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0ECu;
        goto label_18f0ec;
    }
    ctx->pc = 0x18F0E4u;
    SET_GPR_U32(ctx, 31, 0x18F0ECu);
    ctx->pc = 0x18F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0E4u;
    // 0x18f0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9F8u, 0x18F0E4u, 0x18F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0ECu;
label_18f0ec:
    // 0x18f0ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18f0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18f0f0:
    // 0x18f0f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18f0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18f0f4:
    // 0x18f0f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18f0f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18f0f8:
    // 0x18f0f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x18f0f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18f0fc:
    // 0x18f0fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18f100:
    // 0x18f100: 0x3e00008  jr          $ra
label_18f104:
    if (ctx->pc == 0x18F104u) {
        ctx->pc = 0x18F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F100u;
        // 0x18f104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F108u;
        goto label_fallthrough_0x18f100;
    }
    ctx->pc = 0x18F100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F100u;
        // 0x18f104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f100:
    ctx->pc = 0x18F108u;
}
