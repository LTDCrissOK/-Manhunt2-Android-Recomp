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

// Function: sub_001D24E8
// Address: 0x1d24e8 - 0x1d2558
void sub_001D24E8_0x1d24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D24E8_0x1d24e8");
#endif

    switch (ctx->pc) {
        case 0x1d252cu: goto label_1d252c;
        case 0x1d2540u: goto label_1d2540;
        default: break;
    }

    ctx->pc = 0x1d24e8u;

    // 0x1d24e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d24ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d24ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d24f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d24f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d24f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d24fc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D24FCu;
    {
        const bool branch_taken_0x1d24fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d24fc) {
            ctx->pc = 0x1D2500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D24FCu;
            // 0x1d2500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2548u;
            goto label_1d2548;
        }
    }
    ctx->pc = 0x1D2504u;
    // 0x1d2504: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x1d2504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1d2508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d2508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d250c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d250cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d2510: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D2510u;
    {
        const bool branch_taken_0x1d2510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2510u;
        // 0x1d2514: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2510) {
            ctx->pc = 0x1D2544u;
            goto label_1d2544;
        }
    }
    ctx->pc = 0x1D2518u;
    // 0x1d2518: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d251c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D251Cu;
    {
        const bool branch_taken_0x1d251c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d251c) {
            ctx->pc = 0x1D2520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D251Cu;
            // 0x1d2520: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2530u;
            goto label_1d2530;
        }
    }
    ctx->pc = 0x1D2524u;
    // 0x1d2524: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D2524u;
    SET_GPR_U32(ctx, 31, 0x1D252Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D2524u, 0x1D252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D252Cu;
label_1d252c:
    // 0x1d252c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d2530:
    // 0x1d2530: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2530u;
    {
        const bool branch_taken_0x1d2530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2530u;
        // 0x1d2534: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2530) {
            ctx->pc = 0x1D2544u;
            goto label_1d2544;
        }
    }
    ctx->pc = 0x1D2538u;
    // 0x1d2538: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x1D2538u;
    SET_GPR_U32(ctx, 31, 0x1D2540u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x1D2538u, 0x1D2540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2540u;
label_1d2540:
    // 0x1d2540: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d2540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1d2544:
    // 0x1d2544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2548:
    // 0x1d2548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d2548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d254c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D254Cu;
        // 0x1d2550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2554u;
    // 0x1d2554: 0x0  nop
    ctx->pc = 0x1d2554u;
    // NOP
    ctx->pc = 0x1d2558u;
}
