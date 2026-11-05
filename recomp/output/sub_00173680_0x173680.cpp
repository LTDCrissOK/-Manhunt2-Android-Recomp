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

// Function: sub_00173680
// Address: 0x173680 - 0x173740
void sub_00173680_0x173680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173680_0x173680");
#endif

    switch (ctx->pc) {
        case 0x173680u: goto label_173680;
        case 0x173684u: goto label_173684;
        case 0x173688u: goto label_173688;
        case 0x17368cu: goto label_17368c;
        case 0x173690u: goto label_173690;
        case 0x173694u: goto label_173694;
        case 0x173698u: goto label_173698;
        case 0x17369cu: goto label_17369c;
        case 0x1736a0u: goto label_1736a0;
        case 0x1736a4u: goto label_1736a4;
        case 0x1736a8u: goto label_1736a8;
        case 0x1736acu: goto label_1736ac;
        case 0x1736b0u: goto label_1736b0;
        case 0x1736b4u: goto label_1736b4;
        case 0x1736b8u: goto label_1736b8;
        case 0x1736bcu: goto label_1736bc;
        case 0x1736c0u: goto label_1736c0;
        case 0x1736c4u: goto label_1736c4;
        case 0x1736c8u: goto label_1736c8;
        case 0x1736ccu: goto label_1736cc;
        case 0x1736d0u: goto label_1736d0;
        case 0x1736d4u: goto label_1736d4;
        case 0x1736d8u: goto label_1736d8;
        case 0x1736dcu: goto label_1736dc;
        case 0x1736e0u: goto label_1736e0;
        case 0x1736e4u: goto label_1736e4;
        case 0x1736e8u: goto label_1736e8;
        case 0x1736ecu: goto label_1736ec;
        case 0x1736f0u: goto label_1736f0;
        case 0x1736f4u: goto label_1736f4;
        case 0x1736f8u: goto label_1736f8;
        case 0x1736fcu: goto label_1736fc;
        case 0x173700u: goto label_173700;
        case 0x173704u: goto label_173704;
        case 0x173708u: goto label_173708;
        case 0x17370cu: goto label_17370c;
        case 0x173710u: goto label_173710;
        case 0x173714u: goto label_173714;
        case 0x173718u: goto label_173718;
        case 0x17371cu: goto label_17371c;
        case 0x173720u: goto label_173720;
        case 0x173724u: goto label_173724;
        case 0x173728u: goto label_173728;
        case 0x17372cu: goto label_17372c;
        case 0x173730u: goto label_173730;
        case 0x173734u: goto label_173734;
        case 0x173738u: goto label_173738;
        case 0x17373cu: goto label_17373c;
        default: break;
    }

    ctx->pc = 0x173680u;

label_173680:
    // 0x173680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_173684:
    // 0x173684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173688:
    // 0x173688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17368c:
    // 0x17368c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_173690:
    // 0x173690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_173694:
    // 0x173694: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x173694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173698:
    // 0x173698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17369c:
    // 0x17369c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1736a0:
    // 0x1736a0: 0xc04f940  jal         func_13E500
label_1736a4:
    if (ctx->pc == 0x1736A4u) {
        ctx->pc = 0x1736A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736A0u;
        // 0x1736a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736A8u;
        goto label_1736a8;
    }
    ctx->pc = 0x1736A0u;
    SET_GPR_U32(ctx, 31, 0x1736A8u);
    ctx->pc = 0x1736A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736A0u;
    // 0x1736a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E500u, 0x1736A0u, 0x1736A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736A8u;
label_1736a8:
    // 0x1736a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1736ac:
    // 0x1736ac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1736acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1736b0:
    // 0x1736b0: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1736b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_1736b4:
    // 0x1736b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1736b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1736b8:
    // 0x1736b8: 0xc04f8fc  jal         func_13E3F0
label_1736bc:
    if (ctx->pc == 0x1736BCu) {
        ctx->pc = 0x1736BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736B8u;
        // 0x1736bc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736C0u;
        goto label_1736c0;
    }
    ctx->pc = 0x1736B8u;
    SET_GPR_U32(ctx, 31, 0x1736C0u);
    ctx->pc = 0x1736BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736B8u;
    // 0x1736bc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x1736B8u, 0x1736C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736C0u;
label_1736c0:
    // 0x1736c0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1736c4:
    // 0x1736c4: 0xc05a5fe  jal         func_1697F8
label_1736c8:
    if (ctx->pc == 0x1736C8u) {
        ctx->pc = 0x1736C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736C4u;
        // 0x1736c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736CCu;
        goto label_1736cc;
    }
    ctx->pc = 0x1736C4u;
    SET_GPR_U32(ctx, 31, 0x1736CCu);
    ctx->pc = 0x1736C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736C4u;
    // 0x1736c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1736C4u, 0x1736CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736CCu;
label_1736cc:
    // 0x1736cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1736ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1736d0:
    // 0x1736d0: 0xc0461e8  jal         func_1187A0
label_1736d4:
    if (ctx->pc == 0x1736D4u) {
        ctx->pc = 0x1736D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736D0u;
        // 0x1736d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736D8u;
        goto label_1736d8;
    }
    ctx->pc = 0x1736D0u;
    SET_GPR_U32(ctx, 31, 0x1736D8u);
    ctx->pc = 0x1736D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736D0u;
    // 0x1736d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x1736D0u, 0x1736D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736D8u;
label_1736d8:
    // 0x1736d8: 0x92050069  lbu         $a1, 0x69($s0)
    ctx->pc = 0x1736d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_1736dc:
    // 0x1736dc: 0xc046256  jal         func_118958
label_1736e0:
    if (ctx->pc == 0x1736E0u) {
        ctx->pc = 0x1736E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736DCu;
        // 0x1736e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736E4u;
        goto label_1736e4;
    }
    ctx->pc = 0x1736DCu;
    SET_GPR_U32(ctx, 31, 0x1736E4u);
    ctx->pc = 0x1736E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736DCu;
    // 0x1736e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x1736DCu, 0x1736E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736E4u;
label_1736e4:
    // 0x1736e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1736e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1736e8:
    // 0x1736e8: 0xc0460c4  jal         func_118310
label_1736ec:
    if (ctx->pc == 0x1736ECu) {
        ctx->pc = 0x1736ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736E8u;
        // 0x1736ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736F0u;
        goto label_1736f0;
    }
    ctx->pc = 0x1736E8u;
    SET_GPR_U32(ctx, 31, 0x1736F0u);
    ctx->pc = 0x1736ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736E8u;
    // 0x1736ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x1736E8u, 0x1736F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736F0u;
label_1736f0:
    // 0x1736f0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x1736f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1736f4:
    // 0x1736f4: 0xc046226  jal         func_118898
label_1736f8:
    if (ctx->pc == 0x1736F8u) {
        ctx->pc = 0x1736F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736F4u;
        // 0x1736f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736FCu;
        goto label_1736fc;
    }
    ctx->pc = 0x1736F4u;
    SET_GPR_U32(ctx, 31, 0x1736FCu);
    ctx->pc = 0x1736F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736F4u;
    // 0x1736f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x1736F4u, 0x1736FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736FCu;
label_1736fc:
    // 0x1736fc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1736fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173700:
    // 0x173700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173704:
    // 0x173704: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173708:
    // 0x173708: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_17370c:
    // 0x17370c: 0x40f809  jalr        $v0
label_173710:
    if (ctx->pc == 0x173710u) {
        ctx->pc = 0x173710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17370Cu;
        // 0x173710: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173714u;
        goto label_173714;
    }
    ctx->pc = 0x17370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173714u);
        ctx->pc = 0x173710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17370Cu;
        // 0x173710: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17370Cu, 0x173714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173714u;
label_173714:
    // 0x173714: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x173714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173718:
    // 0x173718: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_17371c:
    // 0x17371c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173720:
    // 0x173720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173724:
    // 0x173724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173728:
    // 0x173728: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17372c:
    // 0x17372c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17372cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173730:
    // 0x173730: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x173730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_173734:
    // 0x173734: 0x3e00008  jr          $ra
label_173738:
    if (ctx->pc == 0x173738u) {
        ctx->pc = 0x173738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173734u;
        // 0x173738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17373Cu;
        goto label_17373c;
    }
    ctx->pc = 0x173734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173734u;
        // 0x173738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17373Cu;
label_17373c:
    // 0x17373c: 0x0  nop
    ctx->pc = 0x17373cu;
    // NOP
    ctx->pc = 0x173740u;
}
