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

// Function: sub_002467C8
// Address: 0x2467c8 - 0x246a58
void sub_002467C8_0x2467c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002467C8_0x2467c8");
#endif

    switch (ctx->pc) {
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        case 0x246980u: goto label_246980;
        case 0x246984u: goto label_246984;
        case 0x246988u: goto label_246988;
        case 0x24698cu: goto label_24698c;
        case 0x246990u: goto label_246990;
        case 0x246994u: goto label_246994;
        case 0x246998u: goto label_246998;
        case 0x24699cu: goto label_24699c;
        case 0x2469a0u: goto label_2469a0;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469a8u: goto label_2469a8;
        case 0x2469acu: goto label_2469ac;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469b4u: goto label_2469b4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469bcu: goto label_2469bc;
        case 0x2469c0u: goto label_2469c0;
        case 0x2469c4u: goto label_2469c4;
        case 0x2469c8u: goto label_2469c8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469d4u: goto label_2469d4;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469dcu: goto label_2469dc;
        case 0x2469e0u: goto label_2469e0;
        case 0x2469e4u: goto label_2469e4;
        case 0x2469e8u: goto label_2469e8;
        case 0x2469ecu: goto label_2469ec;
        case 0x2469f0u: goto label_2469f0;
        case 0x2469f4u: goto label_2469f4;
        case 0x2469f8u: goto label_2469f8;
        case 0x2469fcu: goto label_2469fc;
        case 0x246a00u: goto label_246a00;
        case 0x246a04u: goto label_246a04;
        case 0x246a08u: goto label_246a08;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a10u: goto label_246a10;
        case 0x246a14u: goto label_246a14;
        case 0x246a18u: goto label_246a18;
        case 0x246a1cu: goto label_246a1c;
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        default: break;
    }

    ctx->pc = 0x2467c8u;

label_2467c8:
    // 0x2467c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2467c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2467cc:
    // 0x2467cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2467ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2467d0:
    // 0x2467d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2467d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2467d4:
    // 0x2467d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2467d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2467d8:
    // 0x2467d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2467d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2467dc:
    // 0x2467dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2467dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2467e0:
    // 0x2467e0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2467e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2467e4:
    // 0x2467e4: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x2467e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_2467e8:
    // 0x2467e8: 0x40f809  jalr        $v0
label_2467ec:
    if (ctx->pc == 0x2467ECu) {
        ctx->pc = 0x2467ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467E8u;
        // 0x2467ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467F0u;
        goto label_2467f0;
    }
    ctx->pc = 0x2467E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2467F0u);
        ctx->pc = 0x2467ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467E8u;
        // 0x2467ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2467E8u, 0x2467F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2467F0u;
label_2467f0:
    // 0x2467f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2467f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2467f4:
    // 0x2467f4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2467f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2467f8:
    // 0x2467f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2467f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2467fc:
    // 0x2467fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2467fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_246800:
    // 0x246800: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x246800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246804:
    // 0x246804: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x246804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246808:
    // 0x246808: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x246808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_24680c:
    // 0x24680c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24680cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246810:
    // 0x246810: 0x0  nop
    ctx->pc = 0x246810u;
    // NOP
label_246814:
    // 0x246814: 0x45020053  bc1fl       . + 4 + (0x53 << 2)
label_246818:
    if (ctx->pc == 0x246818u) {
        ctx->pc = 0x246818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246814u;
        // 0x246818: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24681Cu;
        goto label_24681c;
    }
    ctx->pc = 0x246814u;
    {
        const bool branch_taken_0x246814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246814) {
            ctx->pc = 0x246818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246814u;
            // 0x246818: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246964u;
            goto label_246964;
        }
    }
    ctx->pc = 0x24681Cu;
label_24681c:
    // 0x24681c: 0xc08da92  jal         func_236A48
label_246820:
    if (ctx->pc == 0x246820u) {
        ctx->pc = 0x246820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24681Cu;
        // 0x246820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246824u;
        goto label_246824;
    }
    ctx->pc = 0x24681Cu;
    SET_GPR_U32(ctx, 31, 0x246824u);
    ctx->pc = 0x246820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24681Cu;
    // 0x246820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x24681Cu, 0x246824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246824u;
label_246824:
    // 0x246824: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
label_246828:
    if (ctx->pc == 0x246828u) {
        ctx->pc = 0x246828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246824u;
        // 0x246828: 0x8e220408  lw          $v0, 0x408($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24682Cu;
        goto label_24682c;
    }
    ctx->pc = 0x246824u;
    {
        const bool branch_taken_0x246824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246824) {
            ctx->pc = 0x246828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246824u;
            // 0x246828: 0x8e220408  lw          $v0, 0x408($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246938u;
            goto label_246938;
        }
    }
    ctx->pc = 0x24682Cu;
label_24682c:
    // 0x24682c: 0xc0899bc  jal         func_2266F0
label_246830:
    if (ctx->pc == 0x246830u) {
        ctx->pc = 0x246830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24682Cu;
        // 0x246830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246834u;
        goto label_246834;
    }
    ctx->pc = 0x24682Cu;
    SET_GPR_U32(ctx, 31, 0x246834u);
    ctx->pc = 0x246830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24682Cu;
    // 0x246830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24682Cu, 0x246834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246834u;
label_246834:
    // 0x246834: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_246838:
    if (ctx->pc == 0x246838u) {
        ctx->pc = 0x246838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246834u;
        // 0x246838: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24683Cu;
        goto label_24683c;
    }
    ctx->pc = 0x246834u;
    {
        const bool branch_taken_0x246834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246834) {
            ctx->pc = 0x246838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246834u;
            // 0x246838: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24685Cu;
            goto label_24685c;
        }
    }
    ctx->pc = 0x24683Cu;
label_24683c:
    // 0x24683c: 0xc0899bc  jal         func_2266F0
label_246840:
    if (ctx->pc == 0x246840u) {
        ctx->pc = 0x246840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24683Cu;
        // 0x246840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246844u;
        goto label_246844;
    }
    ctx->pc = 0x24683Cu;
    SET_GPR_U32(ctx, 31, 0x246844u);
    ctx->pc = 0x246840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24683Cu;
    // 0x246840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24683Cu, 0x246844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246844u;
label_246844:
    // 0x246844: 0xc097f26  jal         func_25FC98
label_246848:
    if (ctx->pc == 0x246848u) {
        ctx->pc = 0x246848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246844u;
        // 0x246848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24684Cu;
        goto label_24684c;
    }
    ctx->pc = 0x246844u;
    SET_GPR_U32(ctx, 31, 0x24684Cu);
    ctx->pc = 0x246848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246844u;
    // 0x246848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x246844u, 0x24684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24684Cu;
label_24684c:
    // 0x24684c: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x24684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_246850:
    // 0x246850: 0x50430039  beql        $v0, $v1, . + 4 + (0x39 << 2)
label_246854:
    if (ctx->pc == 0x246854u) {
        ctx->pc = 0x246854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246850u;
        // 0x246854: 0x8e220408  lw          $v0, 0x408($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246858u;
        goto label_246858;
    }
    ctx->pc = 0x246850u;
    {
        const bool branch_taken_0x246850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246850) {
            ctx->pc = 0x246854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246850u;
            // 0x246854: 0x8e220408  lw          $v0, 0x408($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246938u;
            goto label_246938;
        }
    }
    ctx->pc = 0x246858u;
label_246858:
    // 0x246858: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x246858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24685c:
    // 0x24685c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x24685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_246860:
    // 0x246860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246864:
    // 0x246864: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x246864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_246868:
    // 0x246868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24686c:
    // 0x24686c: 0x286307bc  slti        $v1, $v1, 0x7BC
    ctx->pc = 0x24686cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1980) ? 1 : 0);
label_246870:
    // 0x246870: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x246870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_246874:
    // 0x246874: 0x54600030  bnel        $v1, $zero, . + 4 + (0x30 << 2)
label_246878:
    if (ctx->pc == 0x246878u) {
        ctx->pc = 0x246878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246874u;
        // 0x246878: 0x8e220408  lw          $v0, 0x408($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24687Cu;
        goto label_24687c;
    }
    ctx->pc = 0x246874u;
    {
        const bool branch_taken_0x246874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246874) {
            ctx->pc = 0x246878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246874u;
            // 0x246878: 0x8e220408  lw          $v0, 0x408($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246938u;
            goto label_246938;
        }
    }
    ctx->pc = 0x24687Cu;
label_24687c:
    // 0x24687c: 0xc62103e0  lwc1        $f1, 0x3E0($s1)
    ctx->pc = 0x24687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246880:
    // 0x246880: 0x262203e0  addiu       $v0, $s1, 0x3E0
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 992));
label_246884:
    // 0x246884: 0x240307b4  addiu       $v1, $zero, 0x7B4
    ctx->pc = 0x246884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1972));
label_246888:
    // 0x246888: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x246888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24688c:
    // 0x24688c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246890:
    // 0x246890: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x246890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_246894:
    // 0x246894: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x246894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246898:
    // 0x246898: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x246898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24689c:
    // 0x24689c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2468a0:
    // 0x2468a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2468a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2468a4:
    // 0x2468a4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2468a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2468a8:
    // 0x2468a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2468a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2468ac:
    // 0x2468ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2468acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2468b0:
    // 0x2468b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2468b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2468b4:
    // 0x2468b4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_2468b8:
    if (ctx->pc == 0x2468B8u) {
        ctx->pc = 0x2468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468B4u;
        // 0x2468b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468BCu;
        goto label_2468bc;
    }
    ctx->pc = 0x2468B4u;
    {
        const bool branch_taken_0x2468b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468B4u;
        // 0x2468b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468b4) {
            ctx->pc = 0x2468E0u;
            goto label_2468e0;
        }
    }
    ctx->pc = 0x2468BCu;
label_2468bc:
    // 0x2468bc: 0x240207b6  addiu       $v0, $zero, 0x7B6
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1974));
label_2468c0:
    // 0x2468c0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_2468c4:
    if (ctx->pc == 0x2468C4u) {
        ctx->pc = 0x2468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468C0u;
        // 0x2468c4: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468C8u;
        goto label_2468c8;
    }
    ctx->pc = 0x2468C0u;
    {
        const bool branch_taken_0x2468c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468C0u;
        // 0x2468c4: 0x240207b8  addiu       $v0, $zero, 0x7B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468c0) {
            ctx->pc = 0x2468E0u;
            goto label_2468e0;
        }
    }
    ctx->pc = 0x2468C8u;
label_2468c8:
    // 0x2468c8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2468cc:
    if (ctx->pc == 0x2468CCu) {
        ctx->pc = 0x2468CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468C8u;
        // 0x2468cc: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468D0u;
        goto label_2468d0;
    }
    ctx->pc = 0x2468C8u;
    {
        const bool branch_taken_0x2468c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2468CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468C8u;
        // 0x2468cc: 0x240207c0  addiu       $v0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468c8) {
            ctx->pc = 0x2468E0u;
            goto label_2468e0;
        }
    }
    ctx->pc = 0x2468D0u;
label_2468d0:
    // 0x2468d0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2468d4:
    if (ctx->pc == 0x2468D4u) {
        ctx->pc = 0x2468D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468D0u;
        // 0x2468d4: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468D8u;
        goto label_2468d8;
    }
    ctx->pc = 0x2468D0u;
    {
        const bool branch_taken_0x2468d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2468D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468D0u;
        // 0x2468d4: 0x240207ba  addiu       $v0, $zero, 0x7BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468d0) {
            ctx->pc = 0x2468E0u;
            goto label_2468e0;
        }
    }
    ctx->pc = 0x2468D8u;
label_2468d8:
    // 0x2468d8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_2468dc:
    if (ctx->pc == 0x2468DCu) {
        ctx->pc = 0x2468E0u;
        goto label_2468e0;
    }
    ctx->pc = 0x2468D8u;
    {
        const bool branch_taken_0x2468d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2468d8) {
            ctx->pc = 0x2468E4u;
            goto label_2468e4;
        }
    }
    ctx->pc = 0x2468E0u;
label_2468e0:
    // 0x2468e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2468e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2468e4:
    // 0x2468e4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2468e8:
    if (ctx->pc == 0x2468E8u) {
        ctx->pc = 0x2468E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468E4u;
        // 0x2468e8: 0x262203f0  addiu       $v0, $s1, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468ECu;
        goto label_2468ec;
    }
    ctx->pc = 0x2468E4u;
    {
        const bool branch_taken_0x2468e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468E4u;
        // 0x2468e8: 0x262203f0  addiu       $v0, $s1, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468e4) {
            ctx->pc = 0x246904u;
            goto label_246904;
        }
    }
    ctx->pc = 0x2468ECu;
label_2468ec:
    // 0x2468ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2468ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2468f0:
    // 0x2468f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2468f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2468f4:
    // 0x2468f4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2468f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2468f8:
    // 0x2468f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2468f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2468fc:
    // 0x2468fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_246900:
    if (ctx->pc == 0x246900u) {
        ctx->pc = 0x246900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468FCu;
        // 0x246900: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246904u;
        goto label_246904;
    }
    ctx->pc = 0x2468FCu;
    {
        const bool branch_taken_0x2468fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468FCu;
        // 0x246900: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468fc) {
            ctx->pc = 0x246918u;
            goto label_246918;
        }
    }
    ctx->pc = 0x246904u;
label_246904:
    // 0x246904: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x246904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_246908:
    // 0x246908: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x246908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24690c:
    // 0x24690c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24690cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_246910:
    // 0x246910: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x246910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_246914:
    // 0x246914: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x246914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_246918:
    // 0x246918: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x246918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24691c:
    // 0x24691c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246920:
    // 0x246920: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x246920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_246924:
    // 0x246924: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x246924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_246928:
    // 0x246928: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x246928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24692c:
    // 0x24692c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246930:
    // 0x246930: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x246930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_246934:
    // 0x246934: 0x8e220408  lw          $v0, 0x408($s1)
    ctx->pc = 0x246934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
label_246938:
    // 0x246938: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_24693c:
    if (ctx->pc == 0x24693Cu) {
        ctx->pc = 0x24693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246938u;
        // 0x24693c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246940u;
        goto label_246940;
    }
    ctx->pc = 0x246938u;
    {
        const bool branch_taken_0x246938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246938u;
        // 0x24693c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246938) {
            ctx->pc = 0x246A44u;
            goto label_246a44;
        }
    }
    ctx->pc = 0x246940u;
label_246940:
    // 0x246940: 0xc6200400  lwc1        $f0, 0x400($s1)
    ctx->pc = 0x246940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246944:
    // 0x246944: 0xc62c0404  lwc1        $f12, 0x404($s1)
    ctx->pc = 0x246944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246948:
    // 0x246948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24694c:
    // 0x24694c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x24694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_246950:
    // 0x246950: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x246950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_246954:
    // 0x246954: 0x40f809  jalr        $v0
label_246958:
    if (ctx->pc == 0x246958u) {
        ctx->pc = 0x246958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246954u;
        // 0x246958: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24695Cu;
        goto label_24695c;
    }
    ctx->pc = 0x246954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24695Cu);
        ctx->pc = 0x246958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246954u;
        // 0x246958: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246954u, 0x24695Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24695Cu;
label_24695c:
    // 0x24695c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_246960:
    if (ctx->pc == 0x246960u) {
        ctx->pc = 0x246960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24695Cu;
        // 0x246960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246964u;
        goto label_246964;
    }
    ctx->pc = 0x24695Cu;
    {
        const bool branch_taken_0x24695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24695Cu;
        // 0x246960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24695c) {
            ctx->pc = 0x246A48u;
            goto label_246a48;
        }
    }
    ctx->pc = 0x246964u;
label_246964:
    // 0x246964: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x246964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_246968:
    // 0x246968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24696c:
    // 0x24696c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246970:
    // 0x246970: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_246974:
    // 0x246974: 0x288407bc  slti        $a0, $a0, 0x7BC
    ctx->pc = 0x246974u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1980) ? 1 : 0);
label_246978:
    // 0x246978: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x246978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_24697c:
    // 0x24697c: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_246980:
    if (ctx->pc == 0x246980u) {
        ctx->pc = 0x246980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24697Cu;
        // 0x246980: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246984u;
        goto label_246984;
    }
    ctx->pc = 0x24697Cu;
    {
        const bool branch_taken_0x24697c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24697c) {
            ctx->pc = 0x246980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24697Cu;
            // 0x246980: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24699Cu;
            goto label_24699c;
        }
    }
    ctx->pc = 0x246984u;
label_246984:
    // 0x246984: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x246984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_246988:
    // 0x246988: 0x262403e0  addiu       $a0, $s1, 0x3E0
    ctx->pc = 0x246988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 992));
label_24698c:
    // 0x24698c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_246990:
    // 0x246990: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x246990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_246994:
    // 0x246994: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x246994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_246998:
    // 0x246998: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x246998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_24699c:
    // 0x24699c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2469a0:
    // 0x2469a0: 0xc62c0400  lwc1        $f12, 0x400($s1)
    ctx->pc = 0x2469a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2469a4:
    // 0x2469a4: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2469a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2469a8:
    // 0x2469a8: 0x40f809  jalr        $v0
label_2469ac:
    if (ctx->pc == 0x2469ACu) {
        ctx->pc = 0x2469ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A8u;
        // 0x2469ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469B0u;
        goto label_2469b0;
    }
    ctx->pc = 0x2469A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2469B0u);
        ctx->pc = 0x2469ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A8u;
        // 0x2469ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2469A8u, 0x2469B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2469B0u;
label_2469b0:
    // 0x2469b0: 0x8e24036c  lw          $a0, 0x36C($s1)
    ctx->pc = 0x2469b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2469b4:
    // 0x2469b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2469b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2469b8:
    // 0x2469b8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2469b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2469bc:
    // 0x2469bc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2469c0:
    if (ctx->pc == 0x2469C0u) {
        ctx->pc = 0x2469C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469BCu;
        // 0x2469c0: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469C4u;
        goto label_2469c4;
    }
    ctx->pc = 0x2469BCu;
    {
        const bool branch_taken_0x2469bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2469C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469BCu;
        // 0x2469c0: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469bc) {
            ctx->pc = 0x2469D8u;
            goto label_2469d8;
        }
    }
    ctx->pc = 0x2469C4u;
label_2469c4:
    // 0x2469c4: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2469c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2469c8:
    // 0x2469c8: 0xc06bb88  jal         func_1AEE20
label_2469cc:
    if (ctx->pc == 0x2469CCu) {
        ctx->pc = 0x2469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C8u;
        // 0x2469cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469D0u;
        goto label_2469d0;
    }
    ctx->pc = 0x2469C8u;
    SET_GPR_U32(ctx, 31, 0x2469D0u);
    ctx->pc = 0x2469CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469C8u;
    // 0x2469cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE20u, 0x2469C8u, 0x2469D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469D0u;
label_2469d0:
    // 0x2469d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2469d4:
    if (ctx->pc == 0x2469D4u) {
        ctx->pc = 0x2469D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D0u;
        // 0x2469d4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469D8u;
        goto label_2469d8;
    }
    ctx->pc = 0x2469D0u;
    {
        const bool branch_taken_0x2469d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469D0u;
        // 0x2469d4: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469d0) {
            ctx->pc = 0x246A04u;
            goto label_246a04;
        }
    }
    ctx->pc = 0x2469D8u;
label_2469d8:
    // 0x2469d8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2469d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2469dc:
    // 0x2469dc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2469e0:
    if (ctx->pc == 0x2469E0u) {
        ctx->pc = 0x2469E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469DCu;
        // 0x2469e0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469E4u;
        goto label_2469e4;
    }
    ctx->pc = 0x2469DCu;
    {
        const bool branch_taken_0x2469dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2469E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469DCu;
        // 0x2469e0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469dc) {
            ctx->pc = 0x2469F4u;
            goto label_2469f4;
        }
    }
    ctx->pc = 0x2469E4u;
label_2469e4:
    // 0x2469e4: 0xc06bbb6  jal         func_1AEED8
label_2469e8:
    if (ctx->pc == 0x2469E8u) {
        ctx->pc = 0x2469E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469E4u;
        // 0x2469e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469ECu;
        goto label_2469ec;
    }
    ctx->pc = 0x2469E4u;
    SET_GPR_U32(ctx, 31, 0x2469ECu);
    ctx->pc = 0x2469E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469E4u;
    // 0x2469e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEED8u, 0x2469E4u, 0x2469ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2469ECu;
label_2469ec:
    // 0x2469ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2469f0:
    if (ctx->pc == 0x2469F0u) {
        ctx->pc = 0x2469F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469ECu;
        // 0x2469f0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469F4u;
        goto label_2469f4;
    }
    ctx->pc = 0x2469ECu;
    {
        const bool branch_taken_0x2469ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469ECu;
        // 0x2469f0: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469ec) {
            ctx->pc = 0x246A04u;
            goto label_246a04;
        }
    }
    ctx->pc = 0x2469F4u;
label_2469f4:
    // 0x2469f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2469f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2469f8:
    // 0x2469f8: 0xc06bb4e  jal         func_1AED38
label_2469fc:
    if (ctx->pc == 0x2469FCu) {
        ctx->pc = 0x2469FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469F8u;
        // 0x2469fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A00u;
        goto label_246a00;
    }
    ctx->pc = 0x2469F8u;
    SET_GPR_U32(ctx, 31, 0x246A00u);
    ctx->pc = 0x2469FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469F8u;
    // 0x2469fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED38u, 0x2469F8u, 0x246A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A00u;
label_246a00:
    // 0x246a00: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x246a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_246a04:
    // 0x246a04: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x246a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_246a08:
    // 0x246a08: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_246a0c:
    if (ctx->pc == 0x246A0Cu) {
        ctx->pc = 0x246A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A08u;
        // 0x246a0c: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A10u;
        goto label_246a10;
    }
    ctx->pc = 0x246A08u;
    {
        const bool branch_taken_0x246a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a08) {
            ctx->pc = 0x246A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A08u;
            // 0x246a0c: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246A1Cu;
            goto label_246a1c;
        }
    }
    ctx->pc = 0x246A10u;
label_246a10:
    // 0x246a10: 0xc06bfc8  jal         func_1AFF20
label_246a14:
    if (ctx->pc == 0x246A14u) {
        ctx->pc = 0x246A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A10u;
        // 0x246a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A18u;
        goto label_246a18;
    }
    ctx->pc = 0x246A10u;
    SET_GPR_U32(ctx, 31, 0x246A18u);
    ctx->pc = 0x246A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A10u;
    // 0x246a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x246A10u, 0x246A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A18u;
label_246a18:
    // 0x246a18: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x246a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_246a1c:
    // 0x246a1c: 0xc0757d2  jal         func_1D5F48
label_246a20:
    if (ctx->pc == 0x246A20u) {
        ctx->pc = 0x246A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A1Cu;
        // 0x246a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A24u;
        goto label_246a24;
    }
    ctx->pc = 0x246A1Cu;
    SET_GPR_U32(ctx, 31, 0x246A24u);
    ctx->pc = 0x246A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A1Cu;
    // 0x246a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x246A1Cu, 0x246A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A24u;
label_246a24:
    // 0x246a24: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x246a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_246a28:
    // 0x246a28: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x246a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_246a2c:
    // 0x246a2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_246a30:
    if (ctx->pc == 0x246A30u) {
        ctx->pc = 0x246A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A2Cu;
        // 0x246a30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A34u;
        goto label_246a34;
    }
    ctx->pc = 0x246A2Cu;
    {
        const bool branch_taken_0x246a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A2Cu;
        // 0x246a30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a2c) {
            ctx->pc = 0x246A48u;
            goto label_246a48;
        }
    }
    ctx->pc = 0x246A34u;
label_246a34:
    // 0x246a34: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x246a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_246a38:
    // 0x246a38: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x246a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_246a3c:
    // 0x246a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x246a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_246a40:
    // 0x246a40: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x246a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_246a44:
    // 0x246a44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x246a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_246a48:
    // 0x246a48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x246a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_246a4c:
    // 0x246a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x246a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_246a50:
    // 0x246a50: 0x3e00008  jr          $ra
label_246a54:
    if (ctx->pc == 0x246A54u) {
        ctx->pc = 0x246A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A50u;
        // 0x246a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A58u;
        goto label_fallthrough_0x246a50;
    }
    ctx->pc = 0x246A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A50u;
        // 0x246a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246a50:
    ctx->pc = 0x246A58u;
}
