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

// Function: sub_00131570
// Address: 0x131570 - 0x131628
void sub_00131570_0x131570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131570_0x131570");
#endif

    switch (ctx->pc) {
        case 0x131594u: goto label_131594;
        case 0x1315a0u: goto label_1315a0;
        case 0x1315a8u: goto label_1315a8;
        case 0x1315b4u: goto label_1315b4;
        case 0x1315e8u: goto label_1315e8;
        case 0x131600u: goto label_131600;
        default: break;
    }

    ctx->pc = 0x131570u;

    // 0x131570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131574: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x131574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x131578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13157c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131580: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x131580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x131584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13158c: 0xc04c58a  jal         func_131628
    ctx->pc = 0x13158Cu;
    SET_GPR_U32(ctx, 31, 0x131594u);
    ctx->pc = 0x131590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13158Cu;
    // 0x131590: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131628u, 0x13158Cu, 0x131594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131594u;
label_131594:
    // 0x131594: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x131594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x131598: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131598u;
    {
        const bool branch_taken_0x131598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131598u;
        // 0x13159c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131598) {
            ctx->pc = 0x1315F8u;
            goto label_1315f8;
        }
    }
    ctx->pc = 0x1315A0u;
label_1315a0:
    // 0x1315a0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1315A0u;
    SET_GPR_U32(ctx, 31, 0x1315A8u);
    ctx->pc = 0x1315A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315A0u;
    // 0x1315a4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1315A0u, 0x1315A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315A8u;
label_1315a8:
    // 0x1315a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1315a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1315ACu;
    SET_GPR_U32(ctx, 31, 0x1315B4u);
    ctx->pc = 0x1315B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315ACu;
    // 0x1315b0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1315ACu, 0x1315B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315B4u;
label_1315b4:
    // 0x1315b4: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1315B4u;
    {
        const bool branch_taken_0x1315b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1315B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315B4u;
        // 0x1315b8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315b4) {
            ctx->pc = 0x13160Cu;
            goto label_13160c;
        }
    }
    ctx->pc = 0x1315BCu;
    // 0x1315bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1315bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1315c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1315c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1315c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1315c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1315c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1315cc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1315ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1315d0: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1315d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1315d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1315d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1315d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1315d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315dc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1315dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1315e0: 0xc0f6f14  jal         func_3DBC50
    ctx->pc = 0x1315E0u;
    SET_GPR_U32(ctx, 31, 0x1315E8u);
    ctx->pc = 0x1315E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315E0u;
    // 0x1315e4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBC50u, 0x1315E0u, 0x1315E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315E8u;
label_1315e8:
    // 0x1315e8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1315e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1315ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1315ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1315f0: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1315f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1315f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1315f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1315f8:
    // 0x1315f8: 0xc044302  jal         func_110C08
    ctx->pc = 0x1315F8u;
    SET_GPR_U32(ctx, 31, 0x131600u);
    ctx->pc = 0x110C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C08u, 0x1315F8u, 0x131600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131600u;
label_131600:
    // 0x131600: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131604: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x131604u;
    {
        const bool branch_taken_0x131604 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x131604) {
            ctx->pc = 0x1315A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1315a0;
        }
    }
    ctx->pc = 0x13160Cu;
label_13160c:
    // 0x13160c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13160cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x131614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x131618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13161c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131620: 0x3e00008  jr          $ra
    ctx->pc = 0x131620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131620u;
        // 0x131624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131628u;
}
