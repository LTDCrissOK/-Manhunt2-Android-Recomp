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

// Function: sub_00397590
// Address: 0x397590 - 0x3976c8
void sub_00397590_0x397590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397590_0x397590");
#endif

    switch (ctx->pc) {
        case 0x3975d8u: goto label_3975d8;
        case 0x397638u: goto label_397638;
        case 0x397648u: goto label_397648;
        case 0x397650u: goto label_397650;
        case 0x397658u: goto label_397658;
        default: break;
    }

    ctx->pc = 0x397590u;

    // 0x397590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x397594: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39759c: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x39759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x3975a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3975a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3975a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3975a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3975a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3975a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3975ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3975acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3975b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3975b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3975b4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3975b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3975b8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3975b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3975bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3975bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3975c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3975c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3975c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3975c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x401910u));
    // 0x3975c8: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3975C8u;
    {
        const bool branch_taken_0x3975c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3975CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975C8u;
        // 0x3975cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3975c8) {
            ctx->pc = 0x397600u;
            goto label_397600;
        }
    }
    ctx->pc = 0x3975D0u;
    // 0x3975d0: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3975d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x3975d4: 0x26a219b0  addiu       $v0, $s5, 0x19B0
    ctx->pc = 0x3975d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6576));
label_3975d8:
    // 0x3975d8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3975d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3975dc: 0x0  nop
    ctx->pc = 0x3975dcu;
    // NOP
    // 0x3975e0: 0x0  nop
    ctx->pc = 0x3975e0u;
    // NOP
    // 0x3975e4: 0x0  nop
    ctx->pc = 0x3975e4u;
    // NOP
    // 0x3975e8: 0x0  nop
    ctx->pc = 0x3975e8u;
    // NOP
    // 0x3975ec: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3975ECu;
    {
        const bool branch_taken_0x3975ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3975F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975ECu;
        // 0x3975f0: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3975ec) {
            ctx->pc = 0x3975D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3975d8;
        }
    }
    ctx->pc = 0x3975F4u;
    // 0x3975f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3975F4u;
    {
        const bool branch_taken_0x3975f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3975F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975F4u;
        // 0x3975f8: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3975f4) {
            ctx->pc = 0x39767Cu;
            goto label_39767c;
        }
    }
    ctx->pc = 0x3975FCu;
    // 0x3975fc: 0x0  nop
    ctx->pc = 0x3975fcu;
    // NOP
label_397600:
    // 0x397600: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x397600u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x397604: 0x244319ec  addiu       $v1, $v0, 0x19EC
    ctx->pc = 0x397604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6636));
    // 0x397608: 0x26a419b0  addiu       $a0, $s5, 0x19B0
    ctx->pc = 0x397608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6576));
    // 0x39760c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39760cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x397610: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x397610u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4019B0u));
    // 0x397614: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x397614u;
    {
        const bool branch_taken_0x397614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397614u;
        // 0x397618: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397614) {
            ctx->pc = 0x397678u;
            goto label_397678;
        }
    }
    ctx->pc = 0x39761Cu;
    // 0x39761c: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x39761cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x397620: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x397620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397624: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x397624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397628: 0x26f319a8  addiu       $s3, $s7, 0x19A8
    ctx->pc = 0x397628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 6568));
    // 0x39762c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39762cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397630: 0x26d01964  addiu       $s0, $s6, 0x1964
    ctx->pc = 0x397630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 6500));
    // 0x397634: 0x0  nop
    ctx->pc = 0x397634u;
    // NOP
label_397638:
    // 0x397638: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x397638u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x39763c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397640: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397640u;
    SET_GPR_U32(ctx, 31, 0x397648u);
    ctx->pc = 0x397644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397640u;
    // 0x397644: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397640u, 0x397648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397648u;
label_397648:
    // 0x397648: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x397648u;
    SET_GPR_U32(ctx, 31, 0x397650u);
    ctx->pc = 0x39764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397648u;
    // 0x39764c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x397648u, 0x397650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397650u;
label_397650:
    // 0x397650: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x397650u;
    SET_GPR_U32(ctx, 31, 0x397658u);
    ctx->pc = 0x397654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397650u;
    // 0x397654: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x397650u, 0x397658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397658u;
label_397658:
    // 0x397658: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x397658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39765c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x397660: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x397660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x397664: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x397664u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x397668: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x397668u;
    {
        const bool branch_taken_0x397668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397668u;
        // 0x39766c: 0x26a219b0  addiu       $v0, $s5, 0x19B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397668) {
            ctx->pc = 0x397638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397638;
        }
    }
    ctx->pc = 0x397670u;
    // 0x397670: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x397670u;
    {
        const bool branch_taken_0x397670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397670u;
        // 0x397674: 0xdfb50028  ld          $s5, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397670) {
            ctx->pc = 0x397684u;
            goto label_397684;
        }
    }
    ctx->pc = 0x397678u;
label_397678:
    // 0x397678: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x397678u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_39767c:
    // 0x39767c: 0x26a219b0  addiu       $v0, $s5, 0x19B0
    ctx->pc = 0x39767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6576));
    // 0x397680: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x397680u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_397684:
    // 0x397684: 0x26e319a8  addiu       $v1, $s7, 0x19A8
    ctx->pc = 0x397684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 6568));
    // 0x397688: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x397688u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x39768c: 0x26c41964  addiu       $a0, $s6, 0x1964
    ctx->pc = 0x39768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6500));
    // 0x397690: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x397690u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x397698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39769c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39769cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3976a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3976a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3976a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3976a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3976a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3976a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3976ac: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x3976acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x3976b0: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x3976b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x3976b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3976b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3976b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3976B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3976BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976B8u;
        // 0x3976bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3976B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3976C0u;
    // 0x3976c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3976c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3976c4: 0x0  nop
    ctx->pc = 0x3976c4u;
    // NOP
    ctx->pc = 0x3976c8u;
}
