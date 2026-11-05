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

// Function: sub_00134318
// Address: 0x134318 - 0x134360
void sub_00134318_0x134318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134318_0x134318");
#endif

    switch (ctx->pc) {
        case 0x134330u: goto label_134330;
        case 0x134348u: goto label_134348;
        default: break;
    }

    ctx->pc = 0x134318u;

    // 0x134318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13431c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134328: 0xc04d2b6  jal         func_134AD8
    ctx->pc = 0x134328u;
    SET_GPR_U32(ctx, 31, 0x134330u);
    ctx->pc = 0x13432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134328u;
    // 0x13432c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134AD8u, 0x134328u, 0x134330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134330u;
label_134330:
    // 0x134330: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x134330u;
    {
        const bool branch_taken_0x134330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134330) {
            ctx->pc = 0x134334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134330u;
            // 0x134334: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134340u;
            goto label_134340;
        }
    }
    ctx->pc = 0x134338u;
    // 0x134338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134338u;
    {
        const bool branch_taken_0x134338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134338u;
        // 0x13433c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134338) {
            ctx->pc = 0x134350u;
            goto label_134350;
        }
    }
    ctx->pc = 0x134340u;
label_134340:
    // 0x134340: 0xc04c710  jal         func_131C40
    ctx->pc = 0x134340u;
    SET_GPR_U32(ctx, 31, 0x134348u);
    ctx->pc = 0x134344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134340u;
    // 0x134344: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C40u, 0x134340u, 0x134348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134348u;
label_134348:
    // 0x134348: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x134348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13434c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134350:
    // 0x134350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134358: 0x3e00008  jr          $ra
    ctx->pc = 0x134358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134358u;
        // 0x13435c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134360u;
}
