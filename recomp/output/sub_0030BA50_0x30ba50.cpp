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

// Function: sub_0030BA50
// Address: 0x30ba50 - 0x30ba90
void sub_0030BA50_0x30ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA50_0x30ba50");
#endif

    switch (ctx->pc) {
        case 0x30ba78u: goto label_30ba78;
        default: break;
    }

    ctx->pc = 0x30ba50u;

    // 0x30ba50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30ba54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30ba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30ba5c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30ba60: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x30ba60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x30ba64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30ba68: 0xae00bb98  sw          $zero, -0x4468($s0)
    ctx->pc = 0x30ba68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB98u, _value); } while (0);
    // 0x30ba6c: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x30ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x30ba70: 0xc0c4898  jal         func_312260
    ctx->pc = 0x30BA70u;
    SET_GPR_U32(ctx, 31, 0x30BA78u);
    ctx->pc = 0x30BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA70u;
    // 0x30ba74: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x30BA70u, 0x30BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA78u;
label_30ba78:
    // 0x30ba78: 0x8e02bb98  lw          $v0, -0x4468($s0)
    ctx->pc = 0x30ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949784)));
    // 0x30ba7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30ba7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ba80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30ba80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA84u;
        // 0x30ba88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BA8Cu;
    // 0x30ba8c: 0x0  nop
    ctx->pc = 0x30ba8cu;
    // NOP
    ctx->pc = 0x30ba90u;
}
