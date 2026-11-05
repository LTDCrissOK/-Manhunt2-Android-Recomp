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

// Function: sub_003202C0
// Address: 0x3202c0 - 0x320670
void sub_003202C0_0x3202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003202C0_0x3202c0");
#endif

    switch (ctx->pc) {
        case 0x3202f8u: goto label_3202f8;
        case 0x320304u: goto label_320304;
        case 0x320314u: goto label_320314;
        case 0x320324u: goto label_320324;
        case 0x320338u: goto label_320338;
        case 0x320350u: goto label_320350;
        case 0x32035cu: goto label_32035c;
        case 0x320368u: goto label_320368;
        case 0x320370u: goto label_320370;
        case 0x320380u: goto label_320380;
        case 0x320388u: goto label_320388;
        case 0x320390u: goto label_320390;
        case 0x3203d4u: goto label_3203d4;
        case 0x3203e8u: goto label_3203e8;
        case 0x320400u: goto label_320400;
        case 0x32040cu: goto label_32040c;
        case 0x32042cu: goto label_32042c;
        case 0x32046cu: goto label_32046c;
        case 0x320490u: goto label_320490;
        case 0x3204bcu: goto label_3204bc;
        case 0x3204e0u: goto label_3204e0;
        case 0x3204f0u: goto label_3204f0;
        case 0x32050cu: goto label_32050c;
        case 0x320520u: goto label_320520;
        case 0x32052cu: goto label_32052c;
        case 0x320534u: goto label_320534;
        case 0x32055cu: goto label_32055c;
        case 0x320570u: goto label_320570;
        case 0x320594u: goto label_320594;
        case 0x3205a8u: goto label_3205a8;
        case 0x3205f4u: goto label_3205f4;
        case 0x3205fcu: goto label_3205fc;
        case 0x320604u: goto label_320604;
        case 0x320610u: goto label_320610;
        case 0x32061cu: goto label_32061c;
        case 0x320630u: goto label_320630;
        case 0x32063cu: goto label_32063c;
        default: break;
    }

    ctx->pc = 0x3202c0u;

    // 0x3202c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3202c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3202c4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3202c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x3202c8: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x3202c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x3202cc: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x3202ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x3202d0: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x3202d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x3202d4: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x3202d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x3202d8: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x3202d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x3202dc: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x3202dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x3202e0: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x3202e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x3202e4: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x3202e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x3202e8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x3202e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x3202ec: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x3202ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x3202f0: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x3202F0u;
    SET_GPR_U32(ctx, 31, 0x3202F8u);
    ctx->pc = 0x3202F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202F0u;
    // 0x3202f4: 0x2484eef0  addiu       $a0, $a0, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x3202F0u, 0x3202F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202F8u;
label_3202f8:
    // 0x3202f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3202f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202fc: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x3202FCu;
    SET_GPR_U32(ctx, 31, 0x320304u);
    ctx->pc = 0x320300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202FCu;
    // 0x320300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x3202FCu, 0x320304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320304u;
label_320304:
    // 0x320304: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x320304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x320308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x320308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32030c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x32030Cu;
    SET_GPR_U32(ctx, 31, 0x320314u);
    ctx->pc = 0x320310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32030Cu;
    // 0x320310: 0x24a5eef8  addiu       $a1, $a1, -0x1108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x32030Cu, 0x320314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320314u;
label_320314:
    // 0x320314: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x320314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x320318: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32031c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x32031Cu;
    SET_GPR_U32(ctx, 31, 0x320324u);
    ctx->pc = 0x320320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32031Cu;
    // 0x320320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x32031Cu, 0x320324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320324u;
label_320324:
    // 0x320324: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x320324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320328: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x320328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x32032c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x32032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x320330: 0xc09dd98  jal         func_277660
    ctx->pc = 0x320330u;
    SET_GPR_U32(ctx, 31, 0x320338u);
    ctx->pc = 0x320334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320330u;
    // 0x320334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x320330u, 0x320338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320338u;
label_320338:
    // 0x320338: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x320338u;
    {
        const bool branch_taken_0x320338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320338u;
        // 0x32033c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320338) {
            ctx->pc = 0x320624u;
            goto label_320624;
        }
    }
    ctx->pc = 0x320340u;
    // 0x320340: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x320340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x320344: 0x34841300  ori         $a0, $a0, 0x1300
    ctx->pc = 0x320344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4864);
    // 0x320348: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x320348u;
    SET_GPR_U32(ctx, 31, 0x320350u);
    ctx->pc = 0x32034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320348u;
    // 0x32034c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x320348u, 0x320350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320350u;
label_320350:
    // 0x320350: 0x34049c40  ori         $a0, $zero, 0x9C40
    ctx->pc = 0x320350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x320354: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x320354u;
    SET_GPR_U32(ctx, 31, 0x32035Cu);
    ctx->pc = 0x320358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320354u;
    // 0x320358: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x320354u, 0x32035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32035Cu;
label_32035c:
    // 0x32035c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x320360: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x320360u;
    SET_GPR_U32(ctx, 31, 0x320368u);
    ctx->pc = 0x320364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320360u;
    // 0x320364: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x320360u, 0x320368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320368u;
label_320368:
    // 0x320368: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x320368u;
    SET_GPR_U32(ctx, 31, 0x320370u);
    ctx->pc = 0x32036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320368u;
    // 0x32036c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x320368u, 0x320370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320370u;
label_320370:
    // 0x320370: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x320370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x320374: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x320374u;
    {
        const bool branch_taken_0x320374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320374u;
        // 0x320378: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320374) {
            ctx->pc = 0x3204E0u;
            goto label_3204e0;
        }
    }
    ctx->pc = 0x32037Cu;
    // 0x32037c: 0x0  nop
    ctx->pc = 0x32037cu;
    // NOP
label_320380:
    // 0x320380: 0xc0b65c4  jal         func_2D9710
    ctx->pc = 0x320380u;
    SET_GPR_U32(ctx, 31, 0x320388u);
    ctx->pc = 0x320384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320380u;
    // 0x320384: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9710u, 0x320380u, 0x320388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320388u;
label_320388:
    // 0x320388: 0xc0b65c8  jal         func_2D9720
    ctx->pc = 0x320388u;
    SET_GPR_U32(ctx, 31, 0x320390u);
    ctx->pc = 0x32038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320388u;
    // 0x32038c: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9720u, 0x320388u, 0x320390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320390u;
label_320390:
    // 0x320390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320394: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320394u;
    {
        const bool branch_taken_0x320394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x320398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320394u;
        // 0x320398: 0x131180  sll         $v0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320394) {
            ctx->pc = 0x3203A4u;
            goto label_3203a4;
        }
    }
    ctx->pc = 0x32039Cu;
    // 0x32039c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32039Cu;
    {
        const bool branch_taken_0x32039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32039Cu;
        // 0x3203a0: 0x2e28021  addu        $s0, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32039c) {
            ctx->pc = 0x3203A8u;
            goto label_3203a8;
        }
    }
    ctx->pc = 0x3203A4u;
label_3203a4:
    // 0x3203a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3203a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3203a8:
    // 0x3203a8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3203A8u;
    {
        const bool branch_taken_0x3203a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203A8u;
        // 0x3203ac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203a8) {
            ctx->pc = 0x3203C4u;
            goto label_3203c4;
        }
    }
    ctx->pc = 0x3203B0u;
    // 0x3203b0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3203b4: 0x600013  mtlo        $v1
    ctx->pc = 0x3203b4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3203b8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3203bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3203BCu;
    {
        const bool branch_taken_0x3203bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203BCu;
        // 0x3203c0: 0x70629000  madd        $s2, $v1, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203bc) {
            ctx->pc = 0x3203C8u;
            goto label_3203c8;
        }
    }
    ctx->pc = 0x3203C4u;
label_3203c4:
    // 0x3203c4: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3203c8:
    // 0x3203c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3203c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3203cc: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x3203CCu;
    SET_GPR_U32(ctx, 31, 0x3203D4u);
    ctx->pc = 0x3203D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203CCu;
    // 0x3203d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3203CCu, 0x3203D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203D4u;
label_3203d4:
    // 0x3203d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3203d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203d8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3203d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3203dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3203dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203e0: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3203E0u;
    SET_GPR_U32(ctx, 31, 0x3203E8u);
    ctx->pc = 0x3203E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203E0u;
    // 0x3203e4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3203E0u, 0x3203E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203E8u;
label_3203e8:
    // 0x3203e8: 0xae500024  sw          $s0, 0x24($s2)
    ctx->pc = 0x3203e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 16));
    // 0x3203ec: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x3203ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3203f0: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x3203f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3203f4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3203F4u;
    {
        const bool branch_taken_0x3203f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203F4u;
        // 0x3203f8: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203f4) {
            ctx->pc = 0x3204ACu;
            goto label_3204ac;
        }
    }
    ctx->pc = 0x3203FCu;
    // 0x3203fc: 0x0  nop
    ctx->pc = 0x3203fcu;
    // NOP
label_320400:
    // 0x320400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x320400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320404: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x320404u;
    SET_GPR_U32(ctx, 31, 0x32040Cu);
    ctx->pc = 0x320408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320404u;
    // 0x320408: 0x244545c8  addiu       $a1, $v0, 0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x320404u, 0x32040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32040Cu;
label_32040c:
    // 0x32040c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x320410: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x320410u;
    {
        const bool branch_taken_0x320410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320410u;
        // 0x320414: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320410) {
            ctx->pc = 0x320460u;
            goto label_320460;
        }
    }
    ctx->pc = 0x320418u;
    // 0x320418: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x320418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x32041c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x32041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x320420: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x320420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x320424: 0xc09e1fe  jal         func_2787F8
    ctx->pc = 0x320424u;
    SET_GPR_U32(ctx, 31, 0x32042Cu);
    ctx->pc = 0x320428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320424u;
    // 0x320428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787F8u, 0x320424u, 0x32042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32042Cu;
label_32042c:
    // 0x32042c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x32042Cu;
    {
        const bool branch_taken_0x32042c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x32042c) {
            ctx->pc = 0x320450u;
            goto label_320450;
        }
    }
    ctx->pc = 0x320434u;
    // 0x320434: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x320434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320438: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x320438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x32043c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x32043cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x320440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320444: 0x0  nop
    ctx->pc = 0x320444u;
    // NOP
    // 0x320448: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x320448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32044c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x32044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_320450:
    // 0x320450: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x320450u;
    {
        const bool branch_taken_0x320450 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x320454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320450u;
        // 0x320454: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320450) {
            ctx->pc = 0x320498u;
            goto label_320498;
        }
    }
    ctx->pc = 0x320458u;
    // 0x320458: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x320458u;
    {
        const bool branch_taken_0x320458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320458u;
        // 0x32045c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320458) {
            ctx->pc = 0x3204A4u;
            goto label_3204a4;
        }
    }
    ctx->pc = 0x320460u;
label_320460:
    // 0x320460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x320460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320464: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x320464u;
    SET_GPR_U32(ctx, 31, 0x32046Cu);
    ctx->pc = 0x320468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320464u;
    // 0x320468: 0x246545d0  addiu       $a1, $v1, 0x45D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 17872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x320464u, 0x32046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32046Cu;
label_32046c:
    // 0x32046c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x320470: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x320470u;
    {
        const bool branch_taken_0x320470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320470u;
        // 0x320474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320470) {
            ctx->pc = 0x3204A4u;
            goto label_3204a4;
        }
    }
    ctx->pc = 0x320478u;
    // 0x320478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x320478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32047c: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x32047cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x320480: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x320480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x320484: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x320484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x320488: 0xc09e1fe  jal         func_2787F8
    ctx->pc = 0x320488u;
    SET_GPR_U32(ctx, 31, 0x320490u);
    ctx->pc = 0x32048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320488u;
    // 0x32048c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787F8u, 0x320488u, 0x320490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320490u;
label_320490:
    // 0x320490: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320490u;
    {
        const bool branch_taken_0x320490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x320494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320490u;
        // 0x320494: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320490) {
            ctx->pc = 0x3204A4u;
            goto label_3204a4;
        }
    }
    ctx->pc = 0x320498u;
label_320498:
    // 0x320498: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x32049c: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x32049cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x3204a0: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3204a4:
    // 0x3204a4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x3204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3204a8: 0x51b00b  movn        $s6, $v0, $s1
    ctx->pc = 0x3204a8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_3204ac:
    // 0x3204ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3204acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x3204b0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3204b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3204b4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x3204B4u;
    SET_GPR_U32(ctx, 31, 0x3204BCu);
    ctx->pc = 0x3204B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204B4u;
    // 0x3204b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x3204B4u, 0x3204BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204BCu;
label_3204bc:
    // 0x3204bc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3204BCu;
    {
        const bool branch_taken_0x3204bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3204C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204BCu;
        // 0x3204c0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204bc) {
            ctx->pc = 0x320400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320400;
        }
    }
    ctx->pc = 0x3204C4u;
    // 0x3204c4: 0xae560020  sw          $s6, 0x20($s2)
    ctx->pc = 0x3204c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 22));
    // 0x3204c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3204c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3204cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3204ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3204d0: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x3204d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3204d4: 0x3d1380b  movn        $a3, $fp, $s1
    ctx->pc = 0x3204d4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 30));
    // 0x3204d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3204D8u;
    SET_GPR_U32(ctx, 31, 0x3204E0u);
    ctx->pc = 0x3204DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204D8u;
    // 0x3204dc: 0xafa700a4  sw          $a3, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3204D8u, 0x3204E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204E0u;
label_3204e0:
    // 0x3204e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3204e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x3204e4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3204e8: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x3204E8u;
    SET_GPR_U32(ctx, 31, 0x3204F0u);
    ctx->pc = 0x3204ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204E8u;
    // 0x3204ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x3204E8u, 0x3204F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204F0u;
label_3204f0:
    // 0x3204f0: 0x5440ffa3  bnel        $v0, $zero, . + 4 + (-0x5D << 2)
    ctx->pc = 0x3204F0u;
    {
        const bool branch_taken_0x3204f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3204f0) {
            ctx->pc = 0x3204F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3204F0u;
            // 0x3204f4: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320380;
        }
    }
    ctx->pc = 0x3204F8u;
    // 0x3204f8: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x3204f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x3204fc: 0x2671ffff  addiu       $s1, $s3, -0x1
    ctx->pc = 0x3204fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x320500: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x320500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320504: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x320504u;
    SET_GPR_U32(ctx, 31, 0x32050Cu);
    ctx->pc = 0x320508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320504u;
    // 0x320508: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x320504u, 0x32050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32050Cu;
label_32050c:
    // 0x32050c: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x32050cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320510: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x320510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x320514: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x320514u;
    {
        const bool branch_taken_0x320514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x320518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320514u;
        // 0x320518: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320514) {
            ctx->pc = 0x32053Cu;
            goto label_32053c;
        }
    }
    ctx->pc = 0x32051Cu;
    // 0x32051c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x32051cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_320520:
    // 0x320520: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x320520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x320524: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x320524u;
    SET_GPR_U32(ctx, 31, 0x32052Cu);
    ctx->pc = 0x320528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320524u;
    // 0x320528: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x320524u, 0x32052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32052Cu;
label_32052c:
    // 0x32052c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x32052Cu;
    SET_GPR_U32(ctx, 31, 0x320534u);
    ctx->pc = 0x320530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32052Cu;
    // 0x320530: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x32052Cu, 0x320534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320534u;
label_320534:
    // 0x320534: 0x1634fffa  bne         $s1, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x320534u;
    {
        const bool branch_taken_0x320534 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x320538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320534u;
        // 0x320538: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320534) {
            ctx->pc = 0x320520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320520;
        }
    }
    ctx->pc = 0x32053Cu;
label_32053c:
    // 0x32053c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x32053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x320540: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x320540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320544: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x320544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x320548: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x320548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32054c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320550: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x320550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x5B2848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B2848u, _value); } while (0);
    // 0x320554: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x320554u;
    SET_GPR_U32(ctx, 31, 0x32055Cu);
    ctx->pc = 0x320558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320554u;
    // 0x320558: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x320554u, 0x32055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32055Cu;
label_32055c:
    // 0x32055c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x320560: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x320560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x320564: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x320564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x320568: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x320568u;
    SET_GPR_U32(ctx, 31, 0x320570u);
    ctx->pc = 0x32056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320568u;
    // 0x32056c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x320568u, 0x320570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320570u;
label_320570:
    // 0x320570: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x320570u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x320574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x320574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320578: 0x24e72840  addiu       $a3, $a3, 0x2840
    ctx->pc = 0x320578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10304));
    // 0x32057c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32057cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320580: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x320580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5B2840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B2840u, _value); } while (0);
    // 0x320584: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x320584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x320588: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x320588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5B284Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B284Cu, _value); } while (0);
    // 0x32058c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x32058Cu;
    SET_GPR_U32(ctx, 31, 0x320594u);
    ctx->pc = 0x320590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32058Cu;
    // 0x320590: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x32058Cu, 0x320594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320594u;
label_320594:
    // 0x320594: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x320598: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x320598u;
    {
        const bool branch_taken_0x320598 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320598u;
        // 0x32059c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320598) {
            ctx->pc = 0x3205E4u;
            goto label_3205e4;
        }
    }
    ctx->pc = 0x3205A0u;
    // 0x3205a0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3205a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3205a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3205a8:
    // 0x3205a8: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x3205a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x3205ac: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x3205acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3205b0: 0x24e72840  addiu       $a3, $a3, 0x2840
    ctx->pc = 0x3205b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10304));
    // 0x3205b4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3205b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3205b8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3205b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3205bc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3205c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3205c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3205c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3205c8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3205c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3205cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3205d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3205d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3205d4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3205d8: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x3205d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x3205dc: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3205DCu;
    {
        const bool branch_taken_0x3205dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3205E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205DCu;
        // 0x3205e0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3205dc) {
            ctx->pc = 0x3205A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3205a8;
        }
    }
    ctx->pc = 0x3205E4u;
label_3205e4:
    // 0x3205e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3205e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x3205e8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3205e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3205ec: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x3205ECu;
    SET_GPR_U32(ctx, 31, 0x3205F4u);
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x3205ECu, 0x3205F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205F4u;
label_3205f4:
    // 0x3205f4: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3205F4u;
    SET_GPR_U32(ctx, 31, 0x3205FCu);
    ctx->pc = 0x3205F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205F4u;
    // 0x3205f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3205F4u, 0x3205FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205FCu;
label_3205fc:
    // 0x3205fc: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3205FCu;
    SET_GPR_U32(ctx, 31, 0x320604u);
    ctx->pc = 0x320600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205FCu;
    // 0x320600: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3205FCu, 0x320604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320604u;
label_320604:
    // 0x320604: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x320604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x320608: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x320608u;
    SET_GPR_U32(ctx, 31, 0x320610u);
    ctx->pc = 0x32060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320608u;
    // 0x32060c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x320608u, 0x320610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320610u;
label_320610:
    // 0x320610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x320610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320614: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x320614u;
    SET_GPR_U32(ctx, 31, 0x32061Cu);
    ctx->pc = 0x320618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320614u;
    // 0x320618: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x320614u, 0x32061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32061Cu;
label_32061c:
    // 0x32061c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32061Cu;
    {
        const bool branch_taken_0x32061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32061Cu;
        // 0x320620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32061c) {
            ctx->pc = 0x320640u;
            goto label_320640;
        }
    }
    ctx->pc = 0x320624u;
label_320624:
    // 0x320624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320628: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x320628u;
    SET_GPR_U32(ctx, 31, 0x320630u);
    ctx->pc = 0x32062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320628u;
    // 0x32062c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x320628u, 0x320630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320630u;
label_320630:
    // 0x320630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x320630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320634: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x320634u;
    SET_GPR_U32(ctx, 31, 0x32063Cu);
    ctx->pc = 0x320638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320634u;
    // 0x320638: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x320634u, 0x32063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32063Cu;
label_32063c:
    // 0x32063c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32063cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320640:
    // 0x320640: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x320640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x320644: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x320644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x320648: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x320648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32064c: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x32064cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x320650: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x320650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x320654: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x320654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x320658: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x320658u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32065c: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x32065cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x320660: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x320660u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x320664: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x320664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x320668: 0x3e00008  jr          $ra
    ctx->pc = 0x320668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320668u;
        // 0x32066c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320670u;
}
