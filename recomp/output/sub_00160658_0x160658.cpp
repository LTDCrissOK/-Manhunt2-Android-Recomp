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

// Function: sub_00160658
// Address: 0x160658 - 0x160698
void sub_00160658_0x160658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160658_0x160658");
#endif

    switch (ctx->pc) {
        case 0x160678u: goto label_160678;
        case 0x160688u: goto label_160688;
        default: break;
    }

    ctx->pc = 0x160658u;

    // 0x160658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16065c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x160664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160668: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160668u;
    {
        const bool branch_taken_0x160668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160668u;
        // 0x16066c: 0xac860218  sw          $a2, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160668) {
            ctx->pc = 0x160688u;
            goto label_160688;
        }
    }
    ctx->pc = 0x160670u;
    // 0x160670: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x160670u;
    SET_GPR_U32(ctx, 31, 0x160678u);
    ctx->pc = 0x160674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160670u;
    // 0x160674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x160670u, 0x160678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160678u;
label_160678:
    // 0x160678: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16067c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16067cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160680: 0xc042136  jal         func_1084D8
    ctx->pc = 0x160680u;
    SET_GPR_U32(ctx, 31, 0x160688u);
    ctx->pc = 0x160684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160680u;
    // 0x160684: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x160680u, 0x160688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160688u;
label_160688:
    // 0x160688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16068c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160690: 0x3e00008  jr          $ra
    ctx->pc = 0x160690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160690u;
        // 0x160694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160698u;
}
