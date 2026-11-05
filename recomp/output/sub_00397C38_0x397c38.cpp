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

// Function: sub_00397C38
// Address: 0x397c38 - 0x397c80
void sub_00397C38_0x397c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397C38_0x397c38");
#endif

    switch (ctx->pc) {
        case 0x397c50u: goto label_397c50;
        case 0x397c5cu: goto label_397c5c;
        default: break;
    }

    ctx->pc = 0x397c38u;

    // 0x397c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397c44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x397c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x397c48: 0xc0ea638  jal         func_3A98E0
    ctx->pc = 0x397C48u;
    SET_GPR_U32(ctx, 31, 0x397C50u);
    ctx->pc = 0x397C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C48u;
    // 0x397c4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A98E0u, 0x397C48u, 0x397C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C50u;
label_397c50:
    // 0x397c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c54: 0xc0ea612  jal         func_3A9848
    ctx->pc = 0x397C54u;
    SET_GPR_U32(ctx, 31, 0x397C5Cu);
    ctx->pc = 0x397C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C54u;
    // 0x397c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9848u, 0x397C54u, 0x397C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397C5Cu;
label_397c5c:
    // 0x397c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397c60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x397c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x397c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397c68: 0x80ea5d6  j           func_3A9758
    ctx->pc = 0x397C68u;
    ctx->pc = 0x397C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397C68u;
    // 0x397c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9758u, 0x397C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397C70u;
    // 0x397c70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397c74: 0x0  nop
    ctx->pc = 0x397c74u;
    // NOP
    // 0x397c78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397c7c: 0x0  nop
    ctx->pc = 0x397c7cu;
    // NOP
    ctx->pc = 0x397c80u;
}
