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

// Function: sub_003125F0
// Address: 0x3125f0 - 0x312630
void sub_003125F0_0x3125f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003125F0_0x3125f0");
#endif

    switch (ctx->pc) {
        case 0x312610u: goto label_312610;
        case 0x312620u: goto label_312620;
        default: break;
    }

    ctx->pc = 0x3125f0u;

    // 0x3125f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3125f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3125f4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x3125f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x3125f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3125f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3125fc: 0x24a51fd8  addiu       $a1, $a1, 0x1FD8
    ctx->pc = 0x3125fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8152));
    // 0x312600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312604: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x312604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x312608: 0xc0c4898  jal         func_312260
    ctx->pc = 0x312608u;
    SET_GPR_U32(ctx, 31, 0x312610u);
    ctx->pc = 0x31260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312608u;
    // 0x31260c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x312608u, 0x312610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312610u;
label_312610:
    // 0x312610: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312610u;
    {
        const bool branch_taken_0x312610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312610u;
        // 0x312614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312610) {
            ctx->pc = 0x312620u;
            goto label_312620;
        }
    }
    ctx->pc = 0x312618u;
    // 0x312618: 0xc0c4858  jal         func_312160
    ctx->pc = 0x312618u;
    SET_GPR_U32(ctx, 31, 0x312620u);
    ctx->pc = 0x31261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312618u;
    // 0x31261c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x312618u, 0x312620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312620u;
label_312620:
    // 0x312620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312624: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x312624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312628: 0x3e00008  jr          $ra
    ctx->pc = 0x312628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312628u;
        // 0x31262c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312630u;
}
