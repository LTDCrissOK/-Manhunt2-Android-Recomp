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

// Function: sub_003274F8
// Address: 0x3274f8 - 0x327538
void sub_003274F8_0x3274f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003274F8_0x3274f8");
#endif

    switch (ctx->pc) {
        case 0x32751cu: goto label_32751c;
        default: break;
    }

    ctx->pc = 0x3274f8u;

    // 0x3274f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3274f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3274fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3274fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327504: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x327504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x327508: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x327508u;
    {
        const bool branch_taken_0x327508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327508) {
            ctx->pc = 0x32750Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327508u;
            // 0x32750c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32752Cu;
            goto label_32752c;
        }
    }
    ctx->pc = 0x327510u;
    // 0x327510: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x327510u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327514: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x327514u;
    SET_GPR_U32(ctx, 31, 0x32751Cu);
    ctx->pc = 0x327518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327514u;
    // 0x327518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x327514u, 0x32751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32751Cu;
label_32751c:
    // 0x32751c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32751cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327520: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x327520u;
    {
        const bool branch_taken_0x327520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327520u;
        // 0x327524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327520) {
            ctx->pc = 0x32752Cu;
            goto label_32752c;
        }
    }
    ctx->pc = 0x327528u;
    // 0x327528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32752c:
    // 0x32752c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327530: 0x3e00008  jr          $ra
    ctx->pc = 0x327530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327530u;
        // 0x327534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327538u;
}
