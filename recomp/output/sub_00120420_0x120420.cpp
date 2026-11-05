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

// Function: sub_00120420
// Address: 0x120420 - 0x1204c8
void sub_00120420_0x120420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120420_0x120420");
#endif

    switch (ctx->pc) {
        case 0x12045cu: goto label_12045c;
        case 0x120470u: goto label_120470;
        case 0x12047cu: goto label_12047c;
        case 0x1204acu: goto label_1204ac;
        default: break;
    }

    ctx->pc = 0x120420u;

    // 0x120420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x120424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120428: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x120428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12042c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12042cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120430: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x120430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x120434: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x120434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120438: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x120438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12043c: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x12043Cu;
    {
        const bool branch_taken_0x12043c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x120440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12043Cu;
        // 0x120440: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12043c) {
            ctx->pc = 0x1204ACu;
            goto label_1204ac;
        }
    }
    ctx->pc = 0x120444u;
    // 0x120444: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x120444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x120448: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x120448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12044c: 0x50520018  beql        $v0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x12044Cu;
    {
        const bool branch_taken_0x12044c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x12044c) {
            ctx->pc = 0x120450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12044Cu;
            // 0x120450: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1204B0u;
            goto label_1204b0;
        }
    }
    ctx->pc = 0x120454u;
    // 0x120454: 0xc0480f4  jal         func_1203D0
    ctx->pc = 0x120454u;
    SET_GPR_U32(ctx, 31, 0x12045Cu);
    ctx->pc = 0x1203D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203D0u, 0x120454u, 0x12045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12045Cu;
label_12045c:
    // 0x12045c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12045cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120460: 0x52320013  beql        $s1, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x120460u;
    {
        const bool branch_taken_0x120460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x120460) {
            ctx->pc = 0x120464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120460u;
            // 0x120464: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1204B0u;
            goto label_1204b0;
        }
    }
    ctx->pc = 0x120468u;
    // 0x120468: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x120468u;
    SET_GPR_U32(ctx, 31, 0x120470u);
    ctx->pc = 0x12046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120468u;
    // 0x12046c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x120468u, 0x120470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120470u;
label_120470:
    // 0x120470: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x120470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x120474: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x120474u;
    SET_GPR_U32(ctx, 31, 0x12047Cu);
    ctx->pc = 0x120478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120474u;
    // 0x120478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x120474u, 0x12047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12047Cu;
label_12047c:
    // 0x12047c: 0x112940  sll         $a1, $s1, 5
    ctx->pc = 0x12047cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x120480: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x120480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x120484: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x120488: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x120488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12048c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x12048cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x120490: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120494: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x120494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x120498: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12049c: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x12049cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1204a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1204a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1204a4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1204A4u;
    SET_GPR_U32(ctx, 31, 0x1204ACu);
    ctx->pc = 0x1204A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204A4u;
    // 0x1204a8: 0xa2020110  sb          $v0, 0x110($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1204A4u, 0x1204ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204ACu;
label_1204ac:
    // 0x1204ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1204acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1204b0:
    // 0x1204b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1204b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1204b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1204b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1204b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1204b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1204bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1204bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1204c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1204C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1204C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204C0u;
        // 0x1204c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204C8u;
}
