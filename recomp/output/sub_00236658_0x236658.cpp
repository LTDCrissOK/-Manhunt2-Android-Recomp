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

// Function: sub_00236658
// Address: 0x236658 - 0x236698
void sub_00236658_0x236658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236658_0x236658");
#endif

    switch (ctx->pc) {
        case 0x236670u: goto label_236670;
        case 0x236684u: goto label_236684;
        default: break;
    }

    ctx->pc = 0x236658u;

    // 0x236658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23665c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x23665cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x236660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236664: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236668: 0xc089560  jal         func_225580
    ctx->pc = 0x236668u;
    SET_GPR_U32(ctx, 31, 0x236670u);
    ctx->pc = 0x23666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236668u;
    // 0x23666c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225580u, 0x236668u, 0x236670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236670u;
label_236670:
    // 0x236670: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236670u;
    {
        const bool branch_taken_0x236670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236670u;
        // 0x236674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236670) {
            ctx->pc = 0x236688u;
            goto label_236688;
        }
    }
    ctx->pc = 0x236678u;
    // 0x236678: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x236678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23667c: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x23667Cu;
    SET_GPR_U32(ctx, 31, 0x236684u);
    ctx->pc = 0x236680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23667Cu;
    // 0x236680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x23667Cu, 0x236684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236684u;
label_236684:
    // 0x236684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236688:
    // 0x236688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23668c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236690: 0x3e00008  jr          $ra
    ctx->pc = 0x236690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236690u;
        // 0x236694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236698u;
}
