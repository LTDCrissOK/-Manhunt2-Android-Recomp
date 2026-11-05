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

// Function: sub_001EC540
// Address: 0x1ec540 - 0x1ec758
void sub_001EC540_0x1ec540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC540_0x1ec540");
#endif

    switch (ctx->pc) {
        case 0x1ec60cu: goto label_1ec60c;
        case 0x1ec644u: goto label_1ec644;
        case 0x1ec67cu: goto label_1ec67c;
        case 0x1ec6d0u: goto label_1ec6d0;
        case 0x1ec720u: goto label_1ec720;
        default: break;
    }

    ctx->pc = 0x1ec540u;

    // 0x1ec540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ec544: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ec544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ec548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec54c: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x1ec54cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ec550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec554: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ec554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ec558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ec55c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ec55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec560: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ec560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ec564: 0x313300ff  andi        $s3, $t1, 0xFF
    ctx->pc = 0x1ec564u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1ec568: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ec568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ec56c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec570: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1ec570u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ec574: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ec574u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec578: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ec578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ec57c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1ec57cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1ec580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec584: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ec584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ec588: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ec588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ec58c: 0x2ea20045  sltiu       $v0, $s5, 0x45
    ctx->pc = 0x1ec58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x1ec590: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1EC590u;
    {
        const bool branch_taken_0x1ec590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC590u;
        // 0x1ec594: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec590) {
            ctx->pc = 0x1EC720u;
            goto label_1ec720;
        }
    }
    ctx->pc = 0x1EC598u;
    // 0x1ec598: 0x2e620045  sltiu       $v0, $s3, 0x45
    ctx->pc = 0x1ec598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x1ec59c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1EC59Cu;
    {
        const bool branch_taken_0x1ec59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC59Cu;
        // 0x1ec5a0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec59c) {
            ctx->pc = 0x1EC720u;
            goto label_1ec720;
        }
    }
    ctx->pc = 0x1EC5A4u;
    // 0x1ec5a4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC5A4u;
    {
        const bool branch_taken_0x1ec5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5A4u;
        // 0x1ec5a8: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5a4) {
            ctx->pc = 0x1EC5CCu;
            goto label_1ec5cc;
        }
    }
    ctx->pc = 0x1EC5ACu;
    // 0x1ec5ac: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1ec5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1ec5b0: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x1ec5b4: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x1ec5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x1ec5b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC5B8u;
    {
        const bool branch_taken_0x1ec5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec5b8) {
            ctx->pc = 0x1EC5CCu;
            goto label_1ec5cc;
        }
    }
    ctx->pc = 0x1EC5C0u;
    // 0x1ec5c0: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x1ec5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1ec5c4: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x1EC5C4u;
    {
        const bool branch_taken_0x1ec5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec5c4) {
            ctx->pc = 0x1EC5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC5C4u;
            // 0x1ec5c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC724u;
            goto label_1ec724;
        }
    }
    ctx->pc = 0x1EC5CCu;
label_1ec5cc:
    // 0x1ec5cc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC5CCu;
    {
        const bool branch_taken_0x1ec5cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5CCu;
        // 0x1ec5d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5cc) {
            ctx->pc = 0x1EC5F4u;
            goto label_1ec5f4;
        }
    }
    ctx->pc = 0x1EC5D4u;
    // 0x1ec5d4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ec5d8: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x1ec5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x1ec5dc: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x1ec5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x1ec5e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC5E0u;
    {
        const bool branch_taken_0x1ec5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5E0u;
        // 0x1ec5e4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5e0) {
            ctx->pc = 0x1EC5F4u;
            goto label_1ec5f4;
        }
    }
    ctx->pc = 0x1EC5E8u;
    // 0x1ec5e8: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x1ec5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x1ec5ec: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1EC5ECu;
    {
        const bool branch_taken_0x1ec5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ECu;
        // 0x1ec5f0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5ec) {
            ctx->pc = 0x1EC720u;
            goto label_1ec720;
        }
    }
    ctx->pc = 0x1EC5F4u;
label_1ec5f4:
    // 0x1ec5f4: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EC5F4u;
    {
        const bool branch_taken_0x1ec5f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5F4u;
        // 0x1ec5f8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5f4) {
            ctx->pc = 0x1EC62Cu;
            goto label_1ec62c;
        }
    }
    ctx->pc = 0x1EC5FCu;
    // 0x1ec5fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC5FCu;
    {
        const bool branch_taken_0x1ec5fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec5fc) {
            ctx->pc = 0x1EC62Cu;
            goto label_1ec62c;
        }
    }
    ctx->pc = 0x1EC604u;
    // 0x1ec604: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x1EC604u;
    SET_GPR_U32(ctx, 31, 0x1EC60Cu);
    ctx->pc = 0x1EC608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC604u;
    // 0x1ec608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x1EC604u, 0x1EC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC60Cu;
label_1ec60c:
    // 0x1ec60c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1ec60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1ec610: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC610u;
    {
        const bool branch_taken_0x1ec610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC610u;
        // 0x1ec614: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec610) {
            ctx->pc = 0x1EC62Cu;
            goto label_1ec62c;
        }
    }
    ctx->pc = 0x1EC618u;
    // 0x1ec618: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x1ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1ec61c: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x1ec61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ec620: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1ec624: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EC624u;
    {
        const bool branch_taken_0x1ec624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC624u;
        // 0x1ec628: 0x90750054  lbu         $s5, 0x54($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec624) {
            ctx->pc = 0x1EC660u;
            goto label_1ec660;
        }
    }
    ctx->pc = 0x1EC62Cu;
label_1ec62c:
    // 0x1ec62c: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EC62Cu;
    {
        const bool branch_taken_0x1ec62c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC62Cu;
        // 0x1ec630: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec62c) {
            ctx->pc = 0x1EC664u;
            goto label_1ec664;
        }
    }
    ctx->pc = 0x1EC634u;
    // 0x1ec634: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC634u;
    {
        const bool branch_taken_0x1ec634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC634u;
        // 0x1ec638: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec634) {
            ctx->pc = 0x1EC668u;
            goto label_1ec668;
        }
    }
    ctx->pc = 0x1EC63Cu;
    // 0x1ec63c: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x1EC63Cu;
    SET_GPR_U32(ctx, 31, 0x1EC644u);
    ctx->pc = 0x1EC640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC63Cu;
    // 0x1ec640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x1EC63Cu, 0x1EC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC644u;
label_1ec644:
    // 0x1ec644: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1ec644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1ec648: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC648u;
    {
        const bool branch_taken_0x1ec648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC648u;
        // 0x1ec64c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec648) {
            ctx->pc = 0x1EC664u;
            goto label_1ec664;
        }
    }
    ctx->pc = 0x1EC650u;
    // 0x1ec650: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x1ec650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1ec654: 0x8c520034  lw          $s2, 0x34($v0)
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ec658: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x1ec65c: 0x90730054  lbu         $s3, 0x54($v1)
    ctx->pc = 0x1ec65cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_1ec660:
    // 0x1ec660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec664:
    // 0x1ec664: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ec664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ec668:
    // 0x1ec668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ec668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec66c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ec66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec670: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ec670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec674: 0xc07baf2  jal         func_1EEBC8
    ctx->pc = 0x1EC674u;
    SET_GPR_U32(ctx, 31, 0x1EC67Cu);
    ctx->pc = 0x1EC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC674u;
    // 0x1ec678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEBC8u, 0x1EC674u, 0x1EC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC67Cu;
label_1ec67c:
    // 0x1ec67c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ec67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ec680: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EC680u;
    {
        const bool branch_taken_0x1ec680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC680u;
        // 0x1ec684: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec680) {
            ctx->pc = 0x1EC720u;
            goto label_1ec720;
        }
    }
    ctx->pc = 0x1EC688u;
    // 0x1ec688: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1ec688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec68c: 0x8e031334  lw          $v1, 0x1334($s0)
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x1ec690: 0x4620024  bltzl       $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EC690u;
    {
        const bool branch_taken_0x1ec690 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ec690) {
            ctx->pc = 0x1EC694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC690u;
            // 0x1ec694: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC724u;
            goto label_1ec724;
        }
    }
    ctx->pc = 0x1EC698u;
    // 0x1ec698: 0x8e0215e8  lw          $v0, 0x15E8($s0)
    ctx->pc = 0x1ec698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5608)));
    // 0x1ec69c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EC69Cu;
    {
        const bool branch_taken_0x1ec69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec69c) {
            ctx->pc = 0x1EC6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC69Cu;
            // 0x1ec6a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC724u;
            goto label_1ec724;
        }
    }
    ctx->pc = 0x1EC6A4u;
    // 0x1ec6a4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ec6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ec6a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ec6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ec6ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec6b0: 0x0  nop
    ctx->pc = 0x1ec6b0u;
    // NOP
    // 0x1ec6b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ec6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec6b8: 0x0  nop
    ctx->pc = 0x1ec6b8u;
    // NOP
    // 0x1ec6bc: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1EC6BCu;
    {
        const bool branch_taken_0x1ec6bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec6bc) {
            ctx->pc = 0x1EC6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC6BCu;
            // 0x1ec6c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC724u;
            goto label_1ec724;
        }
    }
    ctx->pc = 0x1EC6C4u;
    // 0x1ec6c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ec6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6c8: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1EC6C8u;
    SET_GPR_U32(ctx, 31, 0x1EC6D0u);
    ctx->pc = 0x1EC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6C8u;
    // 0x1ec6cc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1EC6C8u, 0x1EC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6D0u;
label_1ec6d0:
    // 0x1ec6d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1ec6d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1ec6d4: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x1ec6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x1ec6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec6dc: 0x0  nop
    ctx->pc = 0x1ec6dcu;
    // NOP
    // 0x1ec6e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec6e4: 0x0  nop
    ctx->pc = 0x1ec6e4u;
    // NOP
    // 0x1ec6e8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1EC6E8u;
    {
        const bool branch_taken_0x1ec6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E8u;
        // 0x1ec6ec: 0x340280d0  ori         $v0, $zero, 0x80D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6e8) {
            ctx->pc = 0x1EC720u;
            goto label_1ec720;
        }
    }
    ctx->pc = 0x1EC6F0u;
    // 0x1ec6f0: 0xae1100b0  sw          $s1, 0xB0($s0)
    ctx->pc = 0x1ec6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
    // 0x1ec6f4: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x1ec6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
    // 0x1ec6f8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec6fc: 0xa21500b8  sb          $s5, 0xB8($s0)
    ctx->pc = 0x1ec6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 21));
    // 0x1ec700: 0xa21300b9  sb          $s3, 0xB9($s0)
    ctx->pc = 0x1ec700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 19));
    // 0x1ec704: 0xe61400bc  swc1        $f20, 0xBC($s0)
    ctx->pc = 0x1ec704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1ec708: 0xe61500c0  swc1        $f21, 0xC0($s0)
    ctx->pc = 0x1ec708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1ec70c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1ec70cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ec710: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ec710u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec714: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x1ec714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1ec718: 0xc07b1d6  jal         func_1EC758
    ctx->pc = 0x1EC718u;
    SET_GPR_U32(ctx, 31, 0x1EC720u);
    ctx->pc = 0x1EC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC718u;
    // 0x1ec71c: 0x26847ba0  addiu       $a0, $s4, 0x7BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC758u, 0x1EC718u, 0x1EC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC720u;
label_1ec720:
    // 0x1ec720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec724:
    // 0x1ec724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec72c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec72cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec730: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec734: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ec734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec738: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ec738u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec73c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ec73cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec740: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ec740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec744: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1ec744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ec748: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ec748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec74c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC74Cu;
        // 0x1ec750: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC754u;
    // 0x1ec754: 0x0  nop
    ctx->pc = 0x1ec754u;
    // NOP
    ctx->pc = 0x1ec758u;
}
