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

// Function: sub_00165F48
// Address: 0x165f48 - 0x165f88
void sub_00165F48_0x165f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F48_0x165f48");
#endif

    switch (ctx->pc) {
        case 0x165f78u: goto label_165f78;
        default: break;
    }

    ctx->pc = 0x165f48u;

    // 0x165f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165f50: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x165f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x165f54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x165F54u;
    {
        const bool branch_taken_0x165f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165f54) {
            ctx->pc = 0x165F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165F54u;
            // 0x165f58: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165F68u;
            goto label_165f68;
        }
    }
    ctx->pc = 0x165F5Cu;
    // 0x165f5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x165f5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165f60: 0xf88102f0  sqc2        $vf1, 0x2F0($a0)
    ctx->pc = 0x165f60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x165f64: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_165f68:
    // 0x165f68: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x165F68u;
    {
        const bool branch_taken_0x165f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F68u;
        // 0x165f6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f68) {
            ctx->pc = 0x165F7Cu;
            goto label_165f7c;
        }
    }
    ctx->pc = 0x165F70u;
    // 0x165f70: 0xc0597e2  jal         func_165F88
    ctx->pc = 0x165F70u;
    SET_GPR_U32(ctx, 31, 0x165F78u);
    ctx->pc = 0x165F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F70u;
    // 0x165f74: 0xac8502e4  sw          $a1, 0x2E4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F88u, 0x165F70u, 0x165F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F78u;
label_165f78:
    // 0x165f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165f7c:
    // 0x165f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x165F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F7Cu;
        // 0x165f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F84u;
    // 0x165f84: 0x0  nop
    ctx->pc = 0x165f84u;
    // NOP
    ctx->pc = 0x165f88u;
}
