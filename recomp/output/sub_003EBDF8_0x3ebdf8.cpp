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

// Function: sub_003EBDF8
// Address: 0x3ebdf8 - 0x3ebe20
void sub_003EBDF8_0x3ebdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBDF8_0x3ebdf8");
#endif

    switch (ctx->pc) {
        case 0x3ebe14u: goto label_3ebe14;
        default: break;
    }

    ctx->pc = 0x3ebdf8u;

    // 0x3ebdf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ebdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ebdfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ebdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebe00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ebe04: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ebe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ebe08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ebe08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ebe0c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EBE0Cu;
    SET_GPR_U32(ctx, 31, 0x3EBE14u);
    ctx->pc = 0x3EBE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBE0Cu;
    // 0x3ebe10: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EBE0Cu, 0x3EBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBE14u;
label_3ebe14:
    // 0x3ebe14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebe18: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBE18u;
        // 0x3ebe1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBE20u;
}
