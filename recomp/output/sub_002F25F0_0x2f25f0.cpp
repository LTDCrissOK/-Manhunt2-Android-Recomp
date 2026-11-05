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

// Function: sub_002F25F0
// Address: 0x2f25f0 - 0x2f2748
void sub_002F25F0_0x2f25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F25F0_0x2f25f0");
#endif

    switch (ctx->pc) {
        case 0x2f268cu: goto label_2f268c;
        case 0x2f26e0u: goto label_2f26e0;
        case 0x2f2710u: goto label_2f2710;
        default: break;
    }

    ctx->pc = 0x2f25f0u;

    // 0x2f25f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f25f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f25f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f25f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f25fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2608: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2f2608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f260c: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x2f260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x2f2610: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2610u;
    {
        const bool branch_taken_0x2f2610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2610u;
        // 0x2f2614: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2610) {
            ctx->pc = 0x2F2630u;
            goto label_2f2630;
        }
    }
    ctx->pc = 0x2F2618u;
    // 0x2f2618: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2618u;
    {
        const bool branch_taken_0x2f2618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2618u;
        // 0x2f261c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2618) {
            ctx->pc = 0x2F2630u;
            goto label_2f2630;
        }
    }
    ctx->pc = 0x2F2620u;
    // 0x2f2620: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2620u;
    {
        const bool branch_taken_0x2f2620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2620u;
        // 0x2f2624: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2620) {
            ctx->pc = 0x2F2630u;
            goto label_2f2630;
        }
    }
    ctx->pc = 0x2F2628u;
    // 0x2f2628: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2F2628u;
    {
        const bool branch_taken_0x2f2628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2628u;
        // 0x2f262c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2628) {
            ctx->pc = 0x2F2734u;
            goto label_2f2734;
        }
    }
    ctx->pc = 0x2F2630u;
label_2f2630:
    // 0x2f2630: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2f2630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2634: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2f2634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2f2638: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2f2638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2f263c: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F263Cu;
    {
        const bool branch_taken_0x2f263c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F263Cu;
        // 0x2f2640: 0x262304fc  addiu       $v1, $s1, 0x4FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f263c) {
            ctx->pc = 0x2F26ACu;
            goto label_2f26ac;
        }
    }
    ctx->pc = 0x2F2644u;
    // 0x2f2644: 0xc62304fc  lwc1        $f3, 0x4FC($s1)
    ctx->pc = 0x2f2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f2648: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f264c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2f264cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2f2650: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f2650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2f2654: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f2654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f2658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f2658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f265c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2f265cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2660: 0x0  nop
    ctx->pc = 0x2f2660u;
    // NOP
    // 0x2f2664: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2F2664u;
    {
        const bool branch_taken_0x2f2664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2664u;
        // 0x2f2668: 0x263012f4  addiu       $s0, $s1, 0x12F4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2664) {
            ctx->pc = 0x2F26ACu;
            goto label_2f26ac;
        }
    }
    ctx->pc = 0x2F266Cu;
    // 0x2f266c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f2670: 0xe62312f4  swc1        $f3, 0x12F4($s1)
    ctx->pc = 0x2f2670u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4852), bits); }
    // 0x2f2674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2678: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2f2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2f267c: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f267cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
    // 0x2f2680: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2684: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x2F2684u;
    SET_GPR_U32(ctx, 31, 0x2F268Cu);
    ctx->pc = 0x2F2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2684u;
    // 0x2f2688: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2F2684u, 0x2F268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F268Cu;
label_2f268c:
    // 0x2f268c: 0xc62212f4  lwc1        $f2, 0x12F4($s1)
    ctx->pc = 0x2f268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2690: 0x0  nop
    ctx->pc = 0x2f2690u;
    // NOP
    // 0x2f2694: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2f2694u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2f2698: 0xe62212f4  swc1        $f2, 0x12F4($s1)
    ctx->pc = 0x2f2698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4852), bits); }
    // 0x2f269c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2f269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f26a0: 0x0  nop
    ctx->pc = 0x2f26a0u;
    // NOP
    // 0x2f26a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f26a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f26a8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2f26a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2f26ac:
    // 0x2f26ac: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x2f26acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x2f26b0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f26b4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F26B4u;
    {
        const bool branch_taken_0x2f26b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f26b4) {
            ctx->pc = 0x2F2708u;
            goto label_2f2708;
        }
    }
    ctx->pc = 0x2F26BCu;
    // 0x2f26bc: 0xc62011d4  lwc1        $f0, 0x11D4($s1)
    ctx->pc = 0x2f26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f26c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f26c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f26c4: 0x0  nop
    ctx->pc = 0x2f26c4u;
    // NOP
    // 0x2f26c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f26c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f26cc: 0x0  nop
    ctx->pc = 0x2f26ccu;
    // NOP
    // 0x2f26d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2F26D0u;
    {
        const bool branch_taken_0x2f26d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f26d0) {
            ctx->pc = 0x2F2708u;
            goto label_2f2708;
        }
    }
    ctx->pc = 0x2F26D8u;
    // 0x2f26d8: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2F26D8u;
    SET_GPR_U32(ctx, 31, 0x2F26E0u);
    ctx->pc = 0x2F26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26D8u;
    // 0x2f26dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2F26D8u, 0x2F26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26E0u;
label_2f26e0:
    // 0x2f26e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F26E0u;
    {
        const bool branch_taken_0x2f26e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26E0u;
        // 0x2f26e4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26e0) {
            ctx->pc = 0x2F2708u;
            goto label_2f2708;
        }
    }
    ctx->pc = 0x2F26E8u;
    // 0x2f26e8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f26ec: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2f26ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2f26f0: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x2f26f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x2f26f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f26f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f26f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f26f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f26fc: 0xe6341264  swc1        $f20, 0x1264($s1)
    ctx->pc = 0x2f26fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4708), bits); }
    // 0x2f2700: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f2700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
    // 0x2f2704: 0xe6201268  swc1        $f0, 0x1268($s1)
    ctx->pc = 0x2f2704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4712), bits); }
label_2f2708:
    // 0x2f2708: 0xc08c1ca  jal         func_230728
    ctx->pc = 0x2F2708u;
    SET_GPR_U32(ctx, 31, 0x2F2710u);
    ctx->pc = 0x2F270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2708u;
    // 0x2f270c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230728u, 0x2F2708u, 0x2F2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2710u;
label_2f2710:
    // 0x2f2710: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2f2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f2714: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2f2714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2f2718: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x2f2718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2f271c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F271Cu;
    {
        const bool branch_taken_0x2f271c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F271Cu;
        // 0x2f2720: 0x2403bfff  addiu       $v1, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f271c) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2724u;
    // 0x2f2724: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f2724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f2728: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f272c: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f272cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2f2730:
    // 0x2f2730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2734:
    // 0x2f2734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f2734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f2738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f273c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2f273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f2740: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2740u;
        // 0x2f2744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2748u;
}
