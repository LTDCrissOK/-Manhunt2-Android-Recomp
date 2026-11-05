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

// Function: sub_002923C8
// Address: 0x2923c8 - 0x2926f8
void sub_002923C8_0x2923c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002923C8_0x2923c8");
#endif

    switch (ctx->pc) {
        case 0x2923fcu: goto label_2923fc;
        case 0x292404u: goto label_292404;
        case 0x292420u: goto label_292420;
        case 0x29242cu: goto label_29242c;
        case 0x29244cu: goto label_29244c;
        case 0x292454u: goto label_292454;
        case 0x292464u: goto label_292464;
        case 0x29246cu: goto label_29246c;
        case 0x29247cu: goto label_29247c;
        case 0x292484u: goto label_292484;
        case 0x292494u: goto label_292494;
        case 0x29249cu: goto label_29249c;
        case 0x2924a8u: goto label_2924a8;
        case 0x2924b8u: goto label_2924b8;
        case 0x2924d8u: goto label_2924d8;
        case 0x2924e0u: goto label_2924e0;
        case 0x2924f0u: goto label_2924f0;
        case 0x2924f8u: goto label_2924f8;
        case 0x292508u: goto label_292508;
        case 0x292510u: goto label_292510;
        case 0x292520u: goto label_292520;
        case 0x292528u: goto label_292528;
        case 0x292538u: goto label_292538;
        case 0x29254cu: goto label_29254c;
        case 0x29256cu: goto label_29256c;
        case 0x292574u: goto label_292574;
        case 0x292584u: goto label_292584;
        case 0x29258cu: goto label_29258c;
        case 0x29259cu: goto label_29259c;
        case 0x2925a4u: goto label_2925a4;
        case 0x2925b4u: goto label_2925b4;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925e0u: goto label_2925e0;
        case 0x292600u: goto label_292600;
        case 0x292608u: goto label_292608;
        case 0x292618u: goto label_292618;
        case 0x292620u: goto label_292620;
        case 0x292630u: goto label_292630;
        case 0x292638u: goto label_292638;
        case 0x292648u: goto label_292648;
        case 0x292650u: goto label_292650;
        case 0x29265cu: goto label_29265c;
        case 0x292670u: goto label_292670;
        case 0x292688u: goto label_292688;
        case 0x292690u: goto label_292690;
        case 0x29269cu: goto label_29269c;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926b8u: goto label_2926b8;
        case 0x2926c4u: goto label_2926c4;
        default: break;
    }

    ctx->pc = 0x2923c8u;

    // 0x2923c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2923c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2923cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2923ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2923d0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2923d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2923d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2923d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2923d8: 0x8e04a8a8  lw          $a0, -0x5758($s0)
    ctx->pc = 0x2923d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA8A8u));
    // 0x2923dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2923dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2923e0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2923e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2923e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2923e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2923e8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2923e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2923ec: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2923ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2923f0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2923f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2923f4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2923F4u;
    SET_GPR_U32(ctx, 31, 0x2923FCu);
    ctx->pc = 0x2923F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923F4u;
    // 0x2923f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2923F4u, 0x2923FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923FCu;
label_2923fc:
    // 0x2923fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2923FCu;
    SET_GPR_U32(ctx, 31, 0x292404u);
    ctx->pc = 0x292400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923FCu;
    // 0x292400: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2923FCu, 0x292404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292404u;
label_292404:
    // 0x292404: 0xae02a8a8  sw          $v0, -0x5758($s0)
    ctx->pc = 0x292404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944936), GPR_U32(ctx, 2));
    // 0x292408: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x292408u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x29240c: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x29240cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x292410: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x292410u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x292414: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x292414u;
    {
        const bool branch_taken_0x292414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292414u;
        // 0x292418: 0x3c140047  lui         $s4, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292414) {
            ctx->pc = 0x29269Cu;
            goto label_29269c;
        }
    }
    ctx->pc = 0x29241Cu;
    // 0x29241c: 0x0  nop
    ctx->pc = 0x29241cu;
    // NOP
label_292420:
    // 0x292420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292424: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292424u;
    SET_GPR_U32(ctx, 31, 0x29242Cu);
    ctx->pc = 0x292428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292424u;
    // 0x292428: 0x24a5b628  addiu       $a1, $a1, -0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292424u, 0x29242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29242Cu;
label_29242c:
    // 0x29242c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x29242Cu;
    {
        const bool branch_taken_0x29242c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29242c) {
            ctx->pc = 0x292430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29242Cu;
            // 0x292430: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2924ACu;
            goto label_2924ac;
        }
    }
    ctx->pc = 0x292434u;
    // 0x292434: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292438: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x29243c: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x29243cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292440: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292444: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292444u;
    SET_GPR_U32(ctx, 31, 0x29244Cu);
    ctx->pc = 0x292448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292444u;
    // 0x292448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292444u, 0x29244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29244Cu;
label_29244c:
    // 0x29244c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29244Cu;
    SET_GPR_U32(ctx, 31, 0x292454u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29244Cu, 0x292454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292454u;
label_292454:
    // 0x292454: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292458: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x292458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x29245c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29245Cu;
    SET_GPR_U32(ctx, 31, 0x292464u);
    ctx->pc = 0x292460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29245Cu;
    // 0x292460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29245Cu, 0x292464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292464u;
label_292464:
    // 0x292464: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292464u;
    SET_GPR_U32(ctx, 31, 0x29246Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292464u, 0x29246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29246Cu;
label_29246c:
    // 0x29246c: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x29246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292470: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x292470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292474: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292474u;
    SET_GPR_U32(ctx, 31, 0x29247Cu);
    ctx->pc = 0x292478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292474u;
    // 0x292478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292474u, 0x29247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29247Cu;
label_29247c:
    // 0x29247c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29247Cu;
    SET_GPR_U32(ctx, 31, 0x292484u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29247Cu, 0x292484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292484u;
label_292484:
    // 0x292484: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29248c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29248Cu;
    SET_GPR_U32(ctx, 31, 0x292494u);
    ctx->pc = 0x292490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29248Cu;
    // 0x292490: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29248Cu, 0x292494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292494u;
label_292494:
    // 0x292494: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292494u;
    SET_GPR_U32(ctx, 31, 0x29249Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292494u, 0x29249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29249Cu;
label_29249c:
    // 0x29249c: 0x8e64a8a8  lw          $a0, -0x5758($s3)
    ctx->pc = 0x29249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944936)));
    // 0x2924a0: 0xc0a90ac  jal         func_2A42B0
    ctx->pc = 0x2924A0u;
    SET_GPR_U32(ctx, 31, 0x2924A8u);
    ctx->pc = 0x2924A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924A0u;
    // 0x2924a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A42B0u, 0x2924A0u, 0x2924A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924A8u;
label_2924a8:
    // 0x2924a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2924a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2924ac:
    // 0x2924ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2924acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924b0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2924B0u;
    SET_GPR_U32(ctx, 31, 0x2924B8u);
    ctx->pc = 0x2924B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924B0u;
    // 0x2924b4: 0x24a5b638  addiu       $a1, $a1, -0x49C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2924B0u, 0x2924B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924B8u;
label_2924b8:
    // 0x2924b8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2924B8u;
    {
        const bool branch_taken_0x2924b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2924b8) {
            ctx->pc = 0x2924BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2924B8u;
            // 0x2924bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292540u;
            goto label_292540;
        }
    }
    ctx->pc = 0x2924C0u;
    // 0x2924c0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2924c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2924c4: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x2924c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x2924c8: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x2924c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2924cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2924ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924d0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2924D0u;
    SET_GPR_U32(ctx, 31, 0x2924D8u);
    ctx->pc = 0x2924D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924D0u;
    // 0x2924d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2924D0u, 0x2924D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924D8u;
label_2924d8:
    // 0x2924d8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2924D8u;
    SET_GPR_U32(ctx, 31, 0x2924E0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2924D8u, 0x2924E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924E0u;
label_2924e0:
    // 0x2924e0: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x2924e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x2924e4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2924e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2924e8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2924E8u;
    SET_GPR_U32(ctx, 31, 0x2924F0u);
    ctx->pc = 0x2924ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2924E8u;
    // 0x2924ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2924E8u, 0x2924F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924F0u;
label_2924f0:
    // 0x2924f0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2924F0u;
    SET_GPR_U32(ctx, 31, 0x2924F8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2924F0u, 0x2924F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2924F8u;
label_2924f8:
    // 0x2924f8: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x2924f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x2924fc: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2924fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292500: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292500u;
    SET_GPR_U32(ctx, 31, 0x292508u);
    ctx->pc = 0x292504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292500u;
    // 0x292504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292500u, 0x292508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292508u;
label_292508:
    // 0x292508: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292508u;
    SET_GPR_U32(ctx, 31, 0x292510u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292508u, 0x292510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292510u;
label_292510:
    // 0x292510: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292518: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292518u;
    SET_GPR_U32(ctx, 31, 0x292520u);
    ctx->pc = 0x29251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292518u;
    // 0x29251c: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292518u, 0x292520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292520u;
label_292520:
    // 0x292520: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292520u;
    SET_GPR_U32(ctx, 31, 0x292528u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292520u, 0x292528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292528u;
label_292528:
    // 0x292528: 0x8e64a8a8  lw          $a0, -0x5758($s3)
    ctx->pc = 0x292528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944936)));
    // 0x29252c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29252cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292530: 0xc0a90b6  jal         func_2A42D8
    ctx->pc = 0x292530u;
    SET_GPR_U32(ctx, 31, 0x292538u);
    ctx->pc = 0x292534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292530u;
    // 0x292534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A42D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A42D8u, 0x292530u, 0x292538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292538u;
label_292538:
    // 0x292538: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x292538u;
    {
        const bool branch_taken_0x292538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292538u;
        // 0x29253c: 0x8e242bc8  lw          $a0, 0x2BC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292538) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x292540u;
label_292540:
    // 0x292540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292544: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292544u;
    SET_GPR_U32(ctx, 31, 0x29254Cu);
    ctx->pc = 0x292548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292544u;
    // 0x292548: 0x24a5b648  addiu       $a1, $a1, -0x49B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292544u, 0x29254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29254Cu;
label_29254c:
    // 0x29254c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x29254Cu;
    {
        const bool branch_taken_0x29254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29254c) {
            ctx->pc = 0x292550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29254Cu;
            // 0x292550: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2925D4u;
            goto label_2925d4;
        }
    }
    ctx->pc = 0x292554u;
    // 0x292554: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292554u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292558: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x29255c: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x29255cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292560: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292564: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292564u;
    SET_GPR_U32(ctx, 31, 0x29256Cu);
    ctx->pc = 0x292568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292564u;
    // 0x292568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292564u, 0x29256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29256Cu;
label_29256c:
    // 0x29256c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29256Cu;
    SET_GPR_U32(ctx, 31, 0x292574u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29256Cu, 0x292574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292574u;
label_292574:
    // 0x292574: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292578: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x292578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x29257c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29257Cu;
    SET_GPR_U32(ctx, 31, 0x292584u);
    ctx->pc = 0x292580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29257Cu;
    // 0x292580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29257Cu, 0x292584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292584u;
label_292584:
    // 0x292584: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292584u;
    SET_GPR_U32(ctx, 31, 0x29258Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292584u, 0x29258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29258Cu;
label_29258c:
    // 0x29258c: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x29258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292590: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x292590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292594: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292594u;
    SET_GPR_U32(ctx, 31, 0x29259Cu);
    ctx->pc = 0x292598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292594u;
    // 0x292598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292594u, 0x29259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29259Cu;
label_29259c:
    // 0x29259c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29259Cu;
    SET_GPR_U32(ctx, 31, 0x2925A4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29259Cu, 0x2925A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925A4u;
label_2925a4:
    // 0x2925a4: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x2925a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2925a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925ac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2925ACu;
    SET_GPR_U32(ctx, 31, 0x2925B4u);
    ctx->pc = 0x2925B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925ACu;
    // 0x2925b0: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2925ACu, 0x2925B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925B4u;
label_2925b4:
    // 0x2925b4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2925B4u;
    SET_GPR_U32(ctx, 31, 0x2925BCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2925B4u, 0x2925BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925BCu;
label_2925bc:
    // 0x2925bc: 0x8e64a8a8  lw          $a0, -0x5758($s3)
    ctx->pc = 0x2925bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944936)));
    // 0x2925c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2925c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925c4: 0xc0a90b6  jal         func_2A42D8
    ctx->pc = 0x2925C4u;
    SET_GPR_U32(ctx, 31, 0x2925CCu);
    ctx->pc = 0x2925C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925C4u;
    // 0x2925c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A42D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A42D8u, 0x2925C4u, 0x2925CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925CCu;
label_2925cc:
    // 0x2925cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2925CCu;
    {
        const bool branch_taken_0x2925cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2925D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925CCu;
        // 0x2925d0: 0x8e242bc8  lw          $a0, 0x2BC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925cc) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x2925D4u;
label_2925d4:
    // 0x2925d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2925d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925d8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2925D8u;
    SET_GPR_U32(ctx, 31, 0x2925E0u);
    ctx->pc = 0x2925DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925D8u;
    // 0x2925dc: 0x24a5b658  addiu       $a1, $a1, -0x49A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2925D8u, 0x2925E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925E0u;
label_2925e0:
    // 0x2925e0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2925E0u;
    {
        const bool branch_taken_0x2925e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2925e0) {
            ctx->pc = 0x2925E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2925E0u;
            // 0x2925e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292664u;
            goto label_292664;
        }
    }
    ctx->pc = 0x2925E8u;
    // 0x2925e8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2925e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2925ec: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x2925ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x2925f0: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2925f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2925f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925f8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2925F8u;
    SET_GPR_U32(ctx, 31, 0x292600u);
    ctx->pc = 0x2925FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925F8u;
    // 0x2925fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2925F8u, 0x292600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292600u;
label_292600:
    // 0x292600: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292600u;
    SET_GPR_U32(ctx, 31, 0x292608u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292600u, 0x292608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292608u;
label_292608:
    // 0x292608: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x29260c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x29260cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x292610: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292610u;
    SET_GPR_U32(ctx, 31, 0x292618u);
    ctx->pc = 0x292614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292610u;
    // 0x292614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292610u, 0x292618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292618u;
label_292618:
    // 0x292618: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292618u;
    SET_GPR_U32(ctx, 31, 0x292620u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292618u, 0x292620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292620u;
label_292620:
    // 0x292620: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x292624: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x292624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292628: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292628u;
    SET_GPR_U32(ctx, 31, 0x292630u);
    ctx->pc = 0x29262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292628u;
    // 0x29262c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292628u, 0x292630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292630u;
label_292630:
    // 0x292630: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292630u;
    SET_GPR_U32(ctx, 31, 0x292638u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292630u, 0x292638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292638u;
label_292638:
    // 0x292638: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
    // 0x29263c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29263cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292640: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292640u;
    SET_GPR_U32(ctx, 31, 0x292648u);
    ctx->pc = 0x292644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292640u;
    // 0x292644: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292640u, 0x292648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292648u;
label_292648:
    // 0x292648: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292648u;
    SET_GPR_U32(ctx, 31, 0x292650u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292648u, 0x292650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292650u;
label_292650:
    // 0x292650: 0x8e64a8a8  lw          $a0, -0x5758($s3)
    ctx->pc = 0x292650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944936)));
    // 0x292654: 0xc0a90c2  jal         func_2A4308
    ctx->pc = 0x292654u;
    SET_GPR_U32(ctx, 31, 0x29265Cu);
    ctx->pc = 0x292658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292654u;
    // 0x292658: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4308u, 0x292654u, 0x29265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29265Cu;
label_29265c:
    // 0x29265c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29265Cu;
    {
        const bool branch_taken_0x29265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29265Cu;
        // 0x292660: 0x8e242bc8  lw          $a0, 0x2BC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29265c) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x292664u;
label_292664:
    // 0x292664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x292664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292668: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292668u;
    SET_GPR_U32(ctx, 31, 0x292670u);
    ctx->pc = 0x29266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292668u;
    // 0x29266c: 0x24a5b668  addiu       $a1, $a1, -0x4998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292668u, 0x292670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292670u;
label_292670:
    // 0x292670: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292670u;
    {
        const bool branch_taken_0x292670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292670u;
        // 0x292674: 0x8e242bc8  lw          $a0, 0x2BC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292670) {
            ctx->pc = 0x2926A0u;
            goto label_2926a0;
        }
    }
    ctx->pc = 0x292678u;
    // 0x292678: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x292678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29267c: 0x24a5b4c8  addiu       $a1, $a1, -0x4B38
    ctx->pc = 0x29267cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948040));
    // 0x292680: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292680u;
    SET_GPR_U32(ctx, 31, 0x292688u);
    ctx->pc = 0x292684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292680u;
    // 0x292684: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292680u, 0x292688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292688u;
label_292688:
    // 0x292688: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292688u;
    SET_GPR_U32(ctx, 31, 0x292690u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292688u, 0x292690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292690u;
label_292690:
    // 0x292690: 0x8e64a8a8  lw          $a0, -0x5758($s3)
    ctx->pc = 0x292690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944936)));
    // 0x292694: 0xc0a90cc  jal         func_2A4330
    ctx->pc = 0x292694u;
    SET_GPR_U32(ctx, 31, 0x29269Cu);
    ctx->pc = 0x292698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292694u;
    // 0x292698: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4330u, 0x292694u, 0x29269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29269Cu;
label_29269c:
    // 0x29269c: 0x8e242bc8  lw          $a0, 0x2BC8($s1)
    ctx->pc = 0x29269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
label_2926a0:
    // 0x2926a0: 0x26b2c230  addiu       $s2, $s5, -0x3DD0
    ctx->pc = 0x2926a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951472));
    // 0x2926a4: 0x26c5b4d0  addiu       $a1, $s6, -0x4B30
    ctx->pc = 0x2926a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948048));
    // 0x2926a8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2926A8u;
    SET_GPR_U32(ctx, 31, 0x2926B0u);
    ctx->pc = 0x2926ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926A8u;
    // 0x2926ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2926A8u, 0x2926B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B0u;
label_2926b0:
    // 0x2926b0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2926B0u;
    SET_GPR_U32(ctx, 31, 0x2926B8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2926B0u, 0x2926B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B8u;
label_2926b8:
    // 0x2926b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2926b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926bc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2926BCu;
    SET_GPR_U32(ctx, 31, 0x2926C4u);
    ctx->pc = 0x2926C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2926BCu;
    // 0x2926c0: 0x2685b4d8  addiu       $a1, $s4, -0x4B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2926BCu, 0x2926C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926C4u;
label_2926c4:
    // 0x2926c4: 0x5440ff56  bnel        $v0, $zero, . + 4 + (-0xAA << 2)
    ctx->pc = 0x2926C4u;
    {
        const bool branch_taken_0x2926c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926c4) {
            ctx->pc = 0x2926C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2926C4u;
            // 0x2926c8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292420;
        }
    }
    ctx->pc = 0x2926CCu;
    // 0x2926cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2926ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2926d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2926d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2926d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2926d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2926d8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2926d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2926dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2926dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2926e0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2926e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2926e4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2926e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2926e8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2926e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2926ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2926ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2926F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926ECu;
        // 0x2926f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2926ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2926F4u;
    // 0x2926f4: 0x0  nop
    ctx->pc = 0x2926f4u;
    // NOP
    ctx->pc = 0x2926f8u;
}
