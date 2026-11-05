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

// Function: sub_00124000
// Address: 0x124000 - 0x124108
void sub_00124000_0x124000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124000_0x124000");
#endif

    switch (ctx->pc) {
        case 0x124050u: goto label_124050;
        case 0x124060u: goto label_124060;
        case 0x12407cu: goto label_12407c;
        case 0x124094u: goto label_124094;
        case 0x1240c4u: goto label_1240c4;
        default: break;
    }

    ctx->pc = 0x124000u;

    // 0x124000: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x124000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x124004: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x124004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x124008: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x124008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12400c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12400cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124010: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x124010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x124014: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x124014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x124018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12401c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12401cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124020: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x124020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x124024: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x124024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124028: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x124028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12402c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12402cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124030: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x124030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x124034: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x124034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124038: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x124038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x12403c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x12403cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124040: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x124040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x124044: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x124044u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124048: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124048u;
    SET_GPR_U32(ctx, 31, 0x124050u);
    ctx->pc = 0x12404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124048u;
    // 0x12404c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124048u, 0x124050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124050u;
label_124050:
    // 0x124050: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x124050u;
    {
        const bool branch_taken_0x124050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124050u;
        // 0x124054: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124050) {
            ctx->pc = 0x1240D0u;
            goto label_1240d0;
        }
    }
    ctx->pc = 0x124058u;
    // 0x124058: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124058u;
    SET_GPR_U32(ctx, 31, 0x124060u);
    ctx->pc = 0x12405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124058u;
    // 0x12405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124058u, 0x124060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124060u;
label_124060:
    // 0x124060: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x124060u;
    {
        const bool branch_taken_0x124060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124060u;
        // 0x124064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124060) {
            ctx->pc = 0x1240CCu;
            goto label_1240cc;
        }
    }
    ctx->pc = 0x124068u;
    // 0x124068: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x124068u;
    {
        const bool branch_taken_0x124068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x12406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124068u;
        // 0x12406c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124068) {
            ctx->pc = 0x1240D0u;
            goto label_1240d0;
        }
    }
    ctx->pc = 0x124070u;
    // 0x124070: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124074: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x124074u;
    SET_GPR_U32(ctx, 31, 0x12407Cu);
    ctx->pc = 0x124078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124074u;
    // 0x124078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x124074u, 0x12407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12407Cu;
label_12407c:
    // 0x12407c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124080: 0x2d5102b  sltu        $v0, $s6, $s5
    ctx->pc = 0x124080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x124084: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x124084u;
    {
        const bool branch_taken_0x124084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124084u;
        // 0x124088: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124084) {
            ctx->pc = 0x1240D0u;
            goto label_1240d0;
        }
    }
    ctx->pc = 0x12408Cu;
    // 0x12408c: 0xc040d34  jal         func_1034D0
    ctx->pc = 0x12408Cu;
    SET_GPR_U32(ctx, 31, 0x124094u);
    ctx->pc = 0x124090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12408Cu;
    // 0x124090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034D0u, 0x12408Cu, 0x124094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124094u;
label_124094:
    // 0x124094: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x124094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124098: 0x1140000c  beqz        $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x124098u;
    {
        const bool branch_taken_0x124098 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124098u;
        // 0x12409c: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124098) {
            ctx->pc = 0x1240CCu;
            goto label_1240cc;
        }
    }
    ctx->pc = 0x1240A0u;
    // 0x1240a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1240a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240a4: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1240a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1240a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1240a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1240acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1240b0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1240b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240b4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1240b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240b8: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x1240b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240bc: 0xc042bfe  jal         func_10AFF8
    ctx->pc = 0x1240BCu;
    SET_GPR_U32(ctx, 31, 0x1240C4u);
    ctx->pc = 0x1240C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1240BCu;
    // 0x1240c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AFF8u, 0x1240BCu, 0x1240C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240C4u;
label_1240c4:
    // 0x1240c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1240C4u;
    {
        const bool branch_taken_0x1240c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240C4u;
        // 0x1240c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240c4) {
            ctx->pc = 0x1240D0u;
            goto label_1240d0;
        }
    }
    ctx->pc = 0x1240CCu;
label_1240cc:
    // 0x1240cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1240d0:
    // 0x1240d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1240d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1240d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1240d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1240d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1240d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1240dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1240dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1240e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1240e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1240e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1240e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1240e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1240e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1240ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1240ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1240f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1240f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1240f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1240F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1240F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F4u;
        // 0x1240f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1240F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1240FCu;
    // 0x1240fc: 0x0  nop
    ctx->pc = 0x1240fcu;
    // NOP
    // 0x124100: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x124104: 0x0  nop
    ctx->pc = 0x124104u;
    // NOP
    ctx->pc = 0x124108u;
}
