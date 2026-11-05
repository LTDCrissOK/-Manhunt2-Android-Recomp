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

// Function: sub_003CAF60
// Address: 0x3caf60 - 0x3caf98
void sub_003CAF60_0x3caf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAF60_0x3caf60");
#endif

    switch (ctx->pc) {
        case 0x3caf68u: goto label_3caf68;
        default: break;
    }

    ctx->pc = 0x3caf60u;

    // 0x3caf60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3caf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3caf64: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x3caf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_3caf68:
    // 0x3caf68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3caf68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f130
    // 0x3caf6c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3caf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3caf70: 0x0  nop
    ctx->pc = 0x3caf70u;
    // NOP
    // 0x3caf74: 0x0  nop
    ctx->pc = 0x3caf74u;
    // NOP
    // 0x3caf78: 0x0  nop
    ctx->pc = 0x3caf78u;
    // NOP
    // 0x3caf7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3CAF7Cu;
    {
        const bool branch_taken_0x3caf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3caf7c) {
            ctx->pc = 0x3CAF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3caf68;
        }
    }
    ctx->pc = 0x3CAF84u;
    // 0x3caf84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3caf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3caf88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3caf88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3caf8c: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x3caf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x3caf90: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF90u;
        // 0x3caf94: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAF98u;
}
