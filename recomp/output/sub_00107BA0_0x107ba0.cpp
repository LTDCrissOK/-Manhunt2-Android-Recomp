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

// Function: sub_00107BA0
// Address: 0x107ba0 - 0x107bc8
void sub_00107BA0_0x107ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107BA0_0x107ba0");
#endif

    switch (ctx->pc) {
        case 0x107bb8u: goto label_107bb8;
        default: break;
    }

    ctx->pc = 0x107ba0u;

    // 0x107ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107ba4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ba8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107BA8u;
    {
        const bool branch_taken_0x107ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BA8u;
        // 0x107bac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ba8) {
            ctx->pc = 0x107BB8u;
            goto label_107bb8;
        }
    }
    ctx->pc = 0x107BB0u;
    // 0x107bb0: 0xc04bb04  jal         func_12EC10
    ctx->pc = 0x107BB0u;
    SET_GPR_U32(ctx, 31, 0x107BB8u);
    ctx->pc = 0x107BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BB0u;
    // 0x107bb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC10u, 0x107BB0u, 0x107BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BB8u;
label_107bb8:
    // 0x107bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x107BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BBCu;
        // 0x107bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107BC4u;
    // 0x107bc4: 0x0  nop
    ctx->pc = 0x107bc4u;
    // NOP
    ctx->pc = 0x107bc8u;
}
