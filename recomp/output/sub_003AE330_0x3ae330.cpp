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

// Function: sub_003AE330
// Address: 0x3ae330 - 0x3ae430
void sub_003AE330_0x3ae330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE330_0x3ae330");
#endif

    switch (ctx->pc) {
        case 0x3ae384u: goto label_3ae384;
        case 0x3ae39cu: goto label_3ae39c;
        default: break;
    }

    ctx->pc = 0x3ae330u;

    // 0x3ae330: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3ae330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ae334: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae338: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x3ae338u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ae33c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ae33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3ae340: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ae340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3ae344: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3ae344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae348: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ae348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ae34c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3ae34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae350: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3ae350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3ae354: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3ae354u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae358: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3ae358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae35c: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3AE35Cu;
    {
        const bool branch_taken_0x3ae35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE35Cu;
        // 0x3ae360: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae35c) {
            ctx->pc = 0x3AE408u;
            goto label_3ae408;
        }
    }
    ctx->pc = 0x3AE364u;
    // 0x3ae364: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3ae364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ae368: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3AE368u;
    {
        const bool branch_taken_0x3ae368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae368) {
            ctx->pc = 0x3AE36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE368u;
            // 0x3ae36c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE3A8u;
            goto label_3ae3a8;
        }
    }
    ctx->pc = 0x3AE370u;
    // 0x3ae370: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ae370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ae374: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ae374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae378: 0x24a5fdb8  addiu       $a1, $a1, -0x248
    ctx->pc = 0x3ae378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966712));
    // 0x3ae37c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x3AE37Cu;
    SET_GPR_U32(ctx, 31, 0x3AE384u);
    ctx->pc = 0x3AE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE37Cu;
    // 0x3ae380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x3AE37Cu, 0x3AE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE384u;
label_3ae384:
    // 0x3ae384: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3ae384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ae388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae38c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ae38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae390: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3ae390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae394: 0xc0eb60c  jal         func_3AD830
    ctx->pc = 0x3AE394u;
    SET_GPR_U32(ctx, 31, 0x3AE39Cu);
    ctx->pc = 0x3AE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE394u;
    // 0x3ae398: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD830u, 0x3AE394u, 0x3AE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE39Cu;
label_3ae39c:
    // 0x3ae39c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3AE39Cu;
    {
        const bool branch_taken_0x3ae39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE39Cu;
        // 0x3ae3a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae39c) {
            ctx->pc = 0x3AE418u;
            goto label_3ae418;
        }
    }
    ctx->pc = 0x3AE3A4u;
    // 0x3ae3a4: 0x0  nop
    ctx->pc = 0x3ae3a4u;
    // NOP
label_3ae3a8:
    // 0x3ae3a8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AE3A8u;
    {
        const bool branch_taken_0x3ae3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae3a8) {
            ctx->pc = 0x3AE3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE3A8u;
            // 0x3ae3ac: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE40Cu;
            goto label_3ae40c;
        }
    }
    ctx->pc = 0x3AE3B0u;
    // 0x3ae3b0: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x3ae3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x3ae3b4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3AE3B4u;
    {
        const bool branch_taken_0x3ae3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae3b4) {
            ctx->pc = 0x3AE3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE3B4u;
            // 0x3ae3b8: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE3F0u;
            goto label_3ae3f0;
        }
    }
    ctx->pc = 0x3AE3BCu;
    // 0x3ae3bc: 0x856200a4  lh          $v0, 0xA4($t3)
    ctx->pc = 0x3ae3bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x3ae3c0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3AE3C0u;
    {
        const bool branch_taken_0x3ae3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae3c0) {
            ctx->pc = 0x3AE3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE3C0u;
            // 0x3ae3c4: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE3F0u;
            goto label_3ae3f0;
        }
    }
    ctx->pc = 0x3AE3C8u;
    // 0x3ae3c8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ae3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ae3cc: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ae3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3ae3d0: 0x94433714  lhu         $v1, 0x3714($v0)
    ctx->pc = 0x3ae3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x423714u));
    // 0x3ae3d4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x3ae3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x3ae3d8: 0xa56300a0  sh          $v1, 0xA0($t3)
    ctx->pc = 0x3ae3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ae3dc: 0x94823716  lhu         $v0, 0x3716($a0)
    ctx->pc = 0x3ae3dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x423716u));
    // 0x3ae3e0: 0xa56200a2  sh          $v0, 0xA2($t3)
    ctx->pc = 0x3ae3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae3e4: 0x94a33718  lhu         $v1, 0x3718($a1)
    ctx->pc = 0x3ae3e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x423718u));
    // 0x3ae3e8: 0xa56300a4  sh          $v1, 0xA4($t3)
    ctx->pc = 0x3ae3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ae3ec: 0x956200a0  lhu         $v0, 0xA0($t3)
    ctx->pc = 0x3ae3ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
label_3ae3f0:
    // 0x3ae3f0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3ae3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae3f4: 0x956300a2  lhu         $v1, 0xA2($t3)
    ctx->pc = 0x3ae3f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 162)));
    // 0x3ae3f8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x3ae3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ae3fc: 0x956200a4  lhu         $v0, 0xA4($t3)
    ctx->pc = 0x3ae3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x3ae400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE400u;
    {
        const bool branch_taken_0x3ae400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE400u;
        // 0x3ae404: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae400) {
            ctx->pc = 0x3AE414u;
            goto label_3ae414;
        }
    }
    ctx->pc = 0x3AE408u;
label_3ae408:
    // 0x3ae408: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x3ae408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_3ae40c:
    // 0x3ae40c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3ae40cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ae410: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x3ae410u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_3ae414:
    // 0x3ae414: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ae414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae418:
    // 0x3ae418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae41c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ae41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae420: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ae420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae424: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3ae424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ae428: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE428u;
        // 0x3ae42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE430u;
}
