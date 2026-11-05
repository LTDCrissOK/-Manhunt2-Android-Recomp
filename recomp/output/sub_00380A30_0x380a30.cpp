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

// Function: sub_00380A30
// Address: 0x380a30 - 0x380a60
void sub_00380A30_0x380a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380A30_0x380a30");
#endif

    ctx->pc = 0x380a30u;

    // 0x380a30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x380a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380a34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x380a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x380a38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380a3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380a40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x380a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x380a44: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x380a44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x380a48: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x380a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x380a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x380A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A4Cu;
        // 0x380a50: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A54u;
    // 0x380a54: 0x0  nop
    ctx->pc = 0x380a54u;
    // NOP
    // 0x380a58: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x380a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x380a5c: 0x0  nop
    ctx->pc = 0x380a5cu;
    // NOP
    ctx->pc = 0x380a60u;
}
