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

// Function: sub_002FF2B8
// Address: 0x2ff2b8 - 0x2ff310
void sub_002FF2B8_0x2ff2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF2B8_0x2ff2b8");
#endif

    ctx->pc = 0x2ff2b8u;

    // 0x2ff2b8: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x2ff2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x2ff2bc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ff2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ff2c0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2ff2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ff2c4: 0x8ca2c34c  lw          $v0, -0x3CB4($a1)
    ctx->pc = 0x2ff2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC34Cu));
    // 0x2ff2c8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2ff2c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ff2cc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2ff2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ff2d0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2ff2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ff2d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF2D4u;
    {
        const bool branch_taken_0x2ff2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2D4u;
        // 0x2ff2d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2d4) {
            ctx->pc = 0x2FF2F4u;
            goto label_2ff2f4;
        }
    }
    ctx->pc = 0x2FF2DCu;
    // 0x2ff2dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ff2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff2e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2ff2e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ff2e4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF2E4u;
    {
        const bool branch_taken_0x2ff2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2e4) {
            ctx->pc = 0x2FF2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF2E4u;
            // 0x2ff2e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2ECu;
            goto label_2ff2ec;
        }
    }
    ctx->pc = 0x2FF2ECu;
label_2ff2ec:
    // 0x2ff2ec: 0x1812  mflo        $v1
    ctx->pc = 0x2ff2ecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ff2f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2ff2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2f4:
    // 0x2ff2f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ff2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ff2f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ff2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ff2fc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2ff2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ff300: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF300u;
    {
        const bool branch_taken_0x2ff300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff300) {
            ctx->pc = 0x2FF304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF300u;
            // 0x2ff304: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF308u;
            goto label_2ff308;
        }
    }
    ctx->pc = 0x2FF308u;
label_2ff308:
    // 0x2ff308: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF310u;
}
