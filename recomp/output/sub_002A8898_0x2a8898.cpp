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

// Function: sub_002A8898
// Address: 0x2a8898 - 0x2a8900
void sub_002A8898_0x2a8898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8898_0x2a8898");
#endif

    switch (ctx->pc) {
        case 0x2a88ecu: goto label_2a88ec;
        default: break;
    }

    ctx->pc = 0x2a8898u;

    // 0x2a8898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a889c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a88a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a88a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a88a4: 0x244237d8  addiu       $v0, $v0, 0x37D8
    ctx->pc = 0x2a88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14296));
    // 0x2a88a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a88a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a88ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a88acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a88b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a88b4: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x2a88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2a88b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a88bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a88bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88c0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2a88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2a88c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a88c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a88c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2a88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2a88cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2a88ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2a88d0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2a88d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2a88d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2a88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2a88d8: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x2a88d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a88dc: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x2a88dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a88e0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2a88e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2a88e4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2A88E4u;
    SET_GPR_U32(ctx, 31, 0x2A88ECu);
    ctx->pc = 0x2A88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A88E4u;
    // 0x2a88e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2A88E4u, 0x2A88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A88ECu;
label_2a88ec:
    // 0x2a88ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a88ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a88f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a88f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a88f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a88f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A88F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88F8u;
        // 0x2a88fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A88F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8900u;
}
