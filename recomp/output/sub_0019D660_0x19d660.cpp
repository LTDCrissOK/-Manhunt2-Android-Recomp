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

// Function: sub_0019D660
// Address: 0x19d660 - 0x19d780
void sub_0019D660_0x19d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D660_0x19d660");
#endif

    switch (ctx->pc) {
        case 0x19d660u: goto label_19d660;
        case 0x19d664u: goto label_19d664;
        case 0x19d668u: goto label_19d668;
        case 0x19d66cu: goto label_19d66c;
        case 0x19d670u: goto label_19d670;
        case 0x19d674u: goto label_19d674;
        case 0x19d678u: goto label_19d678;
        case 0x19d67cu: goto label_19d67c;
        case 0x19d680u: goto label_19d680;
        case 0x19d684u: goto label_19d684;
        case 0x19d688u: goto label_19d688;
        case 0x19d68cu: goto label_19d68c;
        case 0x19d690u: goto label_19d690;
        case 0x19d694u: goto label_19d694;
        case 0x19d698u: goto label_19d698;
        case 0x19d69cu: goto label_19d69c;
        case 0x19d6a0u: goto label_19d6a0;
        case 0x19d6a4u: goto label_19d6a4;
        case 0x19d6a8u: goto label_19d6a8;
        case 0x19d6acu: goto label_19d6ac;
        case 0x19d6b0u: goto label_19d6b0;
        case 0x19d6b4u: goto label_19d6b4;
        case 0x19d6b8u: goto label_19d6b8;
        case 0x19d6bcu: goto label_19d6bc;
        case 0x19d6c0u: goto label_19d6c0;
        case 0x19d6c4u: goto label_19d6c4;
        case 0x19d6c8u: goto label_19d6c8;
        case 0x19d6ccu: goto label_19d6cc;
        case 0x19d6d0u: goto label_19d6d0;
        case 0x19d6d4u: goto label_19d6d4;
        case 0x19d6d8u: goto label_19d6d8;
        case 0x19d6dcu: goto label_19d6dc;
        case 0x19d6e0u: goto label_19d6e0;
        case 0x19d6e4u: goto label_19d6e4;
        case 0x19d6e8u: goto label_19d6e8;
        case 0x19d6ecu: goto label_19d6ec;
        case 0x19d6f0u: goto label_19d6f0;
        case 0x19d6f4u: goto label_19d6f4;
        case 0x19d6f8u: goto label_19d6f8;
        case 0x19d6fcu: goto label_19d6fc;
        case 0x19d700u: goto label_19d700;
        case 0x19d704u: goto label_19d704;
        case 0x19d708u: goto label_19d708;
        case 0x19d70cu: goto label_19d70c;
        case 0x19d710u: goto label_19d710;
        case 0x19d714u: goto label_19d714;
        case 0x19d718u: goto label_19d718;
        case 0x19d71cu: goto label_19d71c;
        case 0x19d720u: goto label_19d720;
        case 0x19d724u: goto label_19d724;
        case 0x19d728u: goto label_19d728;
        case 0x19d72cu: goto label_19d72c;
        case 0x19d730u: goto label_19d730;
        case 0x19d734u: goto label_19d734;
        case 0x19d738u: goto label_19d738;
        case 0x19d73cu: goto label_19d73c;
        case 0x19d740u: goto label_19d740;
        case 0x19d744u: goto label_19d744;
        case 0x19d748u: goto label_19d748;
        case 0x19d74cu: goto label_19d74c;
        case 0x19d750u: goto label_19d750;
        case 0x19d754u: goto label_19d754;
        case 0x19d758u: goto label_19d758;
        case 0x19d75cu: goto label_19d75c;
        case 0x19d760u: goto label_19d760;
        case 0x19d764u: goto label_19d764;
        case 0x19d768u: goto label_19d768;
        case 0x19d76cu: goto label_19d76c;
        case 0x19d770u: goto label_19d770;
        case 0x19d774u: goto label_19d774;
        case 0x19d778u: goto label_19d778;
        case 0x19d77cu: goto label_19d77c;
        default: break;
    }

    ctx->pc = 0x19d660u;

label_19d660:
    // 0x19d660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19d664:
    // 0x19d664: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19d664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19d668:
    // 0x19d668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19d66c:
    // 0x19d66c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19d670:
    // 0x19d670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d674:
    // 0x19d674: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19d674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19d678:
    // 0x19d678: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19d67c:
    // 0x19d67c: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19d680:
    // 0x19d680: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19d684:
    // 0x19d684: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d688:
    // 0x19d688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d68c:
    // 0x19d68c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d690:
    // 0x19d690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19d694:
    // 0x19d694: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19d694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19d698:
    // 0x19d698: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x19d698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_19d69c:
    // 0x19d69c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d6a0:
    // 0x19d6a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d6a4:
    // 0x19d6a4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x19d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_19d6a8:
    // 0x19d6a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19d6ac:
    // 0x19d6ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19d6b0:
    if (ctx->pc == 0x19D6B0u) {
        ctx->pc = 0x19D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6ACu;
        // 0x19d6b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6B4u;
        goto label_19d6b4;
    }
    ctx->pc = 0x19D6ACu;
    {
        const bool branch_taken_0x19d6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6ac) {
            ctx->pc = 0x19D6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D6ACu;
            // 0x19d6b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D6C8u;
            goto label_19d6c8;
        }
    }
    ctx->pc = 0x19D6B4u;
label_19d6b4:
    // 0x19d6b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d6b8:
    // 0x19d6b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19d6bc:
    // 0x19d6bc: 0x40f809  jalr        $v0
label_19d6c0:
    if (ctx->pc == 0x19D6C0u) {
        ctx->pc = 0x19D6C4u;
        goto label_19d6c4;
    }
    ctx->pc = 0x19D6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D6C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D6BCu, 0x19D6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D6C4u;
label_19d6c4:
    // 0x19d6c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19d6c8:
    // 0x19d6c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19d6cc:
    // 0x19d6cc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19d6d0:
    // 0x19d6d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19d6d4:
    if (ctx->pc == 0x19D6D4u) {
        ctx->pc = 0x19D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6D0u;
        // 0x19d6d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6D8u;
        goto label_19d6d8;
    }
    ctx->pc = 0x19D6D0u;
    {
        const bool branch_taken_0x19d6d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6D0u;
        // 0x19d6d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6d0) {
            ctx->pc = 0x19D6ECu;
            goto label_19d6ec;
        }
    }
    ctx->pc = 0x19D6D8u;
label_19d6d8:
    // 0x19d6d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d6dc:
    // 0x19d6dc: 0x0  nop
    ctx->pc = 0x19d6dcu;
    // NOP
label_19d6e0:
    // 0x19d6e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d6e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d6e4:
    // 0x19d6e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d6e8:
    if (ctx->pc == 0x19D6E8u) {
        ctx->pc = 0x19D6ECu;
        goto label_19d6ec;
    }
    ctx->pc = 0x19D6E4u;
    {
        const bool branch_taken_0x19d6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6e4) {
            ctx->pc = 0x19D704u;
            goto label_19d704;
        }
    }
    ctx->pc = 0x19D6ECu;
label_19d6ec:
    // 0x19d6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19d6f0:
    // 0x19d6f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19d6f4:
    // 0x19d6f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d6f8:
    // 0x19d6f8: 0x0  nop
    ctx->pc = 0x19d6f8u;
    // NOP
label_19d6fc:
    // 0x19d6fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d700:
    // 0x19d700: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19d700u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19d704:
    // 0x19d704: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19d708:
    // 0x19d708: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19d70c:
    // 0x19d70c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d710:
    // 0x19d710: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x19d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d714:
    // 0x19d714: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x19d714u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19d718:
    // 0x19d718: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x19d718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d71c:
    // 0x19d71c: 0x0  nop
    ctx->pc = 0x19d71cu;
    // NOP
label_19d720:
    // 0x19d720: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_19d724:
    if (ctx->pc == 0x19D724u) {
        ctx->pc = 0x19D728u;
        goto label_19d728;
    }
    ctx->pc = 0x19D720u;
    {
        const bool branch_taken_0x19d720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d720) {
            ctx->pc = 0x19D74Cu;
            goto label_19d74c;
        }
    }
    ctx->pc = 0x19D728u;
label_19d728:
    // 0x19d728: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19d728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_19d72c:
    // 0x19d72c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19d730:
    // 0x19d730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19d730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19d734:
    // 0x19d734: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19d734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19d738:
    // 0x19d738: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19d73c:
    // 0x19d73c: 0xc0b12b0  jal         func_2C4AC0
label_19d740:
    if (ctx->pc == 0x19D740u) {
        ctx->pc = 0x19D744u;
        goto label_19d744;
    }
    ctx->pc = 0x19D73Cu;
    SET_GPR_U32(ctx, 31, 0x19D744u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19D73Cu, 0x19D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D744u;
label_19d744:
    // 0x19d744: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x19d744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19d748:
    // 0x19d748: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19d748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_19d74c:
    // 0x19d74c: 0xc061a12  jal         func_186848
label_19d750:
    if (ctx->pc == 0x19D750u) {
        ctx->pc = 0x19D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D74Cu;
        // 0x19d750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D754u;
        goto label_19d754;
    }
    ctx->pc = 0x19D74Cu;
    SET_GPR_U32(ctx, 31, 0x19D754u);
    ctx->pc = 0x19D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D74Cu;
    // 0x19d750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19D74Cu, 0x19D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D754u;
label_19d754:
    // 0x19d754: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19d758:
    // 0x19d758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d75c:
    // 0x19d75c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19d760:
    // 0x19d760: 0x40f809  jalr        $v0
label_19d764:
    if (ctx->pc == 0x19D764u) {
        ctx->pc = 0x19D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D760u;
        // 0x19d764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D768u;
        goto label_19d768;
    }
    ctx->pc = 0x19D760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D768u);
        ctx->pc = 0x19D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D760u;
        // 0x19d764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D760u, 0x19D768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D768u;
label_19d768:
    // 0x19d768: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x19d768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_19d76c:
    // 0x19d76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d770:
    // 0x19d770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19d770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19d774:
    // 0x19d774: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19d778:
    // 0x19d778: 0x3e00008  jr          $ra
label_19d77c:
    if (ctx->pc == 0x19D77Cu) {
        ctx->pc = 0x19D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D778u;
        // 0x19d77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D780u;
        goto label_fallthrough_0x19d778;
    }
    ctx->pc = 0x19D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D778u;
        // 0x19d77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d778:
    ctx->pc = 0x19D780u;
}
