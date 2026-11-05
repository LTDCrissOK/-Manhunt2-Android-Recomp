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

// Function: sub_00278878
// Address: 0x278878 - 0x2788c0
void sub_00278878_0x278878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278878_0x278878");
#endif

    switch (ctx->pc) {
        case 0x2788b0u: goto label_2788b0;
        default: break;
    }

    ctx->pc = 0x278878u;

    // 0x278878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27887c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x27887cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278884: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x278884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278888: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x278888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27888c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27888cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x278890: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x278890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x278894: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
    // 0x278898: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x278898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x27889c: 0x25090004  addiu       $t1, $t0, 0x4
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2788a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2788a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2788a4: 0x254b0004  addiu       $t3, $t2, 0x4
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2788a8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2788A8u;
    SET_GPR_U32(ctx, 31, 0x2788B0u);
    ctx->pc = 0x2788ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788A8u;
    // 0x2788ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2788A8u, 0x2788B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788B0u;
label_2788b0:
    // 0x2788b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2788b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2788b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2788B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2788B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B4u;
        // 0x2788b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2788B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2788BCu;
    // 0x2788bc: 0x0  nop
    ctx->pc = 0x2788bcu;
    // NOP
    ctx->pc = 0x2788c0u;
}
