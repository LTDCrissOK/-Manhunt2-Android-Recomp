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

// Function: sub_002DE2F8
// Address: 0x2de2f8 - 0x2de340
void sub_002DE2F8_0x2de2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2F8_0x2de2f8");
#endif

    switch (ctx->pc) {
        case 0x2de30cu: goto label_2de30c;
        default: break;
    }

    ctx->pc = 0x2de2f8u;

    // 0x2de2f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de2fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2de2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2de300: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2de300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2de304: 0xc0b72c2  jal         func_2DCB08
    ctx->pc = 0x2DE304u;
    SET_GPR_U32(ctx, 31, 0x2DE30Cu);
    ctx->pc = 0x2DE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE304u;
    // 0x2de308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB08u, 0x2DE304u, 0x2DE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE30Cu;
label_2de30c:
    // 0x2de30c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2de30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2de310: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2de310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2de314: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2de314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2de318: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2de318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2de31c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2de31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2de320: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2de320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de324: 0xfa0100a0  sqc2        $vf1, 0xA0($s0)
    ctx->pc = 0x2de324u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de328: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de32c: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x2de32cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de330: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2de330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de334: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2de334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de338: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE338u;
        // 0x2de33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE340u;
}
