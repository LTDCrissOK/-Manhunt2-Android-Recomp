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

// Function: sub_0027E2A0
// Address: 0x27e2a0 - 0x27e2d0
void sub_0027E2A0_0x27e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E2A0_0x27e2a0");
#endif

    switch (ctx->pc) {
        case 0x27e2c4u: goto label_27e2c4;
        default: break;
    }

    ctx->pc = 0x27e2a0u;

    // 0x27e2a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27e2a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e2a8: 0x9062a367  lbu         $v0, -0x5C99($v1)
    ctx->pc = 0x27e2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA367u));
    // 0x27e2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E2ACu;
    {
        const bool branch_taken_0x27e2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2ACu;
        // 0x27e2b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2ac) {
            ctx->pc = 0x27E2C4u;
            goto label_27e2c4;
        }
    }
    ctx->pc = 0x27E2B4u;
    // 0x27e2b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27e2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2bc: 0xc0a177c  jal         func_285DF0
    ctx->pc = 0x27E2BCu;
    SET_GPR_U32(ctx, 31, 0x27E2C4u);
    ctx->pc = 0x27E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2BCu;
    // 0x27e2c0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DF0u, 0x27E2BCu, 0x27E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2C4u;
label_27e2c4:
    // 0x27e2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C8u;
        // 0x27e2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E2D0u;
}
