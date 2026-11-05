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

// Function: sub_001BF068
// Address: 0x1bf068 - 0x1bf0a8
void sub_001BF068_0x1bf068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF068_0x1bf068");
#endif

    switch (ctx->pc) {
        case 0x1bf084u: goto label_1bf084;
        default: break;
    }

    ctx->pc = 0x1bf068u;

    // 0x1bf068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bf074: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bf074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf07c: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1BF07Cu;
    SET_GPR_U32(ctx, 31, 0x1BF084u);
    ctx->pc = 0x1BF080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF07Cu;
    // 0x1bf080: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BF07Cu, 0x1BF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF084u;
label_1bf084:
    // 0x1bf084: 0x261003b0  addiu       $s0, $s0, 0x3B0
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x1bf088: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1bf088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf08c: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x1bf08cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF09Cu;
        // 0x1bf0a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF0A4u;
    // 0x1bf0a4: 0x0  nop
    ctx->pc = 0x1bf0a4u;
    // NOP
    ctx->pc = 0x1bf0a8u;
}
