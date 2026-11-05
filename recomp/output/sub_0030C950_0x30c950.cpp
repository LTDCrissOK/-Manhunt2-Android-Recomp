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

// Function: sub_0030C950
// Address: 0x30c950 - 0x30c990
void sub_0030C950_0x30c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C950_0x30c950");
#endif

    switch (ctx->pc) {
        case 0x30c968u: goto label_30c968;
        default: break;
    }

    ctx->pc = 0x30c950u;

    // 0x30c950: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x30c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30c954: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c958: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30C958u;
    {
        const bool branch_taken_0x30c958 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C958u;
        // 0x30c95c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c958) {
            ctx->pc = 0x30C988u;
            goto label_30c988;
        }
    }
    ctx->pc = 0x30C960u;
    // 0x30c960: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x30c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30c964: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30c964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c968:
    // 0x30c968: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x30c968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c96c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C96Cu;
    {
        const bool branch_taken_0x30c96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x30c96c) {
            ctx->pc = 0x30C970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C96Cu;
            // 0x30c970: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C97Cu;
            goto label_30c97c;
        }
    }
    ctx->pc = 0x30C974u;
    // 0x30c974: 0x3e00008  jr          $ra
    ctx->pc = 0x30C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C974u;
        // 0x30c978: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C97Cu;
label_30c97c:
    // 0x30c97c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x30c97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30c980: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30C980u;
    {
        const bool branch_taken_0x30c980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C980u;
        // 0x30c984: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c980) {
            ctx->pc = 0x30C968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c968;
        }
    }
    ctx->pc = 0x30C988u;
label_30c988:
    // 0x30c988: 0x3e00008  jr          $ra
    ctx->pc = 0x30C988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C988u;
        // 0x30c98c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C990u;
}
