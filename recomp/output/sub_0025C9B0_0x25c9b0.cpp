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

// Function: sub_0025C9B0
// Address: 0x25c9b0 - 0x25ca00
void sub_0025C9B0_0x25c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C9B0_0x25c9b0");
#endif

    switch (ctx->pc) {
        case 0x25c9d8u: goto label_25c9d8;
        default: break;
    }

    ctx->pc = 0x25c9b0u;

    // 0x25c9b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25c9b4: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25C9B4u;
    {
        const bool branch_taken_0x25c9b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25c9b4) {
            ctx->pc = 0x25C9F4u;
            goto label_25c9f4;
        }
    }
    ctx->pc = 0x25C9BCu;
    // 0x25c9bc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x25C9BCu;
    {
        const bool branch_taken_0x25c9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9BCu;
        // 0x25c9c0: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9bc) {
            ctx->pc = 0x25C9F4u;
            goto label_25c9f4;
        }
    }
    ctx->pc = 0x25C9C4u;
    // 0x25c9c4: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x25c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x25c9c8: 0xac403d90  sw          $zero, 0x3D90($v0)
    ctx->pc = 0x25c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15760), GPR_U32(ctx, 0));
    // 0x25c9cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c9d0: 0x24423d90  addiu       $v0, $v0, 0x3D90
    ctx->pc = 0x25c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15760));
    // 0x25c9d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_25c9d8:
    // 0x25c9d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25c9dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25c9e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x25c9e4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x25c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x25c9e8: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x25c9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c9ec: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25C9ECu;
    {
        const bool branch_taken_0x25c9ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9ECu;
        // 0x25c9f0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9ec) {
            ctx->pc = 0x25C9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c9d8;
        }
    }
    ctx->pc = 0x25C9F4u;
label_25c9f4:
    // 0x25c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C9FCu;
    // 0x25c9fc: 0x0  nop
    ctx->pc = 0x25c9fcu;
    // NOP
    ctx->pc = 0x25ca00u;
}
