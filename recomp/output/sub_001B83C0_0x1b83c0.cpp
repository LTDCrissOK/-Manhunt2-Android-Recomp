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

// Function: sub_001B83C0
// Address: 0x1b83c0 - 0x1b83e8
void sub_001B83C0_0x1b83c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B83C0_0x1b83c0");
#endif

    switch (ctx->pc) {
        case 0x1b83dcu: goto label_1b83dc;
        default: break;
    }

    ctx->pc = 0x1b83c0u;

    // 0x1b83c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b83c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b83c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b83c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b83c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b83cc: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1b83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1b83d0: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x1b83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b83d4: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1B83D4u;
    SET_GPR_U32(ctx, 31, 0x1B83DCu);
    ctx->pc = 0x1B83D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83D4u;
    // 0x1b83d8: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1B83D4u, 0x1B83DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83DCu;
label_1b83dc:
    // 0x1b83dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b83dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b83e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B83E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83E0u;
        // 0x1b83e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B83E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B83E8u;
}
