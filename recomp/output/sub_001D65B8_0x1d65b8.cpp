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

// Function: sub_001D65B8
// Address: 0x1d65b8 - 0x1d65e8
void sub_001D65B8_0x1d65b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65B8_0x1d65b8");
#endif

    switch (ctx->pc) {
        case 0x1d65dcu: goto label_1d65dc;
        default: break;
    }

    ctx->pc = 0x1d65b8u;

    // 0x1d65b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d65b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d65bc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1d65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1d65c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d65c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d65c4: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x1d65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x1d65c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d65c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65cc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d65ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d65d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d65d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65d4: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x1D65D4u;
    SET_GPR_U32(ctx, 31, 0x1D65DCu);
    ctx->pc = 0x1D65D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65D4u;
    // 0x1d65d8: 0xa040000b  sb          $zero, 0xB($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x1D65D4u, 0x1D65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65DCu;
label_1d65dc:
    // 0x1d65dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d65dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d65e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65E0u;
        // 0x1d65e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65E8u;
}
