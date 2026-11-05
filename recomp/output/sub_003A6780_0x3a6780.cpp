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

// Function: sub_003A6780
// Address: 0x3a6780 - 0x3a6820
void sub_003A6780_0x3a6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6780_0x3a6780");
#endif

    switch (ctx->pc) {
        case 0x3a67a4u: goto label_3a67a4;
        case 0x3a67b0u: goto label_3a67b0;
        case 0x3a67b8u: goto label_3a67b8;
        case 0x3a67d0u: goto label_3a67d0;
        case 0x3a67e4u: goto label_3a67e4;
        default: break;
    }

    ctx->pc = 0x3a6780u;

    // 0x3a6780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a6784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a6788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a6788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a678c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6790: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a6790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a6794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a6798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a679c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A679Cu;
    SET_GPR_U32(ctx, 31, 0x3A67A4u);
    ctx->pc = 0x3A67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A679Cu;
    // 0x3a67a0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A679Cu, 0x3A67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67A4u;
label_3a67a4:
    // 0x3a67a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a67a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67a8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A67A8u;
    SET_GPR_U32(ctx, 31, 0x3A67B0u);
    ctx->pc = 0x3A67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67A8u;
    // 0x3a67ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A67A8u, 0x3A67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67B0u;
label_3a67b0:
    // 0x3a67b0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A67B0u;
    {
        const bool branch_taken_0x3a67b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a67b0) {
            ctx->pc = 0x3A67C0u;
            goto label_3a67c0;
        }
    }
    ctx->pc = 0x3A67B8u;
label_3a67b8:
    // 0x3a67b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A67B8u;
    {
        const bool branch_taken_0x3a67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67B8u;
        // 0x3a67bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67b8) {
            ctx->pc = 0x3A67F8u;
            goto label_3a67f8;
        }
    }
    ctx->pc = 0x3A67C0u;
label_3a67c0:
    // 0x3a67c0: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A67C0u;
    {
        const bool branch_taken_0x3a67c0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67C0u;
        // 0x3a67c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67c0) {
            ctx->pc = 0x3A67F4u;
            goto label_3a67f4;
        }
    }
    ctx->pc = 0x3A67C8u;
    // 0x3a67c8: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x3a67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3a67cc: 0x0  nop
    ctx->pc = 0x3a67ccu;
    // NOP
label_3a67d0:
    // 0x3a67d0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3a67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3a67d4: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x3a67d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a67d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a67d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a67dc: 0xc0e99ca  jal         func_3A6728
    ctx->pc = 0x3A67DCu;
    SET_GPR_U32(ctx, 31, 0x3A67E4u);
    ctx->pc = 0x3A67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67DCu;
    // 0x3a67e0: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6728u, 0x3A67DCu, 0x3A67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67E4u;
label_3a67e4:
    // 0x3a67e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A67E4u;
    {
        const bool branch_taken_0x3a67e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67E4u;
        // 0x3a67e8: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67e4) {
            ctx->pc = 0x3A67B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a67b8;
        }
    }
    ctx->pc = 0x3A67ECu;
    // 0x3a67ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A67ECu;
    {
        const bool branch_taken_0x3a67ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67ECu;
        // 0x3a67f0: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67ec) {
            ctx->pc = 0x3A67D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a67d0;
        }
    }
    ctx->pc = 0x3A67F4u;
label_3a67f4:
    // 0x3a67f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a67f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a67f8:
    // 0x3a67f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a67f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a67fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a67fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a6800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6804: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a6804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a6808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a6808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a680c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A680Cu;
        // 0x3a6810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A680Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6814u;
    // 0x3a6814: 0x0  nop
    ctx->pc = 0x3a6814u;
    // NOP
    // 0x3a6818: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3a6818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a681c: 0x0  nop
    ctx->pc = 0x3a681cu;
    // NOP
    ctx->pc = 0x3a6820u;
}
