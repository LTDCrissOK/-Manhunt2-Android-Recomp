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

// Function: sub_0016A768
// Address: 0x16a768 - 0x16a7a0
void sub_0016A768_0x16a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A768_0x16a768");
#endif

    switch (ctx->pc) {
        case 0x16a78cu: goto label_16a78c;
        default: break;
    }

    ctx->pc = 0x16a768u;

    // 0x16a768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a770: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A770u;
    {
        const bool branch_taken_0x16a770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A770u;
        // 0x16a774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a770) {
            ctx->pc = 0x16A794u;
            goto label_16a794;
        }
    }
    ctx->pc = 0x16A778u;
    // 0x16a778: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x16a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x16a77c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A77Cu;
    {
        const bool branch_taken_0x16a77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a77c) {
            ctx->pc = 0x16A780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A77Cu;
            // 0x16a780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A794u;
            goto label_16a794;
        }
    }
    ctx->pc = 0x16A784u;
    // 0x16a784: 0xc05adc6  jal         func_16B718
    ctx->pc = 0x16A784u;
    SET_GPR_U32(ctx, 31, 0x16A78Cu);
    ctx->pc = 0x16B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B718u, 0x16A784u, 0x16A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A78Cu;
label_16a78c:
    // 0x16a78c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x16a78cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x16a790: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16a790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16a794:
    // 0x16a794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a798: 0x3e00008  jr          $ra
    ctx->pc = 0x16A798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A798u;
        // 0x16a79c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A7A0u;
}
