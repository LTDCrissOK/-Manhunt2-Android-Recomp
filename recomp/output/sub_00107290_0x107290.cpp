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

// Function: sub_00107290
// Address: 0x107290 - 0x1072c0
void sub_00107290_0x107290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107290_0x107290");
#endif

    switch (ctx->pc) {
        case 0x1072b4u: goto label_1072b4;
        default: break;
    }

    ctx->pc = 0x107290u;

    // 0x107290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107294: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x107294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x107298: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107298u;
    {
        const bool branch_taken_0x107298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107298u;
        // 0x10729c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107298) {
            ctx->pc = 0x1072B4u;
            goto label_1072b4;
        }
    }
    ctx->pc = 0x1072A0u;
    // 0x1072a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1072A0u;
    {
        const bool branch_taken_0x1072a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072A0u;
        // 0x1072a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072a0) {
            ctx->pc = 0x1072B8u;
            goto label_1072b8;
        }
    }
    ctx->pc = 0x1072A8u;
    // 0x1072a8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1072a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1072ac: 0xc041c8c  jal         func_107230
    ctx->pc = 0x1072ACu;
    SET_GPR_U32(ctx, 31, 0x1072B4u);
    ctx->pc = 0x1072B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072ACu;
    // 0x1072b0: 0x24848730  addiu       $a0, $a0, -0x78D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107230u, 0x1072ACu, 0x1072B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072B4u;
label_1072b4:
    // 0x1072b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1072b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1072b8:
    // 0x1072b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1072B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1072BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B8u;
        // 0x1072bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1072C0u;
}
