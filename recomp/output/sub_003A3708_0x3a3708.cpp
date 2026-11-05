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

// Function: sub_003A3708
// Address: 0x3a3708 - 0x3a3760
void sub_003A3708_0x3a3708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3708_0x3a3708");
#endif

    switch (ctx->pc) {
        case 0x3a371cu: goto label_3a371c;
        case 0x3a3724u: goto label_3a3724;
        case 0x3a3740u: goto label_3a3740;
        case 0x3a3748u: goto label_3a3748;
        default: break;
    }

    ctx->pc = 0x3a3708u;

    // 0x3a3708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a370c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a3710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a3714: 0xc0e8d3e  jal         func_3A34F8
    ctx->pc = 0x3A3714u;
    SET_GPR_U32(ctx, 31, 0x3A371Cu);
    ctx->pc = 0x3A3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3714u;
    // 0x3a3718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34F8u, 0x3A3714u, 0x3A371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A371Cu;
label_3a371c:
    // 0x3a371c: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x3A371Cu;
    SET_GPR_U32(ctx, 31, 0x3A3724u);
    ctx->pc = 0x3A3720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A371Cu;
    // 0x3a3720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x3A371Cu, 0x3A3724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3724u;
label_3a3724:
    // 0x3a3724: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a3724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a3728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a3728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a372c: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x3a372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x3a3730: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3730u;
    {
        const bool branch_taken_0x3a3730 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3730u;
        // 0x3a3734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3730) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A3738u;
    // 0x3a3738: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A3738u;
    SET_GPR_U32(ctx, 31, 0x3A3740u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A3738u, 0x3A3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3740u;
label_3a3740:
    // 0x3a3740: 0xc0e8d4c  jal         func_3A3530
    ctx->pc = 0x3A3740u;
    SET_GPR_U32(ctx, 31, 0x3A3748u);
    ctx->pc = 0x3A3530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3530u, 0x3A3740u, 0x3A3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3748u;
label_3a3748:
    // 0x3a3748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a3748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a374c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a374cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3754: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3754u;
        // 0x3a3758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A375Cu;
    // 0x3a375c: 0x0  nop
    ctx->pc = 0x3a375cu;
    // NOP
    ctx->pc = 0x3a3760u;
}
