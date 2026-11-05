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

// Function: sub_003DBFF8
// Address: 0x3dbff8 - 0x3dc020
void sub_003DBFF8_0x3dbff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBFF8_0x3dbff8");
#endif

    switch (ctx->pc) {
        case 0x3dc010u: goto label_3dc010;
        default: break;
    }

    ctx->pc = 0x3dbff8u;

    // 0x3dbff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbffc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dbffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dc000: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC000u;
    {
        const bool branch_taken_0x3dc000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC000u;
        // 0x3dc004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc000) {
            ctx->pc = 0x3DC010u;
            goto label_3dc010;
        }
    }
    ctx->pc = 0x3DC008u;
    // 0x3dc008: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC008u;
    SET_GPR_U32(ctx, 31, 0x3DC010u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC008u, 0x3DC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC010u;
label_3dc010:
    // 0x3dc010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc014: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC014u;
        // 0x3dc018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC01Cu;
    // 0x3dc01c: 0x0  nop
    ctx->pc = 0x3dc01cu;
    // NOP
    ctx->pc = 0x3dc020u;
}
