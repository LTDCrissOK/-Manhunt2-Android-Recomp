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

// Function: sub_003A4110
// Address: 0x3a4110 - 0x3a4188
void sub_003A4110_0x3a4110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4110_0x3a4110");
#endif

    switch (ctx->pc) {
        case 0x3a4134u: goto label_3a4134;
        case 0x3a4148u: goto label_3a4148;
        case 0x3a415cu: goto label_3a415c;
        default: break;
    }

    ctx->pc = 0x3a4110u;

    // 0x3a4110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a4114: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a4114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a4118: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x3a4118u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x3a411c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a4128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a4128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a412c: 0xc0eb4a0  jal         func_3AD280
    ctx->pc = 0x3A412Cu;
    SET_GPR_U32(ctx, 31, 0x3A4134u);
    ctx->pc = 0x3A4130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A412Cu;
    // 0x3a4130: 0x26642aa0  addiu       $a0, $s3, 0x2AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 10912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD280u, 0x3A412Cu, 0x3A4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4134u;
label_3a4134:
    // 0x3a4134: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A4134u;
    {
        const bool branch_taken_0x3a4134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4134u;
        // 0x3a4138: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4134) {
            ctx->pc = 0x3A416Cu;
            goto label_3a416c;
        }
    }
    ctx->pc = 0x3A413Cu;
    // 0x3a413c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a413cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4140: 0x24502b10  addiu       $s0, $v0, 0x2B10
    ctx->pc = 0x3a4140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11024));
    // 0x3a4144: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x3a4144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3a4148:
    // 0x3a4148: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a4148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a414c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A414Cu;
    {
        const bool branch_taken_0x3a414c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a414c) {
            ctx->pc = 0x3A4150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A414Cu;
            // 0x3a4150: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4160u;
            goto label_3a4160;
        }
    }
    ctx->pc = 0x3A4154u;
    // 0x3a4154: 0xc0e9012  jal         func_3A4048
    ctx->pc = 0x3A4154u;
    SET_GPR_U32(ctx, 31, 0x3A415Cu);
    ctx->pc = 0x3A4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4154u;
    // 0x3a4158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4048u, 0x3A4154u, 0x3A415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A415Cu;
label_3a415c:
    // 0x3a415c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a415cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a4160:
    // 0x3a4160: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A4160u;
    {
        const bool branch_taken_0x3a4160 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4160u;
        // 0x3a4164: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4160) {
            ctx->pc = 0x3A4148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4148;
        }
    }
    ctx->pc = 0x3A4168u;
    // 0x3a4168: 0xae602aa0  sw          $zero, 0x2AA0($s3)
    ctx->pc = 0x3a4168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10912), GPR_U32(ctx, 0));
label_3a416c:
    // 0x3a416c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a416cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a4174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a4178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a417c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4180: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4180u;
        // 0x3a4184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4188u;
}
