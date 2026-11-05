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

// Function: sub_00149280
// Address: 0x149280 - 0x1492b8
void sub_00149280_0x149280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149280_0x149280");
#endif

    ctx->pc = 0x149280u;

    // 0x149280: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x149280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149284: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x149284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x149288: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x149288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14928c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x14928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149290: 0x8ca204f8  lw          $v0, 0x4F8($a1)
    ctx->pc = 0x149290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1272)));
    // 0x149294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149294u;
    {
        const bool branch_taken_0x149294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149294u;
        // 0x149298: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149294) {
            ctx->pc = 0x1492B0u;
            goto label_1492b0;
        }
    }
    ctx->pc = 0x14929Cu;
    // 0x14929c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x14929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1492a0: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x1492a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
    // 0x1492a4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1492a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1492a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1492A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1492ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492A8u;
        // 0x1492ac: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1492A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1492B0u;
label_1492b0:
    // 0x1492b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1492B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1492B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492B0u;
        // 0x1492b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1492B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1492B8u;
}
