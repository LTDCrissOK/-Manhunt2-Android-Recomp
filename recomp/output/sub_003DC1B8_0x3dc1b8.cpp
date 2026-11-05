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

// Function: sub_003DC1B8
// Address: 0x3dc1b8 - 0x3dc1e0
void sub_003DC1B8_0x3dc1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC1B8_0x3dc1b8");
#endif

    switch (ctx->pc) {
        case 0x3dc1ccu: goto label_3dc1cc;
        default: break;
    }

    ctx->pc = 0x3dc1b8u;

    // 0x3dc1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc1c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dc1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dc1c4: 0xc0f7060  jal         func_3DC180
    ctx->pc = 0x3DC1C4u;
    SET_GPR_U32(ctx, 31, 0x3DC1CCu);
    ctx->pc = 0x3DC1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC1C4u;
    // 0x3dc1c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC180u, 0x3DC1C4u, 0x3DC1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC1CCu;
label_3dc1cc:
    // 0x3dc1cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3dc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3dc1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc1d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dc1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1D8u;
        // 0x3dc1dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC1E0u;
}
