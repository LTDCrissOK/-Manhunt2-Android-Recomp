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

// Function: sub_0029ED80
// Address: 0x29ed80 - 0x29ef28
void sub_0029ED80_0x29ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ED80_0x29ed80");
#endif

    switch (ctx->pc) {
        case 0x29ed80u: goto label_29ed80;
        case 0x29ed84u: goto label_29ed84;
        case 0x29ed88u: goto label_29ed88;
        case 0x29ed8cu: goto label_29ed8c;
        case 0x29ed90u: goto label_29ed90;
        case 0x29ed94u: goto label_29ed94;
        case 0x29ed98u: goto label_29ed98;
        case 0x29ed9cu: goto label_29ed9c;
        case 0x29eda0u: goto label_29eda0;
        case 0x29eda4u: goto label_29eda4;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edacu: goto label_29edac;
        case 0x29edb0u: goto label_29edb0;
        case 0x29edb4u: goto label_29edb4;
        case 0x29edb8u: goto label_29edb8;
        case 0x29edbcu: goto label_29edbc;
        case 0x29edc0u: goto label_29edc0;
        case 0x29edc4u: goto label_29edc4;
        case 0x29edc8u: goto label_29edc8;
        case 0x29edccu: goto label_29edcc;
        case 0x29edd0u: goto label_29edd0;
        case 0x29edd4u: goto label_29edd4;
        case 0x29edd8u: goto label_29edd8;
        case 0x29eddcu: goto label_29eddc;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ede4u: goto label_29ede4;
        case 0x29ede8u: goto label_29ede8;
        case 0x29edecu: goto label_29edec;
        case 0x29edf0u: goto label_29edf0;
        case 0x29edf4u: goto label_29edf4;
        case 0x29edf8u: goto label_29edf8;
        case 0x29edfcu: goto label_29edfc;
        case 0x29ee00u: goto label_29ee00;
        case 0x29ee04u: goto label_29ee04;
        case 0x29ee08u: goto label_29ee08;
        case 0x29ee0cu: goto label_29ee0c;
        case 0x29ee10u: goto label_29ee10;
        case 0x29ee14u: goto label_29ee14;
        case 0x29ee18u: goto label_29ee18;
        case 0x29ee1cu: goto label_29ee1c;
        case 0x29ee20u: goto label_29ee20;
        case 0x29ee24u: goto label_29ee24;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee2cu: goto label_29ee2c;
        case 0x29ee30u: goto label_29ee30;
        case 0x29ee34u: goto label_29ee34;
        case 0x29ee38u: goto label_29ee38;
        case 0x29ee3cu: goto label_29ee3c;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee44u: goto label_29ee44;
        case 0x29ee48u: goto label_29ee48;
        case 0x29ee4cu: goto label_29ee4c;
        case 0x29ee50u: goto label_29ee50;
        case 0x29ee54u: goto label_29ee54;
        case 0x29ee58u: goto label_29ee58;
        case 0x29ee5cu: goto label_29ee5c;
        case 0x29ee60u: goto label_29ee60;
        case 0x29ee64u: goto label_29ee64;
        case 0x29ee68u: goto label_29ee68;
        case 0x29ee6cu: goto label_29ee6c;
        case 0x29ee70u: goto label_29ee70;
        case 0x29ee74u: goto label_29ee74;
        case 0x29ee78u: goto label_29ee78;
        case 0x29ee7cu: goto label_29ee7c;
        case 0x29ee80u: goto label_29ee80;
        case 0x29ee84u: goto label_29ee84;
        case 0x29ee88u: goto label_29ee88;
        case 0x29ee8cu: goto label_29ee8c;
        case 0x29ee90u: goto label_29ee90;
        case 0x29ee94u: goto label_29ee94;
        case 0x29ee98u: goto label_29ee98;
        case 0x29ee9cu: goto label_29ee9c;
        case 0x29eea0u: goto label_29eea0;
        case 0x29eea4u: goto label_29eea4;
        case 0x29eea8u: goto label_29eea8;
        case 0x29eeacu: goto label_29eeac;
        case 0x29eeb0u: goto label_29eeb0;
        case 0x29eeb4u: goto label_29eeb4;
        case 0x29eeb8u: goto label_29eeb8;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eec0u: goto label_29eec0;
        case 0x29eec4u: goto label_29eec4;
        case 0x29eec8u: goto label_29eec8;
        case 0x29eeccu: goto label_29eecc;
        case 0x29eed0u: goto label_29eed0;
        case 0x29eed4u: goto label_29eed4;
        case 0x29eed8u: goto label_29eed8;
        case 0x29eedcu: goto label_29eedc;
        case 0x29eee0u: goto label_29eee0;
        case 0x29eee4u: goto label_29eee4;
        case 0x29eee8u: goto label_29eee8;
        case 0x29eeecu: goto label_29eeec;
        case 0x29eef0u: goto label_29eef0;
        case 0x29eef4u: goto label_29eef4;
        case 0x29eef8u: goto label_29eef8;
        case 0x29eefcu: goto label_29eefc;
        case 0x29ef00u: goto label_29ef00;
        case 0x29ef04u: goto label_29ef04;
        case 0x29ef08u: goto label_29ef08;
        case 0x29ef0cu: goto label_29ef0c;
        case 0x29ef10u: goto label_29ef10;
        case 0x29ef14u: goto label_29ef14;
        case 0x29ef18u: goto label_29ef18;
        case 0x29ef1cu: goto label_29ef1c;
        case 0x29ef20u: goto label_29ef20;
        case 0x29ef24u: goto label_29ef24;
        default: break;
    }

    ctx->pc = 0x29ed80u;

label_29ed80:
    // 0x29ed80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29ed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29ed84:
    // 0x29ed84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29ed84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29ed88:
    // 0x29ed88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29ed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_29ed8c:
    // 0x29ed8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ed8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ed90:
    // 0x29ed90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29ed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_29ed94:
    // 0x29ed94: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x29ed94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_29ed98:
    // 0x29ed98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29ed98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ed9c:
    // 0x29ed9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29ed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29eda0:
    // 0x29eda0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eda4:
    // 0x29eda4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_29eda8:
    // 0x29eda8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x29eda8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_29edac:
    // 0x29edac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29edacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29edb0:
    // 0x29edb0: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x29edb0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_29edb4:
    // 0x29edb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_29edb8:
    // 0x29edb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29edb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29edbc:
    // 0x29edbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_29edc0:
    // 0x29edc0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x29edc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_29edc4:
    // 0x29edc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29edc8:
    // 0x29edc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29edc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29edcc:
    // 0x29edcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29edccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29edd0:
    // 0x29edd0: 0xc0da874  jal         func_36A1D0
label_29edd4:
    if (ctx->pc == 0x29EDD4u) {
        ctx->pc = 0x29EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDD0u;
        // 0x29edd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDD8u;
        goto label_29edd8;
    }
    ctx->pc = 0x29EDD0u;
    SET_GPR_U32(ctx, 31, 0x29EDD8u);
    ctx->pc = 0x29EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDD0u;
    // 0x29edd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x29EDD0u, 0x29EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDD8u;
label_29edd8:
    // 0x29edd8: 0x8e62021c  lw          $v0, 0x21C($s3)
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
label_29eddc:
    // 0x29eddc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29ede0:
    if (ctx->pc == 0x29EDE0u) {
        ctx->pc = 0x29EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDDCu;
        // 0x29ede0: 0x26710214  addiu       $s1, $s3, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 532));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDE4u;
        goto label_29ede4;
    }
    ctx->pc = 0x29EDDCu;
    {
        const bool branch_taken_0x29eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDDCu;
        // 0x29ede0: 0x26710214  addiu       $s1, $s3, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eddc) {
            ctx->pc = 0x29EE04u;
            goto label_29ee04;
        }
    }
    ctx->pc = 0x29EDE4u;
label_29ede4:
    // 0x29ede4: 0xc0a71e0  jal         func_29C780
label_29ede8:
    if (ctx->pc == 0x29EDE8u) {
        ctx->pc = 0x29EDECu;
        goto label_29edec;
    }
    ctx->pc = 0x29EDE4u;
    SET_GPR_U32(ctx, 31, 0x29EDECu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29EDE4u, 0x29EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDECu;
label_29edec:
    // 0x29edec: 0x8e64021c  lw          $a0, 0x21C($s3)
    ctx->pc = 0x29edecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
label_29edf0:
    // 0x29edf0: 0xc0a3c02  jal         func_28F008
label_29edf4:
    if (ctx->pc == 0x29EDF4u) {
        ctx->pc = 0x29EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDF0u;
        // 0x29edf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDF8u;
        goto label_29edf8;
    }
    ctx->pc = 0x29EDF0u;
    SET_GPR_U32(ctx, 31, 0x29EDF8u);
    ctx->pc = 0x29EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDF0u;
    // 0x29edf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F008u, 0x29EDF0u, 0x29EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDF8u;
label_29edf8:
    // 0x29edf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29edfc:
    // 0x29edfc: 0x1000000d  b           . + 4 + (0xD << 2)
label_29ee00:
    if (ctx->pc == 0x29EE00u) {
        ctx->pc = 0x29EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDFCu;
        // 0x29ee00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE04u;
        goto label_29ee04;
    }
    ctx->pc = 0x29EDFCu;
    {
        const bool branch_taken_0x29edfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDFCu;
        // 0x29ee00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29edfc) {
            ctx->pc = 0x29EE34u;
            goto label_29ee34;
        }
    }
    ctx->pc = 0x29EE04u;
label_29ee04:
    // 0x29ee04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29ee08:
    // 0x29ee08: 0x24a5c3a8  addiu       $a1, $a1, -0x3C58
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951848));
label_29ee0c:
    // 0x29ee0c: 0xc0d73cc  jal         func_35CF30
label_29ee10:
    if (ctx->pc == 0x29EE10u) {
        ctx->pc = 0x29EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE0Cu;
        // 0x29ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE14u;
        goto label_29ee14;
    }
    ctx->pc = 0x29EE0Cu;
    SET_GPR_U32(ctx, 31, 0x29EE14u);
    ctx->pc = 0x29EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE0Cu;
    // 0x29ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29EE0Cu, 0x29EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE14u;
label_29ee14:
    // 0x29ee14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29ee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29ee18:
    // 0x29ee18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29ee1c:
    // 0x29ee1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29ee20:
    if (ctx->pc == 0x29EE20u) {
        ctx->pc = 0x29EE24u;
        goto label_29ee24;
    }
    ctx->pc = 0x29EE1Cu;
    {
        const bool branch_taken_0x29ee1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ee1c) {
            ctx->pc = 0x29EE40u;
            goto label_29ee40;
        }
    }
    ctx->pc = 0x29EE24u;
label_29ee24:
    // 0x29ee24: 0xc0a71e0  jal         func_29C780
label_29ee28:
    if (ctx->pc == 0x29EE28u) {
        ctx->pc = 0x29EE2Cu;
        goto label_29ee2c;
    }
    ctx->pc = 0x29EE24u;
    SET_GPR_U32(ctx, 31, 0x29EE2Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29EE24u, 0x29EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE2Cu;
label_29ee2c:
    // 0x29ee2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ee30:
    // 0x29ee30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29ee30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29ee34:
    // 0x29ee34: 0xc0a7436  jal         func_29D0D8
label_29ee38:
    if (ctx->pc == 0x29EE38u) {
        ctx->pc = 0x29EE3Cu;
        goto label_29ee3c;
    }
    ctx->pc = 0x29EE34u;
    SET_GPR_U32(ctx, 31, 0x29EE3Cu);
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29EE34u, 0x29EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE3Cu;
label_29ee3c:
    // 0x29ee3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ee3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ee40:
    // 0x29ee40: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_29ee44:
    if (ctx->pc == 0x29EE44u) {
        ctx->pc = 0x29EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE40u;
        // 0x29ee44: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE48u;
        goto label_29ee48;
    }
    ctx->pc = 0x29EE40u;
    {
        const bool branch_taken_0x29ee40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE40u;
        // 0x29ee44: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee40) {
            ctx->pc = 0x29EE70u;
            goto label_29ee70;
        }
    }
    ctx->pc = 0x29EE48u;
label_29ee48:
    // 0x29ee48: 0xc66c0220  lwc1        $f12, 0x220($s3)
    ctx->pc = 0x29ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29ee4c:
    // 0x29ee4c: 0xc66d0224  lwc1        $f13, 0x224($s3)
    ctx->pc = 0x29ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29ee50:
    // 0x29ee50: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_29ee54:
    // 0x29ee54: 0xc66e0228  lwc1        $f14, 0x228($s3)
    ctx->pc = 0x29ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_29ee58:
    // 0x29ee58: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x29ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_29ee5c:
    // 0x29ee5c: 0xc66f022c  lwc1        $f15, 0x22C($s3)
    ctx->pc = 0x29ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_29ee60:
    // 0x29ee60: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29ee60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_29ee64:
    // 0x29ee64: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x29ee64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_29ee68:
    // 0x29ee68: 0xc0da874  jal         func_36A1D0
label_29ee6c:
    if (ctx->pc == 0x29EE6Cu) {
        ctx->pc = 0x29EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE68u;
        // 0x29ee6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE70u;
        goto label_29ee70;
    }
    ctx->pc = 0x29EE68u;
    SET_GPR_U32(ctx, 31, 0x29EE70u);
    ctx->pc = 0x29EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE68u;
    // 0x29ee6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x29EE68u, 0x29EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE70u;
label_29ee70:
    // 0x29ee70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_29ee74:
    // 0x29ee74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29ee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ee78:
    // 0x29ee78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x29ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_29ee7c:
    // 0x29ee7c: 0xc0a9ce4  jal         func_2A7390
label_29ee80:
    if (ctx->pc == 0x29EE80u) {
        ctx->pc = 0x29EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE7Cu;
        // 0x29ee80: 0x26740014  addiu       $s4, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE84u;
        goto label_29ee84;
    }
    ctx->pc = 0x29EE7Cu;
    SET_GPR_U32(ctx, 31, 0x29EE84u);
    ctx->pc = 0x29EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE7Cu;
    // 0x29ee80: 0x26740014  addiu       $s4, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7390u, 0x29EE7Cu, 0x29EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE84u;
label_29ee84:
    // 0x29ee84: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x29ee84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29ee88:
    // 0x29ee88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29ee88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ee8c:
    // 0x29ee8c: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x29ee8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29ee90:
    // 0x29ee90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29ee90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ee94:
    // 0x29ee94: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x29ee94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29ee98:
    // 0x29ee98: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x29ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_29ee9c:
    // 0x29ee9c: 0x0  nop
    ctx->pc = 0x29ee9cu;
    // NOP
label_29eea0:
    // 0x29eea0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29eea4:
    // 0x29eea4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29eea8:
    if (ctx->pc == 0x29EEA8u) {
        ctx->pc = 0x29EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEA4u;
        // 0x29eea8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEACu;
        goto label_29eeac;
    }
    ctx->pc = 0x29EEA4u;
    {
        const bool branch_taken_0x29eea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEA4u;
        // 0x29eea8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eea4) {
            ctx->pc = 0x29EECCu;
            goto label_29eecc;
        }
    }
    ctx->pc = 0x29EEACu;
label_29eeac:
    // 0x29eeac: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x29eeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_29eeb0:
    // 0x29eeb0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x29eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29eeb4:
    // 0x29eeb4: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x29eeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_29eeb8:
    // 0x29eeb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29eebc:
    // 0x29eebc: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29eec0:
    // 0x29eec0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29eec4:
    // 0x29eec4: 0x40f809  jalr        $v0
label_29eec8:
    if (ctx->pc == 0x29EEC8u) {
        ctx->pc = 0x29EECCu;
        goto label_29eecc;
    }
    ctx->pc = 0x29EEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EECCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEC4u, 0x29EECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EECCu;
label_29eecc:
    // 0x29eecc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29eeccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29eed0:
    // 0x29eed0: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29eed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29eed4:
    // 0x29eed4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_29eed8:
    if (ctx->pc == 0x29EED8u) {
        ctx->pc = 0x29EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EED4u;
        // 0x29eed8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEDCu;
        goto label_29eedc;
    }
    ctx->pc = 0x29EED4u;
    {
        const bool branch_taken_0x29eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EED4u;
        // 0x29eed8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eed4) {
            ctx->pc = 0x29EEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eea0;
        }
    }
    ctx->pc = 0x29EEDCu;
label_29eedc:
    // 0x29eedc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29eedcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29eee0:
    // 0x29eee0: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29eee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29eee4:
    // 0x29eee4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_29eee8:
    if (ctx->pc == 0x29EEE8u) {
        ctx->pc = 0x29EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEE4u;
        // 0x29eee8: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEECu;
        goto label_29eeec;
    }
    ctx->pc = 0x29EEE4u;
    {
        const bool branch_taken_0x29eee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEE4u;
        // 0x29eee8: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eee4) {
            ctx->pc = 0x29EE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EEECu;
label_29eeec:
    // 0x29eeec: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x29eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
label_29eef0:
    // 0x29eef0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x29eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_29eef4:
    // 0x29eef4: 0x40f809  jalr        $v0
label_29eef8:
    if (ctx->pc == 0x29EEF8u) {
        ctx->pc = 0x29EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEF4u;
        // 0x29eef8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEFCu;
        goto label_29eefc;
    }
    ctx->pc = 0x29EEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EEFCu);
        ctx->pc = 0x29EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEF4u;
        // 0x29eef8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEF4u, 0x29EEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EEFCu;
label_29eefc:
    // 0x29eefc: 0xc0b60fc  jal         func_2D83F0
label_29ef00:
    if (ctx->pc == 0x29EF00u) {
        ctx->pc = 0x29EF04u;
        goto label_29ef04;
    }
    ctx->pc = 0x29EEFCu;
    SET_GPR_U32(ctx, 31, 0x29EF04u);
    ctx->pc = 0x2D83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D83F0u, 0x29EEFCu, 0x29EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF04u;
label_29ef04:
    // 0x29ef04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29ef04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ef08:
    // 0x29ef08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29ef08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29ef0c:
    // 0x29ef0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29ef0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29ef10:
    // 0x29ef10: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29ef10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29ef14:
    // 0x29ef14: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29ef14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ef18:
    // 0x29ef18: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29ef18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29ef1c:
    // 0x29ef1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29ef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29ef20:
    // 0x29ef20: 0x3e00008  jr          $ra
label_29ef24:
    if (ctx->pc == 0x29EF24u) {
        ctx->pc = 0x29EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF20u;
        // 0x29ef24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF28u;
        goto label_fallthrough_0x29ef20;
    }
    ctx->pc = 0x29EF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF20u;
        // 0x29ef24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ef20:
    ctx->pc = 0x29EF28u;
}
