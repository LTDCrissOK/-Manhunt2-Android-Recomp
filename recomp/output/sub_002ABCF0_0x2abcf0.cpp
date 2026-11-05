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

// Function: sub_002ABCF0
// Address: 0x2abcf0 - 0x2abd30
void sub_002ABCF0_0x2abcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABCF0_0x2abcf0");
#endif

    switch (ctx->pc) {
        case 0x2abd0cu: goto label_2abd0c;
        case 0x2abd14u: goto label_2abd14;
        default: break;
    }

    ctx->pc = 0x2abcf0u;

    // 0x2abcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2abcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2abcf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abcf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2abcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2abcfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2abd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd04: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2ABD04u;
    SET_GPR_U32(ctx, 31, 0x2ABD0Cu);
    ctx->pc = 0x2ABD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD04u;
    // 0x2abd08: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2ABD04u, 0x2ABD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD0Cu;
label_2abd0c:
    // 0x2abd0c: 0xc0aaef0  jal         func_2ABBC0
    ctx->pc = 0x2ABD0Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD14u);
    ctx->pc = 0x2ABD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD0Cu;
    // 0x2abd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC0u, 0x2ABD0Cu, 0x2ABD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD14u;
label_2abd14:
    // 0x2abd14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abd14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abd18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2abd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD1Cu;
        // 0x2abd20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD24u;
    // 0x2abd24: 0x0  nop
    ctx->pc = 0x2abd24u;
    // NOP
    // 0x2abd28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2abd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2abd2c: 0x0  nop
    ctx->pc = 0x2abd2cu;
    // NOP
    ctx->pc = 0x2abd30u;
}
