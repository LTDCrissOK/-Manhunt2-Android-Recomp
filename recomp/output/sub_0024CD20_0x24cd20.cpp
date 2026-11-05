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

// Function: sub_0024CD20
// Address: 0x24cd20 - 0x24cd78
void sub_0024CD20_0x24cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CD20_0x24cd20");
#endif

    switch (ctx->pc) {
        case 0x24cd34u: goto label_24cd34;
        case 0x24cd48u: goto label_24cd48;
        default: break;
    }

    ctx->pc = 0x24cd20u;

    // 0x24cd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cd28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24cd2c: 0xc079686  jal         func_1E5A18
    ctx->pc = 0x24CD2Cu;
    SET_GPR_U32(ctx, 31, 0x24CD34u);
    ctx->pc = 0x24CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD2Cu;
    // 0x24cd30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A18u, 0x24CD2Cu, 0x24CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD34u;
label_24cd34:
    // 0x24cd34: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x24cd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24cd38: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24cd3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24cd40: 0xc079830  jal         func_1E60C0
    ctx->pc = 0x24CD40u;
    SET_GPR_U32(ctx, 31, 0x24CD48u);
    ctx->pc = 0x24CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD40u;
    // 0x24cd44: 0x34a57210  ori         $a1, $a1, 0x7210 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E60C0u, 0x24CD40u, 0x24CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD48u;
label_24cd48:
    // 0x24cd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cd4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24cd4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24cd50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24cd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x24CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD54u;
        // 0x24cd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CD5Cu;
    // 0x24cd5c: 0x0  nop
    ctx->pc = 0x24cd5cu;
    // NOP
    // 0x24cd60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x24cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24cd64: 0x0  nop
    ctx->pc = 0x24cd64u;
    // NOP
    // 0x24cd68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24cd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24cd6c: 0x0  nop
    ctx->pc = 0x24cd6cu;
    // NOP
    // 0x24cd70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24cd74: 0x0  nop
    ctx->pc = 0x24cd74u;
    // NOP
    ctx->pc = 0x24cd78u;
}
