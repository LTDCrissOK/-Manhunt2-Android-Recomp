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

// Function: sub_0030D5C0
// Address: 0x30d5c0 - 0x30d7d0
void sub_0030D5C0_0x30d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D5C0_0x30d5c0");
#endif

    switch (ctx->pc) {
        case 0x30d5c0u: goto label_30d5c0;
        case 0x30d5c4u: goto label_30d5c4;
        case 0x30d5c8u: goto label_30d5c8;
        case 0x30d5ccu: goto label_30d5cc;
        case 0x30d5d0u: goto label_30d5d0;
        case 0x30d5d4u: goto label_30d5d4;
        case 0x30d5d8u: goto label_30d5d8;
        case 0x30d5dcu: goto label_30d5dc;
        case 0x30d5e0u: goto label_30d5e0;
        case 0x30d5e4u: goto label_30d5e4;
        case 0x30d5e8u: goto label_30d5e8;
        case 0x30d5ecu: goto label_30d5ec;
        case 0x30d5f0u: goto label_30d5f0;
        case 0x30d5f4u: goto label_30d5f4;
        case 0x30d5f8u: goto label_30d5f8;
        case 0x30d5fcu: goto label_30d5fc;
        case 0x30d600u: goto label_30d600;
        case 0x30d604u: goto label_30d604;
        case 0x30d608u: goto label_30d608;
        case 0x30d60cu: goto label_30d60c;
        case 0x30d610u: goto label_30d610;
        case 0x30d614u: goto label_30d614;
        case 0x30d618u: goto label_30d618;
        case 0x30d61cu: goto label_30d61c;
        case 0x30d620u: goto label_30d620;
        case 0x30d624u: goto label_30d624;
        case 0x30d628u: goto label_30d628;
        case 0x30d62cu: goto label_30d62c;
        case 0x30d630u: goto label_30d630;
        case 0x30d634u: goto label_30d634;
        case 0x30d638u: goto label_30d638;
        case 0x30d63cu: goto label_30d63c;
        case 0x30d640u: goto label_30d640;
        case 0x30d644u: goto label_30d644;
        case 0x30d648u: goto label_30d648;
        case 0x30d64cu: goto label_30d64c;
        case 0x30d650u: goto label_30d650;
        case 0x30d654u: goto label_30d654;
        case 0x30d658u: goto label_30d658;
        case 0x30d65cu: goto label_30d65c;
        case 0x30d660u: goto label_30d660;
        case 0x30d664u: goto label_30d664;
        case 0x30d668u: goto label_30d668;
        case 0x30d66cu: goto label_30d66c;
        case 0x30d670u: goto label_30d670;
        case 0x30d674u: goto label_30d674;
        case 0x30d678u: goto label_30d678;
        case 0x30d67cu: goto label_30d67c;
        case 0x30d680u: goto label_30d680;
        case 0x30d684u: goto label_30d684;
        case 0x30d688u: goto label_30d688;
        case 0x30d68cu: goto label_30d68c;
        case 0x30d690u: goto label_30d690;
        case 0x30d694u: goto label_30d694;
        case 0x30d698u: goto label_30d698;
        case 0x30d69cu: goto label_30d69c;
        case 0x30d6a0u: goto label_30d6a0;
        case 0x30d6a4u: goto label_30d6a4;
        case 0x30d6a8u: goto label_30d6a8;
        case 0x30d6acu: goto label_30d6ac;
        case 0x30d6b0u: goto label_30d6b0;
        case 0x30d6b4u: goto label_30d6b4;
        case 0x30d6b8u: goto label_30d6b8;
        case 0x30d6bcu: goto label_30d6bc;
        case 0x30d6c0u: goto label_30d6c0;
        case 0x30d6c4u: goto label_30d6c4;
        case 0x30d6c8u: goto label_30d6c8;
        case 0x30d6ccu: goto label_30d6cc;
        case 0x30d6d0u: goto label_30d6d0;
        case 0x30d6d4u: goto label_30d6d4;
        case 0x30d6d8u: goto label_30d6d8;
        case 0x30d6dcu: goto label_30d6dc;
        case 0x30d6e0u: goto label_30d6e0;
        case 0x30d6e4u: goto label_30d6e4;
        case 0x30d6e8u: goto label_30d6e8;
        case 0x30d6ecu: goto label_30d6ec;
        case 0x30d6f0u: goto label_30d6f0;
        case 0x30d6f4u: goto label_30d6f4;
        case 0x30d6f8u: goto label_30d6f8;
        case 0x30d6fcu: goto label_30d6fc;
        case 0x30d700u: goto label_30d700;
        case 0x30d704u: goto label_30d704;
        case 0x30d708u: goto label_30d708;
        case 0x30d70cu: goto label_30d70c;
        case 0x30d710u: goto label_30d710;
        case 0x30d714u: goto label_30d714;
        case 0x30d718u: goto label_30d718;
        case 0x30d71cu: goto label_30d71c;
        case 0x30d720u: goto label_30d720;
        case 0x30d724u: goto label_30d724;
        case 0x30d728u: goto label_30d728;
        case 0x30d72cu: goto label_30d72c;
        case 0x30d730u: goto label_30d730;
        case 0x30d734u: goto label_30d734;
        case 0x30d738u: goto label_30d738;
        case 0x30d73cu: goto label_30d73c;
        case 0x30d740u: goto label_30d740;
        case 0x30d744u: goto label_30d744;
        case 0x30d748u: goto label_30d748;
        case 0x30d74cu: goto label_30d74c;
        case 0x30d750u: goto label_30d750;
        case 0x30d754u: goto label_30d754;
        case 0x30d758u: goto label_30d758;
        case 0x30d75cu: goto label_30d75c;
        case 0x30d760u: goto label_30d760;
        case 0x30d764u: goto label_30d764;
        case 0x30d768u: goto label_30d768;
        case 0x30d76cu: goto label_30d76c;
        case 0x30d770u: goto label_30d770;
        case 0x30d774u: goto label_30d774;
        case 0x30d778u: goto label_30d778;
        case 0x30d77cu: goto label_30d77c;
        case 0x30d780u: goto label_30d780;
        case 0x30d784u: goto label_30d784;
        case 0x30d788u: goto label_30d788;
        case 0x30d78cu: goto label_30d78c;
        case 0x30d790u: goto label_30d790;
        case 0x30d794u: goto label_30d794;
        case 0x30d798u: goto label_30d798;
        case 0x30d79cu: goto label_30d79c;
        case 0x30d7a0u: goto label_30d7a0;
        case 0x30d7a4u: goto label_30d7a4;
        case 0x30d7a8u: goto label_30d7a8;
        case 0x30d7acu: goto label_30d7ac;
        case 0x30d7b0u: goto label_30d7b0;
        case 0x30d7b4u: goto label_30d7b4;
        case 0x30d7b8u: goto label_30d7b8;
        case 0x30d7bcu: goto label_30d7bc;
        case 0x30d7c0u: goto label_30d7c0;
        case 0x30d7c4u: goto label_30d7c4;
        case 0x30d7c8u: goto label_30d7c8;
        case 0x30d7ccu: goto label_30d7cc;
        default: break;
    }

    ctx->pc = 0x30d5c0u;

label_30d5c0:
    // 0x30d5c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30d5c4:
    // 0x30d5c4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x30d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_30d5c8:
    // 0x30d5c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_30d5cc:
    // 0x30d5cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x30d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_30d5d0:
    // 0x30d5d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_30d5d4:
    // 0x30d5d4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x30d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_30d5d8:
    // 0x30d5d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x30d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_30d5dc:
    // 0x30d5dc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x30d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_30d5e0:
    // 0x30d5e0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x30d5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_30d5e4:
    // 0x30d5e4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x30d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_30d5e8:
    // 0x30d5e8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x30d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_30d5ec:
    // 0x30d5ec: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x30d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_30d5f0:
    // 0x30d5f0: 0xc09eb04  jal         func_27AC10
label_30d5f4:
    if (ctx->pc == 0x30D5F4u) {
        ctx->pc = 0x30D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5F0u;
        // 0x30d5f4: 0xa08002b4  sb          $zero, 0x2B4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 692), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D5F8u;
        goto label_30d5f8;
    }
    ctx->pc = 0x30D5F0u;
    SET_GPR_U32(ctx, 31, 0x30D5F8u);
    ctx->pc = 0x30D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5F0u;
    // 0x30d5f4: 0xa08002b4  sb          $zero, 0x2B4($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 692), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x30D5F0u, 0x30D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5F8u;
label_30d5f8:
    // 0x30d5f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30d5fc:
    // 0x30d5fc: 0xc0d7394  jal         func_35CE50
label_30d600:
    if (ctx->pc == 0x30D600u) {
        ctx->pc = 0x30D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5FCu;
        // 0x30d600: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D604u;
        goto label_30d604;
    }
    ctx->pc = 0x30D5FCu;
    SET_GPR_U32(ctx, 31, 0x30D604u);
    ctx->pc = 0x30D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5FCu;
    // 0x30d600: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x30D5FCu, 0x30D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D604u;
label_30d604:
    // 0x30d604: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x30d604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_30d608:
    // 0x30d608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30d60c:
    // 0x30d60c: 0xc0d756c  jal         func_35D5B0
label_30d610:
    if (ctx->pc == 0x30D610u) {
        ctx->pc = 0x30D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D60Cu;
        // 0x30d610: 0x24a5ef50  addiu       $a1, $a1, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D614u;
        goto label_30d614;
    }
    ctx->pc = 0x30D60Cu;
    SET_GPR_U32(ctx, 31, 0x30D614u);
    ctx->pc = 0x30D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D60Cu;
    // 0x30d610: 0x24a5ef50  addiu       $a1, $a1, -0x10B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x30D60Cu, 0x30D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D614u;
label_30d614:
    // 0x30d614: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x30d614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_30d618:
    // 0x30d618: 0xc09dcc6  jal         func_277318
label_30d61c:
    if (ctx->pc == 0x30D61Cu) {
        ctx->pc = 0x30D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D618u;
        // 0x30d61c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D620u;
        goto label_30d620;
    }
    ctx->pc = 0x30D618u;
    SET_GPR_U32(ctx, 31, 0x30D620u);
    ctx->pc = 0x30D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D618u;
    // 0x30d61c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x30D618u, 0x30D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D620u;
label_30d620:
    // 0x30d620: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30d620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d624:
    // 0x30d624: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_30d628:
    if (ctx->pc == 0x30D628u) {
        ctx->pc = 0x30D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D624u;
        // 0x30d628: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D62Cu;
        goto label_30d62c;
    }
    ctx->pc = 0x30D624u;
    {
        const bool branch_taken_0x30d624 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D624u;
        // 0x30d628: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d624) {
            ctx->pc = 0x30D644u;
            goto label_30d644;
        }
    }
    ctx->pc = 0x30D62Cu;
label_30d62c:
    // 0x30d62c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x30d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_30d630:
    // 0x30d630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d634:
    // 0x30d634: 0xc09dcc6  jal         func_277318
label_30d638:
    if (ctx->pc == 0x30D638u) {
        ctx->pc = 0x30D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D634u;
        // 0x30d638: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D63Cu;
        goto label_30d63c;
    }
    ctx->pc = 0x30D634u;
    SET_GPR_U32(ctx, 31, 0x30D63Cu);
    ctx->pc = 0x30D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D634u;
    // 0x30d638: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x30D634u, 0x30D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D63Cu;
label_30d63c:
    // 0x30d63c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30d63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d640:
    // 0x30d640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x30d640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_30d644:
    // 0x30d644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d648:
    // 0x30d648: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30d648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30d64c:
    // 0x30d64c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30d64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d650:
    // 0x30d650: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x30d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_30d654:
    // 0x30d654: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30d654u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d658:
    // 0x30d658: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x30d658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_30d65c:
    // 0x30d65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x30d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_30d660:
    // 0x30d660: 0x8fb20014  lw          $s2, 0x14($sp)
    ctx->pc = 0x30d660u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30d664:
    // 0x30d664: 0x245e0090  addiu       $fp, $v0, 0x90
    ctx->pc = 0x30d664u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_30d668:
    // 0x30d668: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x30d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_30d66c:
    // 0x30d66c: 0x40f809  jalr        $v0
label_30d670:
    if (ctx->pc == 0x30D670u) {
        ctx->pc = 0x30D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D66Cu;
        // 0x30d670: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D674u;
        goto label_30d674;
    }
    ctx->pc = 0x30D66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D674u);
        ctx->pc = 0x30D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D66Cu;
        // 0x30d670: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D66Cu, 0x30D674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D674u;
label_30d674:
    // 0x30d674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d678:
    // 0x30d678: 0xc0f52a8  jal         func_3D4AA0
label_30d67c:
    if (ctx->pc == 0x30D67Cu) {
        ctx->pc = 0x30D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D678u;
        // 0x30d67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D680u;
        goto label_30d680;
    }
    ctx->pc = 0x30D678u;
    SET_GPR_U32(ctx, 31, 0x30D680u);
    ctx->pc = 0x30D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D678u;
    // 0x30d67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x30D678u, 0x30D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D680u;
label_30d680:
    // 0x30d680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30d684:
    // 0x30d684: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30d684u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d688:
    // 0x30d688: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30d688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d68c:
    // 0x30d68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d690:
    // 0x30d690: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_30d694:
    // 0x30d694: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30d694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30d698:
    // 0x30d698: 0x40f809  jalr        $v0
label_30d69c:
    if (ctx->pc == 0x30D69Cu) {
        ctx->pc = 0x30D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D698u;
        // 0x30d69c: 0x26d00004  addiu       $s0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6A0u;
        goto label_30d6a0;
    }
    ctx->pc = 0x30D698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D6A0u);
        ctx->pc = 0x30D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D698u;
        // 0x30d69c: 0x26d00004  addiu       $s0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D698u, 0x30D6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D6A0u;
label_30d6a0:
    // 0x30d6a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30d6a4:
    // 0x30d6a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x30d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_30d6a8:
    // 0x30d6a8: 0x40f809  jalr        $v0
label_30d6ac:
    if (ctx->pc == 0x30D6ACu) {
        ctx->pc = 0x30D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6A8u;
        // 0x30d6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6B0u;
        goto label_30d6b0;
    }
    ctx->pc = 0x30D6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D6B0u);
        ctx->pc = 0x30D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6A8u;
        // 0x30d6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D6A8u, 0x30D6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D6B0u;
label_30d6b0:
    // 0x30d6b0: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x30d6b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_30d6b4:
    // 0x30d6b4: 0x0  nop
    ctx->pc = 0x30d6b4u;
    // NOP
label_30d6b8:
    // 0x30d6b8: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x30d6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30d6bc:
    // 0x30d6bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_30d6c0:
    if (ctx->pc == 0x30D6C0u) {
        ctx->pc = 0x30D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6BCu;
        // 0x30d6c0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6C4u;
        goto label_30d6c4;
    }
    ctx->pc = 0x30D6BCu;
    {
        const bool branch_taken_0x30d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d6bc) {
            ctx->pc = 0x30D6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D6BCu;
            // 0x30d6c0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D6F0u;
            goto label_30d6f0;
        }
    }
    ctx->pc = 0x30D6C4u;
label_30d6c4:
    // 0x30d6c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d6c8:
    // 0x30d6c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_30d6cc:
    if (ctx->pc == 0x30D6CCu) {
        ctx->pc = 0x30D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6C8u;
        // 0x30d6cc: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6D0u;
        goto label_30d6d0;
    }
    ctx->pc = 0x30D6C8u;
    {
        const bool branch_taken_0x30d6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6C8u;
        // 0x30d6cc: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6c8) {
            ctx->pc = 0x30D6E0u;
            goto label_30d6e0;
        }
    }
    ctx->pc = 0x30D6D0u;
label_30d6d0:
    // 0x30d6d0: 0xc0b241a  jal         func_2C9068
label_30d6d4:
    if (ctx->pc == 0x30D6D4u) {
        ctx->pc = 0x30D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6D0u;
        // 0x30d6d4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6D8u;
        goto label_30d6d8;
    }
    ctx->pc = 0x30D6D0u;
    SET_GPR_U32(ctx, 31, 0x30D6D8u);
    ctx->pc = 0x30D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6D0u;
    // 0x30d6d4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x30D6D0u, 0x30D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D6D8u;
label_30d6d8:
    // 0x30d6d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_30d6dc:
    if (ctx->pc == 0x30D6DCu) {
        ctx->pc = 0x30D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6D8u;
        // 0x30d6dc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6E0u;
        goto label_30d6e0;
    }
    ctx->pc = 0x30D6D8u;
    {
        const bool branch_taken_0x30d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6D8u;
        // 0x30d6dc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6d8) {
            ctx->pc = 0x30D6E8u;
            goto label_30d6e8;
        }
    }
    ctx->pc = 0x30D6E0u;
label_30d6e0:
    // 0x30d6e0: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x30d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_30d6e4:
    // 0x30d6e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x30d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_30d6e8:
    // 0x30d6e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_30d6ec:
    if (ctx->pc == 0x30D6ECu) {
        ctx->pc = 0x30D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6E8u;
        // 0x30d6ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D6F0u;
        goto label_30d6f0;
    }
    ctx->pc = 0x30D6E8u;
    {
        const bool branch_taken_0x30d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6E8u;
        // 0x30d6ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6e8) {
            ctx->pc = 0x30D6F4u;
            goto label_30d6f4;
        }
    }
    ctx->pc = 0x30D6F0u;
label_30d6f0:
    // 0x30d6f0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x30d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_30d6f4:
    // 0x30d6f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30d6f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_30d6f8:
    // 0x30d6f8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x30d6f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_30d6fc:
    // 0x30d6fc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x30d6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_30d700:
    // 0x30d700: 0x2a820045  slti        $v0, $s4, 0x45
    ctx->pc = 0x30d700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)69) ? 1 : 0);
label_30d704:
    // 0x30d704: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_30d708:
    if (ctx->pc == 0x30D708u) {
        ctx->pc = 0x30D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D704u;
        // 0x30d708: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D70Cu;
        goto label_30d70c;
    }
    ctx->pc = 0x30D704u;
    {
        const bool branch_taken_0x30d704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D704u;
        // 0x30d708: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d704) {
            ctx->pc = 0x30D6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d6b8;
        }
    }
    ctx->pc = 0x30D70Cu;
label_30d70c:
    // 0x30d70c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x30d70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d710:
    // 0x30d710: 0x1aa0001a  blez        $s5, . + 4 + (0x1A << 2)
label_30d714:
    if (ctx->pc == 0x30D714u) {
        ctx->pc = 0x30D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D710u;
        // 0x30d714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D718u;
        goto label_30d718;
    }
    ctx->pc = 0x30D710u;
    {
        const bool branch_taken_0x30d710 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x30D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D710u;
        // 0x30d714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d710) {
            ctx->pc = 0x30D77Cu;
            goto label_30d77c;
        }
    }
    ctx->pc = 0x30D718u;
label_30d718:
    // 0x30d718: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30d71c:
    // 0x30d71c: 0x0  nop
    ctx->pc = 0x30d71cu;
    // NOP
label_30d720:
    // 0x30d720: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x30d720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_30d724:
    // 0x30d724: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x30d724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30d728:
    // 0x30d728: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x30d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30d72c:
    // 0x30d72c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30d730:
    // 0x30d730: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_30d734:
    if (ctx->pc == 0x30D734u) {
        ctx->pc = 0x30D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D730u;
        // 0x30d734: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D738u;
        goto label_30d738;
    }
    ctx->pc = 0x30D730u;
    {
        const bool branch_taken_0x30d730 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D730u;
        // 0x30d734: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d730) {
            ctx->pc = 0x30D76Cu;
            goto label_30d76c;
        }
    }
    ctx->pc = 0x30D738u;
label_30d738:
    // 0x30d738: 0x3c49821  addu        $s3, $fp, $a0
    ctx->pc = 0x30d738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_30d73c:
    // 0x30d73c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x30d73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30d740:
    // 0x30d740: 0xc0b6750  jal         func_2D9D40
label_30d744:
    if (ctx->pc == 0x30D744u) {
        ctx->pc = 0x30D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D740u;
        // 0x30d744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D748u;
        goto label_30d748;
    }
    ctx->pc = 0x30D740u;
    SET_GPR_U32(ctx, 31, 0x30D748u);
    ctx->pc = 0x30D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D740u;
    // 0x30d744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x30D740u, 0x30D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D748u;
label_30d748:
    // 0x30d748: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x30d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30d74c:
    // 0x30d74c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x30d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30d750:
    // 0x30d750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30d750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30d754:
    // 0x30d754: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30d758:
    // 0x30d758: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30d758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_30d75c:
    // 0x30d75c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30d760:
    // 0x30d760: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x30d760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_30d764:
    // 0x30d764: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_30d768:
    if (ctx->pc == 0x30D768u) {
        ctx->pc = 0x30D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D764u;
        // 0x30d768: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D76Cu;
        goto label_30d76c;
    }
    ctx->pc = 0x30D764u;
    {
        const bool branch_taken_0x30d764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D764u;
        // 0x30d768: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d764) {
            ctx->pc = 0x30D740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d740;
        }
    }
    ctx->pc = 0x30D76Cu;
label_30d76c:
    // 0x30d76c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x30d76cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30d770:
    // 0x30d770: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x30d770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30d774:
    // 0x30d774: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_30d778:
    if (ctx->pc == 0x30D778u) {
        ctx->pc = 0x30D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D774u;
        // 0x30d778: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D77Cu;
        goto label_30d77c;
    }
    ctx->pc = 0x30D774u;
    {
        const bool branch_taken_0x30d774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D774u;
        // 0x30d778: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d774) {
            ctx->pc = 0x30D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D77Cu;
label_30d77c:
    // 0x30d77c: 0xc0c367a  jal         func_30D9E8
label_30d780:
    if (ctx->pc == 0x30D780u) {
        ctx->pc = 0x30D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D77Cu;
        // 0x30d780: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D784u;
        goto label_30d784;
    }
    ctx->pc = 0x30D77Cu;
    SET_GPR_U32(ctx, 31, 0x30D784u);
    ctx->pc = 0x30D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D77Cu;
    // 0x30d780: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D9E8u, 0x30D77Cu, 0x30D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D784u;
label_30d784:
    // 0x30d784: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_30d788:
    if (ctx->pc == 0x30D788u) {
        ctx->pc = 0x30D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D784u;
        // 0x30d788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D78Cu;
        goto label_30d78c;
    }
    ctx->pc = 0x30D784u;
    {
        const bool branch_taken_0x30d784 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D784u;
        // 0x30d788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d784) {
            ctx->pc = 0x30D798u;
            goto label_30d798;
        }
    }
    ctx->pc = 0x30D78Cu;
label_30d78c:
    // 0x30d78c: 0xc0f528a  jal         func_3D4A28
label_30d790:
    if (ctx->pc == 0x30D790u) {
        ctx->pc = 0x30D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D78Cu;
        // 0x30d790: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D794u;
        goto label_30d794;
    }
    ctx->pc = 0x30D78Cu;
    SET_GPR_U32(ctx, 31, 0x30D794u);
    ctx->pc = 0x30D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D78Cu;
    // 0x30d790: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30D78Cu, 0x30D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D794u;
label_30d794:
    // 0x30d794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30d794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30d798:
    // 0x30d798: 0xc0d7412  jal         func_35D048
label_30d79c:
    if (ctx->pc == 0x30D79Cu) {
        ctx->pc = 0x30D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D798u;
        // 0x30d79c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D7A0u;
        goto label_30d7a0;
    }
    ctx->pc = 0x30D798u;
    SET_GPR_U32(ctx, 31, 0x30D7A0u);
    ctx->pc = 0x30D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D798u;
    // 0x30d79c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x30D798u, 0x30D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7A0u;
label_30d7a0:
    // 0x30d7a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30d7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30d7a4:
    // 0x30d7a4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30d7a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_30d7a8:
    // 0x30d7a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30d7a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30d7ac:
    // 0x30d7ac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30d7acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_30d7b0:
    // 0x30d7b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30d7b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30d7b4:
    // 0x30d7b4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x30d7b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_30d7b8:
    // 0x30d7b8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x30d7b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_30d7bc:
    // 0x30d7bc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x30d7bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_30d7c0:
    // 0x30d7c0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x30d7c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30d7c4:
    // 0x30d7c4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x30d7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_30d7c8:
    // 0x30d7c8: 0x3e00008  jr          $ra
label_30d7cc:
    if (ctx->pc == 0x30D7CCu) {
        ctx->pc = 0x30D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7C8u;
        // 0x30d7cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D7D0u;
        goto label_fallthrough_0x30d7c8;
    }
    ctx->pc = 0x30D7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7C8u;
        // 0x30d7cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30d7c8:
    ctx->pc = 0x30D7D0u;
}
