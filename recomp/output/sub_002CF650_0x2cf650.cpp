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

// Function: sub_002CF650
// Address: 0x2cf650 - 0x2cf6a0
void sub_002CF650_0x2cf650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF650_0x2cf650");
#endif

    switch (ctx->pc) {
        case 0x2cf66cu: goto label_2cf66c;
        case 0x2cf684u: goto label_2cf684;
        default: break;
    }

    ctx->pc = 0x2cf650u;

    // 0x2cf650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf664: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CF664u;
    SET_GPR_U32(ctx, 31, 0x2CF66Cu);
    ctx->pc = 0x2CF668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF664u;
    // 0x2cf668: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CF664u, 0x2CF66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF66Cu;
label_2cf66c:
    // 0x2cf66c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x2cf66cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cf670: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2cf670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf674: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2cf674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cf678: 0x118ac0  sll         $s1, $s1, 11
    ctx->pc = 0x2cf678u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x2cf67c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CF67Cu;
    SET_GPR_U32(ctx, 31, 0x2CF684u);
    ctx->pc = 0x2CF680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF67Cu;
    // 0x2cf680: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CF67Cu, 0x2CF684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF684u;
label_2cf684:
    // 0x2cf684: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cf684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf694: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF694u;
        // 0x2cf698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF69Cu;
    // 0x2cf69c: 0x0  nop
    ctx->pc = 0x2cf69cu;
    // NOP
    ctx->pc = 0x2cf6a0u;
}
