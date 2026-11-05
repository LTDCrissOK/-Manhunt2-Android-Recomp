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

// Function: sub_0023DF40
// Address: 0x23df40 - 0x23e020
void sub_0023DF40_0x23df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DF40_0x23df40");
#endif

    switch (ctx->pc) {
        case 0x23df60u: goto label_23df60;
        case 0x23df88u: goto label_23df88;
        case 0x23dfc0u: goto label_23dfc0;
        default: break;
    }

    ctx->pc = 0x23df40u;

    // 0x23df40: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x23df44: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x23df44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x23df48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23df4c: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x23DF4Cu;
    {
        const bool branch_taken_0x23df4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF4Cu;
        // 0x23df50: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df4c) {
            ctx->pc = 0x23E018u;
            goto label_23e018;
        }
    }
    ctx->pc = 0x23DF54u;
    // 0x23df54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23df54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df58: 0x24e398a0  addiu       $v1, $a3, -0x6760
    ctx->pc = 0x23df58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940832));
    // 0x23df5c: 0x0  nop
    ctx->pc = 0x23df5cu;
    // NOP
label_23df60:
    // 0x23df60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df64: 0x1044002c  beq         $v0, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23DF64u;
    {
        const bool branch_taken_0x23df64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF64u;
        // 0x23df68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df64) {
            ctx->pc = 0x23E018u;
            goto label_23e018;
        }
    }
    ctx->pc = 0x23DF6Cu;
    // 0x23df6c: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x23df6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23df70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23DF70u;
    {
        const bool branch_taken_0x23df70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF70u;
        // 0x23df74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df70) {
            ctx->pc = 0x23DF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23df60;
        }
    }
    ctx->pc = 0x23DF78u;
    // 0x23df78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x23df7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23df7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df80: 0x244398a0  addiu       $v1, $v0, -0x6760
    ctx->pc = 0x23df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x23df84: 0x0  nop
    ctx->pc = 0x23df84u;
    // NOP
label_23df88:
    // 0x23df88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DF8Cu;
    {
        const bool branch_taken_0x23df8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF8Cu;
        // 0x23df90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df8c) {
            ctx->pc = 0x23DF9Cu;
            goto label_23df9c;
        }
    }
    ctx->pc = 0x23DF94u;
    // 0x23df94: 0x3e00008  jr          $ra
    ctx->pc = 0x23DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF94u;
        // 0x23df98: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DF9Cu;
label_23df9c:
    // 0x23df9c: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x23df9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23dfa0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23DFA0u;
    {
        const bool branch_taken_0x23dfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA0u;
        // 0x23dfa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfa0) {
            ctx->pc = 0x23DF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23df88;
        }
    }
    ctx->pc = 0x23DFA8u;
    // 0x23dfa8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x23dfac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23dfb0: 0xc44151b0  lwc1        $f1, 0x51B0($v0)
    ctx->pc = 0x23dfb0u;
    { uint32_t bits = FAST_READ32(0x4651B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dfb4: 0x246398a0  addiu       $v1, $v1, -0x6760
    ctx->pc = 0x23dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940832));
    // 0x23dfb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23dfbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23dfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dfc0:
    // 0x23dfc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dfc4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DFC4u;
    {
        const bool branch_taken_0x23dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfc4) {
            ctx->pc = 0x23DFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFC4u;
            // 0x23dfc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DFECu;
            goto label_23dfec;
        }
    }
    ctx->pc = 0x23DFCCu;
    // 0x23dfcc: 0xc4400378  lwc1        $f0, 0x378($v0)
    ctx->pc = 0x23dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dfd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23dfd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dfd4: 0x0  nop
    ctx->pc = 0x23dfd4u;
    // NOP
    // 0x23dfd8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x23DFD8u;
    {
        const bool branch_taken_0x23dfd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dfd8) {
            ctx->pc = 0x23DFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFD8u;
            // 0x23dfdc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DFECu;
            goto label_23dfec;
        }
    }
    ctx->pc = 0x23DFE0u;
    // 0x23dfe0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x23dfe0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x23dfe4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23dfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfe8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23dfec:
    // 0x23dfec: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x23dfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23dff0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23DFF0u;
    {
        const bool branch_taken_0x23dff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dff0) {
            ctx->pc = 0x23DFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dfc0;
        }
    }
    ctx->pc = 0x23DFF8u;
    // 0x23dff8: 0x24e398a0  addiu       $v1, $a3, -0x6760
    ctx->pc = 0x23dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940832));
    // 0x23dffc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x23dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23e000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e004: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23e008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e00c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e010: 0xe4600378  swc1        $f0, 0x378($v1)
    ctx->pc = 0x23e010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 888), bits); }
    // 0x23e014: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23e014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_23e018:
    // 0x23e018: 0x3e00008  jr          $ra
    ctx->pc = 0x23E018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E020u;
}
