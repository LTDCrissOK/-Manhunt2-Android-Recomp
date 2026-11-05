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

// Function: sub_00335880
// Address: 0x335880 - 0x3358c0
void sub_00335880_0x335880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335880_0x335880");
#endif

    switch (ctx->pc) {
        case 0x3358b0u: goto label_3358b0;
        default: break;
    }

    ctx->pc = 0x335880u;

    // 0x335880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335888: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x335888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33588c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x33588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x335890: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x335890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x335894: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x335894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x335898: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x335898u;
    {
        const bool branch_taken_0x335898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335898) {
            ctx->pc = 0x33589Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335898u;
            // 0x33589c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3358A8u;
            goto label_3358a8;
        }
    }
    ctx->pc = 0x3358A0u;
    // 0x3358a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3358A0u;
    {
        const bool branch_taken_0x3358a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358A0u;
        // 0x3358a4: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3358a0) {
            ctx->pc = 0x3358B0u;
            goto label_3358b0;
        }
    }
    ctx->pc = 0x3358A8u;
label_3358a8:
    // 0x3358a8: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3358A8u;
    SET_GPR_U32(ctx, 31, 0x3358B0u);
    ctx->pc = 0x3358ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358A8u;
    // 0x3358ac: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3358A8u, 0x3358B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358B0u;
label_3358b0:
    // 0x3358b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3358b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3358b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3358B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3358B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358B4u;
        // 0x3358b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3358B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3358BCu;
    // 0x3358bc: 0x0  nop
    ctx->pc = 0x3358bcu;
    // NOP
    ctx->pc = 0x3358c0u;
}
