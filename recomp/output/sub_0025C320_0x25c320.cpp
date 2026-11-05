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

// Function: sub_0025C320
// Address: 0x25c320 - 0x25c440
void sub_0025C320_0x25c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C320_0x25c320");
#endif

    switch (ctx->pc) {
        case 0x25c344u: goto label_25c344;
        case 0x25c374u: goto label_25c374;
        case 0x25c3b0u: goto label_25c3b0;
        case 0x25c3c4u: goto label_25c3c4;
        case 0x25c3e0u: goto label_25c3e0;
        case 0x25c420u: goto label_25c420;
        default: break;
    }

    ctx->pc = 0x25c320u;

    // 0x25c320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25c324: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25c328: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25c32c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25c32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c334: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25c338: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25c33c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x25C33Cu;
    SET_GPR_U32(ctx, 31, 0x25C344u);
    ctx->pc = 0x25C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C33Cu;
    // 0x25c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x25C33Cu, 0x25C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C344u;
label_25c344:
    // 0x25c344: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x25c344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c348: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x25c34c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c350: 0x8c83961c  lw          $v1, -0x69E4($a0)
    ctx->pc = 0x25c350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F961Cu));
    // 0x25c354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c35c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25c360: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x25c360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25c364: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x25c364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x25c368: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x25c368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x25c36c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x25C36Cu;
    SET_GPR_U32(ctx, 31, 0x25C374u);
    ctx->pc = 0x25C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C36Cu;
    // 0x25c370: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x25C36Cu, 0x25C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C374u;
label_25c374:
    // 0x25c374: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x25c374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x25c378: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25c378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25c37c: 0x8ca43d90  lw          $a0, 0x3D90($a1)
    ctx->pc = 0x25c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4B3D90u));
    // 0x25c380: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x25C380u;
    {
        const bool branch_taken_0x25c380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C380u;
        // 0x25c384: 0x24a63d90  addiu       $a2, $a1, 0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 15760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c380) {
            ctx->pc = 0x25C408u;
            goto label_25c408;
        }
    }
    ctx->pc = 0x25C388u;
    // 0x25c388: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c38c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x25c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25c390: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x25c390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25c394: 0xaca33d90  sw          $v1, 0x3D90($a1)
    ctx->pc = 0x25c394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15760), GPR_U32(ctx, 3));
    // 0x25c398: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25c398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25c39c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c3a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C3A0u;
    {
        const bool branch_taken_0x25c3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3a0) {
            ctx->pc = 0x25C3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C3A0u;
            // 0x25c3a4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C3B4u;
            goto label_25c3b4;
        }
    }
    ctx->pc = 0x25C3A8u;
    // 0x25c3a8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x25C3A8u;
    SET_GPR_U32(ctx, 31, 0x25C3B0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x25C3A8u, 0x25C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3B0u;
label_25c3b0:
    // 0x25c3b0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x25c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_25c3b4:
    // 0x25c3b4: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x25C3B4u;
    {
        const bool branch_taken_0x25c3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3b4) {
            ctx->pc = 0x25C3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C3B4u;
            // 0x25c3b8: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C3F4u;
            goto label_25c3f4;
        }
    }
    ctx->pc = 0x25C3BCu;
    // 0x25c3bc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x25C3BCu;
    SET_GPR_U32(ctx, 31, 0x25C3C4u);
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x25C3BCu, 0x25C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3C4u;
label_25c3c4:
    // 0x25c3c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x25c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25c3c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x25c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c3d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x25c3d8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x25C3D8u;
    SET_GPR_U32(ctx, 31, 0x25C3E0u);
    ctx->pc = 0x25C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C3D8u;
    // 0x25c3dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x25C3D8u, 0x25C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3E0u;
label_25c3e0:
    // 0x25c3e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c3e4: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x25c3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25c3e8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x25c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x25c3ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C3ECu;
    {
        const bool branch_taken_0x25c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3ECu;
        // 0x25c3f0: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3ec) {
            ctx->pc = 0x25C400u;
            goto label_25c400;
        }
    }
    ctx->pc = 0x25C3F4u;
label_25c3f4:
    // 0x25c3f4: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x25c3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c3f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x25c3fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_25c400:
    // 0x25c400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25C400u;
    {
        const bool branch_taken_0x25c400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C400u;
        // 0x25c404: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c400) {
            ctx->pc = 0x25C40Cu;
            goto label_25c40c;
        }
    }
    ctx->pc = 0x25C408u;
label_25c408:
    // 0x25c408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25c408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c40c:
    // 0x25c40c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c410: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C410u;
    {
        const bool branch_taken_0x25c410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C410u;
        // 0x25c414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c410) {
            ctx->pc = 0x25C424u;
            goto label_25c424;
        }
    }
    ctx->pc = 0x25C418u;
    // 0x25c418: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x25C418u;
    SET_GPR_U32(ctx, 31, 0x25C420u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x25C418u, 0x25C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C420u;
label_25c420:
    // 0x25c420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c424:
    // 0x25c424: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25c424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c428: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25c428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c42c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c430: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25c430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25c434: 0x3e00008  jr          $ra
    ctx->pc = 0x25C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C434u;
        // 0x25c438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C43Cu;
    // 0x25c43c: 0x0  nop
    ctx->pc = 0x25c43cu;
    // NOP
    ctx->pc = 0x25c440u;
}
