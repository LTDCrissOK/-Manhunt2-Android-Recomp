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

// Function: sub_0011AC30
// Address: 0x11ac30 - 0x11ac80
void sub_0011AC30_0x11ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AC30_0x11ac30");
#endif

    ctx->pc = 0x11ac30u;

    // 0x11ac30: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x11ac30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11ac34: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x11ac34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x11ac38: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x11ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x11ac3c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x11ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x11ac40: 0x24a50210  addiu       $a1, $a1, 0x210
    ctx->pc = 0x11ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    // 0x11ac44: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11ac48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11ac4c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11ac50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11ac54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x11ac58: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x11ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x11ac5c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x11ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x11ac60: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x11ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x11ac64: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x11ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x11ac68: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x11ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x11ac6c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x11ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x11ac70: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x11ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x11ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AC7Cu;
    // 0x11ac7c: 0x0  nop
    ctx->pc = 0x11ac7cu;
    // NOP
    ctx->pc = 0x11ac80u;
}
