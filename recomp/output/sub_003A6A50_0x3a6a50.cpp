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

// Function: sub_003A6A50
// Address: 0x3a6a50 - 0x3a6aa8
void sub_003A6A50_0x3a6a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6A50_0x3a6a50");
#endif

    ctx->pc = 0x3a6a50u;

    // 0x3a6a50: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3a6a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6a5c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a6a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6a64: 0x24473d40  addiu       $a3, $v0, 0x3D40
    ctx->pc = 0x3a6a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15680));
    // 0x3a6a68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3a6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3a6a6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3a6a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3a6a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3a6a74: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3a6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x413D40u));
    // 0x3a6a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6A78u;
    {
        const bool branch_taken_0x3a6a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A78u;
        // 0x3a6a7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6a78) {
            ctx->pc = 0x3A6A90u;
            goto label_3a6a90;
        }
    }
    ctx->pc = 0x3A6A80u;
    // 0x3a6a80: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x3a6a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3a6a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6a88: 0x80e9a60  j           func_3A6980
    ctx->pc = 0x3A6A88u;
    ctx->pc = 0x3A6A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A88u;
    // 0x3a6a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6980u, 0x3A6A88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A6A90u;
label_3a6a90:
    // 0x3a6a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6a94: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A94u;
        // 0x3a6a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6A9Cu;
    // 0x3a6a9c: 0x0  nop
    ctx->pc = 0x3a6a9cu;
    // NOP
    // 0x3a6aa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a6aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a6aa4: 0x0  nop
    ctx->pc = 0x3a6aa4u;
    // NOP
    ctx->pc = 0x3a6aa8u;
}
