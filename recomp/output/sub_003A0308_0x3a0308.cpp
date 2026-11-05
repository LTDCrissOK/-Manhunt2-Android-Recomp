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

// Function: sub_003A0308
// Address: 0x3a0308 - 0x3a0380
void sub_003A0308_0x3a0308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0308_0x3a0308");
#endif

    switch (ctx->pc) {
        case 0x3a0330u: goto label_3a0330;
        case 0x3a0344u: goto label_3a0344;
        default: break;
    }

    ctx->pc = 0x3a0308u;

    // 0x3a0308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a030c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a0310: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a0314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0318: 0x2450ae10  addiu       $s0, $v0, -0x51F0
    ctx->pc = 0x3a0318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946320));
    // 0x3a031c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0320: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x3a0320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0328: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a0328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a032c: 0x0  nop
    ctx->pc = 0x3a032cu;
    // NOP
label_3a0330:
    // 0x3a0330: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a0330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a0334: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0334u;
    {
        const bool branch_taken_0x3a0334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a0334) {
            ctx->pc = 0x3A0338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0334u;
            // 0x3a0338: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0348u;
            goto label_3a0348;
        }
    }
    ctx->pc = 0x3A033Cu;
    // 0x3a033c: 0xc0e7f6e  jal         func_39FDB8
    ctx->pc = 0x3A033Cu;
    SET_GPR_U32(ctx, 31, 0x3A0344u);
    ctx->pc = 0x3A0340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A033Cu;
    // 0x3a0340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FDB8u, 0x3A033Cu, 0x3A0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0344u;
label_3a0344:
    // 0x3a0344: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a0344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a0348:
    // 0x3a0348: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A0348u;
    {
        const bool branch_taken_0x3a0348 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0348u;
        // 0x3a034c: 0x26100278  addiu       $s0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0348) {
            ctx->pc = 0x3A0330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0330;
        }
    }
    ctx->pc = 0x3A0350u;
    // 0x3a0350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a035c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0360: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0360u;
        // 0x3a0364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0368u;
    // 0x3a0368: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a0368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a036c: 0x0  nop
    ctx->pc = 0x3a036cu;
    // NOP
    // 0x3a0370: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a0374: 0x0  nop
    ctx->pc = 0x3a0374u;
    // NOP
    // 0x3a0378: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a0378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a037c: 0x0  nop
    ctx->pc = 0x3a037cu;
    // NOP
    ctx->pc = 0x3a0380u;
}
