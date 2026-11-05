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

// Function: sub_002944C8
// Address: 0x2944c8 - 0x294500
void sub_002944C8_0x2944c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002944C8_0x2944c8");
#endif

    switch (ctx->pc) {
        case 0x2944f0u: goto label_2944f0;
        default: break;
    }

    ctx->pc = 0x2944c8u;

    // 0x2944c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2944c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2944cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2944ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2944d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2944d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2944d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2944d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2944d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2944dc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2944dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944e0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2944e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2944e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2944e8: 0xc0a529e  jal         func_294A78
    ctx->pc = 0x2944E8u;
    SET_GPR_U32(ctx, 31, 0x2944F0u);
    ctx->pc = 0x2944ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944E8u;
    // 0x2944ec: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A78u, 0x2944E8u, 0x2944F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2944F0u;
label_2944f0:
    // 0x2944f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2944f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2944f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2944F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2944F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944F4u;
        // 0x2944f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2944F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2944FCu;
    // 0x2944fc: 0x0  nop
    ctx->pc = 0x2944fcu;
    // NOP
    ctx->pc = 0x294500u;
}
