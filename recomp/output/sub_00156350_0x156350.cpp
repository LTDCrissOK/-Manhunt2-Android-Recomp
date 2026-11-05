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

// Function: sub_00156350
// Address: 0x156350 - 0x156380
void sub_00156350_0x156350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156350_0x156350");
#endif

    switch (ctx->pc) {
        case 0x156368u: goto label_156368;
        default: break;
    }

    ctx->pc = 0x156350u;

    // 0x156350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15635c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156360: 0xc046086  jal         func_118218
    ctx->pc = 0x156360u;
    SET_GPR_U32(ctx, 31, 0x156368u);
    ctx->pc = 0x156364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156360u;
    // 0x156364: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x156360u, 0x156368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156368u;
label_156368:
    // 0x156368: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x156368u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15636c: 0xfa010530  sqc2        $vf1, 0x530($s0)
    ctx->pc = 0x15636cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156374: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156378: 0x3e00008  jr          $ra
    ctx->pc = 0x156378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156378u;
        // 0x15637c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156380u;
}
