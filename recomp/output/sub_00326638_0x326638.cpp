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

// Function: sub_00326638
// Address: 0x326638 - 0x326690
void sub_00326638_0x326638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326638_0x326638");
#endif

    switch (ctx->pc) {
        case 0x326674u: goto label_326674;
        default: break;
    }

    ctx->pc = 0x326638u;

    // 0x326638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32663c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x32663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x326640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326644: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x326644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x326648: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x326648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32664c: 0xc4400430  lwc1        $f0, 0x430($v0)
    ctx->pc = 0x32664cu;
    { uint32_t bits = FAST_READ32(0x595CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326650: 0x8ca3be28  lw          $v1, -0x41D8($a1)
    ctx->pc = 0x326650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE28u));
    // 0x326654: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x326654u;
    {
        const bool branch_taken_0x326654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326654u;
        // 0x326658: 0xe4400074  swc1        $f0, 0x74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326654) {
            ctx->pc = 0x32667Cu;
            goto label_32667c;
        }
    }
    ctx->pc = 0x32665Cu;
    // 0x32665c: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x32665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x326660: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x326660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326664: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x326664u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x326668: 0x8ca3be28  lw          $v1, -0x41D8($a1)
    ctx->pc = 0x326668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950440)));
    // 0x32666c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x32666Cu;
    SET_GPR_U32(ctx, 31, 0x326674u);
    ctx->pc = 0x326670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32666Cu;
    // 0x326670: 0x8c640100  lw          $a0, 0x100($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x32666Cu, 0x326674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326674u;
label_326674:
    // 0x326674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x326674u;
    {
        const bool branch_taken_0x326674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326674u;
        // 0x326678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326674) {
            ctx->pc = 0x326680u;
            goto label_326680;
        }
    }
    ctx->pc = 0x32667Cu;
label_32667c:
    // 0x32667c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32667cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326680:
    // 0x326680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326684: 0x3e00008  jr          $ra
    ctx->pc = 0x326684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326684u;
        // 0x326688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32668Cu;
    // 0x32668c: 0x0  nop
    ctx->pc = 0x32668cu;
    // NOP
    ctx->pc = 0x326690u;
}
