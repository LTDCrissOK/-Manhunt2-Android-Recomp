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

// Function: sub_00109280
// Address: 0x109280 - 0x1094f8
void sub_00109280_0x109280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109280_0x109280");
#endif

    switch (ctx->pc) {
        case 0x1092d0u: goto label_1092d0;
        case 0x1092f0u: goto label_1092f0;
        case 0x109304u: goto label_109304;
        case 0x109374u: goto label_109374;
        case 0x109384u: goto label_109384;
        case 0x1093c8u: goto label_1093c8;
        case 0x1093d8u: goto label_1093d8;
        case 0x1093e8u: goto label_1093e8;
        case 0x1093f8u: goto label_1093f8;
        case 0x109408u: goto label_109408;
        case 0x109418u: goto label_109418;
        case 0x109468u: goto label_109468;
        case 0x109498u: goto label_109498;
        case 0x1094a8u: goto label_1094a8;
        case 0x1094c8u: goto label_1094c8;
        default: break;
    }

    ctx->pc = 0x109280u;

    // 0x109280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x109284: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10928c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10928cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x109298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10929c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1092a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1092a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1092a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1092a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1092a8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1092a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1092ac: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1092acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1092b0: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x1092b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1092b4: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1092B4u;
    {
        const bool branch_taken_0x1092b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092B4u;
        // 0x1092b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092b4) {
            ctx->pc = 0x1094CCu;
            goto label_1094cc;
        }
    }
    ctx->pc = 0x1092BCu;
    // 0x1092bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1092c0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1092C0u;
    {
        const bool branch_taken_0x1092c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092C0u;
        // 0x1092c4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092c0) {
            ctx->pc = 0x1094D0u;
            goto label_1094d0;
        }
    }
    ctx->pc = 0x1092C8u;
    // 0x1092c8: 0xc0430ee  jal         func_10C3B8
    ctx->pc = 0x1092C8u;
    SET_GPR_U32(ctx, 31, 0x1092D0u);
    ctx->pc = 0x1092CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092C8u;
    // 0x1092cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3B8u, 0x1092C8u, 0x1092D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092D0u;
label_1092d0:
    // 0x1092d0: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x1092d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1092d4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1092D4u;
    {
        const bool branch_taken_0x1092d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092D4u;
        // 0x1092d8: 0xa26003b0  sb          $zero, 0x3B0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 944), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092d4) {
            ctx->pc = 0x109480u;
            goto label_109480;
        }
    }
    ctx->pc = 0x1092DCu;
    // 0x1092dc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1092e0: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x1092e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x1092e4: 0x245e9a08  addiu       $fp, $v0, -0x65F8
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1092e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1092e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1092ec: 0x0  nop
    ctx->pc = 0x1092ecu;
    // NOP
label_1092f0:
    // 0x1092f0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1092f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1092f4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1092f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1092f8: 0x8c71001c  lw          $s1, 0x1C($v1)
    ctx->pc = 0x1092f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1092fc: 0xc04384e  jal         func_10E138
    ctx->pc = 0x1092FCu;
    SET_GPR_U32(ctx, 31, 0x109304u);
    ctx->pc = 0x109300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092FCu;
    // 0x109300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E138u, 0x1092FCu, 0x109304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109304u;
label_109304:
    // 0x109304: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x109308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109308u;
    {
        const bool branch_taken_0x109308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109308u;
        // 0x10930c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109308) {
            ctx->pc = 0x109320u;
            goto label_109320;
        }
    }
    ctx->pc = 0x109310u;
    // 0x109310: 0x926203b0  lbu         $v0, 0x3B0($s3)
    ctx->pc = 0x109310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 944)));
    // 0x109314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10931c: 0xa26203b0  sb          $v0, 0x3B0($s3)
    ctx->pc = 0x10931cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 944), (uint8_t)GPR_U32(ctx, 2));
label_109320:
    // 0x109320: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x109320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x109324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109328: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x109328u;
    {
        const bool branch_taken_0x109328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109328u;
        // 0x10932c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109328) {
            ctx->pc = 0x109468u;
            goto label_109468;
        }
    }
    ctx->pc = 0x109330u;
    // 0x109330: 0x27d40108  addiu       $s4, $fp, 0x108
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x109334: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x109338: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x109338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10933c: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x10933Cu;
    {
        const bool branch_taken_0x10933c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x109340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10933Cu;
        // 0x109340: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10933c) {
            ctx->pc = 0x10946Cu;
            goto label_10946c;
        }
    }
    ctx->pc = 0x109344u;
    // 0x109344: 0x8e03036c  lw          $v1, 0x36C($s0)
    ctx->pc = 0x109344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x109348: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x109348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x10934c: 0x10570046  beq         $v0, $s7, . + 4 + (0x46 << 2)
    ctx->pc = 0x10934Cu;
    {
        const bool branch_taken_0x10934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x109350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10934Cu;
        // 0x109350: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10934c) {
            ctx->pc = 0x109468u;
            goto label_109468;
        }
    }
    ctx->pc = 0x109354u;
    // 0x109354: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109354u;
    {
        const bool branch_taken_0x109354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109354u;
        // 0x109358: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109354) {
            ctx->pc = 0x109368u;
            goto label_109368;
        }
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x10935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x109360: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109360u;
    {
        const bool branch_taken_0x109360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109360) {
            ctx->pc = 0x10937Cu;
            goto label_10937c;
        }
    }
    ctx->pc = 0x109368u;
label_109368:
    // 0x109368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10936c: 0xc095528  jal         func_2554A0
    ctx->pc = 0x10936Cu;
    SET_GPR_U32(ctx, 31, 0x109374u);
    ctx->pc = 0x109370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10936Cu;
    // 0x109370: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554A0u, 0x10936Cu, 0x109374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109374u;
label_109374:
    // 0x109374: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x109374u;
    {
        const bool branch_taken_0x109374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109374u;
        // 0x109378: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109374) {
            ctx->pc = 0x10946Cu;
            goto label_10946c;
        }
    }
    ctx->pc = 0x10937Cu;
label_10937c:
    // 0x10937c: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x10937Cu;
    SET_GPR_U32(ctx, 31, 0x109384u);
    ctx->pc = 0x109380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10937Cu;
    // 0x109380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F340u, 0x10937Cu, 0x109384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109384u;
label_109384:
    // 0x109384: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x109384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109388: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x109388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10938c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10938cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109390: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x109390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x109394: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109398: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x109398u;
    {
        const bool branch_taken_0x109398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109398) {
            ctx->pc = 0x10939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109398u;
            // 0x10939c: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1093A8u;
            goto label_1093a8;
        }
    }
    ctx->pc = 0x1093A0u;
    // 0x1093a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1093A0u;
    {
        const bool branch_taken_0x1093a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093A0u;
        // 0x1093a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093a0) {
            ctx->pc = 0x1093B0u;
            goto label_1093b0;
        }
    }
    ctx->pc = 0x1093A8u;
label_1093a8:
    // 0x1093a8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1093a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1093ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1093acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1093b0:
    // 0x1093b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1093B0u;
    {
        const bool branch_taken_0x1093b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1093B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093B0u;
        // 0x1093b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093b0) {
            ctx->pc = 0x1093C0u;
            goto label_1093c0;
        }
    }
    ctx->pc = 0x1093B8u;
    // 0x1093b8: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1093B8u;
    {
        const bool branch_taken_0x1093b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1093b8) {
            ctx->pc = 0x1093F0u;
            goto label_1093f0;
        }
    }
    ctx->pc = 0x1093C0u;
label_1093c0:
    // 0x1093c0: 0xc044282  jal         func_110A08
    ctx->pc = 0x1093C0u;
    SET_GPR_U32(ctx, 31, 0x1093C8u);
    ctx->pc = 0x1093C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093C0u;
    // 0x1093c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110A08u, 0x1093C0u, 0x1093C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093C8u;
label_1093c8:
    // 0x1093c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1093C8u;
    {
        const bool branch_taken_0x1093c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C8u;
        // 0x1093cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093c8) {
            ctx->pc = 0x1093E0u;
            goto label_1093e0;
        }
    }
    ctx->pc = 0x1093D0u;
    // 0x1093d0: 0xc095528  jal         func_2554A0
    ctx->pc = 0x1093D0u;
    SET_GPR_U32(ctx, 31, 0x1093D8u);
    ctx->pc = 0x1093D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093D0u;
    // 0x1093d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554A0u, 0x1093D0u, 0x1093D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093D8u;
label_1093d8:
    // 0x1093d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1093D8u;
    {
        const bool branch_taken_0x1093d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1093d8) {
            ctx->pc = 0x109418u;
            goto label_109418;
        }
    }
    ctx->pc = 0x1093E0u;
label_1093e0:
    // 0x1093e0: 0xc095528  jal         func_2554A0
    ctx->pc = 0x1093E0u;
    SET_GPR_U32(ctx, 31, 0x1093E8u);
    ctx->pc = 0x1093E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093E0u;
    // 0x1093e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554A0u, 0x1093E0u, 0x1093E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093E8u;
label_1093e8:
    // 0x1093e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1093E8u;
    {
        const bool branch_taken_0x1093e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1093e8) {
            ctx->pc = 0x109418u;
            goto label_109418;
        }
    }
    ctx->pc = 0x1093F0u;
label_1093f0:
    // 0x1093f0: 0xc043ce2  jal         func_10F388
    ctx->pc = 0x1093F0u;
    SET_GPR_U32(ctx, 31, 0x1093F8u);
    ctx->pc = 0x1093F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093F0u;
    // 0x1093f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F388u, 0x1093F0u, 0x1093F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093F8u;
label_1093f8:
    // 0x1093f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1093F8u;
    {
        const bool branch_taken_0x1093f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093F8u;
        // 0x1093fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093f8) {
            ctx->pc = 0x109410u;
            goto label_109410;
        }
    }
    ctx->pc = 0x109400u;
    // 0x109400: 0xc095528  jal         func_2554A0
    ctx->pc = 0x109400u;
    SET_GPR_U32(ctx, 31, 0x109408u);
    ctx->pc = 0x109404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109400u;
    // 0x109404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554A0u, 0x109400u, 0x109408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109408u;
label_109408:
    // 0x109408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109408u;
    {
        const bool branch_taken_0x109408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109408) {
            ctx->pc = 0x109418u;
            goto label_109418;
        }
    }
    ctx->pc = 0x109410u;
label_109410:
    // 0x109410: 0xc095528  jal         func_2554A0
    ctx->pc = 0x109410u;
    SET_GPR_U32(ctx, 31, 0x109418u);
    ctx->pc = 0x109414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109410u;
    // 0x109414: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554A0u, 0x109410u, 0x109418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109418u;
label_109418:
    // 0x109418: 0x16a00014  bnez        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x109418u;
    {
        const bool branch_taken_0x109418 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x10941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109418u;
        // 0x10941c: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109418) {
            ctx->pc = 0x10946Cu;
            goto label_10946c;
        }
    }
    ctx->pc = 0x109420u;
    // 0x109420: 0x56c00013  bnel        $s6, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x109420u;
    {
        const bool branch_taken_0x109420 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x109420) {
            ctx->pc = 0x109424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109420u;
            // 0x109424: 0x926200cc  lbu         $v0, 0xCC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109470u;
            goto label_109470;
        }
    }
    ctx->pc = 0x109428u;
    // 0x109428: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x109428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10942c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x109430: 0x2444a080  addiu       $a0, $v0, -0x5F80
    ctx->pc = 0x109430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x109434: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x109434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x109438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10943c: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x10943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x109440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109444: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x109444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109448: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x109448u;
    {
        const bool branch_taken_0x109448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x109448) {
            ctx->pc = 0x10944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109448u;
            // 0x10944c: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109458u;
            goto label_109458;
        }
    }
    ctx->pc = 0x109450u;
    // 0x109450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109450u;
    {
        const bool branch_taken_0x109450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109450u;
        // 0x109454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109450) {
            ctx->pc = 0x109460u;
            goto label_109460;
        }
    }
    ctx->pc = 0x109458u;
label_109458:
    // 0x109458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10945c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x10945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_109460:
    // 0x109460: 0xc049660  jal         func_125980
    ctx->pc = 0x109460u;
    SET_GPR_U32(ctx, 31, 0x109468u);
    ctx->pc = 0x125980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125980u, 0x109460u, 0x109468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109468u;
label_109468:
    // 0x109468: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x109468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10946c:
    // 0x10946c: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x10946cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
label_109470:
    // 0x109470: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x109470u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x109474: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x109474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x109478: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x109478u;
    {
        const bool branch_taken_0x109478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109478u;
        // 0x10947c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109478) {
            ctx->pc = 0x1092F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1092f0;
        }
    }
    ctx->pc = 0x109480u;
label_109480:
    // 0x109480: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x109480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x109484: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x109484u;
    {
        const bool branch_taken_0x109484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109484u;
        // 0x109488: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109484) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x10948Cu;
    // 0x10948c: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x10948cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x109490: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x109494: 0x0  nop
    ctx->pc = 0x109494u;
    // NOP
label_109498:
    // 0x109498: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x109498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10949c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1094a0: 0xc043798  jal         func_10DE60
    ctx->pc = 0x1094A0u;
    SET_GPR_U32(ctx, 31, 0x1094A8u);
    ctx->pc = 0x1094A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094A0u;
    // 0x1094a4: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE60u, 0x1094A0u, 0x1094A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094A8u;
label_1094a8:
    // 0x1094a8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1094a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1094ac: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x1094acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1094b0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1094b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1094b4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1094b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1094b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1094B8u;
    {
        const bool branch_taken_0x1094b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1094BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094B8u;
        // 0x1094bc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094b8) {
            ctx->pc = 0x109498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109498;
        }
    }
    ctx->pc = 0x1094C0u;
label_1094c0:
    // 0x1094c0: 0xc04313e  jal         func_10C4F8
    ctx->pc = 0x1094C0u;
    SET_GPR_U32(ctx, 31, 0x1094C8u);
    ctx->pc = 0x1094C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094C0u;
    // 0x1094c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C4F8u, 0x1094C0u, 0x1094C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094C8u;
label_1094c8:
    // 0x1094c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1094c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1094cc:
    // 0x1094cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1094ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1094d0:
    // 0x1094d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1094d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1094d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1094d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1094d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1094d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1094dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1094dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1094e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1094e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1094e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1094e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1094e8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1094e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1094ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1094ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1094f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1094F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1094F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094F0u;
        // 0x1094f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1094F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1094F8u;
}
