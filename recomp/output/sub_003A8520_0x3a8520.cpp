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

// Function: sub_003A8520
// Address: 0x3a8520 - 0x3a8590
void sub_003A8520_0x3a8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8520_0x3a8520");
#endif

    switch (ctx->pc) {
        case 0x3a854cu: goto label_3a854c;
        case 0x3a8554u: goto label_3a8554;
        case 0x3a855cu: goto label_3a855c;
        case 0x3a8568u: goto label_3a8568;
        default: break;
    }

    ctx->pc = 0x3a8520u;

    // 0x3a8520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a8524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a8524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a8528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a8528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a852c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a8530: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3a8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a8534: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x3a8534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a8538: 0x8e3000e8  lw          $s0, 0xE8($s1)
    ctx->pc = 0x3a8538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x3a853c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A853Cu;
    {
        const bool branch_taken_0x3a853c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a853c) {
            ctx->pc = 0x3A8540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A853Cu;
            // 0x3a8540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8580u;
            goto label_3a8580;
        }
    }
    ctx->pc = 0x3A8544u;
    // 0x3a8544: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x3A8544u;
    SET_GPR_U32(ctx, 31, 0x3A854Cu);
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x3A8544u, 0x3A854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A854Cu;
label_3a854c:
    // 0x3a854c: 0xc0e5de6  jal         func_397798
    ctx->pc = 0x3A854Cu;
    SET_GPR_U32(ctx, 31, 0x3A8554u);
    ctx->pc = 0x397798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397798u, 0x3A854Cu, 0x3A8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8554u;
label_3a8554:
    // 0x3a8554: 0xc0ece68  jal         func_3B39A0
    ctx->pc = 0x3A8554u;
    SET_GPR_U32(ctx, 31, 0x3A855Cu);
    ctx->pc = 0x3A8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8554u;
    // 0x3a8558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B39A0u, 0x3A8554u, 0x3A855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A855Cu;
label_3a855c:
    // 0x3a855c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x3a855cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x3a8560: 0xc0ece04  jal         func_3B3810
    ctx->pc = 0x3A8560u;
    SET_GPR_U32(ctx, 31, 0x3A8568u);
    ctx->pc = 0x3A8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8560u;
    // 0x3a8564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3810u, 0x3A8560u, 0x3A8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8568u;
label_3a8568:
    // 0x3a8568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a856c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a856cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a8570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a8570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8574: 0x80e5dec  j           func_3977B0
    ctx->pc = 0x3A8574u;
    ctx->pc = 0x3A8578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8574u;
    // 0x3a8578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977B0u;
    sub_003977B0_0x3977b0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A857Cu;
    // 0x3a857c: 0x0  nop
    ctx->pc = 0x3a857cu;
    // NOP
label_3a8580:
    // 0x3a8580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a8580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a8584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a8584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8588: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8588u;
        // 0x3a858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8590u;
}
