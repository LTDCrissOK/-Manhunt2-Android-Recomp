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

// Function: sub_001343A8
// Address: 0x1343a8 - 0x1343f0
void sub_001343A8_0x1343a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001343A8_0x1343a8");
#endif

    switch (ctx->pc) {
        case 0x1343dcu: goto label_1343dc;
        default: break;
    }

    ctx->pc = 0x1343a8u;

    // 0x1343a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1343a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1343ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1343acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1343b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1343b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1343b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1343b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343b8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1343b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1343bc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1343bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1343c0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1343c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1343c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1343c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1343c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1343c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1343cc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1343ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1343d0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1343d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1343d4: 0xc04d4da  jal         func_135368
    ctx->pc = 0x1343D4u;
    SET_GPR_U32(ctx, 31, 0x1343DCu);
    ctx->pc = 0x1343D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343D4u;
    // 0x1343d8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135368u, 0x1343D4u, 0x1343DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343DCu;
label_1343dc:
    // 0x1343dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1343dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1343e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1343e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1343e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1343e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1343E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1343ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343E8u;
        // 0x1343ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1343E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1343F0u;
}
