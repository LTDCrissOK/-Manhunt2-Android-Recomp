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

// Function: sub_0013D310
// Address: 0x13d310 - 0x13d350
void sub_0013D310_0x13d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D310_0x13d310");
#endif

    ctx->pc = 0x13d310u;

    // 0x13d310: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13d310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13d314: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13d314u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d318: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x13d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13d31c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13d320: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x13d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x13d324: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13d328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d32c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d330: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x13d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x13d334: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D334u;
    {
        const bool branch_taken_0x13d334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d334) {
            ctx->pc = 0x13D338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D334u;
            // 0x13d338: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D344u;
            goto label_13d344;
        }
    }
    ctx->pc = 0x13D33Cu;
    // 0x13d33c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D33Cu;
        // 0x13d340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D344u;
label_13d344:
    // 0x13d344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d348: 0x3e00008  jr          $ra
    ctx->pc = 0x13D348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D348u;
        // 0x13d34c: 0x24620070  addiu       $v0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D350u;
}
