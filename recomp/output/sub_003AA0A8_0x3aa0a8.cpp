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

// Function: sub_003AA0A8
// Address: 0x3aa0a8 - 0x3aa0f8
void sub_003AA0A8_0x3aa0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA0A8_0x3aa0a8");
#endif

    ctx->pc = 0x3aa0a8u;

    // 0x3aa0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa0ac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3aa0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3aa0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aa0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aa0b4: 0x2463d488  addiu       $v1, $v1, -0x2B78
    ctx->pc = 0x3aa0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956168));
    // 0x3aa0b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3aa0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D488u));
    // 0x3aa0bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aa0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3aa0c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AA0C0u;
    {
        const bool branch_taken_0x3aa0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0C0u;
        // 0x3aa0c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa0c0) {
            ctx->pc = 0x3AA0E8u;
            goto label_3aa0e8;
        }
    }
    ctx->pc = 0x3AA0C8u;
    // 0x3aa0c8: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3aa0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3aa0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aa0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa0d4: 0x2484d490  addiu       $a0, $a0, -0x2B70
    ctx->pc = 0x3aa0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956176));
    // 0x3aa0d8: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x3aa0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x3aa0dc: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3AA0DCu;
    ctx->pc = 0x3AA0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA0DCu;
    // 0x3aa0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA0E4u;
    // 0x3aa0e4: 0x0  nop
    ctx->pc = 0x3aa0e4u;
    // NOP
label_3aa0e8:
    // 0x3aa0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0ECu;
        // 0x3aa0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA0F4u;
    // 0x3aa0f4: 0x0  nop
    ctx->pc = 0x3aa0f4u;
    // NOP
    ctx->pc = 0x3aa0f8u;
}
