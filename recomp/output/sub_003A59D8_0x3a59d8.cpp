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

// Function: sub_003A59D8
// Address: 0x3a59d8 - 0x3a5a50
void sub_003A59D8_0x3a59d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A59D8_0x3a59d8");
#endif

    switch (ctx->pc) {
        case 0x3a59fcu: goto label_3a59fc;
        case 0x3a5a10u: goto label_3a5a10;
        case 0x3a5a24u: goto label_3a5a24;
        default: break;
    }

    ctx->pc = 0x3a59d8u;

    // 0x3a59d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a59d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a59dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a59dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a59e0: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x3a59e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x3a59e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a59e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a59e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a59e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a59ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a59ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a59f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a59f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a59f4: 0xc0eb4a0  jal         func_3AD280
    ctx->pc = 0x3A59F4u;
    SET_GPR_U32(ctx, 31, 0x3A59FCu);
    ctx->pc = 0x3A59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59F4u;
    // 0x3a59f8: 0x26643934  addiu       $a0, $s3, 0x3934 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD280u, 0x3A59F4u, 0x3A59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59FCu;
label_3a59fc:
    // 0x3a59fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A59FCu;
    {
        const bool branch_taken_0x3a59fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59FCu;
        // 0x3a5a00: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a59fc) {
            ctx->pc = 0x3A5A34u;
            goto label_3a5a34;
        }
    }
    ctx->pc = 0x3A5A04u;
    // 0x3a5a04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a5a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5a08: 0x245039a0  addiu       $s0, $v0, 0x39A0
    ctx->pc = 0x3a5a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
    // 0x3a5a0c: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x3a5a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a5a10:
    // 0x3a5a10: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a5a10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a5a14: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5A14u;
    {
        const bool branch_taken_0x3a5a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a5a14) {
            ctx->pc = 0x3A5A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5A14u;
            // 0x3a5a18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A28u;
            goto label_3a5a28;
        }
    }
    ctx->pc = 0x3A5A1Cu;
    // 0x3a5a1c: 0xc0e9644  jal         func_3A5910
    ctx->pc = 0x3A5A1Cu;
    SET_GPR_U32(ctx, 31, 0x3A5A24u);
    ctx->pc = 0x3A5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5A1Cu;
    // 0x3a5a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5910u, 0x3A5A1Cu, 0x3A5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5A24u;
label_3a5a24:
    // 0x3a5a24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a5a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a5a28:
    // 0x3a5a28: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A5A28u;
    {
        const bool branch_taken_0x3a5a28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A28u;
        // 0x3a5a2c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a28) {
            ctx->pc = 0x3A5A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5a10;
        }
    }
    ctx->pc = 0x3A5A30u;
    // 0x3a5a30: 0xae603934  sw          $zero, 0x3934($s3)
    ctx->pc = 0x3a5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14644), GPR_U32(ctx, 0));
label_3a5a34:
    // 0x3a5a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a5a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5a38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a5a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a5a3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a5a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5a40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a5a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a5a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A48u;
        // 0x3a5a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5A50u;
}
