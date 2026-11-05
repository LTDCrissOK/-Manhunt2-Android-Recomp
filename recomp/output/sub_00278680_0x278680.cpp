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

// Function: sub_00278680
// Address: 0x278680 - 0x2786c0
void sub_00278680_0x278680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278680_0x278680");
#endif

    switch (ctx->pc) {
        case 0x2786b4u: goto label_2786b4;
        default: break;
    }

    ctx->pc = 0x278680u;

    // 0x278680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278684: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x278684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27868c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x27868cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278690: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x278690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278694: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x278694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x278698: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x278698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x27869c: 0x24a58390  addiu       $a1, $a1, -0x7C70
    ctx->pc = 0x27869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935440));
    // 0x2786a0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2786a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786a4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2786a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2786a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2786ac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2786ACu;
    SET_GPR_U32(ctx, 31, 0x2786B4u);
    ctx->pc = 0x2786B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786ACu;
    // 0x2786b0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2786ACu, 0x2786B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786B4u;
label_2786b4:
    // 0x2786b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2786b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2786b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2786B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2786BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786B8u;
        // 0x2786bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2786B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2786C0u;
}
