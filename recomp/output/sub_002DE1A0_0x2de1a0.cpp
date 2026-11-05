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

// Function: sub_002DE1A0
// Address: 0x2de1a0 - 0x2de200
void sub_002DE1A0_0x2de1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE1A0_0x2de1a0");
#endif

    switch (ctx->pc) {
        case 0x2de1ecu: goto label_2de1ec;
        default: break;
    }

    ctx->pc = 0x2de1a0u;

    // 0x2de1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de1a8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2de1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2de1ac: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2de1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2de1b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de1b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de1b4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2de1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de1b8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2de1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2de1bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2de1bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de1c0: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x2de1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de1c4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2de1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2de1c8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2de1c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2de1cc: 0xf8c10020  sqc2        $vf1, 0x20($a2)
    ctx->pc = 0x2de1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de1d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2de1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2de1d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de1d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de1d8: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x2de1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de1dc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2de1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2de1e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1e4: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x2DE1E4u;
    SET_GPR_U32(ctx, 31, 0x2DE1ECu);
    ctx->pc = 0x2DE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1E4u;
    // 0x2de1e8: 0x8c840088  lw          $a0, 0x88($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x2DE1E4u, 0x2DE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1ECu;
label_2de1ec:
    // 0x2de1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1F0u;
        // 0x2de1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE1F8u;
    // 0x2de1f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2de1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de1fc: 0x0  nop
    ctx->pc = 0x2de1fcu;
    // NOP
    ctx->pc = 0x2de200u;
}
