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

// Function: sub_002D47F8
// Address: 0x2d47f8 - 0x2d4820
void sub_002D47F8_0x2d47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D47F8_0x2d47f8");
#endif

    switch (ctx->pc) {
        case 0x2d4810u: goto label_2d4810;
        default: break;
    }

    ctx->pc = 0x2d47f8u;

    // 0x2d47f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d47f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d47fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4800: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d4800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4808: 0xc0b51c8  jal         func_2D4720
    ctx->pc = 0x2D4808u;
    SET_GPR_U32(ctx, 31, 0x2D4810u);
    ctx->pc = 0x2D480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4808u;
    // 0x2d480c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4720u, 0x2D4808u, 0x2D4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4810u;
label_2d4810:
    // 0x2d4810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4814: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4814u;
        // 0x2d4818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D481Cu;
    // 0x2d481c: 0x0  nop
    ctx->pc = 0x2d481cu;
    // NOP
    ctx->pc = 0x2d4820u;
}
