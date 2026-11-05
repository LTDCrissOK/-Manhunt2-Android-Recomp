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

// Function: sub_0012FF50
// Address: 0x12ff50 - 0x12ff98
void sub_0012FF50_0x12ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF50_0x12ff50");
#endif

    switch (ctx->pc) {
        case 0x12ff80u: goto label_12ff80;
        default: break;
    }

    ctx->pc = 0x12ff50u;

    // 0x12ff50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ff54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ff58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12ff5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ff5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12ff64: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x12ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12ff68: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12ff6c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12ff70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12ff74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12ff78: 0xc04c4ac  jal         func_1312B0
    ctx->pc = 0x12FF78u;
    SET_GPR_U32(ctx, 31, 0x12FF80u);
    ctx->pc = 0x12FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF78u;
    // 0x12ff7c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312B0u, 0x12FF78u, 0x12FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF80u;
label_12ff80:
    // 0x12ff80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ff80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ff88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ff88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ff8c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF8Cu;
        // 0x12ff90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FF94u;
    // 0x12ff94: 0x0  nop
    ctx->pc = 0x12ff94u;
    // NOP
    ctx->pc = 0x12ff98u;
}
