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

// Function: sub_001B1410
// Address: 0x1b1410 - 0x1b1460
void sub_001B1410_0x1b1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1410_0x1b1410");
#endif

    switch (ctx->pc) {
        case 0x1b1440u: goto label_1b1440;
        case 0x1b1448u: goto label_1b1448;
        default: break;
    }

    ctx->pc = 0x1b1410u;

    // 0x1b1410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b141c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b141cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1420: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b1420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1424: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b1424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1b1428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b142c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B142Cu;
    {
        const bool branch_taken_0x1b142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b142c) {
            ctx->pc = 0x1B1440u;
            goto label_1b1440;
        }
    }
    ctx->pc = 0x1B1434u;
    // 0x1b1434: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x1b1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1b1438: 0xc07576c  jal         func_1D5DB0
    ctx->pc = 0x1B1438u;
    SET_GPR_U32(ctx, 31, 0x1B1440u);
    ctx->pc = 0x1B143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1438u;
    // 0x1b143c: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DB0u, 0x1B1438u, 0x1B1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1440u;
label_1b1440:
    // 0x1b1440: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1B1440u;
    SET_GPR_U32(ctx, 31, 0x1B1448u);
    ctx->pc = 0x1B1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1440u;
    // 0x1b1444: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1B1440u, 0x1B1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1448u;
label_1b1448:
    // 0x1b1448: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b1448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b144c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b144cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1450: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1454: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1454u;
        // 0x1b1458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B145Cu;
    // 0x1b145c: 0x0  nop
    ctx->pc = 0x1b145cu;
    // NOP
    ctx->pc = 0x1b1460u;
}
