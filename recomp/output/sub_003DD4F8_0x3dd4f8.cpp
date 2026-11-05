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

// Function: sub_003DD4F8
// Address: 0x3dd4f8 - 0x3dd528
void sub_003DD4F8_0x3dd4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD4F8_0x3dd4f8");
#endif

    ctx->pc = 0x3dd4f8u;

    // 0x3dd4f8: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x3dd4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3dd4fc: 0x24a2ffee  addiu       $v0, $a1, -0x12
    ctx->pc = 0x3dd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
    // 0x3dd500: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3dd500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3dd504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DD504u;
    {
        const bool branch_taken_0x3dd504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD504u;
        // 0x3dd508: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd504) {
            ctx->pc = 0x3DD520u;
            goto label_3dd520;
        }
    }
    ctx->pc = 0x3DD50Cu;
    // 0x3dd50c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3dd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3dd510: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3dd510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3dd514: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3dd514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd518: 0x2863015a  slti        $v1, $v1, 0x15A
    ctx->pc = 0x3dd518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)346) ? 1 : 0);
    // 0x3dd51c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3dd51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3dd520:
    // 0x3dd520: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD520u;
        // 0x3dd524: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD528u;
}
