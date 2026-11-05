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

// Function: sub_00104F98
// Address: 0x104f98 - 0x104fd8
void sub_00104F98_0x104f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104F98_0x104f98");
#endif

    ctx->pc = 0x104f98u;

    // 0x104f98: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x104F98u;
    {
        const bool branch_taken_0x104f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f98) {
            ctx->pc = 0x104FD0u;
            goto label_104fd0;
        }
    }
    ctx->pc = 0x104FA0u;
    // 0x104fa0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x104FA0u;
    {
        const bool branch_taken_0x104fa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x104fa0) {
            ctx->pc = 0x104FB8u;
            goto label_104fb8;
        }
    }
    ctx->pc = 0x104FA8u;
    // 0x104fa8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x104fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x104fac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104FACu;
    {
        const bool branch_taken_0x104fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FACu;
        // 0x104fb0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fac) {
            ctx->pc = 0x104FB8u;
            goto label_104fb8;
        }
    }
    ctx->pc = 0x104FB4u;
    // 0x104fb4: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x104fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_104fb8:
    // 0x104fb8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x104FB8u;
    {
        const bool branch_taken_0x104fb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x104fb8) {
            ctx->pc = 0x104FD0u;
            goto label_104fd0;
        }
    }
    ctx->pc = 0x104FC0u;
    // 0x104fc0: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x104fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x104fc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104FC4u;
    {
        const bool branch_taken_0x104fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FC4u;
        // 0x104fc8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fc4) {
            ctx->pc = 0x104FD0u;
            goto label_104fd0;
        }
    }
    ctx->pc = 0x104FCCu;
    // 0x104fcc: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x104fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_104fd0:
    // 0x104fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x104FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104FD8u;
}
