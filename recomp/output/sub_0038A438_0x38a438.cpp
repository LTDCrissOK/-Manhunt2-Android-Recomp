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

// Function: sub_0038A438
// Address: 0x38a438 - 0x38a480
void sub_0038A438_0x38a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A438_0x38a438");
#endif

    switch (ctx->pc) {
        case 0x38a45cu: goto label_38a45c;
        case 0x38a468u: goto label_38a468;
        default: break;
    }

    ctx->pc = 0x38a438u;

    // 0x38a438: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x38a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x38a43c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x38a43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a440: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x38a440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x38a444: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38a444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a44c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x38a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38a450: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x38a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x38a454: 0xc0f303e  jal         func_3CC0F8
    ctx->pc = 0x38A454u;
    SET_GPR_U32(ctx, 31, 0x38A45Cu);
    ctx->pc = 0x38A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A454u;
    // 0x38a458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC0F8u, 0x38A454u, 0x38A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A45Cu;
label_38a45c:
    // 0x38a45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a460: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38A460u;
    SET_GPR_U32(ctx, 31, 0x38A468u);
    ctx->pc = 0x38A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A460u;
    // 0x38a464: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38A460u, 0x38A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A468u;
label_38a468:
    // 0x38a468: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x38a468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x38a46c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x38a46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x38a470: 0x3e00008  jr          $ra
    ctx->pc = 0x38A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A470u;
        // 0x38a474: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A478u;
    // 0x38a478: 0x0  nop
    ctx->pc = 0x38a478u;
    // NOP
    // 0x38a47c: 0x0  nop
    ctx->pc = 0x38a47cu;
    // NOP
    ctx->pc = 0x38a480u;
}
