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

// Function: sub_00100618
// Address: 0x100618 - 0x100678
void sub_00100618_0x100618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100618_0x100618");
#endif

    switch (ctx->pc) {
        case 0x100640u: goto label_100640;
        case 0x100648u: goto label_100648;
        default: break;
    }

    ctx->pc = 0x100618u;

    // 0x100618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10061c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x10061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x100620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100624: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x100624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x100628: 0x24502dc0  addiu       $s0, $v0, 0x2DC0
    ctx->pc = 0x100628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x10062c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482DC4u));
    // 0x100630: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x100630u;
    {
        const bool branch_taken_0x100630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100630u;
        // 0x100634: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100630) {
            ctx->pc = 0x100658u;
            goto label_100658;
        }
    }
    ctx->pc = 0x100638u;
    // 0x100638: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x100638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10063c: 0x0  nop
    ctx->pc = 0x10063cu;
    // NOP
label_100640:
    // 0x100640: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x100640u;
    SET_GPR_U32(ctx, 31, 0x100648u);
    ctx->pc = 0x100644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100640u;
    // 0x100644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x100640u, 0x100648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100648u;
label_100648:
    // 0x100648: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x100648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10064c: 0x0  nop
    ctx->pc = 0x10064cu;
    // NOP
    // 0x100650: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x100650u;
    {
        const bool branch_taken_0x100650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100650) {
            ctx->pc = 0x100654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100650u;
            // 0x100654: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100640;
        }
    }
    ctx->pc = 0x100658u;
label_100658:
    // 0x100658: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x100658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x10065c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x100660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x100660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x100664: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x100664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x100668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10066c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100670: 0x3e00008  jr          $ra
    ctx->pc = 0x100670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100670u;
        // 0x100674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100678u;
}
