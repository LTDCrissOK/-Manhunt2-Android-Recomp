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

// Function: sub_003A3E28
// Address: 0x3a3e28 - 0x3a3f30
void sub_003A3E28_0x3a3e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3E28_0x3a3e28");
#endif

    switch (ctx->pc) {
        case 0x3a3e60u: goto label_3a3e60;
        case 0x3a3e70u: goto label_3a3e70;
        case 0x3a3ed0u: goto label_3a3ed0;
        case 0x3a3ee0u: goto label_3a3ee0;
        case 0x3a3f08u: goto label_3a3f08;
        default: break;
    }

    ctx->pc = 0x3a3e28u;

    // 0x3a3e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a3e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a3e2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a3e30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a3e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a3e38: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a3e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a3e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a3e40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a3e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e44: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3a3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3a3e48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a3e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e4c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3a3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3a3e50: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3a3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3a3e54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a3e58: 0xc0eb26e  jal         func_3AC9B8
    ctx->pc = 0x3A3E58u;
    SET_GPR_U32(ctx, 31, 0x3A3E60u);
    ctx->pc = 0x3A3E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E58u;
    // 0x3a3e5c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3A3E58u, 0x3A3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E60u;
label_3a3e60:
    // 0x3a3e60: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A3E60u;
    {
        const bool branch_taken_0x3a3e60 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3A3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E60u;
        // 0x3a3e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e60) {
            ctx->pc = 0x3A3E98u;
            goto label_3a3e98;
        }
    }
    ctx->pc = 0x3A3E68u;
    // 0x3a3e68: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3a3e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x3a3e6c: 0x24e86ac0  addiu       $t0, $a3, 0x6AC0
    ctx->pc = 0x3a3e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 27328));
label_3a3e70:
    // 0x3a3e70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a3e74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a3e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a3e78: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3a3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a3e7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3a3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3a3e80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a3e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3e84: 0xd0282a  slt         $a1, $a2, $s0
    ctx->pc = 0x3a3e84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a3e88: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3E88u;
    {
        const bool branch_taken_0x3a3e88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E88u;
        // 0x3a3e8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e88) {
            ctx->pc = 0x3A3E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3e70;
        }
    }
    ctx->pc = 0x3A3E90u;
    // 0x3a3e90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3E90u;
    {
        const bool branch_taken_0x3a3e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E90u;
        // 0x3a3e94: 0x3c150065  lui         $s5, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e90) {
            ctx->pc = 0x3A3EA0u;
            goto label_3a3ea0;
        }
    }
    ctx->pc = 0x3A3E98u;
label_3a3e98:
    // 0x3a3e98: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3a3e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x3a3e9c: 0x3c150065  lui         $s5, 0x65
    ctx->pc = 0x3a3e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)101 << 16));
label_3a3ea0:
    // 0x3a3ea0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a3ea4: 0x26b26bc0  addiu       $s2, $s5, 0x6BC0
    ctx->pc = 0x3a3ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 27584));
    // 0x3a3ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3eac: 0x24842700  addiu       $a0, $a0, 0x2700
    ctx->pc = 0x3a3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9984));
    // 0x3a3eb0: 0x26650400  addiu       $a1, $s3, 0x400
    ctx->pc = 0x3a3eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x3a3eb4: 0x24e76ac0  addiu       $a3, $a3, 0x6AC0
    ctx->pc = 0x3a3eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27328));
    // 0x3a3eb8: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x3a3eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a3ebc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3a3ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ec0: 0x115080  sll         $t2, $s1, 2
    ctx->pc = 0x3a3ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3a3ec4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a3ec4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ec8: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3A3EC8u;
    SET_GPR_U32(ctx, 31, 0x3A3ED0u);
    ctx->pc = 0x3A3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3EC8u;
    // 0x3a3ecc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3A3EC8u, 0x3A3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3ED0u;
label_3a3ed0:
    // 0x3a3ed0: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3ED0u;
    {
        const bool branch_taken_0x3a3ed0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3ED0u;
        // 0x3a3ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ed0) {
            ctx->pc = 0x3A3F00u;
            goto label_3a3f00;
        }
    }
    ctx->pc = 0x3A3ED8u;
    // 0x3a3ed8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3a3ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3edc: 0x0  nop
    ctx->pc = 0x3a3edcu;
    // NOP
label_3a3ee0:
    // 0x3a3ee0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3a3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a3ee4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a3ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a3ee8: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x3a3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3a3eec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3a3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3a3ef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3ef4: 0xd1282a  slt         $a1, $a2, $s1
    ctx->pc = 0x3a3ef4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a3ef8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3EF8u;
    {
        const bool branch_taken_0x3a3ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EF8u;
        // 0x3a3efc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ef8) {
            ctx->pc = 0x3A3EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3ee0;
        }
    }
    ctx->pc = 0x3A3F00u;
label_3a3f00:
    // 0x3a3f00: 0xc0eb274  jal         func_3AC9D0
    ctx->pc = 0x3A3F00u;
    SET_GPR_U32(ctx, 31, 0x3A3F08u);
    ctx->pc = 0x3AC9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9D0u, 0x3A3F00u, 0x3A3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3F08u;
label_3a3f08:
    // 0x3a3f08: 0x8ea26bc0  lw          $v0, 0x6BC0($s5)
    ctx->pc = 0x3a3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27584)));
    // 0x3a3f0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a3f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3f10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a3f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3f14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a3f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3f18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a3f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a3f1c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3a3f1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3f20: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3a3f20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a3f24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a3f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3f28: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F28u;
        // 0x3a3f2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3F30u;
}
