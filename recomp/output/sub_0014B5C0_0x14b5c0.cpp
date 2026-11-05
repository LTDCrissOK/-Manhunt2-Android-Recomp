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

// Function: sub_0014B5C0
// Address: 0x14b5c0 - 0x14b600
void sub_0014B5C0_0x14b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B5C0_0x14b5c0");
#endif

    switch (ctx->pc) {
        case 0x14b5d0u: goto label_14b5d0;
        default: break;
    }

    ctx->pc = 0x14b5c0u;

    // 0x14b5c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c8: 0x24a605a0  addiu       $a2, $a1, 0x5A0
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
    // 0x14b5cc: 0x0  nop
    ctx->pc = 0x14b5ccu;
    // NOP
label_14b5d0:
    // 0x14b5d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14b5d4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x14b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14b5d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14b5dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14b5e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b5e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x14b5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14b5e8: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x14b5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14b5ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B5ECu;
    {
        const bool branch_taken_0x14b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5ECu;
        // 0x14b5f0: 0xac6005a4  sw          $zero, 0x5A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5ec) {
            ctx->pc = 0x14B5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b5d0;
        }
    }
    ctx->pc = 0x14B5F4u;
    // 0x14b5f4: 0xa0a00621  sb          $zero, 0x621($a1)
    ctx->pc = 0x14b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1569), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5F8u;
        // 0x14b5fc: 0xa0a00620  sb          $zero, 0x620($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1568), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B600u;
}
