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

// Function: sub_0025AE70
// Address: 0x25ae70 - 0x25af78
void sub_0025AE70_0x25ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AE70_0x25ae70");
#endif

    ctx->pc = 0x25ae70u;

    // 0x25ae70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x25ae78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25ae78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ae7c: 0x46006141  sub.s       $f5, $f12, $f0
    ctx->pc = 0x25ae7cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x25ae80: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x25ae80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ae84: 0x0  nop
    ctx->pc = 0x25ae84u;
    // NOP
    // 0x25ae88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25AE88u;
    {
        const bool branch_taken_0x25ae88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE88u;
        // 0x25ae8c: 0xc4442b30  lwc1        $f4, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae88) {
            ctx->pc = 0x25AE94u;
            goto label_25ae94;
        }
    }
    ctx->pc = 0x25AE90u;
    // 0x25ae90: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x25ae90u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_25ae94:
    // 0x25ae94: 0x46002985  abs.s       $f6, $f5
    ctx->pc = 0x25ae94u;
    ctx->f[6] = FPU_ABS_S(ctx->f[5]);
    // 0x25ae98: 0x460e3036  c.le.s      $f6, $f14
    ctx->pc = 0x25ae98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ae9c: 0x0  nop
    ctx->pc = 0x25ae9cu;
    // NOP
    // 0x25aea0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25AEA0u;
    {
        const bool branch_taken_0x25aea0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEA0u;
        // 0x25aea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aea0) {
            ctx->pc = 0x25AEACu;
            goto label_25aeac;
        }
    }
    ctx->pc = 0x25AEA8u;
    // 0x25aea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25aeac:
    // 0x25aeac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AEACu;
    {
        const bool branch_taken_0x25aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aeac) {
            ctx->pc = 0x25AEC0u;
            goto label_25aec0;
        }
    }
    ctx->pc = 0x25AEB4u;
    // 0x25aeb4: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x25aeb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25AEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB8u;
        // 0x25aebc: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AEC0u;
label_25aec0:
    // 0x25aec0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x25aec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aec4: 0x0  nop
    ctx->pc = 0x25aec4u;
    // NOP
    // 0x25aec8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25AEC8u;
    {
        const bool branch_taken_0x25aec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEC8u;
        // 0x25aecc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aec8) {
            ctx->pc = 0x25AED4u;
            goto label_25aed4;
        }
    }
    ctx->pc = 0x25AED0u;
    // 0x25aed0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25aed4:
    // 0x25aed4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aed8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25aed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25aedc: 0x0  nop
    ctx->pc = 0x25aedcu;
    // NOP
    // 0x25aee0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25AEE0u;
    {
        const bool branch_taken_0x25aee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEE0u;
        // 0x25aee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aee0) {
            ctx->pc = 0x25AEECu;
            goto label_25aeec;
        }
    }
    ctx->pc = 0x25AEE8u;
    // 0x25aee8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25aeec:
    // 0x25aeec: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x25AEECu;
    {
        const bool branch_taken_0x25aeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aeec) {
            ctx->pc = 0x25AEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AEECu;
            // 0x25aef0: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AEF4u;
            goto label_25aef4;
        }
    }
    ctx->pc = 0x25AEF4u;
label_25aef4:
    // 0x25aef4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x25aef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x25aef8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25aef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25aefc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25aefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25af00: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af04: 0x460468c2  mul.s       $f3, $f13, $f4
    ctx->pc = 0x25af04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x25af08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25af08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25af0c: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x25af0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x25af10: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x25af10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25af14: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x25af14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x25af18: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x25af1c: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x25af1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x25af20: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x25af20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x25af24: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x25af24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25af28: 0x0  nop
    ctx->pc = 0x25af28u;
    // NOP
    // 0x25af2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25AF2Cu;
    {
        const bool branch_taken_0x25af2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25af2c) {
            ctx->pc = 0x25AF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AF2Cu;
            // 0x25af30: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF34u;
            goto label_25af34;
        }
    }
    ctx->pc = 0x25AF34u;
label_25af34:
    // 0x25af34: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x25af34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x25af38: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25af38u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25af3c: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x25af3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25af40: 0x0  nop
    ctx->pc = 0x25af40u;
    // NOP
    // 0x25af44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25AF44u;
    {
        const bool branch_taken_0x25af44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF44u;
        // 0x25af48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af44) {
            ctx->pc = 0x25AF50u;
            goto label_25af50;
        }
    }
    ctx->pc = 0x25AF4Cu;
    // 0x25af4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25af4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25af50:
    // 0x25af50: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AF50u;
    {
        const bool branch_taken_0x25af50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af50) {
            ctx->pc = 0x25AF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AF50u;
            // 0x25af54: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AF60u;
            goto label_25af60;
        }
    }
    ctx->pc = 0x25AF58u;
    // 0x25af58: 0x3e00008  jr          $ra
    ctx->pc = 0x25AF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF58u;
        // 0x25af5c: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AF60u;
label_25af60:
    // 0x25af60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25af60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25af64: 0x3e00008  jr          $ra
    ctx->pc = 0x25AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF64u;
        // 0x25af68: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AF6Cu;
    // 0x25af6c: 0x0  nop
    ctx->pc = 0x25af6cu;
    // NOP
    // 0x25af70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25af74: 0x0  nop
    ctx->pc = 0x25af74u;
    // NOP
    ctx->pc = 0x25af78u;
}
