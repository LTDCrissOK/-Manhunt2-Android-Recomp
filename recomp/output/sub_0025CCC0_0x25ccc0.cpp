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

// Function: sub_0025CCC0
// Address: 0x25ccc0 - 0x25cd08
void sub_0025CCC0_0x25ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CCC0_0x25ccc0");
#endif

    switch (ctx->pc) {
        case 0x25ccdcu: goto label_25ccdc;
        case 0x25cce8u: goto label_25cce8;
        default: break;
    }

    ctx->pc = 0x25ccc0u;

    // 0x25ccc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ccc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25ccc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ccc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ccd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ccd4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x25CCD4u;
    SET_GPR_U32(ctx, 31, 0x25CCDCu);
    ctx->pc = 0x25CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCD4u;
    // 0x25ccd8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x25CCD4u, 0x25CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCDCu;
label_25ccdc:
    // 0x25ccdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ccdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cce0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25CCE0u;
    SET_GPR_U32(ctx, 31, 0x25CCE8u);
    ctx->pc = 0x25CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCE0u;
    // 0x25cce4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25CCE0u, 0x25CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCE8u;
label_25cce8:
    // 0x25cce8: 0xae300224  sw          $s0, 0x224($s1)
    ctx->pc = 0x25cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 16));
    // 0x25ccec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ccecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ccf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ccf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ccf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25ccf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25ccf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ccf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x25CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCFCu;
        // 0x25cd00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CD04u;
    // 0x25cd04: 0x0  nop
    ctx->pc = 0x25cd04u;
    // NOP
    ctx->pc = 0x25cd08u;
}
