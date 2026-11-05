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

// Function: sub_003EE308
// Address: 0x3ee308 - 0x3ee348
void sub_003EE308_0x3ee308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE308_0x3ee308");
#endif

    switch (ctx->pc) {
        case 0x3ee324u: goto label_3ee324;
        case 0x3ee334u: goto label_3ee334;
        default: break;
    }

    ctx->pc = 0x3ee308u;

    // 0x3ee308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ee30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ee314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ee318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ee31c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3EE31Cu;
    SET_GPR_U32(ctx, 31, 0x3EE324u);
    ctx->pc = 0x3EE320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE31Cu;
    // 0x3ee320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3EE31Cu, 0x3EE324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE324u;
label_3ee324:
    // 0x3ee324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee328: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x3ee328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x3ee32c: 0xc0fb8e8  jal         func_3EE3A0
    ctx->pc = 0x3EE32Cu;
    SET_GPR_U32(ctx, 31, 0x3EE334u);
    ctx->pc = 0x3EE330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE32Cu;
    // 0x3ee330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE3A0u, 0x3EE32Cu, 0x3EE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE334u;
label_3ee334:
    // 0x3ee334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee338: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ee338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee33c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE33Cu;
        // 0x3ee340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE344u;
    // 0x3ee344: 0x0  nop
    ctx->pc = 0x3ee344u;
    // NOP
    ctx->pc = 0x3ee348u;
}
