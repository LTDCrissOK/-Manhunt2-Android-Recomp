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

// Function: sub_003DC620
// Address: 0x3dc620 - 0x3dc650
void sub_003DC620_0x3dc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC620_0x3dc620");
#endif

    switch (ctx->pc) {
        case 0x3dc644u: goto label_3dc644;
        default: break;
    }

    ctx->pc = 0x3dc620u;

    // 0x3dc620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc624: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dc624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dc628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc62c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x3dc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x3dc630: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dc630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dc634: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC634u;
    {
        const bool branch_taken_0x3dc634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC634u;
        // 0x3dc638: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc634) {
            ctx->pc = 0x3DC644u;
            goto label_3dc644;
        }
    }
    ctx->pc = 0x3DC63Cu;
    // 0x3dc63c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC63Cu;
    SET_GPR_U32(ctx, 31, 0x3DC644u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC63Cu, 0x3DC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC644u;
label_3dc644:
    // 0x3dc644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc648: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC648u;
        // 0x3dc64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC650u;
}
