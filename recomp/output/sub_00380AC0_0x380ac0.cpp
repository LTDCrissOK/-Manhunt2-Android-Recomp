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

// Function: sub_00380AC0
// Address: 0x380ac0 - 0x380b00
void sub_00380AC0_0x380ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380AC0_0x380ac0");
#endif

    ctx->pc = 0x380ac0u;

    // 0x380ac0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x380ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x380ac4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x380ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x380ac8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380acc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380ad0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x380ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x380ad4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x380ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x380ad8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x380ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x380adc: 0x3e00008  jr          $ra
    ctx->pc = 0x380ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380ADCu;
        // 0x380ae0: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380AE4u;
    // 0x380ae4: 0x0  nop
    ctx->pc = 0x380ae4u;
    // NOP
    // 0x380ae8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x380ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x380aec: 0x0  nop
    ctx->pc = 0x380aecu;
    // NOP
    // 0x380af0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x380af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x380af4: 0x0  nop
    ctx->pc = 0x380af4u;
    // NOP
    // 0x380af8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380afc: 0x0  nop
    ctx->pc = 0x380afcu;
    // NOP
    ctx->pc = 0x380b00u;
}
