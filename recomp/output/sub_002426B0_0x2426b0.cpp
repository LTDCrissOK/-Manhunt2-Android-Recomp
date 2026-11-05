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

// Function: sub_002426B0
// Address: 0x2426b0 - 0x2428c0
void sub_002426B0_0x2426b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002426B0_0x2426b0");
#endif

    switch (ctx->pc) {
        case 0x2426b0u: goto label_2426b0;
        case 0x2426b4u: goto label_2426b4;
        case 0x2426b8u: goto label_2426b8;
        case 0x2426bcu: goto label_2426bc;
        case 0x2426c0u: goto label_2426c0;
        case 0x2426c4u: goto label_2426c4;
        case 0x2426c8u: goto label_2426c8;
        case 0x2426ccu: goto label_2426cc;
        case 0x2426d0u: goto label_2426d0;
        case 0x2426d4u: goto label_2426d4;
        case 0x2426d8u: goto label_2426d8;
        case 0x2426dcu: goto label_2426dc;
        case 0x2426e0u: goto label_2426e0;
        case 0x2426e4u: goto label_2426e4;
        case 0x2426e8u: goto label_2426e8;
        case 0x2426ecu: goto label_2426ec;
        case 0x2426f0u: goto label_2426f0;
        case 0x2426f4u: goto label_2426f4;
        case 0x2426f8u: goto label_2426f8;
        case 0x2426fcu: goto label_2426fc;
        case 0x242700u: goto label_242700;
        case 0x242704u: goto label_242704;
        case 0x242708u: goto label_242708;
        case 0x24270cu: goto label_24270c;
        case 0x242710u: goto label_242710;
        case 0x242714u: goto label_242714;
        case 0x242718u: goto label_242718;
        case 0x24271cu: goto label_24271c;
        case 0x242720u: goto label_242720;
        case 0x242724u: goto label_242724;
        case 0x242728u: goto label_242728;
        case 0x24272cu: goto label_24272c;
        case 0x242730u: goto label_242730;
        case 0x242734u: goto label_242734;
        case 0x242738u: goto label_242738;
        case 0x24273cu: goto label_24273c;
        case 0x242740u: goto label_242740;
        case 0x242744u: goto label_242744;
        case 0x242748u: goto label_242748;
        case 0x24274cu: goto label_24274c;
        case 0x242750u: goto label_242750;
        case 0x242754u: goto label_242754;
        case 0x242758u: goto label_242758;
        case 0x24275cu: goto label_24275c;
        case 0x242760u: goto label_242760;
        case 0x242764u: goto label_242764;
        case 0x242768u: goto label_242768;
        case 0x24276cu: goto label_24276c;
        case 0x242770u: goto label_242770;
        case 0x242774u: goto label_242774;
        case 0x242778u: goto label_242778;
        case 0x24277cu: goto label_24277c;
        case 0x242780u: goto label_242780;
        case 0x242784u: goto label_242784;
        case 0x242788u: goto label_242788;
        case 0x24278cu: goto label_24278c;
        case 0x242790u: goto label_242790;
        case 0x242794u: goto label_242794;
        case 0x242798u: goto label_242798;
        case 0x24279cu: goto label_24279c;
        case 0x2427a0u: goto label_2427a0;
        case 0x2427a4u: goto label_2427a4;
        case 0x2427a8u: goto label_2427a8;
        case 0x2427acu: goto label_2427ac;
        case 0x2427b0u: goto label_2427b0;
        case 0x2427b4u: goto label_2427b4;
        case 0x2427b8u: goto label_2427b8;
        case 0x2427bcu: goto label_2427bc;
        case 0x2427c0u: goto label_2427c0;
        case 0x2427c4u: goto label_2427c4;
        case 0x2427c8u: goto label_2427c8;
        case 0x2427ccu: goto label_2427cc;
        case 0x2427d0u: goto label_2427d0;
        case 0x2427d4u: goto label_2427d4;
        case 0x2427d8u: goto label_2427d8;
        case 0x2427dcu: goto label_2427dc;
        case 0x2427e0u: goto label_2427e0;
        case 0x2427e4u: goto label_2427e4;
        case 0x2427e8u: goto label_2427e8;
        case 0x2427ecu: goto label_2427ec;
        case 0x2427f0u: goto label_2427f0;
        case 0x2427f4u: goto label_2427f4;
        case 0x2427f8u: goto label_2427f8;
        case 0x2427fcu: goto label_2427fc;
        case 0x242800u: goto label_242800;
        case 0x242804u: goto label_242804;
        case 0x242808u: goto label_242808;
        case 0x24280cu: goto label_24280c;
        case 0x242810u: goto label_242810;
        case 0x242814u: goto label_242814;
        case 0x242818u: goto label_242818;
        case 0x24281cu: goto label_24281c;
        case 0x242820u: goto label_242820;
        case 0x242824u: goto label_242824;
        case 0x242828u: goto label_242828;
        case 0x24282cu: goto label_24282c;
        case 0x242830u: goto label_242830;
        case 0x242834u: goto label_242834;
        case 0x242838u: goto label_242838;
        case 0x24283cu: goto label_24283c;
        case 0x242840u: goto label_242840;
        case 0x242844u: goto label_242844;
        case 0x242848u: goto label_242848;
        case 0x24284cu: goto label_24284c;
        case 0x242850u: goto label_242850;
        case 0x242854u: goto label_242854;
        case 0x242858u: goto label_242858;
        case 0x24285cu: goto label_24285c;
        case 0x242860u: goto label_242860;
        case 0x242864u: goto label_242864;
        case 0x242868u: goto label_242868;
        case 0x24286cu: goto label_24286c;
        case 0x242870u: goto label_242870;
        case 0x242874u: goto label_242874;
        case 0x242878u: goto label_242878;
        case 0x24287cu: goto label_24287c;
        case 0x242880u: goto label_242880;
        case 0x242884u: goto label_242884;
        case 0x242888u: goto label_242888;
        case 0x24288cu: goto label_24288c;
        case 0x242890u: goto label_242890;
        case 0x242894u: goto label_242894;
        case 0x242898u: goto label_242898;
        case 0x24289cu: goto label_24289c;
        case 0x2428a0u: goto label_2428a0;
        case 0x2428a4u: goto label_2428a4;
        case 0x2428a8u: goto label_2428a8;
        case 0x2428acu: goto label_2428ac;
        case 0x2428b0u: goto label_2428b0;
        case 0x2428b4u: goto label_2428b4;
        case 0x2428b8u: goto label_2428b8;
        case 0x2428bcu: goto label_2428bc;
        default: break;
    }

    ctx->pc = 0x2426b0u;

label_2426b0:
    // 0x2426b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2426b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2426b4:
    // 0x2426b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2426b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2426b8:
    // 0x2426b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2426b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2426bc:
    // 0x2426bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2426bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2426c0:
    // 0x2426c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2426c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2426c4:
    // 0x2426c4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2426c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2426c8:
    // 0x2426c8: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x2426c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2426cc:
    // 0x2426cc: 0x40f809  jalr        $v0
label_2426d0:
    if (ctx->pc == 0x2426D0u) {
        ctx->pc = 0x2426D4u;
        goto label_2426d4;
    }
    ctx->pc = 0x2426CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2426D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2426CCu, 0x2426D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2426D4u;
label_2426d4:
    // 0x2426d4: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2426d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2426d8:
    // 0x2426d8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2426d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2426dc:
    // 0x2426dc: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2426dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2426e0:
    // 0x2426e0: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x2426e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
label_2426e4:
    // 0x2426e4: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x2426e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2426e8:
    // 0x2426e8: 0xe4610178  swc1        $f1, 0x178($v1)
    ctx->pc = 0x2426e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
label_2426ec:
    // 0x2426ec: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2426ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2426f0:
    // 0x2426f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2426f4:
    if (ctx->pc == 0x2426F4u) {
        ctx->pc = 0x2426F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426F0u;
        // 0x2426f4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426F8u;
        goto label_2426f8;
    }
    ctx->pc = 0x2426F0u;
    {
        const bool branch_taken_0x2426f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2426F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426F0u;
        // 0x2426f4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426f0) {
            ctx->pc = 0x242710u;
            goto label_242710;
        }
    }
    ctx->pc = 0x2426F8u;
label_2426f8:
    // 0x2426f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2426fc:
    if (ctx->pc == 0x2426FCu) {
        ctx->pc = 0x2426FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426F8u;
        // 0x2426fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242700u;
        goto label_242700;
    }
    ctx->pc = 0x2426F8u;
    {
        const bool branch_taken_0x2426f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2426FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426F8u;
        // 0x2426fc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426f8) {
            ctx->pc = 0x242710u;
            goto label_242710;
        }
    }
    ctx->pc = 0x242700u;
label_242700:
    // 0x242700: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_242704:
    if (ctx->pc == 0x242704u) {
        ctx->pc = 0x242704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242700u;
        // 0x242704: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242708u;
        goto label_242708;
    }
    ctx->pc = 0x242700u;
    {
        const bool branch_taken_0x242700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x242704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242700u;
        // 0x242704: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242700) {
            ctx->pc = 0x242710u;
            goto label_242710;
        }
    }
    ctx->pc = 0x242708u;
label_242708:
    // 0x242708: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_24270c:
    if (ctx->pc == 0x24270Cu) {
        ctx->pc = 0x24270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242708u;
        // 0x24270c: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242710u;
        goto label_242710;
    }
    ctx->pc = 0x242708u;
    {
        const bool branch_taken_0x242708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242708) {
            ctx->pc = 0x24270Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242708u;
            // 0x24270c: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242764u;
            goto label_242764;
        }
    }
    ctx->pc = 0x242710u;
label_242710:
    // 0x242710: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x242710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_242714:
    // 0x242714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242718:
    // 0x242718: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x242718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24271c:
    // 0x24271c: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x24271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_242720:
    // 0x242720: 0x40f809  jalr        $v0
label_242724:
    if (ctx->pc == 0x242724u) {
        ctx->pc = 0x242724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242720u;
        // 0x242724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242728u;
        goto label_242728;
    }
    ctx->pc = 0x242720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242728u);
        ctx->pc = 0x242724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242720u;
        // 0x242724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242720u, 0x242728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242728u;
label_242728:
    // 0x242728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24272c:
    // 0x24272c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_242730:
    // 0x242730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_242734:
    if (ctx->pc == 0x242734u) {
        ctx->pc = 0x242734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242730u;
        // 0x242734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242738u;
        goto label_242738;
    }
    ctx->pc = 0x242730u;
    {
        const bool branch_taken_0x242730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242730u;
        // 0x242734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242730) {
            ctx->pc = 0x242748u;
            goto label_242748;
        }
    }
    ctx->pc = 0x242738u;
label_242738:
    // 0x242738: 0xc08bd96  jal         func_22F658
label_24273c:
    if (ctx->pc == 0x24273Cu) {
        ctx->pc = 0x24273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242738u;
        // 0x24273c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242740u;
        goto label_242740;
    }
    ctx->pc = 0x242738u;
    SET_GPR_U32(ctx, 31, 0x242740u);
    ctx->pc = 0x24273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242738u;
    // 0x24273c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x242738u, 0x242740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242740u;
label_242740:
    // 0x242740: 0x10000003  b           . + 4 + (0x3 << 2)
label_242744:
    if (ctx->pc == 0x242744u) {
        ctx->pc = 0x242748u;
        goto label_242748;
    }
    ctx->pc = 0x242740u;
    {
        const bool branch_taken_0x242740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242740) {
            ctx->pc = 0x242750u;
            goto label_242750;
        }
    }
    ctx->pc = 0x242748u;
label_242748:
    // 0x242748: 0xc08bd96  jal         func_22F658
label_24274c:
    if (ctx->pc == 0x24274Cu) {
        ctx->pc = 0x24274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242748u;
        // 0x24274c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242750u;
        goto label_242750;
    }
    ctx->pc = 0x242748u;
    SET_GPR_U32(ctx, 31, 0x242750u);
    ctx->pc = 0x24274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242748u;
    // 0x24274c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x242748u, 0x242750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242750u;
label_242750:
    // 0x242750: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_242754:
    if (ctx->pc == 0x242754u) {
        ctx->pc = 0x242754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242750u;
        // 0x242754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242758u;
        goto label_242758;
    }
    ctx->pc = 0x242750u;
    {
        const bool branch_taken_0x242750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242750u;
        // 0x242754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242750) {
            ctx->pc = 0x242760u;
            goto label_242760;
        }
    }
    ctx->pc = 0x242758u;
label_242758:
    // 0x242758: 0xc08cc66  jal         func_233198
label_24275c:
    if (ctx->pc == 0x24275Cu) {
        ctx->pc = 0x24275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242758u;
        // 0x24275c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242760u;
        goto label_242760;
    }
    ctx->pc = 0x242758u;
    SET_GPR_U32(ctx, 31, 0x242760u);
    ctx->pc = 0x24275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242758u;
    // 0x24275c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233198u, 0x242758u, 0x242760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242760u;
label_242760:
    // 0x242760: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x242760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242764:
    // 0x242764: 0x240407a5  addiu       $a0, $zero, 0x7A5
    ctx->pc = 0x242764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1957));
label_242768:
    // 0x242768: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x242768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_24276c:
    // 0x24276c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24276cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242770:
    // 0x242770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242774:
    // 0x242774: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x242774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242778:
    // 0x242778: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
label_24277c:
    if (ctx->pc == 0x24277Cu) {
        ctx->pc = 0x24277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242778u;
        // 0x24277c: 0x286207a6  slti        $v0, $v1, 0x7A6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1958) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242780u;
        goto label_242780;
    }
    ctx->pc = 0x242778u;
    {
        const bool branch_taken_0x242778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x24277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242778u;
        // 0x24277c: 0x286207a6  slti        $v0, $v1, 0x7A6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1958) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242778) {
            ctx->pc = 0x2427E0u;
            goto label_2427e0;
        }
    }
    ctx->pc = 0x242780u;
label_242780:
    // 0x242780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_242784:
    if (ctx->pc == 0x242784u) {
        ctx->pc = 0x242784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242780u;
        // 0x242784: 0x240207a4  addiu       $v0, $zero, 0x7A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1956));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242788u;
        goto label_242788;
    }
    ctx->pc = 0x242780u;
    {
        const bool branch_taken_0x242780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242780u;
        // 0x242784: 0x240207a4  addiu       $v0, $zero, 0x7A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242780) {
            ctx->pc = 0x242798u;
            goto label_242798;
        }
    }
    ctx->pc = 0x242788u;
label_242788:
    // 0x242788: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_24278c:
    if (ctx->pc == 0x24278Cu) {
        ctx->pc = 0x24278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242788u;
        // 0x24278c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242790u;
        goto label_242790;
    }
    ctx->pc = 0x242788u;
    {
        const bool branch_taken_0x242788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242788u;
        // 0x24278c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242788) {
            ctx->pc = 0x2427B8u;
            goto label_2427b8;
        }
    }
    ctx->pc = 0x242790u;
label_242790:
    // 0x242790: 0x10000023  b           . + 4 + (0x23 << 2)
label_242794:
    if (ctx->pc == 0x242794u) {
        ctx->pc = 0x242794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242790u;
        // 0x242794: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242798u;
        goto label_242798;
    }
    ctx->pc = 0x242790u;
    {
        const bool branch_taken_0x242790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242790u;
        // 0x242794: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242790) {
            ctx->pc = 0x242820u;
            goto label_242820;
        }
    }
    ctx->pc = 0x242798u;
label_242798:
    // 0x242798: 0x240207a6  addiu       $v0, $zero, 0x7A6
    ctx->pc = 0x242798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1958));
label_24279c:
    // 0x24279c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2427a0:
    if (ctx->pc == 0x2427A0u) {
        ctx->pc = 0x2427A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24279Cu;
        // 0x2427a0: 0x240207a7  addiu       $v0, $zero, 0x7A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427A4u;
        goto label_2427a4;
    }
    ctx->pc = 0x24279Cu;
    {
        const bool branch_taken_0x24279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2427A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24279Cu;
        // 0x2427a0: 0x240207a7  addiu       $v0, $zero, 0x7A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24279c) {
            ctx->pc = 0x2427B4u;
            goto label_2427b4;
        }
    }
    ctx->pc = 0x2427A4u;
label_2427a4:
    // 0x2427a4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2427a8:
    if (ctx->pc == 0x2427A8u) {
        ctx->pc = 0x2427A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427A4u;
        // 0x2427a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427ACu;
        goto label_2427ac;
    }
    ctx->pc = 0x2427A4u;
    {
        const bool branch_taken_0x2427a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2427A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427A4u;
        // 0x2427a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427a4) {
            ctx->pc = 0x2427E4u;
            goto label_2427e4;
        }
    }
    ctx->pc = 0x2427ACu;
label_2427ac:
    // 0x2427ac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2427b0:
    if (ctx->pc == 0x2427B0u) {
        ctx->pc = 0x2427B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427ACu;
        // 0x2427b0: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427B4u;
        goto label_2427b4;
    }
    ctx->pc = 0x2427ACu;
    {
        const bool branch_taken_0x2427ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427ACu;
        // 0x2427b0: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427ac) {
            ctx->pc = 0x242820u;
            goto label_242820;
        }
    }
    ctx->pc = 0x2427B4u;
label_2427b4:
    // 0x2427b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2427b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2427b8:
    // 0x2427b8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2427b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_2427bc:
    // 0x2427bc: 0xc08fed2  jal         func_23FB48
label_2427c0:
    if (ctx->pc == 0x2427C0u) {
        ctx->pc = 0x2427C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427BCu;
        // 0x2427c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427C4u;
        goto label_2427c4;
    }
    ctx->pc = 0x2427BCu;
    SET_GPR_U32(ctx, 31, 0x2427C4u);
    ctx->pc = 0x2427C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427BCu;
    // 0x2427c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2427BCu, 0x2427C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427C4u;
label_2427c4:
    // 0x2427c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2427c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2427c8:
    // 0x2427c8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2427c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_2427cc:
    // 0x2427cc: 0xc08fed2  jal         func_23FB48
label_2427d0:
    if (ctx->pc == 0x2427D0u) {
        ctx->pc = 0x2427D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427CCu;
        // 0x2427d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427D4u;
        goto label_2427d4;
    }
    ctx->pc = 0x2427CCu;
    SET_GPR_U32(ctx, 31, 0x2427D4u);
    ctx->pc = 0x2427D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427CCu;
    // 0x2427d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2427CCu, 0x2427D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427D4u;
label_2427d4:
    // 0x2427d4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2427d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2427d8:
    // 0x2427d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2427dc:
    if (ctx->pc == 0x2427DCu) {
        ctx->pc = 0x2427DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427D8u;
        // 0x2427dc: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427E0u;
        goto label_2427e0;
    }
    ctx->pc = 0x2427D8u;
    {
        const bool branch_taken_0x2427d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2427DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427D8u;
        // 0x2427dc: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427d8) {
            ctx->pc = 0x242808u;
            goto label_242808;
        }
    }
    ctx->pc = 0x2427E0u;
label_2427e0:
    // 0x2427e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2427e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2427e4:
    // 0x2427e4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2427e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_2427e8:
    // 0x2427e8: 0xc08fed2  jal         func_23FB48
label_2427ec:
    if (ctx->pc == 0x2427ECu) {
        ctx->pc = 0x2427ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427E8u;
        // 0x2427ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427F0u;
        goto label_2427f0;
    }
    ctx->pc = 0x2427E8u;
    SET_GPR_U32(ctx, 31, 0x2427F0u);
    ctx->pc = 0x2427ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427E8u;
    // 0x2427ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2427E8u, 0x2427F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427F0u;
label_2427f0:
    // 0x2427f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2427f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2427f4:
    // 0x2427f4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2427f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_2427f8:
    // 0x2427f8: 0xc08fed2  jal         func_23FB48
label_2427fc:
    if (ctx->pc == 0x2427FCu) {
        ctx->pc = 0x2427FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427F8u;
        // 0x2427fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242800u;
        goto label_242800;
    }
    ctx->pc = 0x2427F8u;
    SET_GPR_U32(ctx, 31, 0x242800u);
    ctx->pc = 0x2427FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427F8u;
    // 0x2427fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2427F8u, 0x242800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242800u;
label_242800:
    // 0x242800: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_242804:
    // 0x242804: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x242804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_242808:
    // 0x242808: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x242808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24280c:
    // 0x24280c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_242810:
    if (ctx->pc == 0x242810u) {
        ctx->pc = 0x242810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24280Cu;
        // 0x242810: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x242814u;
        goto label_242814;
    }
    ctx->pc = 0x24280Cu;
    {
        const bool branch_taken_0x24280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24280c) {
            ctx->pc = 0x242810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24280Cu;
            // 0x242810: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242820u;
            goto label_242820;
        }
    }
    ctx->pc = 0x242814u;
label_242814:
    // 0x242814: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x242814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_242818:
    // 0x242818: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x242818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
label_24281c:
    // 0x24281c: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x24281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242820:
    // 0x242820: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_242824:
    // 0x242824: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x242824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_242828:
    // 0x242828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24282c:
    // 0x24282c: 0x0  nop
    ctx->pc = 0x24282cu;
    // NOP
label_242830:
    // 0x242830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242834:
    // 0x242834: 0x0  nop
    ctx->pc = 0x242834u;
    // NOP
label_242838:
    // 0x242838: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24283c:
    if (ctx->pc == 0x24283Cu) {
        ctx->pc = 0x24283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242838u;
        // 0x24283c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242840u;
        goto label_242840;
    }
    ctx->pc = 0x242838u;
    {
        const bool branch_taken_0x242838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242838u;
        // 0x24283c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242838) {
            ctx->pc = 0x24284Cu;
            goto label_24284c;
        }
    }
    ctx->pc = 0x242840u;
label_242840:
    // 0x242840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242844:
    // 0x242844: 0xc08bf70  jal         func_22FDC0
label_242848:
    if (ctx->pc == 0x242848u) {
        ctx->pc = 0x242848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242844u;
        // 0x242848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24284Cu;
        goto label_24284c;
    }
    ctx->pc = 0x242844u;
    SET_GPR_U32(ctx, 31, 0x24284Cu);
    ctx->pc = 0x242848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242844u;
    // 0x242848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x242844u, 0x24284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24284Cu;
label_24284c:
    // 0x24284c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_242850:
    // 0x242850: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x242850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_242854:
    // 0x242854: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x242854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_242858:
    // 0x242858: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x242858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24285c:
    // 0x24285c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_242860:
    if (ctx->pc == 0x242860u) {
        ctx->pc = 0x242860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24285Cu;
        // 0x242860: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242864u;
        goto label_242864;
    }
    ctx->pc = 0x24285Cu;
    {
        const bool branch_taken_0x24285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24285c) {
            ctx->pc = 0x242860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24285Cu;
            // 0x242860: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2428A8u;
            goto label_2428a8;
        }
    }
    ctx->pc = 0x242864u;
label_242864:
    // 0x242864: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x242864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242868:
    // 0x242868: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x242868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_24286c:
    // 0x24286c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_242870:
    if (ctx->pc == 0x242870u) {
        ctx->pc = 0x242870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24286Cu;
        // 0x242870: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242874u;
        goto label_242874;
    }
    ctx->pc = 0x24286Cu;
    {
        const bool branch_taken_0x24286c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24286Cu;
        // 0x242870: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24286c) {
            ctx->pc = 0x24289Cu;
            goto label_24289c;
        }
    }
    ctx->pc = 0x242874u;
label_242874:
    // 0x242874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242878:
    // 0x242878: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x242878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_24287c:
    // 0x24287c: 0x0  nop
    ctx->pc = 0x24287cu;
    // NOP
label_242880:
    // 0x242880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242884:
    // 0x242884: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_242888:
    if (ctx->pc == 0x242888u) {
        ctx->pc = 0x242888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242884u;
        // 0x242888: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24288Cu;
        goto label_24288c;
    }
    ctx->pc = 0x242884u;
    {
        const bool branch_taken_0x242884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242884u;
        // 0x242888: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242884) {
            ctx->pc = 0x24289Cu;
            goto label_24289c;
        }
    }
    ctx->pc = 0x24288Cu;
label_24288c:
    // 0x24288c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x24288cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_242890:
    // 0x242890: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_242894:
    if (ctx->pc == 0x242894u) {
        ctx->pc = 0x242894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242890u;
        // 0x242894: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242898u;
        goto label_242898;
    }
    ctx->pc = 0x242890u;
    {
        const bool branch_taken_0x242890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242890u;
        // 0x242894: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242890) {
            ctx->pc = 0x242880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242880;
        }
    }
    ctx->pc = 0x242898u;
label_242898:
    // 0x242898: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x242898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_24289c:
    // 0x24289c: 0xc073e86  jal         func_1CFA18
label_2428a0:
    if (ctx->pc == 0x2428A0u) {
        ctx->pc = 0x2428A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24289Cu;
        // 0x2428a0: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428A4u;
        goto label_2428a4;
    }
    ctx->pc = 0x24289Cu;
    SET_GPR_U32(ctx, 31, 0x2428A4u);
    ctx->pc = 0x2428A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24289Cu;
    // 0x2428a0: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x24289Cu, 0x2428A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428A4u;
label_2428a4:
    // 0x2428a4: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x2428a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
label_2428a8:
    // 0x2428a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2428a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2428ac:
    // 0x2428ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2428acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2428b0:
    // 0x2428b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2428b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2428b4:
    // 0x2428b4: 0x3e00008  jr          $ra
label_2428b8:
    if (ctx->pc == 0x2428B8u) {
        ctx->pc = 0x2428B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428B4u;
        // 0x2428b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428BCu;
        goto label_2428bc;
    }
    ctx->pc = 0x2428B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2428B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428B4u;
        // 0x2428b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2428B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2428BCu;
label_2428bc:
    // 0x2428bc: 0x0  nop
    ctx->pc = 0x2428bcu;
    // NOP
    ctx->pc = 0x2428c0u;
}
