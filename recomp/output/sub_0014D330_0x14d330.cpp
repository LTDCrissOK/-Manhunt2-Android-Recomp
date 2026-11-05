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

// Function: sub_0014D330
// Address: 0x14d330 - 0x14d3e0
void sub_0014D330_0x14d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D330_0x14d330");
#endif

    switch (ctx->pc) {
        case 0x14d330u: goto label_14d330;
        case 0x14d334u: goto label_14d334;
        case 0x14d338u: goto label_14d338;
        case 0x14d33cu: goto label_14d33c;
        case 0x14d340u: goto label_14d340;
        case 0x14d344u: goto label_14d344;
        case 0x14d348u: goto label_14d348;
        case 0x14d34cu: goto label_14d34c;
        case 0x14d350u: goto label_14d350;
        case 0x14d354u: goto label_14d354;
        case 0x14d358u: goto label_14d358;
        case 0x14d35cu: goto label_14d35c;
        case 0x14d360u: goto label_14d360;
        case 0x14d364u: goto label_14d364;
        case 0x14d368u: goto label_14d368;
        case 0x14d36cu: goto label_14d36c;
        case 0x14d370u: goto label_14d370;
        case 0x14d374u: goto label_14d374;
        case 0x14d378u: goto label_14d378;
        case 0x14d37cu: goto label_14d37c;
        case 0x14d380u: goto label_14d380;
        case 0x14d384u: goto label_14d384;
        case 0x14d388u: goto label_14d388;
        case 0x14d38cu: goto label_14d38c;
        case 0x14d390u: goto label_14d390;
        case 0x14d394u: goto label_14d394;
        case 0x14d398u: goto label_14d398;
        case 0x14d39cu: goto label_14d39c;
        case 0x14d3a0u: goto label_14d3a0;
        case 0x14d3a4u: goto label_14d3a4;
        case 0x14d3a8u: goto label_14d3a8;
        case 0x14d3acu: goto label_14d3ac;
        case 0x14d3b0u: goto label_14d3b0;
        case 0x14d3b4u: goto label_14d3b4;
        case 0x14d3b8u: goto label_14d3b8;
        case 0x14d3bcu: goto label_14d3bc;
        case 0x14d3c0u: goto label_14d3c0;
        case 0x14d3c4u: goto label_14d3c4;
        case 0x14d3c8u: goto label_14d3c8;
        case 0x14d3ccu: goto label_14d3cc;
        case 0x14d3d0u: goto label_14d3d0;
        case 0x14d3d4u: goto label_14d3d4;
        case 0x14d3d8u: goto label_14d3d8;
        case 0x14d3dcu: goto label_14d3dc;
        default: break;
    }

    ctx->pc = 0x14d330u;

label_14d330:
    // 0x14d330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14d334:
    // 0x14d334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14d338:
    // 0x14d338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14d33c:
    // 0x14d33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d340:
    // 0x14d340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14d344:
    // 0x14d344: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14d344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14d348:
    // 0x14d348: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_14d34c:
    if (ctx->pc == 0x14D34Cu) {
        ctx->pc = 0x14D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D348u;
        // 0x14d34c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D350u;
        goto label_14d350;
    }
    ctx->pc = 0x14D348u;
    {
        const bool branch_taken_0x14d348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d348) {
            ctx->pc = 0x14D34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D348u;
            // 0x14d34c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D3D0u;
            goto label_14d3d0;
        }
    }
    ctx->pc = 0x14D350u;
label_14d350:
    // 0x14d350: 0xc04db02  jal         func_136C08
label_14d354:
    if (ctx->pc == 0x14D354u) {
        ctx->pc = 0x14D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D350u;
        // 0x14d354: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D358u;
        goto label_14d358;
    }
    ctx->pc = 0x14D350u;
    SET_GPR_U32(ctx, 31, 0x14D358u);
    ctx->pc = 0x14D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D350u;
    // 0x14d354: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x14D350u, 0x14D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D358u;
label_14d358:
    // 0x14d358: 0x10000003  b           . + 4 + (0x3 << 2)
label_14d35c:
    if (ctx->pc == 0x14D35Cu) {
        ctx->pc = 0x14D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D358u;
        // 0x14d35c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D360u;
        goto label_14d360;
    }
    ctx->pc = 0x14D358u;
    {
        const bool branch_taken_0x14d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D358u;
        // 0x14d35c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d358) {
            ctx->pc = 0x14D368u;
            goto label_14d368;
        }
    }
    ctx->pc = 0x14D360u;
label_14d360:
    // 0x14d360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14d364:
    // 0x14d364: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x14d364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_14d368:
    // 0x14d368: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14d368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14d36c:
    // 0x14d36c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x14d36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_14d370:
    // 0x14d370: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_14d374:
    if (ctx->pc == 0x14D374u) {
        ctx->pc = 0x14D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D370u;
        // 0x14d374: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D378u;
        goto label_14d378;
    }
    ctx->pc = 0x14D370u;
    {
        const bool branch_taken_0x14d370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d370) {
            ctx->pc = 0x14D374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D370u;
            // 0x14d374: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D3C0u;
            goto label_14d3c0;
        }
    }
    ctx->pc = 0x14D378u;
label_14d378:
    // 0x14d378: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14d378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14d37c:
    // 0x14d37c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14d380:
    // 0x14d380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14d384:
    // 0x14d384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14d388:
    // 0x14d388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14d38c:
    // 0x14d38c: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_14d390:
    if (ctx->pc == 0x14D390u) {
        ctx->pc = 0x14D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D38Cu;
        // 0x14d390: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D394u;
        goto label_14d394;
    }
    ctx->pc = 0x14D38Cu;
    {
        const bool branch_taken_0x14d38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d38c) {
            ctx->pc = 0x14D390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D38Cu;
            // 0x14d390: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d360;
        }
    }
    ctx->pc = 0x14D394u;
label_14d394:
    // 0x14d394: 0xc053606  jal         func_14D818
label_14d398:
    if (ctx->pc == 0x14D398u) {
        ctx->pc = 0x14D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D394u;
        // 0x14d398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D39Cu;
        goto label_14d39c;
    }
    ctx->pc = 0x14D394u;
    SET_GPR_U32(ctx, 31, 0x14D39Cu);
    ctx->pc = 0x14D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D394u;
    // 0x14d398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D818u, 0x14D394u, 0x14D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D39Cu;
label_14d39c:
    // 0x14d39c: 0x8e050560  lw          $a1, 0x560($s0)
    ctx->pc = 0x14d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
label_14d3a0:
    // 0x14d3a0: 0xc04d80c  jal         func_136030
label_14d3a4:
    if (ctx->pc == 0x14D3A4u) {
        ctx->pc = 0x14D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3A0u;
        // 0x14d3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D3A8u;
        goto label_14d3a8;
    }
    ctx->pc = 0x14D3A0u;
    SET_GPR_U32(ctx, 31, 0x14D3A8u);
    ctx->pc = 0x14D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3A0u;
    // 0x14d3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x14D3A0u, 0x14D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3A8u;
label_14d3a8:
    // 0x14d3a8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14d3ac:
    // 0x14d3ac: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x14d3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14d3b0:
    // 0x14d3b0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14d3b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14d3b4:
    // 0x14d3b4: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_14d3b8:
    if (ctx->pc == 0x14D3B8u) {
        ctx->pc = 0x14D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3B4u;
        // 0x14d3b8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D3BCu;
        goto label_14d3bc;
    }
    ctx->pc = 0x14D3B4u;
    {
        const bool branch_taken_0x14d3b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d3b4) {
            ctx->pc = 0x14D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D3B4u;
            // 0x14d3b8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d360;
        }
    }
    ctx->pc = 0x14D3BCu;
label_14d3bc:
    // 0x14d3bc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14d3c0:
    // 0x14d3c0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x14d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14d3c4:
    // 0x14d3c4: 0x40f809  jalr        $v0
label_14d3c8:
    if (ctx->pc == 0x14D3C8u) {
        ctx->pc = 0x14D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3C4u;
        // 0x14d3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D3CCu;
        goto label_14d3cc;
    }
    ctx->pc = 0x14D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14D3CCu);
        ctx->pc = 0x14D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3C4u;
        // 0x14d3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3C4u, 0x14D3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D3CCu;
label_14d3cc:
    // 0x14d3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d3d0:
    // 0x14d3d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14d3d4:
    // 0x14d3d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14d3d8:
    // 0x14d3d8: 0x3e00008  jr          $ra
label_14d3dc:
    if (ctx->pc == 0x14D3DCu) {
        ctx->pc = 0x14D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3D8u;
        // 0x14d3dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D3E0u;
        goto label_fallthrough_0x14d3d8;
    }
    ctx->pc = 0x14D3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3D8u;
        // 0x14d3dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d3d8:
    ctx->pc = 0x14D3E0u;
}
