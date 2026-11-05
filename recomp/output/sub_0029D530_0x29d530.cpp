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

// Function: sub_0029D530
// Address: 0x29d530 - 0x29d598
void sub_0029D530_0x29d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D530_0x29d530");
#endif

    switch (ctx->pc) {
        case 0x29d558u: goto label_29d558;
        case 0x29d574u: goto label_29d574;
        default: break;
    }

    ctx->pc = 0x29d530u;

    // 0x29d530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29d53c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x29d53cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x29d540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29d540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29d544: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x29d544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d548: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29d54c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d550: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29d554: 0x0  nop
    ctx->pc = 0x29d554u;
    // NOP
label_29d558:
    // 0x29d558: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29d558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d55c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29d560: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x29d564: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D564u;
    {
        const bool branch_taken_0x29d564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D564u;
        // 0x29d568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d564) {
            ctx->pc = 0x29D574u;
            goto label_29d574;
        }
    }
    ctx->pc = 0x29D56Cu;
    // 0x29d56c: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x29D56Cu;
    SET_GPR_U32(ctx, 31, 0x29D574u);
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x29D56Cu, 0x29D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D574u;
label_29d574:
    // 0x29d574: 0x623fff8  bgezl       $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29D574u;
    {
        const bool branch_taken_0x29d574 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x29d574) {
            ctx->pc = 0x29D578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D574u;
            // 0x29d578: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d558;
        }
    }
    ctx->pc = 0x29D57Cu;
    // 0x29d57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29d580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29d584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d588: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29d588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D58Cu;
        // 0x29d590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D594u;
    // 0x29d594: 0x0  nop
    ctx->pc = 0x29d594u;
    // NOP
    ctx->pc = 0x29d598u;
}
