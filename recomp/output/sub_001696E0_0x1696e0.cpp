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

// Function: sub_001696E0
// Address: 0x1696e0 - 0x169738
void sub_001696E0_0x1696e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001696E0_0x1696e0");
#endif

    switch (ctx->pc) {
        case 0x169704u: goto label_169704;
        case 0x169724u: goto label_169724;
        default: break;
    }

    ctx->pc = 0x1696e0u;

    // 0x1696e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1696e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1696e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1696e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1696e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1696ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1696f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1696f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1696f4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1696f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1696f8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1696f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1696fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1696FCu;
    SET_GPR_U32(ctx, 31, 0x169704u);
    ctx->pc = 0x169700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696FCu;
    // 0x169700: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1696FCu, 0x169704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169704u;
label_169704:
    // 0x169704: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x169704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x169708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16970c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x16970cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x169710: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x169710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x169714: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x169714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x169718: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x169718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x16971c: 0xc05a64c  jal         func_169930
    ctx->pc = 0x16971Cu;
    SET_GPR_U32(ctx, 31, 0x169724u);
    ctx->pc = 0x169720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16971Cu;
    // 0x169720: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169930u, 0x16971Cu, 0x169724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169724u;
label_169724:
    // 0x169724: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169728: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16972c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16972cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169730: 0x3e00008  jr          $ra
    ctx->pc = 0x169730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169730u;
        // 0x169734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169738u;
}
