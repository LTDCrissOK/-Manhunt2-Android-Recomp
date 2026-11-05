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

// Function: sub_003DC500
// Address: 0x3dc500 - 0x3dc538
void sub_003DC500_0x3dc500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC500_0x3dc500");
#endif

    switch (ctx->pc) {
        case 0x3dc524u: goto label_3dc524;
        default: break;
    }

    ctx->pc = 0x3dc500u;

    // 0x3dc500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dc508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dc50c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc510: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3dc510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc514: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC514u;
    {
        const bool branch_taken_0x3dc514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc514) {
            ctx->pc = 0x3DC518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC514u;
            // 0x3dc518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC52Cu;
            goto label_3dc52c;
        }
    }
    ctx->pc = 0x3DC51Cu;
    // 0x3dc51c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3DC51Cu;
    SET_GPR_U32(ctx, 31, 0x3DC524u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3DC51Cu, 0x3DC524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC524u;
label_3dc524:
    // 0x3dc524: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3dc524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3dc528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc52c:
    // 0x3dc52c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dc52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc530: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC530u;
        // 0x3dc534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC538u;
}
