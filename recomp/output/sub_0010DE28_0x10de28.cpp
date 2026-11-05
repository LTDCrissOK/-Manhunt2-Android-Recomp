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

// Function: sub_0010DE28
// Address: 0x10de28 - 0x10de60
void sub_0010DE28_0x10de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DE28_0x10de28");
#endif

    switch (ctx->pc) {
        case 0x10de3cu: goto label_10de3c;
        case 0x10de50u: goto label_10de50;
        default: break;
    }

    ctx->pc = 0x10de28u;

    // 0x10de28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10de2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10de30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10de34: 0xc04497c  jal         func_1125F0
    ctx->pc = 0x10DE34u;
    SET_GPR_U32(ctx, 31, 0x10DE3Cu);
    ctx->pc = 0x10DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE34u;
    // 0x10de38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125F0u, 0x10DE34u, 0x10DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE3Cu;
label_10de3c:
    // 0x10de3c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10de40: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10de40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10de44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10de44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x10de48: 0xc04ad50  jal         func_12B540
    ctx->pc = 0x10DE48u;
    SET_GPR_U32(ctx, 31, 0x10DE50u);
    ctx->pc = 0x10DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE48u;
    // 0x10de4c: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B540u, 0x10DE48u, 0x10DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE50u;
label_10de50:
    // 0x10de50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10de50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10de54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10de58: 0x3e00008  jr          $ra
    ctx->pc = 0x10DE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE58u;
        // 0x10de5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DE60u;
}
