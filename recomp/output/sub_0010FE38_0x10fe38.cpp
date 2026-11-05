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

// Function: sub_0010FE38
// Address: 0x10fe38 - 0x10ff50
void sub_0010FE38_0x10fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FE38_0x10fe38");
#endif

    switch (ctx->pc) {
        case 0x10fe74u: goto label_10fe74;
        case 0x10fe84u: goto label_10fe84;
        case 0x10fe9cu: goto label_10fe9c;
        case 0x10feccu: goto label_10fecc;
        case 0x10feecu: goto label_10feec;
        case 0x10fefcu: goto label_10fefc;
        case 0x10ff08u: goto label_10ff08;
        case 0x10ff14u: goto label_10ff14;
        case 0x10ff28u: goto label_10ff28;
        default: break;
    }

    ctx->pc = 0x10fe38u;

    // 0x10fe38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10fe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10fe3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fe40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10fe44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fe44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe48: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10fe48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10fe4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10fe4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10fe54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10fe58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10fe5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10fe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10fe60: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x10fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x10fe64: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x10FE64u;
    {
        const bool branch_taken_0x10fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE64u;
        // 0x10fe68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe64) {
            ctx->pc = 0x10FF2Cu;
            goto label_10ff2c;
        }
    }
    ctx->pc = 0x10FE6Cu;
    // 0x10fe6c: 0xc0443da  jal         func_110F68
    ctx->pc = 0x10FE6Cu;
    SET_GPR_U32(ctx, 31, 0x10FE74u);
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x10FE6Cu, 0x10FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE74u;
label_10fe74:
    // 0x10fe74: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x10FE74u;
    {
        const bool branch_taken_0x10fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE74u;
        // 0x10fe78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe74) {
            ctx->pc = 0x10FF2Cu;
            goto label_10ff2c;
        }
    }
    ctx->pc = 0x10FE7Cu;
    // 0x10fe7c: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x10FE7Cu;
    SET_GPR_U32(ctx, 31, 0x10FE84u);
    ctx->pc = 0x10FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE7Cu;
    // 0x10fe80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x10FE7Cu, 0x10FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE84u;
label_10fe84:
    // 0x10fe84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10fe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe88: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FE88u;
    {
        const bool branch_taken_0x10fe88 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x10FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE88u;
        // 0x10fe8c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe88) {
            ctx->pc = 0x10FEA8u;
            goto label_10fea8;
        }
    }
    ctx->pc = 0x10FE90u;
    // 0x10fe90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe94: 0xc044ed2  jal         func_113B48
    ctx->pc = 0x10FE94u;
    SET_GPR_U32(ctx, 31, 0x10FE9Cu);
    ctx->pc = 0x10FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE94u;
    // 0x10fe98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B48u, 0x10FE94u, 0x10FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE9Cu;
label_10fe9c:
    // 0x10fe9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fea0: 0x6200022  bltz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10FEA0u;
    {
        const bool branch_taken_0x10fea0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEA0u;
        // 0x10fea4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fea0) {
            ctx->pc = 0x10FF2Cu;
            goto label_10ff2c;
        }
    }
    ctx->pc = 0x10FEA8u;
label_10fea8:
    // 0x10fea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10fea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10feac: 0x0  nop
    ctx->pc = 0x10feacu;
    // NOP
    // 0x10feb0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10feb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10feb4: 0x0  nop
    ctx->pc = 0x10feb4u;
    // NOP
    // 0x10feb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10FEB8u;
    {
        const bool branch_taken_0x10feb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEB8u;
        // 0x10febc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10feb8) {
            ctx->pc = 0x10FEC4u;
            goto label_10fec4;
        }
    }
    ctx->pc = 0x10FEC0u;
    // 0x10fec0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10fec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fec4:
    // 0x10fec4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x10FEC4u;
    SET_GPR_U32(ctx, 31, 0x10FECCu);
    ctx->pc = 0x10FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEC4u;
    // 0x10fec8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x10FEC4u, 0x10FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FECCu;
label_10fecc:
    // 0x10fecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10feccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fed4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x10fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10fed8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x10fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x10fedc: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x10fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x10fee0: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x10fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x10fee4: 0xc0449d6  jal         func_112758
    ctx->pc = 0x10FEE4u;
    SET_GPR_U32(ctx, 31, 0x10FEECu);
    ctx->pc = 0x10FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEE4u;
    // 0x10fee8: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x10FEE4u, 0x10FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEECu;
label_10feec:
    // 0x10feec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10feecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10fef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fef4: 0xc04634e  jal         func_118D38
    ctx->pc = 0x10FEF4u;
    SET_GPR_U32(ctx, 31, 0x10FEFCu);
    ctx->pc = 0x10FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEF4u;
    // 0x10fef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D38u, 0x10FEF4u, 0x10FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEFCu;
label_10fefc:
    // 0x10fefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff00: 0xc046154  jal         func_118550
    ctx->pc = 0x10FF00u;
    SET_GPR_U32(ctx, 31, 0x10FF08u);
    ctx->pc = 0x10FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF00u;
    // 0x10ff04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x10FF00u, 0x10FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF08u;
label_10ff08:
    // 0x10ff08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff0c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x10FF0Cu;
    SET_GPR_U32(ctx, 31, 0x10FF14u);
    ctx->pc = 0x10FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF0Cu;
    // 0x10ff10: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x10FF0Cu, 0x10FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF14u;
label_10ff14:
    // 0x10ff14: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x10ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10ff18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10ff18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff20: 0xc044e90  jal         func_113A40
    ctx->pc = 0x10FF20u;
    SET_GPR_U32(ctx, 31, 0x10FF28u);
    ctx->pc = 0x10FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF20u;
    // 0x10ff24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A40u, 0x10FF20u, 0x10FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF28u;
label_10ff28:
    // 0x10ff28: 0xa24000ac  sb          $zero, 0xAC($s2)
    ctx->pc = 0x10ff28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 172), (uint8_t)GPR_U32(ctx, 0));
label_10ff2c:
    // 0x10ff2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ff2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ff30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ff30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ff34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ff34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ff38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ff38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ff3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10ff3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ff40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ff44: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF48u;
        // 0x10ff4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FF50u;
}
