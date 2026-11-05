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

// Function: sub_003AA2F8
// Address: 0x3aa2f8 - 0x3aa350
void sub_003AA2F8_0x3aa2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA2F8_0x3aa2f8");
#endif

    switch (ctx->pc) {
        case 0x3aa33cu: goto label_3aa33c;
        default: break;
    }

    ctx->pc = 0x3aa2f8u;

    // 0x3aa2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa2fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA2FCu;
    {
        const bool branch_taken_0x3aa2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2FCu;
        // 0x3aa300: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa2fc) {
            ctx->pc = 0x3AA318u;
            goto label_3aa318;
        }
    }
    ctx->pc = 0x3AA304u;
    // 0x3aa304: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa308: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa30c: 0x2484ede0  addiu       $a0, $a0, -0x1220
    ctx->pc = 0x3aa30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
    // 0x3aa310: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA310u;
    {
        const bool branch_taken_0x3aa310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA310u;
        // 0x3aa314: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa310) {
            ctx->pc = 0x3AA334u;
            goto label_3aa334;
        }
    }
    ctx->pc = 0x3AA318u;
label_3aa318:
    // 0x3aa318: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3aa318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aa31c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA31Cu;
    {
        const bool branch_taken_0x3aa31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa31c) {
            ctx->pc = 0x3AA320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA31Cu;
            // 0x3aa320: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA340u;
            goto label_3aa340;
        }
    }
    ctx->pc = 0x3AA324u;
    // 0x3aa324: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa328: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa32c: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x3aa32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x3aa330: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
label_3aa334:
    // 0x3aa334: 0xc0ea7ec  jal         func_3A9FB0
    ctx->pc = 0x3AA334u;
    SET_GPR_U32(ctx, 31, 0x3AA33Cu);
    ctx->pc = 0x3A9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9FB0u, 0x3AA334u, 0x3AA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA33Cu;
label_3aa33c:
    // 0x3aa33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aa33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa340:
    // 0x3aa340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa344: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA344u;
        // 0x3aa348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA34Cu;
    // 0x3aa34c: 0x0  nop
    ctx->pc = 0x3aa34cu;
    // NOP
    ctx->pc = 0x3aa350u;
}
