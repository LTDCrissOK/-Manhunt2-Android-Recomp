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

// Function: sub_001EC300
// Address: 0x1ec300 - 0x1ec420
void sub_001EC300_0x1ec300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC300_0x1ec300");
#endif

    switch (ctx->pc) {
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3e4u: goto label_1ec3e4;
        default: break;
    }

    ctx->pc = 0x1ec300u;

    // 0x1ec300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ec304: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ec304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ec308: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ec308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ec30c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec310: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ec310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ec314: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ec314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec318: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1ec318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1ec31c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1ec31cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec320: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1ec320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1ec324: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1ec324u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec328: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1ec328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1ec32c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1ec32cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec330: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ec330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ec334: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1ec334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec338: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ec338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ec33c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ec33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ec340: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ec340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ec344: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ec344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec348: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EC348u;
    {
        const bool branch_taken_0x1ec348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC348u;
        // 0x1ec34c: 0xafaa0000  sw          $t2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec348) {
            ctx->pc = 0x1EC3ECu;
            goto label_1ec3ec;
        }
    }
    ctx->pc = 0x1EC350u;
    // 0x1ec350: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ec350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ec354: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1ec354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ec358: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1ec358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1ec35c: 0x4600024  bltz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EC35Cu;
    {
        const bool branch_taken_0x1ec35c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC35Cu;
        // 0x1ec360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec35c) {
            ctx->pc = 0x1EC3F0u;
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC364u;
    // 0x1ec364: 0x8e2215e8  lw          $v0, 0x15E8($s1)
    ctx->pc = 0x1ec364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5608)));
    // 0x1ec368: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EC368u;
    {
        const bool branch_taken_0x1ec368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC368u;
        // 0x1ec36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec368) {
            ctx->pc = 0x1EC3F0u;
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC370u;
    // 0x1ec370: 0x92220d80  lbu         $v0, 0xD80($s1)
    ctx->pc = 0x1ec370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3456)));
    // 0x1ec374: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x1ec374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1ec378: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EC378u;
    {
        const bool branch_taken_0x1ec378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC378u;
        // 0x1ec37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec378) {
            ctx->pc = 0x1EC3F0u;
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC380u;
    // 0x1ec380: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC380u;
    {
        const bool branch_taken_0x1ec380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC380u;
        // 0x1ec384: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec380) {
            ctx->pc = 0x1EC3F4u;
            goto label_1ec3f4;
        }
    }
    ctx->pc = 0x1EC388u;
    // 0x1ec388: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1ec38c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ec38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec390: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x1ec390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1ec394: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EC394u;
    {
        const bool branch_taken_0x1ec394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC394u;
        // 0x1ec398: 0x34108d90  ori         $s0, $zero, 0x8D90 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec394) {
            ctx->pc = 0x1EC3ECu;
            goto label_1ec3ec;
        }
    }
    ctx->pc = 0x1EC39Cu;
    // 0x1ec39c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1ec39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ec3a0: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1EC3A0u;
    SET_GPR_U32(ctx, 31, 0x1EC3A8u);
    ctx->pc = 0x1EC3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3A0u;
    // 0x1ec3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1EC3A0u, 0x1EC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3A8u;
label_1ec3a8:
    // 0x1ec3a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ec3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ec3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ec3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ec3bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1ec3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3c0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ec3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec3c4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ec3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3c8: 0xae340dc0  sw          $s4, 0xDC0($s1)
    ctx->pc = 0x1ec3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3520), GPR_U32(ctx, 20));
    // 0x1ec3cc: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1ec3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3d0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ec3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec3d4: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x1ec3d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec3d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ec3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ec3dc: 0xc07afe4  jal         func_1EBF90
    ctx->pc = 0x1EC3DCu;
    SET_GPR_U32(ctx, 31, 0x1EC3E4u);
    ctx->pc = 0x1EC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3DCu;
    // 0x1ec3e0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF90u, 0x1EC3DCu, 0x1EC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3E4u;
label_1ec3e4:
    // 0x1ec3e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC3E4u;
    {
        const bool branch_taken_0x1ec3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E4u;
        // 0x1ec3e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3e4) {
            ctx->pc = 0x1EC3F4u;
            goto label_1ec3f4;
        }
    }
    ctx->pc = 0x1EC3ECu;
label_1ec3ec:
    // 0x1ec3ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3f0:
    // 0x1ec3f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ec3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec3f4:
    // 0x1ec3f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ec3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec3f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ec3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec3fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ec3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec400: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ec400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec404: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ec404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec408: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1ec408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec40c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1ec40cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec410: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1ec410u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec414: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ec414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ec418: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC418u;
        // 0x1ec41c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC420u;
}
