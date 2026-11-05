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

// Function: sub_003DD7F0
// Address: 0x3dd7f0 - 0x3dd820
void sub_003DD7F0_0x3dd7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD7F0_0x3dd7f0");
#endif

    switch (ctx->pc) {
        case 0x3dd800u: goto label_3dd800;
        default: break;
    }

    ctx->pc = 0x3dd7f0u;

    // 0x3dd7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dd7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd7f4: 0x24860500  addiu       $a2, $a0, 0x500
    ctx->pc = 0x3dd7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x3dd7f8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x3dd7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3dd7fc: 0x0  nop
    ctx->pc = 0x3dd7fcu;
    // NOP
label_3dd800:
    // 0x3dd800: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3dd800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dd804: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x3dd804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3dd808: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3dd808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3dd80c: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x3dd80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3dd810: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DD810u;
    {
        const bool branch_taken_0x3dd810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD810u;
        // 0x3dd814: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd810) {
            ctx->pc = 0x3DD800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd800;
        }
    }
    ctx->pc = 0x3DD818u;
    // 0x3dd818: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD818u;
        // 0x3dd81c: 0xa080050a  sb          $zero, 0x50A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1290), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD820u;
}
