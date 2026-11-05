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

// Function: sub_0028E828
// Address: 0x28e828 - 0x28e860
void sub_0028E828_0x28e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E828_0x28e828");
#endif

    switch (ctx->pc) {
        case 0x28e83cu: goto label_28e83c;
        default: break;
    }

    ctx->pc = 0x28e828u;

    // 0x28e828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e82c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e830: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28e830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28e834: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E834u;
    SET_GPR_U32(ctx, 31, 0x28E83Cu);
    ctx->pc = 0x28E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E834u;
    // 0x28e838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E834u, 0x28E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E83Cu;
label_28e83c:
    // 0x28e83c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E83Cu;
    {
        const bool branch_taken_0x28e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e83c) {
            ctx->pc = 0x28E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E83Cu;
            // 0x28e840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E850u;
            goto label_28e850;
        }
    }
    ctx->pc = 0x28E844u;
    // 0x28e844: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x28e844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e848: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x28e848u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e850:
    // 0x28e850: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28e850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e854: 0x3e00008  jr          $ra
    ctx->pc = 0x28E854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E854u;
        // 0x28e858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E85Cu;
    // 0x28e85c: 0x0  nop
    ctx->pc = 0x28e85cu;
    // NOP
    ctx->pc = 0x28e860u;
}
