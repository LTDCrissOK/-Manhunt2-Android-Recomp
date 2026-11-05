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

// Function: sub_00278188
// Address: 0x278188 - 0x2781b8
void sub_00278188_0x278188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278188_0x278188");
#endif

    switch (ctx->pc) {
        case 0x2781acu: goto label_2781ac;
        default: break;
    }

    ctx->pc = 0x278188u;

    // 0x278188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27818c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x27818cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278194: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x278194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x278198: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x278198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x27819c: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x27819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2781a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2781a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2781a4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2781A4u;
    SET_GPR_U32(ctx, 31, 0x2781ACu);
    ctx->pc = 0x2781A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781A4u;
    // 0x2781a8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2781A4u, 0x2781ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781ACu;
label_2781ac:
    // 0x2781ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2781acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2781b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2781B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2781B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781B0u;
        // 0x2781b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2781B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2781B8u;
}
