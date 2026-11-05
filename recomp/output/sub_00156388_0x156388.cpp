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

// Function: sub_00156388
// Address: 0x156388 - 0x1563c0
void sub_00156388_0x156388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156388_0x156388");
#endif

    switch (ctx->pc) {
        case 0x1563a0u: goto label_1563a0;
        default: break;
    }

    ctx->pc = 0x156388u;

    // 0x156388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15638c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156394: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156398: 0xc046086  jal         func_118218
    ctx->pc = 0x156398u;
    SET_GPR_U32(ctx, 31, 0x1563A0u);
    ctx->pc = 0x15639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156398u;
    // 0x15639c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x156398u, 0x1563A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563A0u;
label_1563a0:
    // 0x1563a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1563A0u;
    {
        const bool branch_taken_0x1563a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1563a0) {
            ctx->pc = 0x1563A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1563A0u;
            // 0x1563a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1563B4u;
            goto label_1563b4;
        }
    }
    ctx->pc = 0x1563A8u;
    // 0x1563a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1563a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1563ac: 0xfa010530  sqc2        $vf1, 0x530($s0)
    ctx->pc = 0x1563acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1563b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1563b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1563b4:
    // 0x1563b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1563b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1563b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1563B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1563BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563B8u;
        // 0x1563bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1563C0u;
}
