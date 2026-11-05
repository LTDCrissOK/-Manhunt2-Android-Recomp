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

// Function: sub_0022EA08
// Address: 0x22ea08 - 0x22eb28
void sub_0022EA08_0x22ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EA08_0x22ea08");
#endif

    switch (ctx->pc) {
        case 0x22ea64u: goto label_22ea64;
        case 0x22ea74u: goto label_22ea74;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eab0u: goto label_22eab0;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eaf0u: goto label_22eaf0;
        case 0x22eb00u: goto label_22eb00;
        case 0x22eb14u: goto label_22eb14;
        default: break;
    }

    ctx->pc = 0x22ea08u;

    // 0x22ea08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ea0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22ea0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ea10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ea14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ea18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ea18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22ea20: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x22ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea24: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22ea28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ea28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ea2c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x22ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x22ea30: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x22EA30u;
    {
        const bool branch_taken_0x22ea30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA30u;
        // 0x22ea34: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea30) {
            ctx->pc = 0x22EAE0u;
            goto label_22eae0;
        }
    }
    ctx->pc = 0x22EA38u;
    // 0x22ea38: 0xc60004f0  lwc1        $f0, 0x4F0($s0)
    ctx->pc = 0x22ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ea3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ea40: 0x0  nop
    ctx->pc = 0x22ea40u;
    // NOP
    // 0x22ea44: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x22EA44u;
    {
        const bool branch_taken_0x22ea44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ea44) {
            ctx->pc = 0x22EA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EA44u;
            // 0x22ea48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EAE4u;
            goto label_22eae4;
        }
    }
    ctx->pc = 0x22EA4Cu;
    // 0x22ea4c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x22ea50: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22ea54: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22EA54u;
    {
        const bool branch_taken_0x22ea54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea54) {
            ctx->pc = 0x22EAB0u;
            goto label_22eab0;
        }
    }
    ctx->pc = 0x22EA5Cu;
    // 0x22ea5c: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x22EA5Cu;
    SET_GPR_U32(ctx, 31, 0x22EA64u);
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x22EA5Cu, 0x22EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA64u;
label_22ea64:
    // 0x22ea64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EA64u;
    {
        const bool branch_taken_0x22ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea64) {
            ctx->pc = 0x22EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EA64u;
            // 0x22ea68: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EA80u;
            goto label_22ea80;
        }
    }
    ctx->pc = 0x22EA6Cu;
    // 0x22ea6c: 0xc08dada  jal         func_236B68
    ctx->pc = 0x22EA6Cu;
    SET_GPR_U32(ctx, 31, 0x22EA74u);
    ctx->pc = 0x22EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA6Cu;
    // 0x22ea70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x22EA6Cu, 0x22EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA74u;
label_22ea74:
    // 0x22ea74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22EA74u;
    {
        const bool branch_taken_0x22ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA74u;
        // 0x22ea78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea74) {
            ctx->pc = 0x22EAA4u;
            goto label_22eaa4;
        }
    }
    ctx->pc = 0x22EA7Cu;
    // 0x22ea7c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_22ea80:
    // 0x22ea80: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x22ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x22ea84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22ea88: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EA88u;
    {
        const bool branch_taken_0x22ea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA88u;
        // 0x22ea8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea88) {
            ctx->pc = 0x22EAA4u;
            goto label_22eaa4;
        }
    }
    ctx->pc = 0x22EA90u;
    // 0x22ea90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ea94: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22EA94u;
    SET_GPR_U32(ctx, 31, 0x22EA9Cu);
    ctx->pc = 0x22EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA94u;
    // 0x22ea98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22EA94u, 0x22EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA9Cu;
label_22ea9c:
    // 0x22ea9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22EA9Cu;
    {
        const bool branch_taken_0x22ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea9c) {
            ctx->pc = 0x22EAB0u;
            goto label_22eab0;
        }
    }
    ctx->pc = 0x22EAA4u;
label_22eaa4:
    // 0x22eaa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22eaa8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22EAA8u;
    SET_GPR_U32(ctx, 31, 0x22EAB0u);
    ctx->pc = 0x22EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAA8u;
    // 0x22eaac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22EAA8u, 0x22EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAB0u;
label_22eab0:
    // 0x22eab0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EAB0u;
    {
        const bool branch_taken_0x22eab0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAB0u;
        // 0x22eab4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eab0) {
            ctx->pc = 0x22EACCu;
            goto label_22eacc;
        }
    }
    ctx->pc = 0x22EAB8u;
    // 0x22eab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eabc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x22eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x22eac0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22EAC0u;
    SET_GPR_U32(ctx, 31, 0x22EAC8u);
    ctx->pc = 0x22EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAC0u;
    // 0x22eac4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22EAC0u, 0x22EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAC8u;
label_22eac8:
    // 0x22eac8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x22eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_22eacc:
    // 0x22eacc: 0xc60004f0  lwc1        $f0, 0x4F0($s0)
    ctx->pc = 0x22eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ead0: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x22ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ead4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22ead4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22ead8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22EAD8u;
    {
        const bool branch_taken_0x22ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAD8u;
        // 0x22eadc: 0xe60004f0  swc1        $f0, 0x4F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ead8) {
            ctx->pc = 0x22EB14u;
            goto label_22eb14;
        }
    }
    ctx->pc = 0x22EAE0u;
label_22eae0:
    // 0x22eae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22eae4:
    // 0x22eae4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22eae8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22EAE8u;
    SET_GPR_U32(ctx, 31, 0x22EAF0u);
    ctx->pc = 0x22EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAE8u;
    // 0x22eaec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22EAE8u, 0x22EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAF0u;
label_22eaf0:
    // 0x22eaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eaf4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x22eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x22eaf8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22EAF8u;
    SET_GPR_U32(ctx, 31, 0x22EB00u);
    ctx->pc = 0x22EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAF8u;
    // 0x22eafc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22EAF8u, 0x22EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB00u;
label_22eb00:
    // 0x22eb00: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EB00u;
    {
        const bool branch_taken_0x22eb00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB00u;
        // 0x22eb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb00) {
            ctx->pc = 0x22EB14u;
            goto label_22eb14;
        }
    }
    ctx->pc = 0x22EB08u;
    // 0x22eb08: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x22eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x22eb0c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22EB0Cu;
    SET_GPR_U32(ctx, 31, 0x22EB14u);
    ctx->pc = 0x22EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB0Cu;
    // 0x22eb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22EB0Cu, 0x22EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB14u;
label_22eb14:
    // 0x22eb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eb18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22eb18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22eb1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22eb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eb20: 0x3e00008  jr          $ra
    ctx->pc = 0x22EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB20u;
        // 0x22eb24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EB28u;
}
