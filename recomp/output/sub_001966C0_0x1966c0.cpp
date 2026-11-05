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

// Function: sub_001966C0
// Address: 0x1966c0 - 0x1967d8
void sub_001966C0_0x1966c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001966C0_0x1966c0");
#endif

    switch (ctx->pc) {
        case 0x1966c0u: goto label_1966c0;
        case 0x1966c4u: goto label_1966c4;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ccu: goto label_1966cc;
        case 0x1966d0u: goto label_1966d0;
        case 0x1966d4u: goto label_1966d4;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966dcu: goto label_1966dc;
        case 0x1966e0u: goto label_1966e0;
        case 0x1966e4u: goto label_1966e4;
        case 0x1966e8u: goto label_1966e8;
        case 0x1966ecu: goto label_1966ec;
        case 0x1966f0u: goto label_1966f0;
        case 0x1966f4u: goto label_1966f4;
        case 0x1966f8u: goto label_1966f8;
        case 0x1966fcu: goto label_1966fc;
        case 0x196700u: goto label_196700;
        case 0x196704u: goto label_196704;
        case 0x196708u: goto label_196708;
        case 0x19670cu: goto label_19670c;
        case 0x196710u: goto label_196710;
        case 0x196714u: goto label_196714;
        case 0x196718u: goto label_196718;
        case 0x19671cu: goto label_19671c;
        case 0x196720u: goto label_196720;
        case 0x196724u: goto label_196724;
        case 0x196728u: goto label_196728;
        case 0x19672cu: goto label_19672c;
        case 0x196730u: goto label_196730;
        case 0x196734u: goto label_196734;
        case 0x196738u: goto label_196738;
        case 0x19673cu: goto label_19673c;
        case 0x196740u: goto label_196740;
        case 0x196744u: goto label_196744;
        case 0x196748u: goto label_196748;
        case 0x19674cu: goto label_19674c;
        case 0x196750u: goto label_196750;
        case 0x196754u: goto label_196754;
        case 0x196758u: goto label_196758;
        case 0x19675cu: goto label_19675c;
        case 0x196760u: goto label_196760;
        case 0x196764u: goto label_196764;
        case 0x196768u: goto label_196768;
        case 0x19676cu: goto label_19676c;
        case 0x196770u: goto label_196770;
        case 0x196774u: goto label_196774;
        case 0x196778u: goto label_196778;
        case 0x19677cu: goto label_19677c;
        case 0x196780u: goto label_196780;
        case 0x196784u: goto label_196784;
        case 0x196788u: goto label_196788;
        case 0x19678cu: goto label_19678c;
        case 0x196790u: goto label_196790;
        case 0x196794u: goto label_196794;
        case 0x196798u: goto label_196798;
        case 0x19679cu: goto label_19679c;
        case 0x1967a0u: goto label_1967a0;
        case 0x1967a4u: goto label_1967a4;
        case 0x1967a8u: goto label_1967a8;
        case 0x1967acu: goto label_1967ac;
        case 0x1967b0u: goto label_1967b0;
        case 0x1967b4u: goto label_1967b4;
        case 0x1967b8u: goto label_1967b8;
        case 0x1967bcu: goto label_1967bc;
        case 0x1967c0u: goto label_1967c0;
        case 0x1967c4u: goto label_1967c4;
        case 0x1967c8u: goto label_1967c8;
        case 0x1967ccu: goto label_1967cc;
        case 0x1967d0u: goto label_1967d0;
        case 0x1967d4u: goto label_1967d4;
        default: break;
    }

    ctx->pc = 0x1966c0u;

label_1966c0:
    // 0x1966c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1966c4:
    // 0x1966c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1966c8:
    // 0x1966c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1966c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1966cc:
    // 0x1966cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1966ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1966d0:
    // 0x1966d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1966d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1966d4:
    // 0x1966d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1966d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1966d8:
    // 0x1966d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1966dc:
    // 0x1966dc: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_1966e0:
    if (ctx->pc == 0x1966E0u) {
        ctx->pc = 0x1966E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966DCu;
        // 0x1966e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966E4u;
        goto label_1966e4;
    }
    ctx->pc = 0x1966DCu;
    {
        const bool branch_taken_0x1966dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1966E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966DCu;
        // 0x1966e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966dc) {
            ctx->pc = 0x1967C0u;
            goto label_1967c0;
        }
    }
    ctx->pc = 0x1966E4u;
label_1966e4:
    // 0x1966e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1966e8:
    // 0x1966e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1966ec:
    if (ctx->pc == 0x1966ECu) {
        ctx->pc = 0x1966ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966E8u;
        // 0x1966ec: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966F0u;
        goto label_1966f0;
    }
    ctx->pc = 0x1966E8u;
    {
        const bool branch_taken_0x1966e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966E8u;
        // 0x1966ec: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966e8) {
            ctx->pc = 0x196700u;
            goto label_196700;
        }
    }
    ctx->pc = 0x1966F0u;
label_1966f0:
    // 0x1966f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1966f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1966f4:
    // 0x1966f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1966f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1966f8:
    // 0x1966f8: 0x40f809  jalr        $v0
label_1966fc:
    if (ctx->pc == 0x1966FCu) {
        ctx->pc = 0x196700u;
        goto label_196700;
    }
    ctx->pc = 0x1966F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196700u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966F8u, 0x196700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196700u;
label_196700:
    // 0x196700: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x196700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_196704:
    // 0x196704: 0xc061a12  jal         func_186848
label_196708:
    if (ctx->pc == 0x196708u) {
        ctx->pc = 0x196708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196704u;
        // 0x196708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19670Cu;
        goto label_19670c;
    }
    ctx->pc = 0x196704u;
    SET_GPR_U32(ctx, 31, 0x19670Cu);
    ctx->pc = 0x196708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196704u;
    // 0x196708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196704u, 0x19670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19670Cu;
label_19670c:
    // 0x19670c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19670cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196710:
    // 0x196710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196714:
    // 0x196714: 0xc07023a  jal         func_1C08E8
label_196718:
    if (ctx->pc == 0x196718u) {
        ctx->pc = 0x196718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196714u;
        // 0x196718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19671Cu;
        goto label_19671c;
    }
    ctx->pc = 0x196714u;
    SET_GPR_U32(ctx, 31, 0x19671Cu);
    ctx->pc = 0x196718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196714u;
    // 0x196718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x196714u, 0x19671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19671Cu;
label_19671c:
    // 0x19671c: 0xc061a16  jal         func_186858
label_196720:
    if (ctx->pc == 0x196720u) {
        ctx->pc = 0x196720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19671Cu;
        // 0x196720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196724u;
        goto label_196724;
    }
    ctx->pc = 0x19671Cu;
    SET_GPR_U32(ctx, 31, 0x196724u);
    ctx->pc = 0x196720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19671Cu;
    // 0x196720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19671Cu, 0x196724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196724u;
label_196724:
    // 0x196724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196728:
    // 0x196728: 0xc06ee66  jal         func_1BB998
label_19672c:
    if (ctx->pc == 0x19672Cu) {
        ctx->pc = 0x19672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196728u;
        // 0x19672c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196730u;
        goto label_196730;
    }
    ctx->pc = 0x196728u;
    SET_GPR_U32(ctx, 31, 0x196730u);
    ctx->pc = 0x19672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196728u;
    // 0x19672c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x196728u, 0x196730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196730u;
label_196730:
    // 0x196730: 0xc061a16  jal         func_186858
label_196734:
    if (ctx->pc == 0x196734u) {
        ctx->pc = 0x196734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196730u;
        // 0x196734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196738u;
        goto label_196738;
    }
    ctx->pc = 0x196730u;
    SET_GPR_U32(ctx, 31, 0x196738u);
    ctx->pc = 0x196734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196730u;
    // 0x196734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x196730u, 0x196738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196738u;
label_196738:
    // 0x196738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19673c:
    // 0x19673c: 0xc06eebe  jal         func_1BBAF8
label_196740:
    if (ctx->pc == 0x196740u) {
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196744u;
        goto label_196744;
    }
    ctx->pc = 0x19673Cu;
    SET_GPR_U32(ctx, 31, 0x196744u);
    ctx->pc = 0x196740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19673Cu;
    // 0x196740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19673Cu, 0x196744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196744u;
label_196744:
    // 0x196744: 0xc061a16  jal         func_186858
label_196748:
    if (ctx->pc == 0x196748u) {
        ctx->pc = 0x196748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196744u;
        // 0x196748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19674Cu;
        goto label_19674c;
    }
    ctx->pc = 0x196744u;
    SET_GPR_U32(ctx, 31, 0x19674Cu);
    ctx->pc = 0x196748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196744u;
    // 0x196748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x196744u, 0x19674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19674Cu;
label_19674c:
    // 0x19674c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19674cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_196750:
    // 0x196750: 0xc061a12  jal         func_186848
label_196754:
    if (ctx->pc == 0x196754u) {
        ctx->pc = 0x196754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196750u;
        // 0x196754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196758u;
        goto label_196758;
    }
    ctx->pc = 0x196750u;
    SET_GPR_U32(ctx, 31, 0x196758u);
    ctx->pc = 0x196754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196750u;
    // 0x196754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196750u, 0x196758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196758u;
label_196758:
    // 0x196758: 0xc4410290  lwc1        $f1, 0x290($v0)
    ctx->pc = 0x196758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19675c:
    // 0x19675c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_196760:
    // 0x196760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_196764:
    // 0x196764: 0x0  nop
    ctx->pc = 0x196764u;
    // NOP
label_196768:
    // 0x196768: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x196768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19676c:
    // 0x19676c: 0x0  nop
    ctx->pc = 0x19676cu;
    // NOP
label_196770:
    // 0x196770: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_196774:
    if (ctx->pc == 0x196774u) {
        ctx->pc = 0x196778u;
        goto label_196778;
    }
    ctx->pc = 0x196770u;
    {
        const bool branch_taken_0x196770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196770) {
            ctx->pc = 0x196790u;
            goto label_196790;
        }
    }
    ctx->pc = 0x196778u;
label_196778:
    // 0x196778: 0xc061a1e  jal         func_186878
label_19677c:
    if (ctx->pc == 0x19677Cu) {
        ctx->pc = 0x19677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196778u;
        // 0x19677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196780u;
        goto label_196780;
    }
    ctx->pc = 0x196778u;
    SET_GPR_U32(ctx, 31, 0x196780u);
    ctx->pc = 0x19677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196778u;
    // 0x19677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x196778u, 0x196780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196780u;
label_196780:
    // 0x196780: 0xc06e0f0  jal         func_1B83C0
label_196784:
    if (ctx->pc == 0x196784u) {
        ctx->pc = 0x196784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196780u;
        // 0x196784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196788u;
        goto label_196788;
    }
    ctx->pc = 0x196780u;
    SET_GPR_U32(ctx, 31, 0x196788u);
    ctx->pc = 0x196784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196780u;
    // 0x196784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x196780u, 0x196788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196788u;
label_196788:
    // 0x196788: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19678c:
    if (ctx->pc == 0x19678Cu) {
        ctx->pc = 0x196790u;
        goto label_196790;
    }
    ctx->pc = 0x196788u;
    {
        const bool branch_taken_0x196788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196788) {
            ctx->pc = 0x1967A8u;
            goto label_1967a8;
        }
    }
    ctx->pc = 0x196790u;
label_196790:
    // 0x196790: 0xc061a16  jal         func_186858
label_196794:
    if (ctx->pc == 0x196794u) {
        ctx->pc = 0x196794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196790u;
        // 0x196794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196798u;
        goto label_196798;
    }
    ctx->pc = 0x196790u;
    SET_GPR_U32(ctx, 31, 0x196798u);
    ctx->pc = 0x196794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196790u;
    // 0x196794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x196790u, 0x196798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196798u;
label_196798:
    // 0x196798: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x196798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19679c:
    // 0x19679c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19679cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1967a0:
    // 0x1967a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1967a4:
    if (ctx->pc == 0x1967A4u) {
        ctx->pc = 0x1967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967A0u;
        // 0x1967a4: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967A8u;
        goto label_1967a8;
    }
    ctx->pc = 0x1967A0u;
    {
        const bool branch_taken_0x1967a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967A0u;
        // 0x1967a4: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967a0) {
            ctx->pc = 0x1967C0u;
            goto label_1967c0;
        }
    }
    ctx->pc = 0x1967A8u;
label_1967a8:
    // 0x1967a8: 0xc061a16  jal         func_186858
label_1967ac:
    if (ctx->pc == 0x1967ACu) {
        ctx->pc = 0x1967ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967A8u;
        // 0x1967ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967B0u;
        goto label_1967b0;
    }
    ctx->pc = 0x1967A8u;
    SET_GPR_U32(ctx, 31, 0x1967B0u);
    ctx->pc = 0x1967ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967A8u;
    // 0x1967ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1967A8u, 0x1967B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1967B0u;
label_1967b0:
    // 0x1967b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1967b4:
    // 0x1967b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1967b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1967b8:
    // 0x1967b8: 0x0  nop
    ctx->pc = 0x1967b8u;
    // NOP
label_1967bc:
    // 0x1967bc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1967bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1967c0:
    // 0x1967c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1967c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1967c4:
    // 0x1967c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1967c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1967c8:
    // 0x1967c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1967c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1967cc:
    // 0x1967cc: 0x3e00008  jr          $ra
label_1967d0:
    if (ctx->pc == 0x1967D0u) {
        ctx->pc = 0x1967D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967CCu;
        // 0x1967d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967D4u;
        goto label_1967d4;
    }
    ctx->pc = 0x1967CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1967D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967CCu;
        // 0x1967d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1967CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967D4u;
label_1967d4:
    // 0x1967d4: 0x0  nop
    ctx->pc = 0x1967d4u;
    // NOP
    ctx->pc = 0x1967d8u;
}
