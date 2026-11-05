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

// Function: sub_001A35F0
// Address: 0x1a35f0 - 0x1a3978
void sub_001A35F0_0x1a35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A35F0_0x1a35f0");
#endif

    switch (ctx->pc) {
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36c4u: goto label_1a36c4;
        case 0x1a3740u: goto label_1a3740;
        case 0x1a3768u: goto label_1a3768;
        case 0x1a37ccu: goto label_1a37cc;
        case 0x1a37e4u: goto label_1a37e4;
        case 0x1a38a0u: goto label_1a38a0;
        case 0x1a38acu: goto label_1a38ac;
        case 0x1a38d0u: goto label_1a38d0;
        case 0x1a38f4u: goto label_1a38f4;
        case 0x1a3950u: goto label_1a3950;
        default: break;
    }

    ctx->pc = 0x1a35f0u;

    // 0x1a35f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a35f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a35f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a35f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a35f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a35fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a3600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3608: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a3608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a360c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a360cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a3610: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1a3610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3614: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a3614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3618: 0x0  nop
    ctx->pc = 0x1a3618u;
    // NOP
    // 0x1a361c: 0x45010079  bc1t        . + 4 + (0x79 << 2)
    ctx->pc = 0x1A361Cu;
    {
        const bool branch_taken_0x1a361c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A361Cu;
        // 0x1a3620: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a361c) {
            ctx->pc = 0x1A3804u;
            goto label_1a3804;
        }
    }
    ctx->pc = 0x1A3624u;
    // 0x1a3624: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1a3628: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3628u;
    {
        const bool branch_taken_0x1a3628 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3628u;
        // 0x1a362c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3628) {
            ctx->pc = 0x1A3644u;
            goto label_1a3644;
        }
    }
    ctx->pc = 0x1A3630u;
    // 0x1a3630: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a3630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3634: 0x0  nop
    ctx->pc = 0x1a3634u;
    // NOP
    // 0x1a3638: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a363c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A363Cu;
    {
        const bool branch_taken_0x1a363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a363c) {
            ctx->pc = 0x1A365Cu;
            goto label_1a365c;
        }
    }
    ctx->pc = 0x1A3644u;
label_1a3644:
    // 0x1a3644: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a3648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a364c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a364cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3650: 0x0  nop
    ctx->pc = 0x1a3650u;
    // NOP
    // 0x1a3654: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a3658: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a3658u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a365c:
    // 0x1a365c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a3660: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a3664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3668: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1a3668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a366c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a366cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a3670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a3670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3674: 0x0  nop
    ctx->pc = 0x1a3674u;
    // NOP
    // 0x1a3678: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1A3678u;
    {
        const bool branch_taken_0x1a3678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3678u;
        // 0x1a367c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3678) {
            ctx->pc = 0x1A3748u;
            goto label_1a3748;
        }
    }
    ctx->pc = 0x1A3680u;
    // 0x1a3680: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3684: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1a3684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a3688: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1a3688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1a368c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1a368cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a3690: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x1a3690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x1a3694: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x1a3694u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x1a3698: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a369c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1a369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a36a0: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x1a36a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
    // 0x1a36a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a36a8: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1a36a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x1a36ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1a36acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a36b0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A36B0u;
    SET_GPR_U32(ctx, 31, 0x1A36B8u);
    ctx->pc = 0x1A36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36B0u;
    // 0x1a36b4: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A36B0u, 0x1A36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B8u;
label_1a36b8:
    // 0x1a36b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36bc: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A36BCu;
    SET_GPR_U32(ctx, 31, 0x1A36C4u);
    ctx->pc = 0x1A36C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36BCu;
    // 0x1a36c0: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A36BCu, 0x1A36C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36C4u;
label_1a36c4:
    // 0x1a36c4: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x1a36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    // 0x1a36c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a36cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1a36ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1a36d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a36d4: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1a36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1a36d8: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x1a36d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
    // 0x1a36dc: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1a36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1a36e0: 0x8ca30940  lw          $v1, 0x940($a1)
    ctx->pc = 0x1a36e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0940u));
    // 0x1a36e4: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A36E4u;
    {
        const bool branch_taken_0x1a36e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a36e4) {
            ctx->pc = 0x1A36E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A36E4u;
            // 0x1a36e8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3718u;
            goto label_1a3718;
        }
    }
    ctx->pc = 0x1A36ECu;
    // 0x1a36ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A36ECu;
    {
        const bool branch_taken_0x1a36ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36ECu;
        // 0x1a36f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36ec) {
            ctx->pc = 0x1A370Cu;
            goto label_1a370c;
        }
    }
    ctx->pc = 0x1A36F4u;
    // 0x1a36f4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A36F4u;
    {
        const bool branch_taken_0x1a36f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36F4u;
        // 0x1a36f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36f4) {
            ctx->pc = 0x1A3720u;
            goto label_1a3720;
        }
    }
    ctx->pc = 0x1A36FCu;
    // 0x1a36fc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A36FCu;
    {
        const bool branch_taken_0x1a36fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36FCu;
        // 0x1a3700: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36fc) {
            ctx->pc = 0x1A372Cu;
            goto label_1a372c;
        }
    }
    ctx->pc = 0x1A3704u;
    // 0x1a3704: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3704u;
        // 0x1a3708: 0x8e220944  lw          $v0, 0x944($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A37F4u;
            goto label_1a37f4;
        }
    }
    ctx->pc = 0x1A370Cu;
label_1a370c:
    // 0x1a370c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3710u;
    {
        const bool branch_taken_0x1a3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3710u;
        // 0x1a3714: 0x240500b1  addiu       $a1, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3710) {
            ctx->pc = 0x1A3734u;
            goto label_1a3734;
        }
    }
    ctx->pc = 0x1A3718u;
label_1a3718:
    // 0x1a3718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3718u;
    {
        const bool branch_taken_0x1a3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3718u;
        // 0x1a371c: 0x240500b2  addiu       $a1, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3718) {
            ctx->pc = 0x1A3734u;
            goto label_1a3734;
        }
    }
    ctx->pc = 0x1A3720u;
label_1a3720:
    // 0x1a3720: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3724u;
    {
        const bool branch_taken_0x1a3724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3724u;
        // 0x1a3728: 0x240500b3  addiu       $a1, $zero, 0xB3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3724) {
            ctx->pc = 0x1A3734u;
            goto label_1a3734;
        }
    }
    ctx->pc = 0x1A372Cu;
label_1a372c:
    // 0x1a372c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3730: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1a3730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1a3734:
    // 0x1a3734: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x1a3734u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x1a3738: 0xc069880  jal         func_1A6200
    ctx->pc = 0x1A3738u;
    SET_GPR_U32(ctx, 31, 0x1A3740u);
    ctx->pc = 0x1A373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3738u;
    // 0x1a373c: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6200u, 0x1A3738u, 0x1A3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3740u;
label_1a3740:
    // 0x1a3740: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A3740u;
    {
        const bool branch_taken_0x1a3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3740u;
        // 0x1a3744: 0x8e220944  lw          $v0, 0x944($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3740) {
            ctx->pc = 0x1A37F4u;
            goto label_1a37f4;
        }
    }
    ctx->pc = 0x1A3748u;
label_1a3748:
    // 0x1a3748: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a374c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3750: 0x8c430944  lw          $v1, 0x944($v0)
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0944u));
    // 0x1a3754: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3758: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a3758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a375c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3760: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x1A3760u;
    SET_GPR_U32(ctx, 31, 0x1A3768u);
    ctx->pc = 0x1A3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3760u;
    // 0x1a3764: 0xac430944  sw          $v1, 0x944($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 2372), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1A3760u, 0x1A3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3768u;
label_1a3768:
    // 0x1a3768: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a3768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a376c: 0x8e442b00  lw          $a0, 0x2B00($s2)
    ctx->pc = 0x1a376cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1a3770: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3770u;
    {
        const bool branch_taken_0x1a3770 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3770u;
        // 0x1a3774: 0xac620940  sw          $v0, 0x940($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3770) {
            ctx->pc = 0x1A378Cu;
            goto label_1a378c;
        }
    }
    ctx->pc = 0x1A3778u;
    // 0x1a3778: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3778u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a377c: 0x0  nop
    ctx->pc = 0x1a377cu;
    // NOP
    // 0x1a3780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3784u;
    {
        const bool branch_taken_0x1a3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3784) {
            ctx->pc = 0x1A37A8u;
            goto label_1a37a8;
        }
    }
    ctx->pc = 0x1A378Cu;
label_1a378c:
    // 0x1a378c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1a378cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1a3790: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a3790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a3794: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a3798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a379c: 0x0  nop
    ctx->pc = 0x1a379cu;
    // NOP
    // 0x1a37a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a37a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a37a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a37a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a37a8:
    // 0x1a37a8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a37ac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a37acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a37b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a37b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a37b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a37b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a37b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a37b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a37bc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a37bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1a37c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a37c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a37c4: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1A37C4u;
    SET_GPR_U32(ctx, 31, 0x1A37CCu);
    ctx->pc = 0x1A37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37C4u;
    // 0x1a37c8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A37C4u, 0x1A37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37CCu;
label_1a37cc:
    // 0x1a37cc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a37ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a37d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a37d4: 0x2405080d  addiu       $a1, $zero, 0x80D
    ctx->pc = 0x1a37d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x1a37d8: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x1a37d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a37dc: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x1A37DCu;
    SET_GPR_U32(ctx, 31, 0x1A37E4u);
    ctx->pc = 0x1A37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37DCu;
    // 0x1a37e0: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1A37DCu, 0x1A37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37E4u;
label_1a37e4:
    // 0x1a37e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a37e8: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1a37ec: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a37ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a37f0: 0x8e220944  lw          $v0, 0x944($s1)
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2372)));
label_1a37f4:
    // 0x1a37f4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1a37f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a37f8: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A37F8u;
    {
        const bool branch_taken_0x1a37f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37F8u;
        // 0x1a37fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37f8) {
            ctx->pc = 0x1A395Cu;
            goto label_1a395c;
        }
    }
    ctx->pc = 0x1A3800u;
    // 0x1a3800: 0xae200944  sw          $zero, 0x944($s1)
    ctx->pc = 0x1a3800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2372), GPR_U32(ctx, 0));
label_1a3804:
    // 0x1a3804: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a3804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3808: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a3808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a380c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1a3810: 0xdca41020  ld          $a0, 0x1020($a1)
    ctx->pc = 0x1a3810u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x1a3814: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a3814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a3818: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A3818u;
    {
        const bool branch_taken_0x1a3818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3818) {
            ctx->pc = 0x1A381Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3818u;
            // 0x1a381c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3864u;
            goto label_1a3864;
        }
    }
    ctx->pc = 0x1A3820u;
    // 0x1a3820: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a3824: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1a3824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1a3828: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a3828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a382c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A382Cu;
    {
        const bool branch_taken_0x1a382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a382c) {
            ctx->pc = 0x1A3830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A382Cu;
            // 0x1a3830: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3864u;
            goto label_1a3864;
        }
    }
    ctx->pc = 0x1A3834u;
    // 0x1a3834: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1a3838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a3838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a383c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1a383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1a3840: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x1a3840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x1a3844: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1a3844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1a3848: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a3848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a384c: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x1a384cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x1a3850: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x1a3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x1a3854: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a3854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a3858: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a3858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a385c: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x1a385cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
    // 0x1a3860: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3864:
    // 0x1a3864: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a3864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a3868: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a3868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1a386c: 0xdc831020  ld          $v1, 0x1020($a0)
    ctx->pc = 0x1a386cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x1a3870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a3874: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3874u;
    {
        const bool branch_taken_0x1a3874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3874) {
            ctx->pc = 0x1A3878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3874u;
            // 0x1a3878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3898u;
            goto label_1a3898;
        }
    }
    ctx->pc = 0x1A387Cu;
    // 0x1a387c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1a387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1a3880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a3884: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x1a3884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x1a3888: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x1a3888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x1a388c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a3890: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x1a3890u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x1a3894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3898:
    // 0x1a3898: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A3898u;
    SET_GPR_U32(ctx, 31, 0x1A38A0u);
    ctx->pc = 0x1A389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3898u;
    // 0x1a389c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A3898u, 0x1A38A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38A0u;
label_1a38a0:
    // 0x1a38a0: 0xac510158  sw          $s1, 0x158($v0)
    ctx->pc = 0x1a38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 17));
    // 0x1a38a4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A38A4u;
    SET_GPR_U32(ctx, 31, 0x1A38ACu);
    ctx->pc = 0x1A38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38A4u;
    // 0x1a38a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A38A4u, 0x1A38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38ACu;
label_1a38ac:
    // 0x1a38ac: 0xac510160  sw          $s1, 0x160($v0)
    ctx->pc = 0x1a38acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 17));
    // 0x1a38b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a38b4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A38B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A38B4u;
            // 0x1a38b8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A38ECu;
            goto label_1a38ec;
        }
    }
    ctx->pc = 0x1A38BCu;
    // 0x1a38bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a38bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a38c0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a38c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1a38c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a38c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a38c8: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1A38C8u;
    SET_GPR_U32(ctx, 31, 0x1A38D0u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A38C8u, 0x1A38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38D0u;
label_1a38d0:
    // 0x1a38d0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1a38d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1a38d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a38d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a38d8: 0x0  nop
    ctx->pc = 0x1a38d8u;
    // NOP
    // 0x1a38dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a38dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a38e0: 0x0  nop
    ctx->pc = 0x1a38e0u;
    // NOP
    // 0x1a38e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A38E4u;
    {
        const bool branch_taken_0x1a38e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a38e4) {
            ctx->pc = 0x1A38E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A38E4u;
            // 0x1a38e8: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A38ECu;
            goto label_1a38ec;
        }
    }
    ctx->pc = 0x1A38ECu;
label_1a38ec:
    // 0x1a38ec: 0xc068e7c  jal         func_1A39F0
    ctx->pc = 0x1A38ECu;
    SET_GPR_U32(ctx, 31, 0x1A38F4u);
    ctx->pc = 0x1A38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38ECu;
    // 0x1a38f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A39F0u, 0x1A38ECu, 0x1A38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38F4u;
label_1a38f4:
    // 0x1a38f4: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1a38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1a38f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A38F8u;
    {
        const bool branch_taken_0x1a38f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38F8u;
        // 0x1a38fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38f8) {
            ctx->pc = 0x1A3914u;
            goto label_1a3914;
        }
    }
    ctx->pc = 0x1A3900u;
    // 0x1a3900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3904: 0x0  nop
    ctx->pc = 0x1a3904u;
    // NOP
    // 0x1a3908: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a390c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A390Cu;
    {
        const bool branch_taken_0x1a390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a390c) {
            ctx->pc = 0x1A392Cu;
            goto label_1a392c;
        }
    }
    ctx->pc = 0x1A3914u;
label_1a3914:
    // 0x1a3914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a3918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a391c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a391cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3920: 0x0  nop
    ctx->pc = 0x1a3920u;
    // NOP
    // 0x1a3924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3928: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a3928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a392c:
    // 0x1a392c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a392cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a3930: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a3934: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3938: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a3938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a393c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3940: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1a3940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1a3944: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a3944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a3948: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1A3948u;
    SET_GPR_U32(ctx, 31, 0x1A3950u);
    ctx->pc = 0x1A394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3948u;
    // 0x1a394c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A3948u, 0x1A3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3950u;
label_1a3950:
    // 0x1a3950: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a3950u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a3954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3958: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x1a3958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a395c:
    // 0x1a395c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a395cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a3968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a396c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3970: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3970u;
        // 0x1a3974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3978u;
}
