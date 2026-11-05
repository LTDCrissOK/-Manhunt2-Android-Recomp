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

// Function: sub_002BB030
// Address: 0x2bb030 - 0x2bb060
void sub_002BB030_0x2bb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB030_0x2bb030");
#endif

    switch (ctx->pc) {
        case 0x2bb040u: goto label_2bb040;
        default: break;
    }

    ctx->pc = 0x2bb030u;

    // 0x2bb030: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bb030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb034: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bb034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB038u;
    {
        const bool branch_taken_0x2bb038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB038u;
        // 0x2bb03c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb038) {
            ctx->pc = 0x2BB058u;
            goto label_2bb058;
        }
    }
    ctx->pc = 0x2BB040u;
label_2bb040:
    // 0x2bb040: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bb040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb044: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb048: 0x0  nop
    ctx->pc = 0x2bb048u;
    // NOP
    // 0x2bb04c: 0x0  nop
    ctx->pc = 0x2bb04cu;
    // NOP
    // 0x2bb050: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BB050u;
    {
        const bool branch_taken_0x2bb050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB050u;
        // 0x2bb054: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb050) {
            ctx->pc = 0x2BB040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb040;
        }
    }
    ctx->pc = 0x2BB058u;
label_2bb058:
    // 0x2bb058: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB058u;
        // 0x2bb05c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB060u;
}
