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

// Function: sub_0012CC58
// Address: 0x12cc58 - 0x12cc90
void sub_0012CC58_0x12cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CC58_0x12cc58");
#endif

    switch (ctx->pc) {
        case 0x12cc70u: goto label_12cc70;
        default: break;
    }

    ctx->pc = 0x12cc58u;

    // 0x12cc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cc5c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x12cc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12cc60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cc64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12cc68: 0xc04b2e6  jal         func_12CB98
    ctx->pc = 0x12CC68u;
    SET_GPR_U32(ctx, 31, 0x12CC70u);
    ctx->pc = 0x12CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC68u;
    // 0x12cc6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB98u, 0x12CC68u, 0x12CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC70u;
label_12cc70:
    // 0x12cc70: 0x920207fc  lbu         $v0, 0x7FC($s0)
    ctx->pc = 0x12cc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x12cc74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12cc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cc78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12cc7c: 0xa20207fc  sb          $v0, 0x7FC($s0)
    ctx->pc = 0x12cc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2044), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12cc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cc84: 0x3e00008  jr          $ra
    ctx->pc = 0x12CC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC84u;
        // 0x12cc88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CC8Cu;
    // 0x12cc8c: 0x0  nop
    ctx->pc = 0x12cc8cu;
    // NOP
    ctx->pc = 0x12cc90u;
}
