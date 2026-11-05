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

// Function: sub_003CCF40
// Address: 0x3ccf40 - 0x3cd010
void sub_003CCF40_0x3ccf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCF40_0x3ccf40");
#endif

    switch (ctx->pc) {
        case 0x3ccf64u: goto label_3ccf64;
        case 0x3ccf90u: goto label_3ccf90;
        case 0x3ccfccu: goto label_3ccfcc;
        default: break;
    }

    ctx->pc = 0x3ccf40u;

    // 0x3ccf40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ccf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ccf44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ccf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ccf48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ccf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ccf4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ccf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ccf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ccf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ccf58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ccf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ccf5c: 0xc0f3316  jal         func_3CCC58
    ctx->pc = 0x3CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x3CCF64u);
    ctx->pc = 0x3CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF5Cu;
    // 0x3ccf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCC58u, 0x3CCF5Cu, 0x3CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF64u;
label_3ccf64:
    // 0x3ccf64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ccf64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf68: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3ccf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3ccf6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3ccf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3ccf70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ccf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ccf74: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x3ccf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x3ccf78: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x3ccf78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x3ccf7c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3ccf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x3ccf80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ccf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf84: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3ccf84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x3ccf88: 0xc0f33ac  jal         func_3CCEB0
    ctx->pc = 0x3CCF88u;
    SET_GPR_U32(ctx, 31, 0x3CCF90u);
    ctx->pc = 0x3CCF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF88u;
    // 0x3ccf8c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCEB0u, 0x3CCF88u, 0x3CCF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF90u;
label_3ccf90:
    // 0x3ccf90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCF90u;
    {
        const bool branch_taken_0x3ccf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccf90) {
            ctx->pc = 0x3CCF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCF90u;
            // 0x3ccf94: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCFA4u;
            goto label_3ccfa4;
        }
    }
    ctx->pc = 0x3CCF98u;
    // 0x3ccf98: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3ccf98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x3ccf9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CCF9Cu;
    {
        const bool branch_taken_0x3ccf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF9Cu;
        // 0x3ccfa0: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccf9c) {
            ctx->pc = 0x3CCFACu;
            goto label_3ccfac;
        }
    }
    ctx->pc = 0x3CCFA4u;
label_3ccfa4:
    // 0x3ccfa4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3ccfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3ccfa8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3ccfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3ccfac:
    // 0x3ccfac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3ccfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3ccfb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ccfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfb4: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3ccfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3ccfb8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3ccfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ccfbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ccfbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ccfc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfc4: 0xc0f31e4  jal         func_3CC790
    ctx->pc = 0x3CCFC4u;
    SET_GPR_U32(ctx, 31, 0x3CCFCCu);
    ctx->pc = 0x3CCFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFC4u;
    // 0x3ccfc8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC790u, 0x3CCFC4u, 0x3CCFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCFCCu;
label_3ccfcc:
    // 0x3ccfcc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3CCFCCu;
    {
        const bool branch_taken_0x3ccfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCFCCu;
        // 0x3ccfd0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccfcc) {
            ctx->pc = 0x3CCFF8u;
            goto label_3ccff8;
        }
    }
    ctx->pc = 0x3CCFD4u;
    // 0x3ccfd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ccfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccfd8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3ccfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3ccfdc: 0x24a5cf00  addiu       $a1, $a1, -0x3100
    ctx->pc = 0x3ccfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954752));
    // 0x3ccfe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ccfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ccfe4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3ccfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3ccfe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ccfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccfec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ccfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccff0: 0x80f44f0  j           func_3D13C0
    ctx->pc = 0x3CCFF0u;
    ctx->pc = 0x3CCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCFF0u;
    // 0x3ccff4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D13C0u, 0x3CCFF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3CCFF8u;
label_3ccff8:
    // 0x3ccff8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ccff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ccffc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ccffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cd000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd004: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD004u;
        // 0x3cd008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD00Cu;
    // 0x3cd00c: 0x0  nop
    ctx->pc = 0x3cd00cu;
    // NOP
    ctx->pc = 0x3cd010u;
}
