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

// Function: sub_002C2730
// Address: 0x2c2730 - 0x2c2870
void sub_002C2730_0x2c2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2730_0x2c2730");
#endif

    switch (ctx->pc) {
        case 0x2c2758u: goto label_2c2758;
        case 0x2c2760u: goto label_2c2760;
        case 0x2c2774u: goto label_2c2774;
        case 0x2c2788u: goto label_2c2788;
        case 0x2c27a0u: goto label_2c27a0;
        case 0x2c27b0u: goto label_2c27b0;
        case 0x2c27b8u: goto label_2c27b8;
        case 0x2c27c0u: goto label_2c27c0;
        case 0x2c27c8u: goto label_2c27c8;
        case 0x2c27d8u: goto label_2c27d8;
        case 0x2c27fcu: goto label_2c27fc;
        case 0x2c280cu: goto label_2c280c;
        case 0x2c2818u: goto label_2c2818;
        case 0x2c2828u: goto label_2c2828;
        case 0x2c2840u: goto label_2c2840;
        case 0x2c2848u: goto label_2c2848;
        default: break;
    }

    ctx->pc = 0x2c2730u;

    // 0x2c2730: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c2734: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2c2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2c2738: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2c2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2c273c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c273cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2740: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2744: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2c2744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2c2748: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2c2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2c274c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2c274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2c2750: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2C2750u;
    SET_GPR_U32(ctx, 31, 0x2C2758u);
    ctx->pc = 0x2C2754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2750u;
    // 0x2c2754: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2C2750u, 0x2C2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2758u;
label_2c2758:
    // 0x2c2758: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2C2758u;
    SET_GPR_U32(ctx, 31, 0x2C2760u);
    ctx->pc = 0x2C275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2758u;
    // 0x2c275c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2C2758u, 0x2C2760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2760u;
label_2c2760:
    // 0x2c2760: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c2764: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2c2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2c2768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c276c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2C276Cu;
    SET_GPR_U32(ctx, 31, 0x2C2774u);
    ctx->pc = 0x2C2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C276Cu;
    // 0x2c2770: 0xa043fffd  sb          $v1, -0x3($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967293), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2C276Cu, 0x2C2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2774u;
label_2c2774:
    // 0x2c2774: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c2778: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x2c2778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2c277c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2780: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2C2780u;
    SET_GPR_U32(ctx, 31, 0x2C2788u);
    ctx->pc = 0x2C2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2780u;
    // 0x2c2784: 0xa043fffe  sb          $v1, -0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967294), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2C2780u, 0x2C2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2788u;
label_2c2788:
    // 0x2c2788: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c2788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c278c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2c278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2c2790: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2c2790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x2c2794: 0xa043ffff  sb          $v1, -0x1($v0)
    ctx->pc = 0x2c2794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2798: 0xc0b11e6  jal         func_2C4798
    ctx->pc = 0x2C2798u;
    SET_GPR_U32(ctx, 31, 0x2C27A0u);
    ctx->pc = 0x2C279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2798u;
    // 0x2c279c: 0x24840888  addiu       $a0, $a0, 0x888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4798u, 0x2C2798u, 0x2C27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27A0u;
label_2c27a0:
    // 0x2c27a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c27a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c27a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27a8: 0xc0b11dc  jal         func_2C4770
    ctx->pc = 0x2C27A8u;
    SET_GPR_U32(ctx, 31, 0x2C27B0u);
    ctx->pc = 0x2C27ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27A8u;
    // 0x2c27ac: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4770u, 0x2C27A8u, 0x2C27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27B0u;
label_2c27b0:
    // 0x2c27b0: 0xc0b11da  jal         func_2C4768
    ctx->pc = 0x2C27B0u;
    SET_GPR_U32(ctx, 31, 0x2C27B8u);
    ctx->pc = 0x2C27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27B0u;
    // 0x2c27b4: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4768u, 0x2C27B0u, 0x2C27B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27B8u;
label_2c27b8:
    // 0x2c27b8: 0xc0b11e8  jal         func_2C47A0
    ctx->pc = 0x2C27B8u;
    SET_GPR_U32(ctx, 31, 0x2C27C0u);
    ctx->pc = 0x2C47A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47A0u, 0x2C27B8u, 0x2C27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27C0u;
label_2c27c0:
    // 0x2c27c0: 0xc0b11d0  jal         func_2C4740
    ctx->pc = 0x2C27C0u;
    SET_GPR_U32(ctx, 31, 0x2C27C8u);
    ctx->pc = 0x2C27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27C0u;
    // 0x2c27c4: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4740u, 0x2C27C0u, 0x2C27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27C8u;
label_2c27c8:
    // 0x2c27c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2c27c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2c27cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c27ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27d0: 0xc0b11a0  jal         func_2C4680
    ctx->pc = 0x2C27D0u;
    SET_GPR_U32(ctx, 31, 0x2C27D8u);
    ctx->pc = 0x2C27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27D0u;
    // 0x2c27d4: 0x24a50890  addiu       $a1, $a1, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4680u, 0x2C27D0u, 0x2C27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27D8u;
label_2c27d8:
    // 0x2c27d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c27d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27dc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C27DCu;
    {
        const bool branch_taken_0x2c27dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27DCu;
        // 0x2c27e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27dc) {
            ctx->pc = 0x2C27ECu;
            goto label_2c27ec;
        }
    }
    ctx->pc = 0x2C27E4u;
    // 0x2c27e4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C27E4u;
    {
        const bool branch_taken_0x2c27e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E4u;
        // 0x2c27e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27e4) {
            ctx->pc = 0x2C284Cu;
            goto label_2c284c;
        }
    }
    ctx->pc = 0x2C27ECu;
label_2c27ec:
    // 0x2c27ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c27ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c27f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c27f4: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C27F4u;
    SET_GPR_U32(ctx, 31, 0x2C27FCu);
    ctx->pc = 0x2C27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C27F4u;
    // 0x2c27f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C27F4u, 0x2C27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27FCu;
label_2c27fc:
    // 0x2c27fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c27fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2800: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x2c2800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2c2804: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C2804u;
    SET_GPR_U32(ctx, 31, 0x2C280Cu);
    ctx->pc = 0x2C2808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2804u;
    // 0x2c2808: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C2804u, 0x2C280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C280Cu;
label_2c280c:
    // 0x2c280c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x2c280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2c2810: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2810u;
    {
        const bool branch_taken_0x2c2810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2810u;
        // 0x2c2814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2810) {
            ctx->pc = 0x2C2838u;
            goto label_2c2838;
        }
    }
    ctx->pc = 0x2C2818u;
label_2c2818:
    // 0x2c2818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c2818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c281c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c281cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2820: 0xc0b0b66  jal         func_2C2D98
    ctx->pc = 0x2C2820u;
    SET_GPR_U32(ctx, 31, 0x2C2828u);
    ctx->pc = 0x2C2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2820u;
    // 0x2c2824: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D98u, 0x2C2820u, 0x2C2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2828u;
label_2c2828:
    // 0x2c2828: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x2c2828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2c282c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2c282cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c2830: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C2830u;
    {
        const bool branch_taken_0x2c2830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2830u;
        // 0x2c2834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2830) {
            ctx->pc = 0x2C2818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2818;
        }
    }
    ctx->pc = 0x2C2838u;
label_2c2838:
    // 0x2c2838: 0xc0b11b2  jal         func_2C46C8
    ctx->pc = 0x2C2838u;
    SET_GPR_U32(ctx, 31, 0x2C2840u);
    ctx->pc = 0x2C283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2838u;
    // 0x2c283c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46C8u, 0x2C2838u, 0x2C2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2840u;
label_2c2840:
    // 0x2c2840: 0xc0b11ea  jal         func_2C47A8
    ctx->pc = 0x2C2840u;
    SET_GPR_U32(ctx, 31, 0x2C2848u);
    ctx->pc = 0x2C47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47A8u, 0x2C2840u, 0x2C2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2848u;
label_2c2848:
    // 0x2c2848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c284c:
    // 0x2c284c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2c284cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2850: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2c2850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c2854: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2c2854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c2858: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2c2858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c285c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2c285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c2860: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2860u;
        // 0x2c2864: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2868u;
    // 0x2c2868: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c2868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c286c: 0x0  nop
    ctx->pc = 0x2c286cu;
    // NOP
    ctx->pc = 0x2c2870u;
}
