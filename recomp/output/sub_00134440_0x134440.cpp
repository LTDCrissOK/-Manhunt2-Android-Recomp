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

// Function: sub_00134440
// Address: 0x134440 - 0x1344a0
void sub_00134440_0x134440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134440_0x134440");
#endif

    switch (ctx->pc) {
        case 0x13446cu: goto label_13446c;
        case 0x134474u: goto label_134474;
        case 0x134480u: goto label_134480;
        default: break;
    }

    ctx->pc = 0x134440u;

    // 0x134440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134444: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x134444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x134448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13444c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134454: 0x8c430774  lw          $v1, 0x774($v0)
    ctx->pc = 0x134454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0774u));
    // 0x134458: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13445c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13445Cu;
    {
        const bool branch_taken_0x13445c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13445Cu;
        // 0x134460: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13445c) {
            ctx->pc = 0x13446Cu;
            goto label_13446c;
        }
    }
    ctx->pc = 0x134464u;
    // 0x134464: 0xc04d2e2  jal         func_134B88
    ctx->pc = 0x134464u;
    SET_GPR_U32(ctx, 31, 0x13446Cu);
    ctx->pc = 0x134B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B88u, 0x134464u, 0x13446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13446Cu;
label_13446c:
    // 0x13446c: 0xc04d4da  jal         func_135368
    ctx->pc = 0x13446Cu;
    SET_GPR_U32(ctx, 31, 0x134474u);
    ctx->pc = 0x134470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13446Cu;
    // 0x134470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135368u, 0x13446Cu, 0x134474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134474u;
label_134474:
    // 0x134474: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x134474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x134478: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x134478u;
    SET_GPR_U32(ctx, 31, 0x134480u);
    ctx->pc = 0x13447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134478u;
    // 0x13447c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B30u, 0x134478u, 0x134480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134480u;
label_134480:
    // 0x134480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134488: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13448c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13448cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134494: 0x3e00008  jr          $ra
    ctx->pc = 0x134494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134494u;
        // 0x134498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13449Cu;
    // 0x13449c: 0x0  nop
    ctx->pc = 0x13449cu;
    // NOP
    ctx->pc = 0x1344a0u;
}
