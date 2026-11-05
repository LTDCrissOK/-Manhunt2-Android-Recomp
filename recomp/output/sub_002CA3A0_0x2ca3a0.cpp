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

// Function: sub_002CA3A0
// Address: 0x2ca3a0 - 0x2ca458
void sub_002CA3A0_0x2ca3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA3A0_0x2ca3a0");
#endif

    switch (ctx->pc) {
        case 0x2ca3a0u: goto label_2ca3a0;
        case 0x2ca3a4u: goto label_2ca3a4;
        case 0x2ca3a8u: goto label_2ca3a8;
        case 0x2ca3acu: goto label_2ca3ac;
        case 0x2ca3b0u: goto label_2ca3b0;
        case 0x2ca3b4u: goto label_2ca3b4;
        case 0x2ca3b8u: goto label_2ca3b8;
        case 0x2ca3bcu: goto label_2ca3bc;
        case 0x2ca3c0u: goto label_2ca3c0;
        case 0x2ca3c4u: goto label_2ca3c4;
        case 0x2ca3c8u: goto label_2ca3c8;
        case 0x2ca3ccu: goto label_2ca3cc;
        case 0x2ca3d0u: goto label_2ca3d0;
        case 0x2ca3d4u: goto label_2ca3d4;
        case 0x2ca3d8u: goto label_2ca3d8;
        case 0x2ca3dcu: goto label_2ca3dc;
        case 0x2ca3e0u: goto label_2ca3e0;
        case 0x2ca3e4u: goto label_2ca3e4;
        case 0x2ca3e8u: goto label_2ca3e8;
        case 0x2ca3ecu: goto label_2ca3ec;
        case 0x2ca3f0u: goto label_2ca3f0;
        case 0x2ca3f4u: goto label_2ca3f4;
        case 0x2ca3f8u: goto label_2ca3f8;
        case 0x2ca3fcu: goto label_2ca3fc;
        case 0x2ca400u: goto label_2ca400;
        case 0x2ca404u: goto label_2ca404;
        case 0x2ca408u: goto label_2ca408;
        case 0x2ca40cu: goto label_2ca40c;
        case 0x2ca410u: goto label_2ca410;
        case 0x2ca414u: goto label_2ca414;
        case 0x2ca418u: goto label_2ca418;
        case 0x2ca41cu: goto label_2ca41c;
        case 0x2ca420u: goto label_2ca420;
        case 0x2ca424u: goto label_2ca424;
        case 0x2ca428u: goto label_2ca428;
        case 0x2ca42cu: goto label_2ca42c;
        case 0x2ca430u: goto label_2ca430;
        case 0x2ca434u: goto label_2ca434;
        case 0x2ca438u: goto label_2ca438;
        case 0x2ca43cu: goto label_2ca43c;
        case 0x2ca440u: goto label_2ca440;
        case 0x2ca444u: goto label_2ca444;
        case 0x2ca448u: goto label_2ca448;
        case 0x2ca44cu: goto label_2ca44c;
        case 0x2ca450u: goto label_2ca450;
        case 0x2ca454u: goto label_2ca454;
        default: break;
    }

    ctx->pc = 0x2ca3a0u;

label_2ca3a0:
    // 0x2ca3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ca3a4:
    // 0x2ca3a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ca3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2ca3a8:
    // 0x2ca3a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ca3ac:
    // 0x2ca3ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ca3b0:
    // 0x2ca3b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ca3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2ca3b4:
    // 0x2ca3b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ca3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca3b8:
    // 0x2ca3b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ca3bc:
    // 0x2ca3bc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2ca3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ca3c0:
    // 0x2ca3c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ca3c4:
    // 0x2ca3c4: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x2ca3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_2ca3c8:
    // 0x2ca3c8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ca3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ca3cc:
    // 0x2ca3cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ca3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ca3d0:
    // 0x2ca3d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ca3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ca3d4:
    // 0x2ca3d4: 0x40f809  jalr        $v0
label_2ca3d8:
    if (ctx->pc == 0x2CA3D8u) {
        ctx->pc = 0x2CA3DCu;
        goto label_2ca3dc;
    }
    ctx->pc = 0x2CA3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CA3DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA3D4u, 0x2CA3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA3DCu;
label_2ca3dc:
    // 0x2ca3dc: 0xc0d99fa  jal         func_3667E8
label_2ca3e0:
    if (ctx->pc == 0x2CA3E0u) {
        ctx->pc = 0x2CA3E4u;
        goto label_2ca3e4;
    }
    ctx->pc = 0x2CA3DCu;
    SET_GPR_U32(ctx, 31, 0x2CA3E4u);
    ctx->pc = 0x3667E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3667E8u, 0x2CA3DCu, 0x2CA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3E4u;
label_2ca3e4:
    // 0x2ca3e4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2ca3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ca3e8:
    // 0x2ca3e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ca3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ca3ec:
    // 0x2ca3ec: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_2ca3f0:
    if (ctx->pc == 0x2CA3F0u) {
        ctx->pc = 0x2CA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3ECu;
        // 0x2ca3f0: 0x3c113fff  lui         $s1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA3F4u;
        goto label_2ca3f4;
    }
    ctx->pc = 0x2CA3ECu;
    {
        const bool branch_taken_0x2ca3ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3ECu;
        // 0x2ca3f0: 0x3c113fff  lui         $s1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3ec) {
            ctx->pc = 0x2CA424u;
            goto label_2ca424;
        }
    }
    ctx->pc = 0x2CA3F4u;
label_2ca3f4:
    // 0x2ca3f4: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2ca3f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_2ca3f8:
    // 0x2ca3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca3fc:
    // 0x2ca3fc: 0x0  nop
    ctx->pc = 0x2ca3fcu;
    // NOP
label_2ca400:
    // 0x2ca400: 0xc0b28a4  jal         func_2CA290
label_2ca404:
    if (ctx->pc == 0x2CA404u) {
        ctx->pc = 0x2CA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA400u;
        // 0x2ca404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA408u;
        goto label_2ca408;
    }
    ctx->pc = 0x2CA400u;
    SET_GPR_U32(ctx, 31, 0x2CA408u);
    ctx->pc = 0x2CA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA400u;
    // 0x2ca404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA290u, 0x2CA400u, 0x2CA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA408u;
label_2ca408:
    // 0x2ca408: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ca408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ca40c:
    // 0x2ca40c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2ca40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ca410:
    // 0x2ca410: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2ca410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_2ca414:
    // 0x2ca414: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ca414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ca418:
    // 0x2ca418: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2ca418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2ca41c:
    // 0x2ca41c: 0x1603fff8  bne         $s0, $v1, . + 4 + (-0x8 << 2)
label_2ca420:
    if (ctx->pc == 0x2CA420u) {
        ctx->pc = 0x2CA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA41Cu;
        // 0x2ca420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA424u;
        goto label_2ca424;
    }
    ctx->pc = 0x2CA41Cu;
    {
        const bool branch_taken_0x2ca41c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA41Cu;
        // 0x2ca420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca41c) {
            ctx->pc = 0x2CA400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca400;
        }
    }
    ctx->pc = 0x2CA424u;
label_2ca424:
    // 0x2ca424: 0x8e62cba8  lw          $v0, -0x3458($s3)
    ctx->pc = 0x2ca424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953896)));
label_2ca428:
    // 0x2ca428: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ca428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ca42c:
    // 0x2ca42c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ca42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ca430:
    // 0x2ca430: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ca430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ca434:
    // 0x2ca434: 0x40f809  jalr        $v0
label_2ca438:
    if (ctx->pc == 0x2CA438u) {
        ctx->pc = 0x2CA43Cu;
        goto label_2ca43c;
    }
    ctx->pc = 0x2CA434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CA43Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA434u, 0x2CA43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA43Cu;
label_2ca43c:
    // 0x2ca43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca440:
    // 0x2ca440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ca444:
    // 0x2ca444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca448:
    // 0x2ca448: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ca448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ca44c:
    // 0x2ca44c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca450:
    // 0x2ca450: 0x3e00008  jr          $ra
label_2ca454:
    if (ctx->pc == 0x2CA454u) {
        ctx->pc = 0x2CA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA450u;
        // 0x2ca454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA458u;
        goto label_fallthrough_0x2ca450;
    }
    ctx->pc = 0x2CA450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA450u;
        // 0x2ca454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ca450:
    ctx->pc = 0x2CA458u;
}
