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

// Function: sub_002D5D48
// Address: 0x2d5d48 - 0x2d5d98
void sub_002D5D48_0x2d5d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5D48_0x2d5d48");
#endif

    switch (ctx->pc) {
        case 0x2d5d88u: goto label_2d5d88;
        default: break;
    }

    ctx->pc = 0x2d5d48u;

    // 0x2d5d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5d4c: 0x240201c4  addiu       $v0, $zero, 0x1C4
    ctx->pc = 0x2d5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d5d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5d54: 0xa23818  mult        $a3, $a1, $v0
    ctx->pc = 0x2d5d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d5d58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d5d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5d5c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2d5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d5d60: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x2d5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d5d64: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2d5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2d5d68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5d6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d5d70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d5d74: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2d5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2d5d78: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2d5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d5d7c: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x2d5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2d5d80: 0xc0b523c  jal         func_2D48F0
    ctx->pc = 0x2D5D80u;
    SET_GPR_U32(ctx, 31, 0x2D5D88u);
    ctx->pc = 0x2D5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D80u;
    // 0x2d5d84: 0x672021  addu        $a0, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48F0u, 0x2D5D80u, 0x2D5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D88u;
label_2d5d88:
    // 0x2d5d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D8Cu;
        // 0x2d5d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5D94u;
    // 0x2d5d94: 0x0  nop
    ctx->pc = 0x2d5d94u;
    // NOP
    ctx->pc = 0x2d5d98u;
}
