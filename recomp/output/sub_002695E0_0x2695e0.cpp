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

// Function: sub_002695E0
// Address: 0x2695e0 - 0x269818
void sub_002695E0_0x2695e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002695E0_0x2695e0");
#endif

    switch (ctx->pc) {
        case 0x2695e0u: goto label_2695e0;
        case 0x2695e4u: goto label_2695e4;
        case 0x2695e8u: goto label_2695e8;
        case 0x2695ecu: goto label_2695ec;
        case 0x2695f0u: goto label_2695f0;
        case 0x2695f4u: goto label_2695f4;
        case 0x2695f8u: goto label_2695f8;
        case 0x2695fcu: goto label_2695fc;
        case 0x269600u: goto label_269600;
        case 0x269604u: goto label_269604;
        case 0x269608u: goto label_269608;
        case 0x26960cu: goto label_26960c;
        case 0x269610u: goto label_269610;
        case 0x269614u: goto label_269614;
        case 0x269618u: goto label_269618;
        case 0x26961cu: goto label_26961c;
        case 0x269620u: goto label_269620;
        case 0x269624u: goto label_269624;
        case 0x269628u: goto label_269628;
        case 0x26962cu: goto label_26962c;
        case 0x269630u: goto label_269630;
        case 0x269634u: goto label_269634;
        case 0x269638u: goto label_269638;
        case 0x26963cu: goto label_26963c;
        case 0x269640u: goto label_269640;
        case 0x269644u: goto label_269644;
        case 0x269648u: goto label_269648;
        case 0x26964cu: goto label_26964c;
        case 0x269650u: goto label_269650;
        case 0x269654u: goto label_269654;
        case 0x269658u: goto label_269658;
        case 0x26965cu: goto label_26965c;
        case 0x269660u: goto label_269660;
        case 0x269664u: goto label_269664;
        case 0x269668u: goto label_269668;
        case 0x26966cu: goto label_26966c;
        case 0x269670u: goto label_269670;
        case 0x269674u: goto label_269674;
        case 0x269678u: goto label_269678;
        case 0x26967cu: goto label_26967c;
        case 0x269680u: goto label_269680;
        case 0x269684u: goto label_269684;
        case 0x269688u: goto label_269688;
        case 0x26968cu: goto label_26968c;
        case 0x269690u: goto label_269690;
        case 0x269694u: goto label_269694;
        case 0x269698u: goto label_269698;
        case 0x26969cu: goto label_26969c;
        case 0x2696a0u: goto label_2696a0;
        case 0x2696a4u: goto label_2696a4;
        case 0x2696a8u: goto label_2696a8;
        case 0x2696acu: goto label_2696ac;
        case 0x2696b0u: goto label_2696b0;
        case 0x2696b4u: goto label_2696b4;
        case 0x2696b8u: goto label_2696b8;
        case 0x2696bcu: goto label_2696bc;
        case 0x2696c0u: goto label_2696c0;
        case 0x2696c4u: goto label_2696c4;
        case 0x2696c8u: goto label_2696c8;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696d0u: goto label_2696d0;
        case 0x2696d4u: goto label_2696d4;
        case 0x2696d8u: goto label_2696d8;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696e4u: goto label_2696e4;
        case 0x2696e8u: goto label_2696e8;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f0u: goto label_2696f0;
        case 0x2696f4u: goto label_2696f4;
        case 0x2696f8u: goto label_2696f8;
        case 0x2696fcu: goto label_2696fc;
        case 0x269700u: goto label_269700;
        case 0x269704u: goto label_269704;
        case 0x269708u: goto label_269708;
        case 0x26970cu: goto label_26970c;
        case 0x269710u: goto label_269710;
        case 0x269714u: goto label_269714;
        case 0x269718u: goto label_269718;
        case 0x26971cu: goto label_26971c;
        case 0x269720u: goto label_269720;
        case 0x269724u: goto label_269724;
        case 0x269728u: goto label_269728;
        case 0x26972cu: goto label_26972c;
        case 0x269730u: goto label_269730;
        case 0x269734u: goto label_269734;
        case 0x269738u: goto label_269738;
        case 0x26973cu: goto label_26973c;
        case 0x269740u: goto label_269740;
        case 0x269744u: goto label_269744;
        case 0x269748u: goto label_269748;
        case 0x26974cu: goto label_26974c;
        case 0x269750u: goto label_269750;
        case 0x269754u: goto label_269754;
        case 0x269758u: goto label_269758;
        case 0x26975cu: goto label_26975c;
        case 0x269760u: goto label_269760;
        case 0x269764u: goto label_269764;
        case 0x269768u: goto label_269768;
        case 0x26976cu: goto label_26976c;
        case 0x269770u: goto label_269770;
        case 0x269774u: goto label_269774;
        case 0x269778u: goto label_269778;
        case 0x26977cu: goto label_26977c;
        case 0x269780u: goto label_269780;
        case 0x269784u: goto label_269784;
        case 0x269788u: goto label_269788;
        case 0x26978cu: goto label_26978c;
        case 0x269790u: goto label_269790;
        case 0x269794u: goto label_269794;
        case 0x269798u: goto label_269798;
        case 0x26979cu: goto label_26979c;
        case 0x2697a0u: goto label_2697a0;
        case 0x2697a4u: goto label_2697a4;
        case 0x2697a8u: goto label_2697a8;
        case 0x2697acu: goto label_2697ac;
        case 0x2697b0u: goto label_2697b0;
        case 0x2697b4u: goto label_2697b4;
        case 0x2697b8u: goto label_2697b8;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697c0u: goto label_2697c0;
        case 0x2697c4u: goto label_2697c4;
        case 0x2697c8u: goto label_2697c8;
        case 0x2697ccu: goto label_2697cc;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697d4u: goto label_2697d4;
        case 0x2697d8u: goto label_2697d8;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697e0u: goto label_2697e0;
        case 0x2697e4u: goto label_2697e4;
        case 0x2697e8u: goto label_2697e8;
        case 0x2697ecu: goto label_2697ec;
        case 0x2697f0u: goto label_2697f0;
        case 0x2697f4u: goto label_2697f4;
        case 0x2697f8u: goto label_2697f8;
        case 0x2697fcu: goto label_2697fc;
        case 0x269800u: goto label_269800;
        case 0x269804u: goto label_269804;
        case 0x269808u: goto label_269808;
        case 0x26980cu: goto label_26980c;
        case 0x269810u: goto label_269810;
        case 0x269814u: goto label_269814;
        default: break;
    }

    ctx->pc = 0x2695e0u;

label_2695e0:
    // 0x2695e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2695e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2695e4:
    // 0x2695e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2695e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2695e8:
    // 0x2695e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2695e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2695ec:
    // 0x2695ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2695ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2695f0:
    // 0x2695f0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2695f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_2695f4:
    // 0x2695f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2695f8:
    if (ctx->pc == 0x2695F8u) {
        ctx->pc = 0x2695FCu;
        goto label_2695fc;
    }
    ctx->pc = 0x2695F4u;
    {
        const bool branch_taken_0x2695f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2695f4) {
            ctx->pc = 0x269618u;
            goto label_269618;
        }
    }
    ctx->pc = 0x2695FCu;
label_2695fc:
    // 0x2695fc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2695fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_269600:
    // 0x269600: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_269604:
    // 0x269604: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x269604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_269608:
    // 0x269608: 0x40f809  jalr        $v0
label_26960c:
    if (ctx->pc == 0x26960Cu) {
        ctx->pc = 0x269610u;
        goto label_269610;
    }
    ctx->pc = 0x269608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269610u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269608u, 0x269610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269610u;
label_269610:
    // 0x269610: 0x1000007d  b           . + 4 + (0x7D << 2)
label_269614:
    if (ctx->pc == 0x269614u) {
        ctx->pc = 0x269614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269610u;
        // 0x269614: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269618u;
        goto label_269618;
    }
    ctx->pc = 0x269610u;
    {
        const bool branch_taken_0x269610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269610u;
        // 0x269614: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269610) {
            ctx->pc = 0x269808u;
            goto label_269808;
        }
    }
    ctx->pc = 0x269618u;
label_269618:
    // 0x269618: 0xc09a7c2  jal         func_269F08
label_26961c:
    if (ctx->pc == 0x26961Cu) {
        ctx->pc = 0x26961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269618u;
        // 0x26961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269620u;
        goto label_269620;
    }
    ctx->pc = 0x269618u;
    SET_GPR_U32(ctx, 31, 0x269620u);
    ctx->pc = 0x26961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269618u;
    // 0x26961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269F08u, 0x269618u, 0x269620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269620u;
label_269620:
    // 0x269620: 0xc09a716  jal         func_269C58
label_269624:
    if (ctx->pc == 0x269624u) {
        ctx->pc = 0x269624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269620u;
        // 0x269624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269628u;
        goto label_269628;
    }
    ctx->pc = 0x269620u;
    SET_GPR_U32(ctx, 31, 0x269628u);
    ctx->pc = 0x269624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269620u;
    // 0x269624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C58u, 0x269620u, 0x269628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269628u;
label_269628:
    // 0x269628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26962c:
    if (ctx->pc == 0x26962Cu) {
        ctx->pc = 0x26962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269628u;
        // 0x26962c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269630u;
        goto label_269630;
    }
    ctx->pc = 0x269628u;
    {
        const bool branch_taken_0x269628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269628u;
        // 0x26962c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269628) {
            ctx->pc = 0x269648u;
            goto label_269648;
        }
    }
    ctx->pc = 0x269630u;
label_269630:
    // 0x269630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269634:
    // 0x269634: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x269634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
label_269638:
    // 0x269638: 0xc09a6e4  jal         func_269B90
label_26963c:
    if (ctx->pc == 0x26963Cu) {
        ctx->pc = 0x26963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269638u;
        // 0x26963c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269640u;
        goto label_269640;
    }
    ctx->pc = 0x269638u;
    SET_GPR_U32(ctx, 31, 0x269640u);
    ctx->pc = 0x26963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269638u;
    // 0x26963c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B90u, 0x269638u, 0x269640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269640u;
label_269640:
    // 0x269640: 0x10000071  b           . + 4 + (0x71 << 2)
label_269644:
    if (ctx->pc == 0x269644u) {
        ctx->pc = 0x269644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269640u;
        // 0x269644: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269648u;
        goto label_269648;
    }
    ctx->pc = 0x269640u;
    {
        const bool branch_taken_0x269640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269640u;
        // 0x269644: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269640) {
            ctx->pc = 0x269808u;
            goto label_269808;
        }
    }
    ctx->pc = 0x269648u;
label_269648:
    // 0x269648: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x269648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_26964c:
    // 0x26964c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269650:
    // 0x269650: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_269654:
    if (ctx->pc == 0x269654u) {
        ctx->pc = 0x269654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269650u;
        // 0x269654: 0xc6060228  lwc1        $f6, 0x228($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x269658u;
        goto label_269658;
    }
    ctx->pc = 0x269650u;
    {
        const bool branch_taken_0x269650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269650u;
        // 0x269654: 0xc6060228  lwc1        $f6, 0x228($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269650) {
            ctx->pc = 0x26965Cu;
            goto label_26965c;
        }
    }
    ctx->pc = 0x269658u;
label_269658:
    // 0x269658: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x269658u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_26965c:
    // 0x26965c: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x26965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_269660:
    // 0x269660: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_269664:
    if (ctx->pc == 0x269664u) {
        ctx->pc = 0x269664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269660u;
        // 0x269664: 0x26060250  addiu       $a2, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269668u;
        goto label_269668;
    }
    ctx->pc = 0x269660u;
    {
        const bool branch_taken_0x269660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269660u;
        // 0x269664: 0x26060250  addiu       $a2, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269660) {
            ctx->pc = 0x26971Cu;
            goto label_26971c;
        }
    }
    ctx->pc = 0x269668u;
label_269668:
    // 0x269668: 0x26020270  addiu       $v0, $s0, 0x270
    ctx->pc = 0x269668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
label_26966c:
    // 0x26966c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26966cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_269670:
    // 0x269670: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x269670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_269674:
    // 0x269674: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269674u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_269678:
    // 0x269678: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x269678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26967c:
    // 0x26967c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x26967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269680:
    // 0x269680: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_269684:
    // 0x269684: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x269684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269688:
    // 0x269688: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x269688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26968c:
    // 0x26968c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x26968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269690:
    // 0x269690: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x269690u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_269694:
    // 0x269694: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_269698:
    // 0x269698: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x269698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26969c:
    // 0x26969c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x26969cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2696a0:
    // 0x2696a0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2696a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2696a4:
    // 0x2696a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2696a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2696a8:
    // 0x2696a8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2696a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2696ac:
    // 0x2696ac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2696acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2696b0:
    // 0x2696b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2696b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2696b4:
    // 0x2696b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2696b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2696b8:
    // 0x2696b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2696b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2696bc:
    // 0x2696bc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2696bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2696c0:
    // 0x2696c0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2696c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2696c4:
    // 0x2696c4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2696c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2696c8:
    // 0x2696c8: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x2696c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2696cc:
    // 0x2696cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2696ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2696d0:
    // 0x2696d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2696d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2696d4:
    // 0x2696d4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2696d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2696d8:
    // 0x2696d8: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x2696d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2696dc:
    // 0x2696dc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2696dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2696e0:
    // 0x2696e0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2696e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2696e4:
    // 0x2696e4: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2696e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2696e8:
    // 0x2696e8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2696e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2696ec:
    // 0x2696ec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2696ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2696f0:
    // 0x2696f0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2696f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2696f4:
    // 0x2696f4: 0x46010044  c1          0x10044
    ctx->pc = 0x2696f4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2696f8:
    // 0x2696f8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2696f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2696fc:
    // 0x2696fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2696fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_269700:
    // 0x269700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_269704:
    // 0x269704: 0x0  nop
    ctx->pc = 0x269704u;
    // NOP
label_269708:
    // 0x269708: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x269708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26970c:
    // 0x26970c: 0x0  nop
    ctx->pc = 0x26970cu;
    // NOP
label_269710:
    // 0x269710: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_269714:
    if (ctx->pc == 0x269714u) {
        ctx->pc = 0x269714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269710u;
        // 0x269714: 0xae000260  sw          $zero, 0x260($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269718u;
        goto label_269718;
    }
    ctx->pc = 0x269710u;
    {
        const bool branch_taken_0x269710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269710) {
            ctx->pc = 0x269714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269710u;
            // 0x269714: 0xae000260  sw          $zero, 0x260($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26971Cu;
            goto label_26971c;
        }
    }
    ctx->pc = 0x269718u;
label_269718:
    // 0x269718: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x269718u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_26971c:
    // 0x26971c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x26971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269720:
    // 0x269720: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x269720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269724:
    // 0x269724: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x269724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_269728:
    // 0x269728: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x269728u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26972c:
    // 0x26972c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26972cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_269730:
    // 0x269730: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x269730u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_269734:
    // 0x269734: 0x46010044  c1          0x10044
    ctx->pc = 0x269734u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_269738:
    // 0x269738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26973c:
    // 0x26973c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26973cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_269740:
    // 0x269740: 0x0  nop
    ctx->pc = 0x269740u;
    // NOP
label_269744:
    // 0x269744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x269744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_269748:
    // 0x269748: 0x0  nop
    ctx->pc = 0x269748u;
    // NOP
label_26974c:
    // 0x26974c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_269750:
    if (ctx->pc == 0x269750u) {
        ctx->pc = 0x269750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26974Cu;
        // 0x269750: 0xc4c3000c  lwc1        $f3, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x269754u;
        goto label_269754;
    }
    ctx->pc = 0x26974Cu;
    {
        const bool branch_taken_0x26974c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26974c) {
            ctx->pc = 0x269750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26974Cu;
            // 0x269750: 0xc4c3000c  lwc1        $f3, 0xC($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x269778u;
            goto label_269778;
        }
    }
    ctx->pc = 0x269754u;
label_269754:
    // 0x269754: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x269754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_269758:
    // 0x269758: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x269758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26975c:
    // 0x26975c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26975cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_269760:
    // 0x269760: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x269760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_269764:
    // 0x269764: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x269764u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_269768:
    // 0x269768: 0x4a0003bf  vwaitq
    ctx->pc = 0x269768u;
    // VWAITQ (Q already resolved in this runtime)
label_26976c:
    // 0x26976c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26976cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_269770:
    // 0x269770: 0xfa010250  sqc2        $vf1, 0x250($s0)
    ctx->pc = 0x269770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), _mm_castps_si128(ctx->vu0_vf[1]));
label_269774:
    // 0x269774: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x269774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269778:
    // 0x269778: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x269778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26977c:
    // 0x26977c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x26977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269780:
    // 0x269780: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x269780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269784:
    // 0x269784: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x269784u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_269788:
    // 0x269788: 0xc6010250  lwc1        $f1, 0x250($s0)
    ctx->pc = 0x269788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26978c:
    // 0x26978c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x26978cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_269790:
    // 0x269790: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x269790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_269794:
    // 0x269794: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x269794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_269798:
    // 0x269798: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x269798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_26979c:
    // 0x26979c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x26979cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2697a0:
    // 0x2697a0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2697a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2697a4:
    // 0x2697a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2697a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2697a8:
    // 0x2697a8: 0xc0b7264  jal         func_2DC990
label_2697ac:
    if (ctx->pc == 0x2697ACu) {
        ctx->pc = 0x2697ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697A8u;
        // 0x2697ac: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697B0u;
        goto label_2697b0;
    }
    ctx->pc = 0x2697A8u;
    SET_GPR_U32(ctx, 31, 0x2697B0u);
    ctx->pc = 0x2697ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697A8u;
    // 0x2697ac: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2697A8u, 0x2697B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697B0u;
label_2697b0:
    // 0x2697b0: 0xc084172  jal         func_2105C8
label_2697b4:
    if (ctx->pc == 0x2697B4u) {
        ctx->pc = 0x2697B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697B0u;
        // 0x2697b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697B8u;
        goto label_2697b8;
    }
    ctx->pc = 0x2697B0u;
    SET_GPR_U32(ctx, 31, 0x2697B8u);
    ctx->pc = 0x2697B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697B0u;
    // 0x2697b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x2697B0u, 0x2697B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697B8u;
label_2697b8:
    // 0x2697b8: 0x26020284  addiu       $v0, $s0, 0x284
    ctx->pc = 0x2697b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_2697bc:
    // 0x2697bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2697bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2697c0:
    // 0x2697c0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2697c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_2697c4:
    // 0x2697c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2697c8:
    if (ctx->pc == 0x2697C8u) {
        ctx->pc = 0x2697C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697C4u;
        // 0x2697c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697CCu;
        goto label_2697cc;
    }
    ctx->pc = 0x2697C4u;
    {
        const bool branch_taken_0x2697c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697C4u;
        // 0x2697c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697c4) {
            ctx->pc = 0x2697DCu;
            goto label_2697dc;
        }
    }
    ctx->pc = 0x2697CCu;
label_2697cc:
    // 0x2697cc: 0x0  nop
    ctx->pc = 0x2697ccu;
    // NOP
label_2697d0:
    // 0x2697d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2697d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2697d4:
    // 0x2697d4: 0x40f809  jalr        $v0
label_2697d8:
    if (ctx->pc == 0x2697D8u) {
        ctx->pc = 0x2697DCu;
        goto label_2697dc;
    }
    ctx->pc = 0x2697D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2697DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2697D4u, 0x2697DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2697DCu;
label_2697dc:
    // 0x2697dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2697dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2697e0:
    // 0x2697e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2697e4:
    if (ctx->pc == 0x2697E4u) {
        ctx->pc = 0x2697E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697E0u;
        // 0x2697e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697E8u;
        goto label_2697e8;
    }
    ctx->pc = 0x2697E0u;
    {
        const bool branch_taken_0x2697e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697E0u;
        // 0x2697e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697e0) {
            ctx->pc = 0x2697ECu;
            goto label_2697ec;
        }
    }
    ctx->pc = 0x2697E8u;
label_2697e8:
    // 0x2697e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2697e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2697ec:
    // 0x2697ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2697f0:
    if (ctx->pc == 0x2697F0u) {
        ctx->pc = 0x2697F4u;
        goto label_2697f4;
    }
    ctx->pc = 0x2697ECu;
    {
        const bool branch_taken_0x2697ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697ec) {
            ctx->pc = 0x2697FCu;
            goto label_2697fc;
        }
    }
    ctx->pc = 0x2697F4u;
label_2697f4:
    // 0x2697f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2697f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2697f8:
    // 0x2697f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2697f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2697fc:
    // 0x2697fc: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
label_269800:
    if (ctx->pc == 0x269800u) {
        ctx->pc = 0x269800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697FCu;
        // 0x269800: 0x8c830218  lw          $v1, 0x218($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269804u;
        goto label_269804;
    }
    ctx->pc = 0x2697FCu;
    {
        const bool branch_taken_0x2697fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2697fc) {
            ctx->pc = 0x269800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2697FCu;
            // 0x269800: 0x8c830218  lw          $v1, 0x218($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2697D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2697d0;
        }
    }
    ctx->pc = 0x269804u;
label_269804:
    // 0x269804: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x269804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_269808:
    // 0x269808: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x269808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_26980c:
    // 0x26980c: 0x3e00008  jr          $ra
label_269810:
    if (ctx->pc == 0x269810u) {
        ctx->pc = 0x269810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26980Cu;
        // 0x269810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269814u;
        goto label_269814;
    }
    ctx->pc = 0x26980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26980Cu;
        // 0x269810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269814u;
label_269814:
    // 0x269814: 0x0  nop
    ctx->pc = 0x269814u;
    // NOP
    ctx->pc = 0x269818u;
}
