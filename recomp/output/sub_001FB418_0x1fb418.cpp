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

// Function: sub_001FB418
// Address: 0x1fb418 - 0x1fb458
void sub_001FB418_0x1fb418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB418_0x1fb418");
#endif

    ctx->pc = 0x1fb418u;

    // 0x1fb418: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fb41c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1fb41cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1fb420: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1fb420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1fb424: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fb424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fb428: 0x24a5d050  addiu       $a1, $a1, -0x2FB0
    ctx->pc = 0x1fb428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955088));
    // 0x1fb42c: 0x90c29320  lbu         $v0, -0x6CE0($a2)
    ctx->pc = 0x1fb42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9320u));
    // 0x1fb430: 0x90c39320  lbu         $v1, -0x6CE0($a2)
    ctx->pc = 0x1fb430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9320u));
    // 0x1fb434: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1fb434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fb438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fb438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb43c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fb440: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb444: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1fb444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1fb448: 0xa0c39320  sb          $v1, -0x6CE0($a2)
    ctx->pc = 0x1fb448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294939424), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb44c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB44Cu;
        // 0x1fb450: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB454u;
    // 0x1fb454: 0x0  nop
    ctx->pc = 0x1fb454u;
    // NOP
    ctx->pc = 0x1fb458u;
}
