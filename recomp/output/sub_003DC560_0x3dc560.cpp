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

// Function: sub_003DC560
// Address: 0x3dc560 - 0x3dc590
void sub_003DC560_0x3dc560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC560_0x3dc560");
#endif

    switch (ctx->pc) {
        case 0x3dc584u: goto label_3dc584;
        default: break;
    }

    ctx->pc = 0x3dc560u;

    // 0x3dc560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc564: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dc564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dc568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc56c: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x3dc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x3dc570: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dc570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dc574: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC574u;
    {
        const bool branch_taken_0x3dc574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC574u;
        // 0x3dc578: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc574) {
            ctx->pc = 0x3DC584u;
            goto label_3dc584;
        }
    }
    ctx->pc = 0x3DC57Cu;
    // 0x3dc57c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC57Cu;
    SET_GPR_U32(ctx, 31, 0x3DC584u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC57Cu, 0x3DC584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC584u;
label_3dc584:
    // 0x3dc584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc588: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC588u;
        // 0x3dc58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC590u;
}
