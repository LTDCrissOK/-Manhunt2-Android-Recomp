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

// Function: sub_0016AB30
// Address: 0x16ab30 - 0x16ab80
void sub_0016AB30_0x16ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AB30_0x16ab30");
#endif

    ctx->pc = 0x16ab30u;

    // 0x16ab30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16ab34: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16ab38: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ab3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x16ab40: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x16ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x16ab44: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x16ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x16ab48: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x16ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x16ab4c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x16ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x16ab50: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x16ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x16ab54: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x16ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x16ab58: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x16ab58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ab5c: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x16ab5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ab60: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x16ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x16ab64: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x16ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x16ab68: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x16ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x16ab6c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x16ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x16ab70: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x16ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x16ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB74u;
        // 0x16ab78: 0xa4a00030  sh          $zero, 0x30($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB7Cu;
    // 0x16ab7c: 0x0  nop
    ctx->pc = 0x16ab7cu;
    // NOP
    ctx->pc = 0x16ab80u;
}
