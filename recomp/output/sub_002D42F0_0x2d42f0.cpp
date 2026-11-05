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

// Function: sub_002D42F0
// Address: 0x2d42f0 - 0x2d4358
void sub_002D42F0_0x2d42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D42F0_0x2d42f0");
#endif

    switch (ctx->pc) {
        case 0x2d4318u: goto label_2d4318;
        case 0x2d4324u: goto label_2d4324;
        default: break;
    }

    ctx->pc = 0x2d42f0u;

    // 0x2d42f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d42f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d42f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d42f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d42f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d42f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d42fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d42fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4300: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d4300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4304: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d4308: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2d4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2d430c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D430Cu;
    {
        const bool branch_taken_0x2d430c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D430Cu;
        // 0x2d4310: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d430c) {
            ctx->pc = 0x2D4338u;
            goto label_2d4338;
        }
    }
    ctx->pc = 0x2D4314u;
    // 0x2d4314: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2d4314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2d4318:
    // 0x2d4318: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d431c: 0xc0b5c7e  jal         func_2D71F8
    ctx->pc = 0x2D431Cu;
    SET_GPR_U32(ctx, 31, 0x2D4324u);
    ctx->pc = 0x2D4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D431Cu;
    // 0x2d4320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71F8u, 0x2D431Cu, 0x2D4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4324u;
label_2d4324:
    // 0x2d4324: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d4324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d4328: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2d4328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2d432c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d432cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d4330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D4330u;
    {
        const bool branch_taken_0x2d4330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4330u;
        // 0x2d4334: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4330) {
            ctx->pc = 0x2D4318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4318;
        }
    }
    ctx->pc = 0x2D4338u;
label_2d4338:
    // 0x2d4338: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x2d4338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x2d433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4348: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d4348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d434c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D434Cu;
        // 0x2d4350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D434Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4354u;
    // 0x2d4354: 0x0  nop
    ctx->pc = 0x2d4354u;
    // NOP
    ctx->pc = 0x2d4358u;
}
