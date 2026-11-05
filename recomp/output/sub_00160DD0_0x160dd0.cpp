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

// Function: sub_00160DD0
// Address: 0x160dd0 - 0x160f60
void sub_00160DD0_0x160dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160DD0_0x160dd0");
#endif

    switch (ctx->pc) {
        case 0x160dd0u: goto label_160dd0;
        case 0x160dd4u: goto label_160dd4;
        case 0x160dd8u: goto label_160dd8;
        case 0x160ddcu: goto label_160ddc;
        case 0x160de0u: goto label_160de0;
        case 0x160de4u: goto label_160de4;
        case 0x160de8u: goto label_160de8;
        case 0x160decu: goto label_160dec;
        case 0x160df0u: goto label_160df0;
        case 0x160df4u: goto label_160df4;
        case 0x160df8u: goto label_160df8;
        case 0x160dfcu: goto label_160dfc;
        case 0x160e00u: goto label_160e00;
        case 0x160e04u: goto label_160e04;
        case 0x160e08u: goto label_160e08;
        case 0x160e0cu: goto label_160e0c;
        case 0x160e10u: goto label_160e10;
        case 0x160e14u: goto label_160e14;
        case 0x160e18u: goto label_160e18;
        case 0x160e1cu: goto label_160e1c;
        case 0x160e20u: goto label_160e20;
        case 0x160e24u: goto label_160e24;
        case 0x160e28u: goto label_160e28;
        case 0x160e2cu: goto label_160e2c;
        case 0x160e30u: goto label_160e30;
        case 0x160e34u: goto label_160e34;
        case 0x160e38u: goto label_160e38;
        case 0x160e3cu: goto label_160e3c;
        case 0x160e40u: goto label_160e40;
        case 0x160e44u: goto label_160e44;
        case 0x160e48u: goto label_160e48;
        case 0x160e4cu: goto label_160e4c;
        case 0x160e50u: goto label_160e50;
        case 0x160e54u: goto label_160e54;
        case 0x160e58u: goto label_160e58;
        case 0x160e5cu: goto label_160e5c;
        case 0x160e60u: goto label_160e60;
        case 0x160e64u: goto label_160e64;
        case 0x160e68u: goto label_160e68;
        case 0x160e6cu: goto label_160e6c;
        case 0x160e70u: goto label_160e70;
        case 0x160e74u: goto label_160e74;
        case 0x160e78u: goto label_160e78;
        case 0x160e7cu: goto label_160e7c;
        case 0x160e80u: goto label_160e80;
        case 0x160e84u: goto label_160e84;
        case 0x160e88u: goto label_160e88;
        case 0x160e8cu: goto label_160e8c;
        case 0x160e90u: goto label_160e90;
        case 0x160e94u: goto label_160e94;
        case 0x160e98u: goto label_160e98;
        case 0x160e9cu: goto label_160e9c;
        case 0x160ea0u: goto label_160ea0;
        case 0x160ea4u: goto label_160ea4;
        case 0x160ea8u: goto label_160ea8;
        case 0x160eacu: goto label_160eac;
        case 0x160eb0u: goto label_160eb0;
        case 0x160eb4u: goto label_160eb4;
        case 0x160eb8u: goto label_160eb8;
        case 0x160ebcu: goto label_160ebc;
        case 0x160ec0u: goto label_160ec0;
        case 0x160ec4u: goto label_160ec4;
        case 0x160ec8u: goto label_160ec8;
        case 0x160eccu: goto label_160ecc;
        case 0x160ed0u: goto label_160ed0;
        case 0x160ed4u: goto label_160ed4;
        case 0x160ed8u: goto label_160ed8;
        case 0x160edcu: goto label_160edc;
        case 0x160ee0u: goto label_160ee0;
        case 0x160ee4u: goto label_160ee4;
        case 0x160ee8u: goto label_160ee8;
        case 0x160eecu: goto label_160eec;
        case 0x160ef0u: goto label_160ef0;
        case 0x160ef4u: goto label_160ef4;
        case 0x160ef8u: goto label_160ef8;
        case 0x160efcu: goto label_160efc;
        case 0x160f00u: goto label_160f00;
        case 0x160f04u: goto label_160f04;
        case 0x160f08u: goto label_160f08;
        case 0x160f0cu: goto label_160f0c;
        case 0x160f10u: goto label_160f10;
        case 0x160f14u: goto label_160f14;
        case 0x160f18u: goto label_160f18;
        case 0x160f1cu: goto label_160f1c;
        case 0x160f20u: goto label_160f20;
        case 0x160f24u: goto label_160f24;
        case 0x160f28u: goto label_160f28;
        case 0x160f2cu: goto label_160f2c;
        case 0x160f30u: goto label_160f30;
        case 0x160f34u: goto label_160f34;
        case 0x160f38u: goto label_160f38;
        case 0x160f3cu: goto label_160f3c;
        case 0x160f40u: goto label_160f40;
        case 0x160f44u: goto label_160f44;
        case 0x160f48u: goto label_160f48;
        case 0x160f4cu: goto label_160f4c;
        case 0x160f50u: goto label_160f50;
        case 0x160f54u: goto label_160f54;
        case 0x160f58u: goto label_160f58;
        case 0x160f5cu: goto label_160f5c;
        default: break;
    }

    ctx->pc = 0x160dd0u;

label_160dd0:
    // 0x160dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_160dd4:
    // 0x160dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_160dd8:
    // 0x160dd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x160dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160ddc:
    // 0x160ddc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x160ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_160de0:
    // 0x160de0: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x160de0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_160de4:
    // 0x160de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_160de8:
    // 0x160de8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_160dec:
    // 0x160dec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x160decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_160df0:
    // 0x160df0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x160df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_160df4:
    // 0x160df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_160df8:
    // 0x160df8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x160df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_160dfc:
    // 0x160dfc: 0xc04f1e0  jal         func_13C780
label_160e00:
    if (ctx->pc == 0x160E00u) {
        ctx->pc = 0x160E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DFCu;
        // 0x160e00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E04u;
        goto label_160e04;
    }
    ctx->pc = 0x160DFCu;
    SET_GPR_U32(ctx, 31, 0x160E04u);
    ctx->pc = 0x160E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160DFCu;
    // 0x160e00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C780u, 0x160DFCu, 0x160E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E04u;
label_160e04:
    // 0x160e04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x160e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160e08:
    // 0x160e08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160e0c:
    // 0x160e0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_160e10:
    // 0x160e10: 0xc04f33e  jal         func_13CCF8
label_160e14:
    if (ctx->pc == 0x160E14u) {
        ctx->pc = 0x160E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E10u;
        // 0x160e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E18u;
        goto label_160e18;
    }
    ctx->pc = 0x160E10u;
    SET_GPR_U32(ctx, 31, 0x160E18u);
    ctx->pc = 0x160E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E10u;
    // 0x160e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x160E10u, 0x160E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E18u;
label_160e18:
    // 0x160e18: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_160e1c:
    // 0x160e1c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x160e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_160e20:
    // 0x160e20: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x160e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_160e24:
    // 0x160e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160e28:
    // 0x160e28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x160e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_160e2c:
    // 0x160e2c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x160e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_160e30:
    // 0x160e30: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x160e30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160e34:
    // 0x160e34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x160e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160e38:
    // 0x160e38: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x160e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_160e3c:
    // 0x160e3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_160e40:
    // 0x160e40: 0xc05836e  jal         func_160DB8
label_160e44:
    if (ctx->pc == 0x160E44u) {
        ctx->pc = 0x160E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E40u;
        // 0x160e44: 0x8c70020c  lw          $s0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E48u;
        goto label_160e48;
    }
    ctx->pc = 0x160E40u;
    SET_GPR_U32(ctx, 31, 0x160E48u);
    ctx->pc = 0x160E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E40u;
    // 0x160e44: 0x8c70020c  lw          $s0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DB8u, 0x160E40u, 0x160E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E48u;
label_160e48:
    // 0x160e48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_160e4c:
    if (ctx->pc == 0x160E4Cu) {
        ctx->pc = 0x160E50u;
        goto label_160e50;
    }
    ctx->pc = 0x160E48u;
    {
        const bool branch_taken_0x160e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160e48) {
            ctx->pc = 0x160E88u;
            goto label_160e88;
        }
    }
    ctx->pc = 0x160E50u;
label_160e50:
    // 0x160e50: 0xc04432c  jal         func_110CB0
label_160e54:
    if (ctx->pc == 0x160E54u) {
        ctx->pc = 0x160E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E50u;
        // 0x160e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E58u;
        goto label_160e58;
    }
    ctx->pc = 0x160E50u;
    SET_GPR_U32(ctx, 31, 0x160E58u);
    ctx->pc = 0x160E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E50u;
    // 0x160e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CB0u, 0x160E50u, 0x160E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E58u;
label_160e58:
    // 0x160e58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160e5c:
    // 0x160e5c: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_160e60:
    if (ctx->pc == 0x160E60u) {
        ctx->pc = 0x160E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E5Cu;
        // 0x160e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E64u;
        goto label_160e64;
    }
    ctx->pc = 0x160E5Cu;
    {
        const bool branch_taken_0x160e5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x160E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E5Cu;
        // 0x160e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e5c) {
            ctx->pc = 0x160E7Cu;
            goto label_160e7c;
        }
    }
    ctx->pc = 0x160E64u;
label_160e64:
    // 0x160e64: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_160e68:
    // 0x160e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_160e6c:
    if (ctx->pc == 0x160E6Cu) {
        ctx->pc = 0x160E70u;
        goto label_160e70;
    }
    ctx->pc = 0x160E68u;
    {
        const bool branch_taken_0x160e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e68) {
            ctx->pc = 0x160E7Cu;
            goto label_160e7c;
        }
    }
    ctx->pc = 0x160E70u;
label_160e70:
    // 0x160e70: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x160e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_160e74:
    // 0x160e74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_160e78:
    if (ctx->pc == 0x160E78u) {
        ctx->pc = 0x160E7Cu;
        goto label_160e7c;
    }
    ctx->pc = 0x160E74u;
    {
        const bool branch_taken_0x160e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160e74) {
            ctx->pc = 0x160E88u;
            goto label_160e88;
        }
    }
    ctx->pc = 0x160E7Cu;
label_160e7c:
    // 0x160e7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x160e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160e80:
    // 0x160e80: 0xc058368  jal         func_160DA0
label_160e84:
    if (ctx->pc == 0x160E84u) {
        ctx->pc = 0x160E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E80u;
        // 0x160e84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E88u;
        goto label_160e88;
    }
    ctx->pc = 0x160E80u;
    SET_GPR_U32(ctx, 31, 0x160E88u);
    ctx->pc = 0x160E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E80u;
    // 0x160e84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DA0u, 0x160E80u, 0x160E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E88u;
label_160e88:
    // 0x160e88: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_160e8c:
    if (ctx->pc == 0x160E8Cu) {
        ctx->pc = 0x160E90u;
        goto label_160e90;
    }
    ctx->pc = 0x160E88u;
    {
        const bool branch_taken_0x160e88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x160e88) {
            ctx->pc = 0x160E9Cu;
            goto label_160e9c;
        }
    }
    ctx->pc = 0x160E90u;
label_160e90:
    // 0x160e90: 0xc044320  jal         func_110C80
label_160e94:
    if (ctx->pc == 0x160E94u) {
        ctx->pc = 0x160E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E90u;
        // 0x160e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E98u;
        goto label_160e98;
    }
    ctx->pc = 0x160E90u;
    SET_GPR_U32(ctx, 31, 0x160E98u);
    ctx->pc = 0x160E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E90u;
    // 0x160e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C80u, 0x160E90u, 0x160E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E98u;
label_160e98:
    // 0x160e98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160e9c:
    // 0x160e9c: 0xc04631a  jal         func_118C68
label_160ea0:
    if (ctx->pc == 0x160EA0u) {
        ctx->pc = 0x160EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E9Cu;
        // 0x160ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EA4u;
        goto label_160ea4;
    }
    ctx->pc = 0x160E9Cu;
    SET_GPR_U32(ctx, 31, 0x160EA4u);
    ctx->pc = 0x160EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E9Cu;
    // 0x160ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C68u, 0x160E9Cu, 0x160EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EA4u;
label_160ea4:
    // 0x160ea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x160ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160ea8:
    // 0x160ea8: 0xc045eee  jal         func_117BB8
label_160eac:
    if (ctx->pc == 0x160EACu) {
        ctx->pc = 0x160EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EA8u;
        // 0x160eac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EB0u;
        goto label_160eb0;
    }
    ctx->pc = 0x160EA8u;
    SET_GPR_U32(ctx, 31, 0x160EB0u);
    ctx->pc = 0x160EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EA8u;
    // 0x160eac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x160EA8u, 0x160EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EB0u;
label_160eb0:
    // 0x160eb0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_160eb4:
    // 0x160eb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x160eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_160eb8:
    // 0x160eb8: 0xc042136  jal         func_1084D8
label_160ebc:
    if (ctx->pc == 0x160EBCu) {
        ctx->pc = 0x160EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EB8u;
        // 0x160ebc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EC0u;
        goto label_160ec0;
    }
    ctx->pc = 0x160EB8u;
    SET_GPR_U32(ctx, 31, 0x160EC0u);
    ctx->pc = 0x160EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EB8u;
    // 0x160ebc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x160EB8u, 0x160EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EC0u;
label_160ec0:
    // 0x160ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160ec4:
    // 0x160ec4: 0xc04f0b6  jal         func_13C2D8
label_160ec8:
    if (ctx->pc == 0x160EC8u) {
        ctx->pc = 0x160EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EC4u;
        // 0x160ec8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160ECCu;
        goto label_160ecc;
    }
    ctx->pc = 0x160EC4u;
    SET_GPR_U32(ctx, 31, 0x160ECCu);
    ctx->pc = 0x160EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EC4u;
    // 0x160ec8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x160EC4u, 0x160ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160ECCu;
label_160ecc:
    // 0x160ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160ed0:
    // 0x160ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160ed4:
    // 0x160ed4: 0xc046304  jal         func_118C10
label_160ed8:
    if (ctx->pc == 0x160ED8u) {
        ctx->pc = 0x160ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ED4u;
        // 0x160ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EDCu;
        goto label_160edc;
    }
    ctx->pc = 0x160ED4u;
    SET_GPR_U32(ctx, 31, 0x160EDCu);
    ctx->pc = 0x160ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160ED4u;
    // 0x160ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x160ED4u, 0x160EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EDCu;
label_160edc:
    // 0x160edc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x160edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_160ee0:
    // 0x160ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160ee4:
    // 0x160ee4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x160ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_160ee8:
    // 0x160ee8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x160ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_160eec:
    // 0x160eec: 0x40f809  jalr        $v0
label_160ef0:
    if (ctx->pc == 0x160EF0u) {
        ctx->pc = 0x160EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EECu;
        // 0x160ef0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EF4u;
        goto label_160ef4;
    }
    ctx->pc = 0x160EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160EF4u);
        ctx->pc = 0x160EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EECu;
        // 0x160ef0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160EECu, 0x160EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160EF4u;
label_160ef4:
    // 0x160ef4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x160ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_160ef8:
    // 0x160ef8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x160ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_160efc:
    // 0x160efc: 0xc04d6fe  jal         func_135BF8
label_160f00:
    if (ctx->pc == 0x160F00u) {
        ctx->pc = 0x160F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EFCu;
        // 0x160f00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F04u;
        goto label_160f04;
    }
    ctx->pc = 0x160EFCu;
    SET_GPR_U32(ctx, 31, 0x160F04u);
    ctx->pc = 0x160F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EFCu;
    // 0x160f00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x160EFCu, 0x160F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F04u;
label_160f04:
    // 0x160f04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x160f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_160f08:
    // 0x160f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160f0c:
    // 0x160f0c: 0xc04f124  jal         func_13C490
label_160f10:
    if (ctx->pc == 0x160F10u) {
        ctx->pc = 0x160F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F0Cu;
        // 0x160f10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F14u;
        goto label_160f14;
    }
    ctx->pc = 0x160F0Cu;
    SET_GPR_U32(ctx, 31, 0x160F14u);
    ctx->pc = 0x160F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F0Cu;
    // 0x160f10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x160F0Cu, 0x160F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F14u;
label_160f14:
    // 0x160f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160f18:
    // 0x160f18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x160f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160f1c:
    // 0x160f1c: 0xc04f10c  jal         func_13C430
label_160f20:
    if (ctx->pc == 0x160F20u) {
        ctx->pc = 0x160F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F1Cu;
        // 0x160f20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F24u;
        goto label_160f24;
    }
    ctx->pc = 0x160F1Cu;
    SET_GPR_U32(ctx, 31, 0x160F24u);
    ctx->pc = 0x160F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F1Cu;
    // 0x160f20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x160F1Cu, 0x160F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F24u;
label_160f24:
    // 0x160f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x160f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160f28:
    // 0x160f28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x160f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160f2c:
    // 0x160f2c: 0xc04f118  jal         func_13C460
label_160f30:
    if (ctx->pc == 0x160F30u) {
        ctx->pc = 0x160F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F2Cu;
        // 0x160f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F34u;
        goto label_160f34;
    }
    ctx->pc = 0x160F2Cu;
    SET_GPR_U32(ctx, 31, 0x160F34u);
    ctx->pc = 0x160F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F2Cu;
    // 0x160f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x160F2Cu, 0x160F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F34u;
label_160f34:
    // 0x160f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160f38:
    // 0x160f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_160f3c:
    // 0x160f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160f40:
    // 0x160f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_160f44:
    // 0x160f44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x160f44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_160f48:
    // 0x160f48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x160f48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_160f4c:
    // 0x160f4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x160f4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_160f50:
    // 0x160f50: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x160f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_160f54:
    // 0x160f54: 0x3e00008  jr          $ra
label_160f58:
    if (ctx->pc == 0x160F58u) {
        ctx->pc = 0x160F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F54u;
        // 0x160f58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F5Cu;
        goto label_160f5c;
    }
    ctx->pc = 0x160F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F54u;
        // 0x160f58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160F5Cu;
label_160f5c:
    // 0x160f5c: 0x0  nop
    ctx->pc = 0x160f5cu;
    // NOP
    ctx->pc = 0x160f60u;
}
