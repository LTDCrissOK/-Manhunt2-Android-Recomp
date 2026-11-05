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

// Function: sub_002D4208
// Address: 0x2d4208 - 0x2d42a0
void sub_002D4208_0x2d4208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4208_0x2d4208");
#endif

    switch (ctx->pc) {
        case 0x2d4248u: goto label_2d4248;
        case 0x2d4254u: goto label_2d4254;
        default: break;
    }

    ctx->pc = 0x2d4208u;

    // 0x2d4208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d420c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d4210: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d4210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d4214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4218: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d421c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2d421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2d4220: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d4220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d4224: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d4224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d4228: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d4228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d422c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2d4230: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d4230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d4234: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d4234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d4238: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D4238u;
    {
        const bool branch_taken_0x2d4238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4238u;
        // 0x2d423c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4238) {
            ctx->pc = 0x2D428Cu;
            goto label_2d428c;
        }
    }
    ctx->pc = 0x2D4240u;
    // 0x2d4240: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4244: 0x0  nop
    ctx->pc = 0x2d4244u;
    // NOP
label_2d4248:
    // 0x2d4248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d424c: 0xc0b5066  jal         func_2D4198
    ctx->pc = 0x2D424Cu;
    SET_GPR_U32(ctx, 31, 0x2D4254u);
    ctx->pc = 0x2D4250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D424Cu;
    // 0x2d4250: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4198u, 0x2D424Cu, 0x2D4254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4254u;
label_2d4254:
    // 0x2d4254: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d4258: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4258u;
    {
        const bool branch_taken_0x2d4258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4258) {
            ctx->pc = 0x2D425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4258u;
            // 0x2d425c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D426Cu;
            goto label_2d426c;
        }
    }
    ctx->pc = 0x2D4260u;
    // 0x2d4260: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d4260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4264u;
    {
        const bool branch_taken_0x2d4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4264u;
        // 0x2d4268: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4264) {
            ctx->pc = 0x2D427Cu;
            goto label_2d427c;
        }
    }
    ctx->pc = 0x2D426Cu;
label_2d426c:
    // 0x2d426c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D426Cu;
    {
        const bool branch_taken_0x2d426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D426Cu;
        // 0x2d4270: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d426c) {
            ctx->pc = 0x2D4280u;
            goto label_2d4280;
        }
    }
    ctx->pc = 0x2D4274u;
    // 0x2d4274: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d4274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d4278: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d4278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2d427c:
    // 0x2d427c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4280:
    // 0x2d4280: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d4284: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D4284u;
    {
        const bool branch_taken_0x2d4284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4284u;
        // 0x2d4288: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4284) {
            ctx->pc = 0x2D4248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4248;
        }
    }
    ctx->pc = 0x2D428Cu;
label_2d428c:
    // 0x2d428c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d428cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4290: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d4290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4294: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4294u;
        // 0x2d4298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D429Cu;
    // 0x2d429c: 0x0  nop
    ctx->pc = 0x2d429cu;
    // NOP
    ctx->pc = 0x2d42a0u;
}
