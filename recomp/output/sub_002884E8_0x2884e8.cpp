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

// Function: sub_002884E8
// Address: 0x2884e8 - 0x288520
void sub_002884E8_0x2884e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002884E8_0x2884e8");
#endif

    switch (ctx->pc) {
        case 0x288500u: goto label_288500;
        default: break;
    }

    ctx->pc = 0x2884e8u;

    // 0x2884e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2884e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2884ec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2884ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2884f0: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x2884f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x2884f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2884f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884f8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2884fc: 0x0  nop
    ctx->pc = 0x2884fcu;
    // NOP
label_288500:
    // 0x288500: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x288500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x288504: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x288504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x288508: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x288508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28850c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x288510: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x288510u;
    {
        const bool branch_taken_0x288510 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x288514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288510u;
        // 0x288514: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288510) {
            ctx->pc = 0x288500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288500;
        }
    }
    ctx->pc = 0x288518u;
    // 0x288518: 0x3e00008  jr          $ra
    ctx->pc = 0x288518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288520u;
}
