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

// Function: sub_003B0778
// Address: 0x3b0778 - 0x3b0798
void sub_003B0778_0x3b0778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0778_0x3b0778");
#endif

    ctx->pc = 0x3b0778u;

    // 0x3b0778: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b0778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3b077c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b077cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b0780: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3b0780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b0784: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b0784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b0788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b078c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B078Cu;
        // 0x3b0790: 0xa4a3000e  sh          $v1, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0794u;
    // 0x3b0794: 0x0  nop
    ctx->pc = 0x3b0794u;
    // NOP
    ctx->pc = 0x3b0798u;
}
