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

// Function: sub_00306048
// Address: 0x306048 - 0x306078
void sub_00306048_0x306048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306048_0x306048");
#endif

    switch (ctx->pc) {
        case 0x30605cu: goto label_30605c;
        case 0x306064u: goto label_306064;
        default: break;
    }

    ctx->pc = 0x306048u;

    // 0x306048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30604c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x306050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x306054: 0xc09083a  jal         func_2420E8
    ctx->pc = 0x306054u;
    SET_GPR_U32(ctx, 31, 0x30605Cu);
    ctx->pc = 0x306058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306054u;
    // 0x306058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2420E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2420E8u, 0x306054u, 0x30605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30605Cu;
label_30605c:
    // 0x30605c: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x30605Cu;
    SET_GPR_U32(ctx, 31, 0x306064u);
    ctx->pc = 0x306060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30605Cu;
    // 0x306060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x30605Cu, 0x306064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306064u;
label_306064:
    // 0x306064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x306064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306068: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x306068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30606c: 0x3e00008  jr          $ra
    ctx->pc = 0x30606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30606Cu;
        // 0x306070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30606Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306074u;
    // 0x306074: 0x0  nop
    ctx->pc = 0x306074u;
    // NOP
    ctx->pc = 0x306078u;
}
