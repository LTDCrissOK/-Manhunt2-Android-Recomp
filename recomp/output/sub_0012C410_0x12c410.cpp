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

// Function: sub_0012C410
// Address: 0x12c410 - 0x12c490
void sub_0012C410_0x12c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C410_0x12c410");
#endif

    switch (ctx->pc) {
        case 0x12c438u: goto label_12c438;
        case 0x12c450u: goto label_12c450;
        default: break;
    }

    ctx->pc = 0x12c410u;

    // 0x12c410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c418: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c41c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c424: 0x24b10004  addiu       $s1, $a1, 0x4
    ctx->pc = 0x12c424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12c428: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c42c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12c42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c430: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12c430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12c434: 0x0  nop
    ctx->pc = 0x12c434u;
    // NOP
label_12c438:
    // 0x12c438: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12c43c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c440: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C440u;
    {
        const bool branch_taken_0x12c440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C440u;
        // 0x12c444: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c440) {
            ctx->pc = 0x12C460u;
            goto label_12c460;
        }
    }
    ctx->pc = 0x12C448u;
    // 0x12c448: 0xc05f49e  jal         func_17D278
    ctx->pc = 0x12C448u;
    SET_GPR_U32(ctx, 31, 0x12C450u);
    ctx->pc = 0x17D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D278u, 0x12C448u, 0x12C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C450u;
label_12c450:
    // 0x12c450: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C450u;
    {
        const bool branch_taken_0x12c450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C450u;
        // 0x12c454: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c450) {
            ctx->pc = 0x12C460u;
            goto label_12c460;
        }
    }
    ctx->pc = 0x12C458u;
    // 0x12c458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C458u;
    {
        const bool branch_taken_0x12c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C458u;
        // 0x12c45c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c458) {
            ctx->pc = 0x12C474u;
            goto label_12c474;
        }
    }
    ctx->pc = 0x12C460u;
label_12c460:
    // 0x12c460: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12c460u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c464: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x12c464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c468: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12C468u;
    {
        const bool branch_taken_0x12c468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C468u;
        // 0x12c46c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c468) {
            ctx->pc = 0x12C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c438;
        }
    }
    ctx->pc = 0x12C470u;
    // 0x12c470: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_12c474:
    // 0x12c474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c47c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c480: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c484: 0x3e00008  jr          $ra
    ctx->pc = 0x12C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C484u;
        // 0x12c488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C48Cu;
    // 0x12c48c: 0x0  nop
    ctx->pc = 0x12c48cu;
    // NOP
    ctx->pc = 0x12c490u;
}
