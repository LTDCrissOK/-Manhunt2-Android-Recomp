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

// Function: sub_003DC538
// Address: 0x3dc538 - 0x3dc560
void sub_003DC538_0x3dc538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC538_0x3dc538");
#endif

    switch (ctx->pc) {
        case 0x3dc54cu: goto label_3dc54c;
        default: break;
    }

    ctx->pc = 0x3dc538u;

    // 0x3dc538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc53c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dc540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dc544: 0xc0f7140  jal         func_3DC500
    ctx->pc = 0x3DC544u;
    SET_GPR_U32(ctx, 31, 0x3DC54Cu);
    ctx->pc = 0x3DC548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC544u;
    // 0x3dc548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC500u, 0x3DC544u, 0x3DC54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC54Cu;
label_3dc54c:
    // 0x3dc54c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3dc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3dc550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dc554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc558: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC558u;
        // 0x3dc55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC560u;
}
