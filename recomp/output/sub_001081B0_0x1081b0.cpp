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

// Function: sub_001081B0
// Address: 0x1081b0 - 0x1081d8
void sub_001081B0_0x1081b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001081B0_0x1081b0");
#endif

    switch (ctx->pc) {
        case 0x1081c8u: goto label_1081c8;
        default: break;
    }

    ctx->pc = 0x1081b0u;

    // 0x1081b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1081b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1081b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1081b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1081B8u;
    {
        const bool branch_taken_0x1081b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081B8u;
        // 0x1081bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081b8) {
            ctx->pc = 0x1081C8u;
            goto label_1081c8;
        }
    }
    ctx->pc = 0x1081C0u;
    // 0x1081c0: 0xc05ef86  jal         func_17BE18
    ctx->pc = 0x1081C0u;
    SET_GPR_U32(ctx, 31, 0x1081C8u);
    ctx->pc = 0x1081C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1081C0u;
    // 0x1081c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BE18u, 0x1081C0u, 0x1081C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1081C8u;
label_1081c8:
    // 0x1081c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1081c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1081cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1081CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081CCu;
        // 0x1081d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081D4u;
    // 0x1081d4: 0x0  nop
    ctx->pc = 0x1081d4u;
    // NOP
    ctx->pc = 0x1081d8u;
}
