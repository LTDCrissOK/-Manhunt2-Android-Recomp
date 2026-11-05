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

// Function: sub_002A7438
// Address: 0x2a7438 - 0x2a74c0
void sub_002A7438_0x2a7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7438_0x2a7438");
#endif

    switch (ctx->pc) {
        case 0x2a7468u: goto label_2a7468;
        default: break;
    }

    ctx->pc = 0x2a7438u;

    // 0x2a7438: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a7438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a743c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2a743cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7440: 0x24423750  addiu       $v0, $v0, 0x3750
    ctx->pc = 0x2a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14160));
    // 0x2a7444: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a7444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a7448: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x2a7448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x2a744c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a744cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7450: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a7450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a7454: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2a7454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2a7458: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a7458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a745c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a7460: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a7460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7464: 0x0  nop
    ctx->pc = 0x2a7464u;
    // NOP
label_2a7468:
    // 0x2a7468: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a7468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a746c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a746cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a7470: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a7470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a7474: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a7474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a7478: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a7478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a747c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2a747cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2a7480: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a7480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2a7484: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x2a7484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7488: 0x1465fff7  bne         $v1, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A7488u;
    {
        const bool branch_taken_0x2a7488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7488u;
        // 0x2a748c: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7488) {
            ctx->pc = 0x2A7468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7468;
        }
    }
    ctx->pc = 0x2A7490u;
    // 0x2a7490: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a7490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2a7494: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a7494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a7498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a749c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a749cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74a0: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x2a74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x2a74a4: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x2a74a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x2a74a8: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x2a74a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x2a74ac: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x2a74acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x2a74b0: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x2a74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x2a74b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A74B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74B4u;
        // 0x2a74b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A74BCu;
    // 0x2a74bc: 0x0  nop
    ctx->pc = 0x2a74bcu;
    // NOP
    ctx->pc = 0x2a74c0u;
}
