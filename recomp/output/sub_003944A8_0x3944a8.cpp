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

// Function: sub_003944A8
// Address: 0x3944a8 - 0x3944e0
void sub_003944A8_0x3944a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003944A8_0x3944a8");
#endif

    switch (ctx->pc) {
        case 0x3944bcu: goto label_3944bc;
        case 0x3944c4u: goto label_3944c4;
        case 0x3944ccu: goto label_3944cc;
        default: break;
    }

    ctx->pc = 0x3944a8u;

    // 0x3944a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3944a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3944ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3944acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3944b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3944b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3944b4: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x3944B4u;
    SET_GPR_U32(ctx, 31, 0x3944BCu);
    ctx->pc = 0x3944B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3944B4u;
    // 0x3944b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x3944B4u, 0x3944BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3944BCu;
label_3944bc:
    // 0x3944bc: 0xc0e5138  jal         func_3944E0
    ctx->pc = 0x3944BCu;
    SET_GPR_U32(ctx, 31, 0x3944C4u);
    ctx->pc = 0x3944C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3944BCu;
    // 0x3944c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3944E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3944E0u, 0x3944BCu, 0x3944C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3944C4u;
label_3944c4:
    // 0x3944c4: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x3944C4u;
    SET_GPR_U32(ctx, 31, 0x3944CCu);
    ctx->pc = 0x3944C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3944C4u;
    // 0x3944c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x3944C4u, 0x3944CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3944CCu;
label_3944cc:
    // 0x3944cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3944ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3944d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3944d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3944d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3944d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3944d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3944D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3944DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944D8u;
        // 0x3944dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3944D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3944E0u;
}
