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

// Function: sub_002CEB40
// Address: 0x2ceb40 - 0x2ceb88
void sub_002CEB40_0x2ceb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEB40_0x2ceb40");
#endif

    ctx->pc = 0x2ceb40u;

    // 0x2ceb40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ceb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb44: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2ceb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2ceb48: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2ceb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ceb4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ceb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ceb50: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ceb54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ceb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ceb58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ceb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ceb5c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2ceb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ceb60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ceb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ceb64: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEB64u;
    {
        const bool branch_taken_0x2ceb64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ceb64) {
            ctx->pc = 0x2CEB7Cu;
            goto label_2ceb7c;
        }
    }
    ctx->pc = 0x2CEB6Cu;
    // 0x2ceb6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ceb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ceb70: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2ceb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ceb74: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB74u;
        // 0x2ceb78: 0x212c2  srl         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEB7Cu;
label_2ceb7c:
    // 0x2ceb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB7Cu;
        // 0x2ceb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEB84u;
    // 0x2ceb84: 0x0  nop
    ctx->pc = 0x2ceb84u;
    // NOP
    ctx->pc = 0x2ceb88u;
}
