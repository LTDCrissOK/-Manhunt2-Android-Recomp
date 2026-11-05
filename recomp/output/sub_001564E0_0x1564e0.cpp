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

// Function: sub_001564E0
// Address: 0x1564e0 - 0x156510
void sub_001564E0_0x1564e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001564E0_0x1564e0");
#endif

    switch (ctx->pc) {
        case 0x1564f8u: goto label_1564f8;
        default: break;
    }

    ctx->pc = 0x1564e0u;

    // 0x1564e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1564e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1564e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1564e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1564e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1564e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1564ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1564f0: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x1564F0u;
    SET_GPR_U32(ctx, 31, 0x1564F8u);
    ctx->pc = 0x1564F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564F0u;
    // 0x1564f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x1564F0u, 0x1564F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564F8u;
label_1564f8:
    // 0x1564f8: 0xae020540  sw          $v0, 0x540($s0)
    ctx->pc = 0x1564f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1344), GPR_U32(ctx, 2));
    // 0x1564fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156504: 0x3e00008  jr          $ra
    ctx->pc = 0x156504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156504u;
        // 0x156508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15650Cu;
    // 0x15650c: 0x0  nop
    ctx->pc = 0x15650cu;
    // NOP
    ctx->pc = 0x156510u;
}
