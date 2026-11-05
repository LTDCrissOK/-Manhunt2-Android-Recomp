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

// Function: sub_0035CE50
// Address: 0x35ce50 - 0x35ce98
void sub_0035CE50_0x35ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CE50_0x35ce50");
#endif

    switch (ctx->pc) {
        case 0x35ce80u: goto label_35ce80;
        default: break;
    }

    ctx->pc = 0x35ce50u;

    // 0x35ce50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ce54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35ce58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ce5c: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x35ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
    // 0x35ce60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ce60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ce64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ce64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35ce6c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x35ce6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ce70: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x35ce70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ce74: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x35ce74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35ce78: 0xc0d743c  jal         func_35D0F0
    ctx->pc = 0x35CE78u;
    SET_GPR_U32(ctx, 31, 0x35CE80u);
    ctx->pc = 0x35CE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE78u;
    // 0x35ce7c: 0x84a50004  lh          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0F0u, 0x35CE78u, 0x35CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE80u;
label_35ce80:
    // 0x35ce80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ce80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35ce84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ce88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ce88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ce8c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE8Cu;
        // 0x35ce90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE94u;
    // 0x35ce94: 0x0  nop
    ctx->pc = 0x35ce94u;
    // NOP
    ctx->pc = 0x35ce98u;
}
