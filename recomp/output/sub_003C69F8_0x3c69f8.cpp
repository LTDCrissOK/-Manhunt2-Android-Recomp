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

// Function: sub_003C69F8
// Address: 0x3c69f8 - 0x3c6a60
void sub_003C69F8_0x3c69f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C69F8_0x3c69f8");
#endif

    ctx->pc = 0x3c69f8u;

    // 0x3c69f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3c69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3c69fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3c69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3c6a00: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c6a00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x3c6a04: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x3c6a04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x3c6a08: 0x24427058  addiu       $v0, $v0, 0x7058
    ctx->pc = 0x3c6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28760));
    // 0x3c6a0c: 0x246370c0  addiu       $v1, $v1, 0x70C0
    ctx->pc = 0x3c6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28864));
    // 0x3c6a10: 0x25087140  addiu       $t0, $t0, 0x7140
    ctx->pc = 0x3c6a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28992));
    // 0x3c6a14: 0x252971a8  addiu       $t1, $t1, 0x71A8
    ctx->pc = 0x3c6a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29096));
    // 0x3c6a18: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x3c6a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x3c6a1c: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x3c6a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c6a20: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x3c6a20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x3c6a24: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3c6a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x3c6a28: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3c6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3c6a2c: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x3c6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x3c6a30: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x3c6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x3c6a34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3c6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3c6a38: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3c6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3c6a3c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3c6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3c6a40: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3c6a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3c6a44: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3c6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3c6a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A48u;
        // 0x3c6a4c: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6A50u;
    // 0x3c6a50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3c6a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c6a54: 0x0  nop
    ctx->pc = 0x3c6a54u;
    // NOP
    // 0x3c6a58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3c6a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c6a5c: 0x0  nop
    ctx->pc = 0x3c6a5cu;
    // NOP
    ctx->pc = 0x3c6a60u;
}
