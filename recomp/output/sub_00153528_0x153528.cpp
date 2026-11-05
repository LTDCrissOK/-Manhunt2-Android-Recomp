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

// Function: sub_00153528
// Address: 0x153528 - 0x153580
void sub_00153528_0x153528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153528_0x153528");
#endif

    switch (ctx->pc) {
        case 0x15354cu: goto label_15354c;
        default: break;
    }

    ctx->pc = 0x153528u;

    // 0x153528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15352c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x153530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x153534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153538: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x15353c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15353Cu;
    {
        const bool branch_taken_0x15353c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15353c) {
            ctx->pc = 0x153540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15353Cu;
            // 0x153540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153570u;
            goto label_153570;
        }
    }
    ctx->pc = 0x153544u;
    // 0x153544: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x153544u;
    SET_GPR_U32(ctx, 31, 0x15354Cu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x153544u, 0x15354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15354Cu;
label_15354c:
    // 0x15354c: 0xae000674  sw          $zero, 0x674($s0)
    ctx->pc = 0x15354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 0));
    // 0x153550: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x153550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x153554: 0xae000664  sw          $zero, 0x664($s0)
    ctx->pc = 0x153554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 0));
    // 0x153558: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x153558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x15355c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x15355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x153560: 0xae000678  sw          $zero, 0x678($s0)
    ctx->pc = 0x153560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 0));
    // 0x153564: 0xae00067c  sw          $zero, 0x67C($s0)
    ctx->pc = 0x153564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 0));
    // 0x153568: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x153568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x15356c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15356cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_153570:
    // 0x153570: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x153570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x153574: 0x3e00008  jr          $ra
    ctx->pc = 0x153574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153574u;
        // 0x153578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15357Cu;
    // 0x15357c: 0x0  nop
    ctx->pc = 0x15357cu;
    // NOP
    ctx->pc = 0x153580u;
}
