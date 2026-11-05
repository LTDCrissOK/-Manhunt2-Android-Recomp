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

// Function: sub_0019E7A0
// Address: 0x19e7a0 - 0x19e7d0
void sub_0019E7A0_0x19e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E7A0_0x19e7a0");
#endif

    ctx->pc = 0x19e7a0u;

    // 0x19e7a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19e7a4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E7A4u;
    {
        const bool branch_taken_0x19e7a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e7a4) {
            ctx->pc = 0x19E7C8u;
            goto label_19e7c8;
        }
    }
    ctx->pc = 0x19E7ACu;
    // 0x19e7ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E7ACu;
    {
        const bool branch_taken_0x19e7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7ACu;
        // 0x19e7b0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7ac) {
            ctx->pc = 0x19E7C8u;
            goto label_19e7c8;
        }
    }
    ctx->pc = 0x19E7B4u;
    // 0x19e7b4: 0x2462efe8  addiu       $v0, $v1, -0x1018
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963176));
    // 0x19e7b8: 0xac60efe8  sw          $zero, -0x1018($v1)
    ctx->pc = 0x19e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963176), GPR_U32(ctx, 0));
    // 0x19e7bc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x19e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x19e7c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19e7c4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_19e7c8:
    // 0x19e7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E7D0u;
}
