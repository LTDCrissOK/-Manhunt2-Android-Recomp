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

// Function: sub_001FD500
// Address: 0x1fd500 - 0x1fd540
void sub_001FD500_0x1fd500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD500_0x1fd500");
#endif

    switch (ctx->pc) {
        case 0x1fd530u: goto label_1fd530;
        default: break;
    }

    ctx->pc = 0x1fd500u;

    // 0x1fd500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd504: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1fd508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd50c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fd50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fd510: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x1fd510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fd514: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1fd514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1fd518: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fd518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fd51c: 0x8c451330  lw          $a1, 0x1330($v0)
    ctx->pc = 0x1fd51cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4997B0u));
    // 0x1fd520: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD520u;
    {
        const bool branch_taken_0x1fd520 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD520u;
        // 0x1fd524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd520) {
            ctx->pc = 0x1FD534u;
            goto label_1fd534;
        }
    }
    ctx->pc = 0x1FD528u;
    // 0x1fd528: 0xc07db28  jal         func_1F6CA0
    ctx->pc = 0x1FD528u;
    SET_GPR_U32(ctx, 31, 0x1FD530u);
    ctx->pc = 0x1F6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6CA0u, 0x1FD528u, 0x1FD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD530u;
label_1fd530:
    // 0x1fd530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd534:
    // 0x1fd534: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD534u;
        // 0x1fd538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD53Cu;
    // 0x1fd53c: 0x0  nop
    ctx->pc = 0x1fd53cu;
    // NOP
    ctx->pc = 0x1fd540u;
}
