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

// Function: sub_003A4360
// Address: 0x3a4360 - 0x3a4398
void sub_003A4360_0x3a4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4360_0x3a4360");
#endif

    switch (ctx->pc) {
        case 0x3a4370u: goto label_3a4370;
        default: break;
    }

    ctx->pc = 0x3a4360u;

    // 0x3a4360: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a4360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a4364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a4364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4368: 0x24432b10  addiu       $v1, $v0, 0x2B10
    ctx->pc = 0x3a4368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11024));
    // 0x3a436c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x3a436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3a4370:
    // 0x3a4370: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a4370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4374: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3a4378: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3a4378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3a437c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3a437cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3a4380: 0x0  nop
    ctx->pc = 0x3a4380u;
    // NOP
    // 0x3a4384: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4384u;
    {
        const bool branch_taken_0x3a4384 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3A4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4384u;
        // 0x3a4388: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4384) {
            ctx->pc = 0x3A4370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4370;
        }
    }
    ctx->pc = 0x3A438Cu;
    // 0x3a438c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A438Cu;
        // 0x3a4390: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4394u;
    // 0x3a4394: 0x0  nop
    ctx->pc = 0x3a4394u;
    // NOP
    ctx->pc = 0x3a4398u;
}
