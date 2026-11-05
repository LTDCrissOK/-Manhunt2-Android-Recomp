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

// Function: sub_001F0FC0
// Address: 0x1f0fc0 - 0x1f0ff8
void sub_001F0FC0_0x1f0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0FC0_0x1f0fc0");
#endif

    ctx->pc = 0x1f0fc0u;

    // 0x1f0fc0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1f0fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0fc4: 0x34039590  ori         $v1, $zero, 0x9590
    ctx->pc = 0x1f0fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38288);
    // 0x1f0fc8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f0fcc: 0x90c213cd  lbu         $v0, 0x13CD($a2)
    ctx->pc = 0x1f0fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5069)));
    // 0x1f0fd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f0fd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0fdc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1f0fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f0fe0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f0fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0fe4: 0x90c313cd  lbu         $v1, 0x13CD($a2)
    ctx->pc = 0x1f0fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5069)));
    // 0x1f0fe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f0fec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f0fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f0ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FF0u;
        // 0x1f0ff4: 0xa0c313cd  sb          $v1, 0x13CD($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 5069), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FF8u;
}
