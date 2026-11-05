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

// Function: sub_0012C490
// Address: 0x12c490 - 0x12c4c0
void sub_0012C490_0x12c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C490_0x12c490");
#endif

    switch (ctx->pc) {
        case 0x12c498u: goto label_12c498;
        default: break;
    }

    ctx->pc = 0x12c490u;

    // 0x12c490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c494: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x12c494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_12c498:
    // 0x12c498: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12c49c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12c4a0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x12c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12c4a4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12c4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c4a8: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x12c4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C4ACu;
    {
        const bool branch_taken_0x12c4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4ACu;
        // 0x12c4b0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4ac) {
            ctx->pc = 0x12C498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c498;
        }
    }
    ctx->pc = 0x12C4B4u;
    // 0x12c4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4B4u;
        // 0x12c4b8: 0xa0800084  sb          $zero, 0x84($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C4BCu;
    // 0x12c4bc: 0x0  nop
    ctx->pc = 0x12c4bcu;
    // NOP
    ctx->pc = 0x12c4c0u;
}
