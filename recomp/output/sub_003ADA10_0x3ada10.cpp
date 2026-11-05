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

// Function: sub_003ADA10
// Address: 0x3ada10 - 0x3ada58
void sub_003ADA10_0x3ada10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADA10_0x3ada10");
#endif

    switch (ctx->pc) {
        case 0x3ada20u: goto label_3ada20;
        case 0x3ada28u: goto label_3ada28;
        case 0x3ada3cu: goto label_3ada3c;
        default: break;
    }

    ctx->pc = 0x3ada10u;

    // 0x3ada10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ada10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ada14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ada14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ada18: 0xc0ec39e  jal         func_3B0E78
    ctx->pc = 0x3ADA18u;
    SET_GPR_U32(ctx, 31, 0x3ADA20u);
    ctx->pc = 0x3B0E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0E78u, 0x3ADA18u, 0x3ADA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA20u;
label_3ada20:
    // 0x3ada20: 0xc0eb602  jal         func_3AD808
    ctx->pc = 0x3ADA20u;
    SET_GPR_U32(ctx, 31, 0x3ADA28u);
    ctx->pc = 0x3AD808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD808u, 0x3ADA20u, 0x3ADA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA28u;
label_3ada28:
    // 0x3ada28: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ada28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3ada2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ada2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada30: 0x24843720  addiu       $a0, $a0, 0x3720
    ctx->pc = 0x3ada30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14112));
    // 0x3ada34: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3ADA34u;
    SET_GPR_U32(ctx, 31, 0x3ADA3Cu);
    ctx->pc = 0x3ADA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA34u;
    // 0x3ada38: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3ADA34u, 0x3ADA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA3Cu;
label_3ada3c:
    // 0x3ada3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ada3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ada40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ada44: 0x80eb67c  j           func_3AD9F0
    ctx->pc = 0x3ADA44u;
    ctx->pc = 0x3ADA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA44u;
    // 0x3ada48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD9F0u, 0x3ADA44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ADA4Cu;
    // 0x3ada4c: 0x0  nop
    ctx->pc = 0x3ada4cu;
    // NOP
    // 0x3ada50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ada50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ada54: 0x0  nop
    ctx->pc = 0x3ada54u;
    // NOP
    ctx->pc = 0x3ada58u;
}
