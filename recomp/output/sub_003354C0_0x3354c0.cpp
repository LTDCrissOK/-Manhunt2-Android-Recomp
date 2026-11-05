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

// Function: sub_003354C0
// Address: 0x3354c0 - 0x335510
void sub_003354C0_0x3354c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003354C0_0x3354c0");
#endif

    switch (ctx->pc) {
        case 0x3354e0u: goto label_3354e0;
        case 0x3354f4u: goto label_3354f4;
        default: break;
    }

    ctx->pc = 0x3354c0u;

    // 0x3354c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3354c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3354c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3354c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3354c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3354c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3354ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3354d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3354d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3354d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3354d8: 0xc0cd232  jal         func_3348C8
    ctx->pc = 0x3354D8u;
    SET_GPR_U32(ctx, 31, 0x3354E0u);
    ctx->pc = 0x3354DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354D8u;
    // 0x3354dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3348C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3348C8u, 0x3354D8u, 0x3354E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354E0u;
label_3354e0:
    // 0x3354e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3354E0u;
    {
        const bool branch_taken_0x3354e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3354E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354E0u;
        // 0x3354e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354e0) {
            ctx->pc = 0x3354F8u;
            goto label_3354f8;
        }
    }
    ctx->pc = 0x3354E8u;
    // 0x3354e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3354e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354ec: 0xc0cd574  jal         func_3355D0
    ctx->pc = 0x3354ECu;
    SET_GPR_U32(ctx, 31, 0x3354F4u);
    ctx->pc = 0x3354F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354ECu;
    // 0x3354f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355D0u, 0x3354ECu, 0x3354F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354F4u;
label_3354f4:
    // 0x3354f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3354f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3354f8:
    // 0x3354f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3354f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3354fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335508: 0x3e00008  jr          $ra
    ctx->pc = 0x335508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335508u;
        // 0x33550c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335510u;
}
