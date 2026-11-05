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

// Function: sub_00254868
// Address: 0x254868 - 0x2548a8
void sub_00254868_0x254868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254868_0x254868");
#endif

    ctx->pc = 0x254868u;

    // 0x254868: 0x8c850334  lw          $a1, 0x334($a0)
    ctx->pc = 0x254868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x25486c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x254870: 0x8ca40150  lw          $a0, 0x150($a1)
    ctx->pc = 0x254870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x254874: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254874u;
    {
        const bool branch_taken_0x254874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254874) {
            ctx->pc = 0x254888u;
            goto label_254888;
        }
    }
    ctx->pc = 0x25487Cu;
    // 0x25487c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x254880: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254880u;
    {
        const bool branch_taken_0x254880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x254880) {
            ctx->pc = 0x25489Cu;
            goto label_25489c;
        }
    }
    ctx->pc = 0x254888u;
label_254888:
    // 0x254888: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x254888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25488c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x254890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x254890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254894: 0x38630110  xori        $v1, $v1, 0x110
    ctx->pc = 0x254894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)272);
    // 0x254898: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x254898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_25489c:
    // 0x25489c: 0x3e00008  jr          $ra
    ctx->pc = 0x25489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25489Cu;
        // 0x2548a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548A4u;
    // 0x2548a4: 0x0  nop
    ctx->pc = 0x2548a4u;
    // NOP
    ctx->pc = 0x2548a8u;
}
