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

// Function: sub_0023D6D0
// Address: 0x23d6d0 - 0x23d910
void sub_0023D6D0_0x23d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D6D0_0x23d6d0");
#endif

    switch (ctx->pc) {
        case 0x23d6d0u: goto label_23d6d0;
        case 0x23d6d4u: goto label_23d6d4;
        case 0x23d6d8u: goto label_23d6d8;
        case 0x23d6dcu: goto label_23d6dc;
        case 0x23d6e0u: goto label_23d6e0;
        case 0x23d6e4u: goto label_23d6e4;
        case 0x23d6e8u: goto label_23d6e8;
        case 0x23d6ecu: goto label_23d6ec;
        case 0x23d6f0u: goto label_23d6f0;
        case 0x23d6f4u: goto label_23d6f4;
        case 0x23d6f8u: goto label_23d6f8;
        case 0x23d6fcu: goto label_23d6fc;
        case 0x23d700u: goto label_23d700;
        case 0x23d704u: goto label_23d704;
        case 0x23d708u: goto label_23d708;
        case 0x23d70cu: goto label_23d70c;
        case 0x23d710u: goto label_23d710;
        case 0x23d714u: goto label_23d714;
        case 0x23d718u: goto label_23d718;
        case 0x23d71cu: goto label_23d71c;
        case 0x23d720u: goto label_23d720;
        case 0x23d724u: goto label_23d724;
        case 0x23d728u: goto label_23d728;
        case 0x23d72cu: goto label_23d72c;
        case 0x23d730u: goto label_23d730;
        case 0x23d734u: goto label_23d734;
        case 0x23d738u: goto label_23d738;
        case 0x23d73cu: goto label_23d73c;
        case 0x23d740u: goto label_23d740;
        case 0x23d744u: goto label_23d744;
        case 0x23d748u: goto label_23d748;
        case 0x23d74cu: goto label_23d74c;
        case 0x23d750u: goto label_23d750;
        case 0x23d754u: goto label_23d754;
        case 0x23d758u: goto label_23d758;
        case 0x23d75cu: goto label_23d75c;
        case 0x23d760u: goto label_23d760;
        case 0x23d764u: goto label_23d764;
        case 0x23d768u: goto label_23d768;
        case 0x23d76cu: goto label_23d76c;
        case 0x23d770u: goto label_23d770;
        case 0x23d774u: goto label_23d774;
        case 0x23d778u: goto label_23d778;
        case 0x23d77cu: goto label_23d77c;
        case 0x23d780u: goto label_23d780;
        case 0x23d784u: goto label_23d784;
        case 0x23d788u: goto label_23d788;
        case 0x23d78cu: goto label_23d78c;
        case 0x23d790u: goto label_23d790;
        case 0x23d794u: goto label_23d794;
        case 0x23d798u: goto label_23d798;
        case 0x23d79cu: goto label_23d79c;
        case 0x23d7a0u: goto label_23d7a0;
        case 0x23d7a4u: goto label_23d7a4;
        case 0x23d7a8u: goto label_23d7a8;
        case 0x23d7acu: goto label_23d7ac;
        case 0x23d7b0u: goto label_23d7b0;
        case 0x23d7b4u: goto label_23d7b4;
        case 0x23d7b8u: goto label_23d7b8;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7c0u: goto label_23d7c0;
        case 0x23d7c4u: goto label_23d7c4;
        case 0x23d7c8u: goto label_23d7c8;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7d0u: goto label_23d7d0;
        case 0x23d7d4u: goto label_23d7d4;
        case 0x23d7d8u: goto label_23d7d8;
        case 0x23d7dcu: goto label_23d7dc;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d7e4u: goto label_23d7e4;
        case 0x23d7e8u: goto label_23d7e8;
        case 0x23d7ecu: goto label_23d7ec;
        case 0x23d7f0u: goto label_23d7f0;
        case 0x23d7f4u: goto label_23d7f4;
        case 0x23d7f8u: goto label_23d7f8;
        case 0x23d7fcu: goto label_23d7fc;
        case 0x23d800u: goto label_23d800;
        case 0x23d804u: goto label_23d804;
        case 0x23d808u: goto label_23d808;
        case 0x23d80cu: goto label_23d80c;
        case 0x23d810u: goto label_23d810;
        case 0x23d814u: goto label_23d814;
        case 0x23d818u: goto label_23d818;
        case 0x23d81cu: goto label_23d81c;
        case 0x23d820u: goto label_23d820;
        case 0x23d824u: goto label_23d824;
        case 0x23d828u: goto label_23d828;
        case 0x23d82cu: goto label_23d82c;
        case 0x23d830u: goto label_23d830;
        case 0x23d834u: goto label_23d834;
        case 0x23d838u: goto label_23d838;
        case 0x23d83cu: goto label_23d83c;
        case 0x23d840u: goto label_23d840;
        case 0x23d844u: goto label_23d844;
        case 0x23d848u: goto label_23d848;
        case 0x23d84cu: goto label_23d84c;
        case 0x23d850u: goto label_23d850;
        case 0x23d854u: goto label_23d854;
        case 0x23d858u: goto label_23d858;
        case 0x23d85cu: goto label_23d85c;
        case 0x23d860u: goto label_23d860;
        case 0x23d864u: goto label_23d864;
        case 0x23d868u: goto label_23d868;
        case 0x23d86cu: goto label_23d86c;
        case 0x23d870u: goto label_23d870;
        case 0x23d874u: goto label_23d874;
        case 0x23d878u: goto label_23d878;
        case 0x23d87cu: goto label_23d87c;
        case 0x23d880u: goto label_23d880;
        case 0x23d884u: goto label_23d884;
        case 0x23d888u: goto label_23d888;
        case 0x23d88cu: goto label_23d88c;
        case 0x23d890u: goto label_23d890;
        case 0x23d894u: goto label_23d894;
        case 0x23d898u: goto label_23d898;
        case 0x23d89cu: goto label_23d89c;
        case 0x23d8a0u: goto label_23d8a0;
        case 0x23d8a4u: goto label_23d8a4;
        case 0x23d8a8u: goto label_23d8a8;
        case 0x23d8acu: goto label_23d8ac;
        case 0x23d8b0u: goto label_23d8b0;
        case 0x23d8b4u: goto label_23d8b4;
        case 0x23d8b8u: goto label_23d8b8;
        case 0x23d8bcu: goto label_23d8bc;
        case 0x23d8c0u: goto label_23d8c0;
        case 0x23d8c4u: goto label_23d8c4;
        case 0x23d8c8u: goto label_23d8c8;
        case 0x23d8ccu: goto label_23d8cc;
        case 0x23d8d0u: goto label_23d8d0;
        case 0x23d8d4u: goto label_23d8d4;
        case 0x23d8d8u: goto label_23d8d8;
        case 0x23d8dcu: goto label_23d8dc;
        case 0x23d8e0u: goto label_23d8e0;
        case 0x23d8e4u: goto label_23d8e4;
        case 0x23d8e8u: goto label_23d8e8;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d8f0u: goto label_23d8f0;
        case 0x23d8f4u: goto label_23d8f4;
        case 0x23d8f8u: goto label_23d8f8;
        case 0x23d8fcu: goto label_23d8fc;
        case 0x23d900u: goto label_23d900;
        case 0x23d904u: goto label_23d904;
        case 0x23d908u: goto label_23d908;
        case 0x23d90cu: goto label_23d90c;
        default: break;
    }

    ctx->pc = 0x23d6d0u;

label_23d6d0:
    // 0x23d6d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23d6d4:
    // 0x23d6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23d6d8:
    // 0x23d6d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23d6dc:
    // 0x23d6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d6e0:
    // 0x23d6e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23d6e4:
    // 0x23d6e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23d6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d6e8:
    // 0x23d6e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x23d6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_23d6ec:
    // 0x23d6ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23d6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d6f0:
    // 0x23d6f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23d6f4:
    // 0x23d6f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d6f8:
    // 0x23d6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d6fc:
    // 0x23d6fc: 0x8e30038c  lw          $s0, 0x38C($s1)
    ctx->pc = 0x23d6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_23d700:
    // 0x23d700: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23d700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23d704:
    // 0x23d704: 0xc08e3b2  jal         func_238EC8
label_23d708:
    if (ctx->pc == 0x23D708u) {
        ctx->pc = 0x23D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D704u;
        // 0x23d708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D70Cu;
        goto label_23d70c;
    }
    ctx->pc = 0x23D704u;
    SET_GPR_U32(ctx, 31, 0x23D70Cu);
    ctx->pc = 0x23D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D704u;
    // 0x23d708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x23D704u, 0x23D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D70Cu;
label_23d70c:
    // 0x23d70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d710:
    // 0x23d710: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_23d714:
    // 0x23d714: 0xc08fed2  jal         func_23FB48
label_23d718:
    if (ctx->pc == 0x23D718u) {
        ctx->pc = 0x23D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D714u;
        // 0x23d718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D71Cu;
        goto label_23d71c;
    }
    ctx->pc = 0x23D714u;
    SET_GPR_U32(ctx, 31, 0x23D71Cu);
    ctx->pc = 0x23D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D714u;
    // 0x23d718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D714u, 0x23D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D71Cu;
label_23d71c:
    // 0x23d71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d720:
    // 0x23d720: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x23d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23d724:
    // 0x23d724: 0xc08fed2  jal         func_23FB48
label_23d728:
    if (ctx->pc == 0x23D728u) {
        ctx->pc = 0x23D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D724u;
        // 0x23d728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D72Cu;
        goto label_23d72c;
    }
    ctx->pc = 0x23D724u;
    SET_GPR_U32(ctx, 31, 0x23D72Cu);
    ctx->pc = 0x23D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D724u;
    // 0x23d728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D724u, 0x23D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D72Cu;
label_23d72c:
    // 0x23d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d730:
    // 0x23d730: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23d734:
    // 0x23d734: 0xc08fed2  jal         func_23FB48
label_23d738:
    if (ctx->pc == 0x23D738u) {
        ctx->pc = 0x23D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D734u;
        // 0x23d738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D73Cu;
        goto label_23d73c;
    }
    ctx->pc = 0x23D734u;
    SET_GPR_U32(ctx, 31, 0x23D73Cu);
    ctx->pc = 0x23D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D734u;
    // 0x23d738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D734u, 0x23D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D73Cu;
label_23d73c:
    // 0x23d73c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_23d740:
    // 0x23d740: 0xae00038c  sw          $zero, 0x38C($s0)
    ctx->pc = 0x23d740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 0));
label_23d744:
    // 0x23d744: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x23d744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_23d748:
    // 0x23d748: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x23d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_23d74c:
    // 0x23d74c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d750:
    // 0x23d750: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_23d754:
    // 0x23d754: 0x40f809  jalr        $v0
label_23d758:
    if (ctx->pc == 0x23D758u) {
        ctx->pc = 0x23D75Cu;
        goto label_23d75c;
    }
    ctx->pc = 0x23D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D75Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D754u, 0x23D75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D75Cu;
label_23d75c:
    // 0x23d75c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x23d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d760:
    // 0x23d760: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23d760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d764:
    // 0x23d764: 0x0  nop
    ctx->pc = 0x23d764u;
    // NOP
label_23d768:
    // 0x23d768: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_23d76c:
    if (ctx->pc == 0x23D76Cu) {
        ctx->pc = 0x23D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D768u;
        // 0x23d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D770u;
        goto label_23d770;
    }
    ctx->pc = 0x23D768u;
    {
        const bool branch_taken_0x23d768 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d768) {
            ctx->pc = 0x23D76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D768u;
            // 0x23d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D798u;
            goto label_23d798;
        }
    }
    ctx->pc = 0x23D770u;
label_23d770:
    // 0x23d770: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x23d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23d774:
    // 0x23d774: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x23d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_23d778:
    // 0x23d778: 0x40f809  jalr        $v0
label_23d77c:
    if (ctx->pc == 0x23D77Cu) {
        ctx->pc = 0x23D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D778u;
        // 0x23d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D780u;
        goto label_23d780;
    }
    ctx->pc = 0x23D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D780u);
        ctx->pc = 0x23D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D778u;
        // 0x23d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D778u, 0x23D780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D780u;
label_23d780:
    // 0x23d780: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x23d780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_23d784:
    // 0x23d784: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d788:
    // 0x23d788: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x23d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_23d78c:
    // 0x23d78c: 0x40f809  jalr        $v0
label_23d790:
    if (ctx->pc == 0x23D790u) {
        ctx->pc = 0x23D794u;
        goto label_23d794;
    }
    ctx->pc = 0x23D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D794u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D78Cu, 0x23D794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D794u;
label_23d794:
    // 0x23d794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d798:
    // 0x23d798: 0xc08e3b2  jal         func_238EC8
label_23d79c:
    if (ctx->pc == 0x23D79Cu) {
        ctx->pc = 0x23D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D798u;
        // 0x23d79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7A0u;
        goto label_23d7a0;
    }
    ctx->pc = 0x23D798u;
    SET_GPR_U32(ctx, 31, 0x23D7A0u);
    ctx->pc = 0x23D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D798u;
    // 0x23d79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x23D798u, 0x23D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7A0u;
label_23d7a0:
    // 0x23d7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d7a4:
    // 0x23d7a4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_23d7a8:
    // 0x23d7a8: 0xc08fed2  jal         func_23FB48
label_23d7ac:
    if (ctx->pc == 0x23D7ACu) {
        ctx->pc = 0x23D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7A8u;
        // 0x23d7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7B0u;
        goto label_23d7b0;
    }
    ctx->pc = 0x23D7A8u;
    SET_GPR_U32(ctx, 31, 0x23D7B0u);
    ctx->pc = 0x23D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7A8u;
    // 0x23d7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D7A8u, 0x23D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7B0u;
label_23d7b0:
    // 0x23d7b0: 0xae20038c  sw          $zero, 0x38C($s1)
    ctx->pc = 0x23d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 908), GPR_U32(ctx, 0));
label_23d7b4:
    // 0x23d7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d7b8:
    // 0x23d7b8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x23d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23d7bc:
    // 0x23d7bc: 0xc08fed2  jal         func_23FB48
label_23d7c0:
    if (ctx->pc == 0x23D7C0u) {
        ctx->pc = 0x23D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7BCu;
        // 0x23d7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7C4u;
        goto label_23d7c4;
    }
    ctx->pc = 0x23D7BCu;
    SET_GPR_U32(ctx, 31, 0x23D7C4u);
    ctx->pc = 0x23D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7BCu;
    // 0x23d7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D7BCu, 0x23D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7C4u;
label_23d7c4:
    // 0x23d7c4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23d7c8:
    // 0x23d7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d7cc:
    // 0x23d7cc: 0xc08fed2  jal         func_23FB48
label_23d7d0:
    if (ctx->pc == 0x23D7D0u) {
        ctx->pc = 0x23D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7CCu;
        // 0x23d7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7D4u;
        goto label_23d7d4;
    }
    ctx->pc = 0x23D7CCu;
    SET_GPR_U32(ctx, 31, 0x23D7D4u);
    ctx->pc = 0x23D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D7CCu;
    // 0x23d7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D7CCu, 0x23D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7D4u;
label_23d7d4:
    // 0x23d7d4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x23d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_23d7d8:
    // 0x23d7d8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x23d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_23d7dc:
    // 0x23d7dc: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x23d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_23d7e0:
    // 0x23d7e0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d7e4:
    // 0x23d7e4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_23d7e8:
    // 0x23d7e8: 0x40f809  jalr        $v0
label_23d7ec:
    if (ctx->pc == 0x23D7ECu) {
        ctx->pc = 0x23D7F0u;
        goto label_23d7f0;
    }
    ctx->pc = 0x23D7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D7F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7E8u, 0x23D7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D7F0u;
label_23d7f0:
    // 0x23d7f0: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x23d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_23d7f4:
    // 0x23d7f4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d7f8:
    // 0x23d7f8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x23d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_23d7fc:
    // 0x23d7fc: 0x40f809  jalr        $v0
label_23d800:
    if (ctx->pc == 0x23D800u) {
        ctx->pc = 0x23D804u;
        goto label_23d804;
    }
    ctx->pc = 0x23D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7FCu, 0x23D804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D804u;
label_23d804:
    // 0x23d804: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x23d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_23d808:
    // 0x23d808: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x23d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_23d80c:
    // 0x23d80c: 0x40f809  jalr        $v0
label_23d810:
    if (ctx->pc == 0x23D810u) {
        ctx->pc = 0x23D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D80Cu;
        // 0x23d810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D814u;
        goto label_23d814;
    }
    ctx->pc = 0x23D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D814u);
        ctx->pc = 0x23D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D80Cu;
        // 0x23d810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D80Cu, 0x23D814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D814u;
label_23d814:
    // 0x23d814: 0x5260002f  beql        $s3, $zero, . + 4 + (0x2F << 2)
label_23d818:
    if (ctx->pc == 0x23D818u) {
        ctx->pc = 0x23D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D814u;
        // 0x23d818: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D81Cu;
        goto label_23d81c;
    }
    ctx->pc = 0x23D814u;
    {
        const bool branch_taken_0x23d814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d814) {
            ctx->pc = 0x23D818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D814u;
            // 0x23d818: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8D4u;
            goto label_23d8d4;
        }
    }
    ctx->pc = 0x23D81Cu;
label_23d81c:
    // 0x23d81c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x23d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d820:
    // 0x23d820: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x23d820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d824:
    // 0x23d824: 0x0  nop
    ctx->pc = 0x23d824u;
    // NOP
label_23d828:
    // 0x23d828: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_23d82c:
    if (ctx->pc == 0x23D82Cu) {
        ctx->pc = 0x23D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D828u;
        // 0x23d82c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D830u;
        goto label_23d830;
    }
    ctx->pc = 0x23D828u;
    {
        const bool branch_taken_0x23d828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d828) {
            ctx->pc = 0x23D82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D828u;
            // 0x23d82c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D864u;
            goto label_23d864;
        }
    }
    ctx->pc = 0x23D830u;
label_23d830:
    // 0x23d830: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23d834:
    // 0x23d834: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23d838:
    // 0x23d838: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23d83c:
    if (ctx->pc == 0x23D83Cu) {
        ctx->pc = 0x23D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D838u;
        // 0x23d83c: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D840u;
        goto label_23d840;
    }
    ctx->pc = 0x23D838u;
    {
        const bool branch_taken_0x23d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D838u;
        // 0x23d83c: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d838) {
            ctx->pc = 0x23D87Cu;
            goto label_23d87c;
        }
    }
    ctx->pc = 0x23D840u;
label_23d840:
    // 0x23d840: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23d844:
    // 0x23d844: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x23d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_23d848:
    // 0x23d848: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_23d84c:
    if (ctx->pc == 0x23D84Cu) {
        ctx->pc = 0x23D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D848u;
        // 0x23d84c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D850u;
        goto label_23d850;
    }
    ctx->pc = 0x23D848u;
    {
        const bool branch_taken_0x23d848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23d848) {
            ctx->pc = 0x23D84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D848u;
            // 0x23d84c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D880u;
            goto label_23d880;
        }
    }
    ctx->pc = 0x23D850u;
label_23d850:
    // 0x23d850: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_23d854:
    // 0x23d854: 0x28420532  slti        $v0, $v0, 0x532
    ctx->pc = 0x23d854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1330) ? 1 : 0);
label_23d858:
    // 0x23d858: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_23d85c:
    if (ctx->pc == 0x23D85Cu) {
        ctx->pc = 0x23D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D858u;
        // 0x23d85c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D860u;
        goto label_23d860;
    }
    ctx->pc = 0x23D858u;
    {
        const bool branch_taken_0x23d858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d858) {
            ctx->pc = 0x23D85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D858u;
            // 0x23d85c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D880u;
            goto label_23d880;
        }
    }
    ctx->pc = 0x23D860u;
label_23d860:
    // 0x23d860: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x23d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23d864:
    // 0x23d864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d868:
    // 0x23d868: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x23d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_23d86c:
    // 0x23d86c: 0x40f809  jalr        $v0
label_23d870:
    if (ctx->pc == 0x23D870u) {
        ctx->pc = 0x23D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D86Cu;
        // 0x23d870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D874u;
        goto label_23d874;
    }
    ctx->pc = 0x23D86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D874u);
        ctx->pc = 0x23D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D86Cu;
        // 0x23d870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D86Cu, 0x23D874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D874u;
label_23d874:
    // 0x23d874: 0x10000008  b           . + 4 + (0x8 << 2)
label_23d878:
    if (ctx->pc == 0x23D878u) {
        ctx->pc = 0x23D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D874u;
        // 0x23d878: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D87Cu;
        goto label_23d87c;
    }
    ctx->pc = 0x23D874u;
    {
        const bool branch_taken_0x23d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D874u;
        // 0x23d878: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d874) {
            ctx->pc = 0x23D898u;
            goto label_23d898;
        }
    }
    ctx->pc = 0x23D87Cu;
label_23d87c:
    // 0x23d87c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23d880:
    // 0x23d880: 0xc06974a  jal         func_1A5D28
label_23d884:
    if (ctx->pc == 0x23D884u) {
        ctx->pc = 0x23D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D880u;
        // 0x23d884: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D888u;
        goto label_23d888;
    }
    ctx->pc = 0x23D880u;
    SET_GPR_U32(ctx, 31, 0x23D888u);
    ctx->pc = 0x23D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D880u;
    // 0x23d884: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23D880u, 0x23D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D888u;
label_23d888:
    // 0x23d888: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23d88c:
    // 0x23d88c: 0xc06a05e  jal         func_1A8178
label_23d890:
    if (ctx->pc == 0x23D890u) {
        ctx->pc = 0x23D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D88Cu;
        // 0x23d890: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D894u;
        goto label_23d894;
    }
    ctx->pc = 0x23D88Cu;
    SET_GPR_U32(ctx, 31, 0x23D894u);
    ctx->pc = 0x23D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D88Cu;
    // 0x23d890: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x23D88Cu, 0x23D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D894u;
label_23d894:
    // 0x23d894: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23d894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23d898:
    // 0x23d898: 0xc06974a  jal         func_1A5D28
label_23d89c:
    if (ctx->pc == 0x23D89Cu) {
        ctx->pc = 0x23D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D898u;
        // 0x23d89c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8A0u;
        goto label_23d8a0;
    }
    ctx->pc = 0x23D898u;
    SET_GPR_U32(ctx, 31, 0x23D8A0u);
    ctx->pc = 0x23D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D898u;
    // 0x23d89c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x23D898u, 0x23D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8A0u;
label_23d8a0:
    // 0x23d8a0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23d8a4:
    // 0x23d8a4: 0xc06a05e  jal         func_1A8178
label_23d8a8:
    if (ctx->pc == 0x23D8A8u) {
        ctx->pc = 0x23D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8A4u;
        // 0x23d8a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8ACu;
        goto label_23d8ac;
    }
    ctx->pc = 0x23D8A4u;
    SET_GPR_U32(ctx, 31, 0x23D8ACu);
    ctx->pc = 0x23D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8A4u;
    // 0x23d8a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x23D8A4u, 0x23D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8ACu;
label_23d8ac:
    // 0x23d8ac: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x23d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23d8b0:
    // 0x23d8b0: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x23d8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_23d8b4:
    // 0x23d8b4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_23d8b8:
    if (ctx->pc == 0x23D8B8u) {
        ctx->pc = 0x23D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8B4u;
        // 0x23d8b8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8BCu;
        goto label_23d8bc;
    }
    ctx->pc = 0x23D8B4u;
    {
        const bool branch_taken_0x23d8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d8b4) {
            ctx->pc = 0x23D8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D8B4u;
            // 0x23d8b8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8D4u;
            goto label_23d8d4;
        }
    }
    ctx->pc = 0x23D8BCu;
label_23d8bc:
    // 0x23d8bc: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x23d8bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_23d8c0:
    // 0x23d8c0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x23d8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23d8c4:
    // 0x23d8c4: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x23d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_23d8c8:
    // 0x23d8c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d8cc:
    // 0x23d8cc: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x23d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_23d8d0:
    // 0x23d8d0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23d8d4:
    // 0x23d8d4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23d8d8:
    // 0x23d8d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23d8dc:
    if (ctx->pc == 0x23D8DCu) {
        ctx->pc = 0x23D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D8u;
        // 0x23d8dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8E0u;
        goto label_23d8e0;
    }
    ctx->pc = 0x23D8D8u;
    {
        const bool branch_taken_0x23d8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D8u;
        // 0x23d8dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8d8) {
            ctx->pc = 0x23D8F0u;
            goto label_23d8f0;
        }
    }
    ctx->pc = 0x23D8E0u;
label_23d8e0:
    // 0x23d8e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d8e4:
    // 0x23d8e4: 0xc0bd0e2  jal         func_2F4388
label_23d8e8:
    if (ctx->pc == 0x23D8E8u) {
        ctx->pc = 0x23D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8E4u;
        // 0x23d8e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8ECu;
        goto label_23d8ec;
    }
    ctx->pc = 0x23D8E4u;
    SET_GPR_U32(ctx, 31, 0x23D8ECu);
    ctx->pc = 0x23D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E4u;
    // 0x23d8e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4388u, 0x23D8E4u, 0x23D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8ECu;
label_23d8ec:
    // 0x23d8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d8f0:
    // 0x23d8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23d8f4:
    // 0x23d8f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23d8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d8f8:
    // 0x23d8f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23d8f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23d8fc:
    // 0x23d8fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23d8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d900:
    // 0x23d900: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x23d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23d904:
    // 0x23d904: 0x3e00008  jr          $ra
label_23d908:
    if (ctx->pc == 0x23D908u) {
        ctx->pc = 0x23D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D904u;
        // 0x23d908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D90Cu;
        goto label_23d90c;
    }
    ctx->pc = 0x23D904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D904u;
        // 0x23d908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D90Cu;
label_23d90c:
    // 0x23d90c: 0x0  nop
    ctx->pc = 0x23d90cu;
    // NOP
    ctx->pc = 0x23d910u;
}
