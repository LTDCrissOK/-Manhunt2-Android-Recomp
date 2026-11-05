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

// Function: sub_00108900
// Address: 0x108900 - 0x108950
void sub_00108900_0x108900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108900_0x108900");
#endif

    switch (ctx->pc) {
        case 0x108910u: goto label_108910;
        default: break;
    }

    ctx->pc = 0x108900u;

    // 0x108900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108908: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x108908u;
    SET_GPR_U32(ctx, 31, 0x108910u);
    ctx->pc = 0x10890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108908u;
    // 0x10890c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x108908u, 0x108910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108910u;
label_108910:
    // 0x108910: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108914: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x108918: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x108918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10891c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108920: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x108920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108924: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x108924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x108928: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x108928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10892c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108930: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x108930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108934: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x108934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x108938: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x108938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x10893c: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x10893cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x108940: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x108940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x108944: 0x3e00008  jr          $ra
    ctx->pc = 0x108944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108944u;
        // 0x108948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10894Cu;
    // 0x10894c: 0x0  nop
    ctx->pc = 0x10894cu;
    // NOP
    ctx->pc = 0x108950u;
}
