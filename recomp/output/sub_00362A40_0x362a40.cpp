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

// Function: sub_00362A40
// Address: 0x362a40 - 0x362a90
void sub_00362A40_0x362a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A40_0x362a40");
#endif

    switch (ctx->pc) {
        case 0x362a54u: goto label_362a54;
        default: break;
    }

    ctx->pc = 0x362a40u;

    // 0x362a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362a48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x362a4c: 0xc0d766c  jal         func_35D9B0
    ctx->pc = 0x362A4Cu;
    SET_GPR_U32(ctx, 31, 0x362A54u);
    ctx->pc = 0x362A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A4Cu;
    // 0x362a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D9B0u, 0x362A4Cu, 0x362A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A54u;
label_362a54:
    // 0x362a54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x362A54u;
    {
        const bool branch_taken_0x362a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A54u;
        // 0x362a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362a54) {
            ctx->pc = 0x362A7Cu;
            goto label_362a7c;
        }
    }
    ctx->pc = 0x362A5Cu;
    // 0x362a5c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x362a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x362a60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362A60u;
    {
        const bool branch_taken_0x362a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x362A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A60u;
        // 0x362a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362a60) {
            ctx->pc = 0x362A7Cu;
            goto label_362a7c;
        }
    }
    ctx->pc = 0x362A68u;
    // 0x362a68: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x362a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x362a6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x362a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x362a70: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x362A70u;
    {
        const bool branch_taken_0x362a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x362A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A70u;
        // 0x362a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362a70) {
            ctx->pc = 0x362A7Cu;
            goto label_362a7c;
        }
    }
    ctx->pc = 0x362A78u;
    // 0x362a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362a7c:
    // 0x362a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362a80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362a84: 0x3e00008  jr          $ra
    ctx->pc = 0x362A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A84u;
        // 0x362a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362A8Cu;
    // 0x362a8c: 0x0  nop
    ctx->pc = 0x362a8cu;
    // NOP
    ctx->pc = 0x362a90u;
}
