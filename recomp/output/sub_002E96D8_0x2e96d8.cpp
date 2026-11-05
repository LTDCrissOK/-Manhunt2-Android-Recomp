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

// Function: sub_002E96D8
// Address: 0x2e96d8 - 0x2e9a40
void sub_002E96D8_0x2e96d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E96D8_0x2e96d8");
#endif

    switch (ctx->pc) {
        case 0x2e9760u: goto label_2e9760;
        case 0x2e98c4u: goto label_2e98c4;
        case 0x2e98d8u: goto label_2e98d8;
        case 0x2e99f0u: goto label_2e99f0;
        default: break;
    }

    ctx->pc = 0x2e96d8u;

    // 0x2e96d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e96d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e96dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e96dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e96e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e96e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e96e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e96e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e96e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e96ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e96ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e96f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e96f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e96f4: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2e96f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e96f8: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2e96f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e96fc: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2e96fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e9700: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2e9700u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e9704: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2e9704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e9708: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x2e9708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x2e970c: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x2e970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x2e9710: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2E9710u;
    {
        const bool branch_taken_0x2e9710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9710u;
        // 0x2e9714: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9710) {
            ctx->pc = 0x2E9A0Cu;
            goto label_2e9a0c;
        }
    }
    ctx->pc = 0x2E9718u;
    // 0x2e9718: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2e9718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e971c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e971cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9720: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e9724: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x2e9724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2e9728: 0xc4612b30  lwc1        $f1, 0x2B30($v1)
    ctx->pc = 0x2e9728u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e972c: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2e972cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9730: 0xc60010e0  lwc1        $f0, 0x10E0($s0)
    ctx->pc = 0x2e9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9734: 0xc6221650  lwc1        $f2, 0x1650($s1)
    ctx->pc = 0x2e9734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9738: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e9738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e973c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e973cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9740: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e9740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e9744: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2e9744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9748: 0x0  nop
    ctx->pc = 0x2e9748u;
    // NOP
    // 0x2e974c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E974Cu;
    {
        const bool branch_taken_0x2e974c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E974Cu;
        // 0x2e9750: 0xe60010e0  swc1        $f0, 0x10E0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e974c) {
            ctx->pc = 0x2E9758u;
            goto label_2e9758;
        }
    }
    ctx->pc = 0x2E9754u;
    // 0x2e9754: 0xe60210e0  swc1        $f2, 0x10E0($s0)
    ctx->pc = 0x2e9754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4320), bits); }
label_2e9758:
    // 0x2e9758: 0xc0ba564  jal         func_2E9590
    ctx->pc = 0x2E9758u;
    SET_GPR_U32(ctx, 31, 0x2E9760u);
    ctx->pc = 0x2E975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9758u;
    // 0x2e975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9590u, 0x2E9758u, 0x2E9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9760u;
label_2e9760:
    // 0x2e9760: 0xe60010e0  swc1        $f0, 0x10E0($s0)
    ctx->pc = 0x2e9760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4320), bits); }
    // 0x2e9764: 0xc61611c8  lwc1        $f22, 0x11C8($s0)
    ctx->pc = 0x2e9764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e9768: 0xc620162c  lwc1        $f0, 0x162C($s1)
    ctx->pc = 0x2e9768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e976c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e976cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9770: 0x0  nop
    ctx->pc = 0x2e9770u;
    // NOP
    // 0x2e9774: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9774u;
    {
        const bool branch_taken_0x2e9774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9774) {
            ctx->pc = 0x2E9778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9774u;
            // 0x2e9778: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E977Cu;
            goto label_2e977c;
        }
    }
    ctx->pc = 0x2E977Cu;
label_2e977c:
    // 0x2e977c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e9780: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2e9780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2e9784: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9784u;
    {
        const bool branch_taken_0x2e9784 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9784u;
        // 0x2e9788: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9784) {
            ctx->pc = 0x2E97A0u;
            goto label_2e97a0;
        }
    }
    ctx->pc = 0x2E978Cu;
    // 0x2e978c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e978cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9790: 0x0  nop
    ctx->pc = 0x2e9790u;
    // NOP
    // 0x2e9794: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e9794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e9798: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9798u;
    {
        const bool branch_taken_0x2e9798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9798u;
        // 0x2e979c: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9798) {
            ctx->pc = 0x2E97BCu;
            goto label_2e97bc;
        }
    }
    ctx->pc = 0x2E97A0u;
label_2e97a0:
    // 0x2e97a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e97a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e97a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e97a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e97a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e97ac: 0x0  nop
    ctx->pc = 0x2e97acu;
    // NOP
    // 0x2e97b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e97b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e97b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2e97b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2e97b8: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x2e97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e97bc:
    // 0x2e97bc: 0x26420480  addiu       $v0, $s2, 0x480
    ctx->pc = 0x2e97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e97c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e97c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e97c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e97c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e97c8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e97c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e97cc: 0x0  nop
    ctx->pc = 0x2e97ccu;
    // NOP
    // 0x2e97d0: 0x0  nop
    ctx->pc = 0x2e97d0u;
    // NOP
    // 0x2e97d4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2e97d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2e97d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e97dc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e97dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2e97e0: 0xc4431654  lwc1        $f3, 0x1654($v0)
    ctx->pc = 0x2e97e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e97e4: 0xc60410e0  lwc1        $f4, 0x10E0($s0)
    ctx->pc = 0x2e97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e97e8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2e97e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2e97ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e97ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e97f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e97f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e97f4: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2e97f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e97f8: 0xc4451634  lwc1        $f5, 0x1634($v0)
    ctx->pc = 0x2e97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e97fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e97fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e9800: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2e9800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e9804: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x2E9804u;
    {
        const bool branch_taken_0x2e9804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9804u;
        // 0x2e9808: 0x46020602  mul.s       $f24, $f0, $f2 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9804) {
            ctx->pc = 0x2E98ECu;
            goto label_2e98ec;
        }
    }
    ctx->pc = 0x2E980Cu;
    // 0x2e980c: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x2e980cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2e9810: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x2e9810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2e9814: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e9814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9818: 0x0  nop
    ctx->pc = 0x2e9818u;
    // NOP
    // 0x2e981c: 0x0  nop
    ctx->pc = 0x2e981cu;
    // NOP
    // 0x2e9820: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x2e9820u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
    // 0x2e9824: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9828: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2e9828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e982c: 0x0  nop
    ctx->pc = 0x2e982cu;
    // NOP
    // 0x2e9830: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9830u;
    {
        const bool branch_taken_0x2e9830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9830) {
            ctx->pc = 0x2E9840u;
            goto label_2e9840;
        }
    }
    ctx->pc = 0x2E9838u;
    // 0x2e9838: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9838u;
    {
        const bool branch_taken_0x2e9838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9838u;
        // 0x2e983c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9838) {
            ctx->pc = 0x2E9850u;
            goto label_2e9850;
        }
    }
    ctx->pc = 0x2E9840u;
label_2e9840:
    // 0x2e9840: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x2e9840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9844: 0x0  nop
    ctx->pc = 0x2e9844u;
    // NOP
    // 0x2e9848: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9848u;
    {
        const bool branch_taken_0x2e9848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9848) {
            ctx->pc = 0x2E984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9848u;
            // 0x2e984c: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9850u;
            goto label_2e9850;
        }
    }
    ctx->pc = 0x2E9850u;
label_2e9850:
    // 0x2e9850: 0x26420480  addiu       $v0, $s2, 0x480
    ctx->pc = 0x2e9850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e9854: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e9854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e9858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e985c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9860: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e9860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9864: 0xc4401658  lwc1        $f0, 0x1658($v0)
    ctx->pc = 0x2e9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9868: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e9868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e986c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e986cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9870: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2e9870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e9874: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2e9874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e9878: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2e9878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e987c: 0x0  nop
    ctx->pc = 0x2e987cu;
    // NOP
    // 0x2e9880: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E9888u;
    // 0x2e9888: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9888u;
    {
        const bool branch_taken_0x2e9888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9888u;
        // 0x2e988c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9888) {
            ctx->pc = 0x2E98A4u;
            goto label_2e98a4;
        }
    }
    ctx->pc = 0x2E9890u;
label_2e9890:
    // 0x2e9890: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e9890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9894: 0x0  nop
    ctx->pc = 0x2e9894u;
    // NOP
    // 0x2e9898: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9898u;
    {
        const bool branch_taken_0x2e9898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9898) {
            ctx->pc = 0x2E989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9898u;
            // 0x2e989c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E98A0u;
            goto label_2e98a0;
        }
    }
    ctx->pc = 0x2E98A0u;
label_2e98a0:
    // 0x2e98a0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e98a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2e98a4:
    // 0x2e98a4: 0x26420480  addiu       $v0, $s2, 0x480
    ctx->pc = 0x2e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e98a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e98ac: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2e98acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e98b0: 0xc454165c  lwc1        $f20, 0x165C($v0)
    ctx->pc = 0x2e98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e98b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e98b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e98b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e98b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e98bc: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2E98BCu;
    SET_GPR_U32(ctx, 31, 0x2E98C4u);
    ctx->pc = 0x2E98C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98BCu;
    // 0x2e98c0: 0x46140d02  mul.s       $f20, $f1, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2E98BCu, 0x2E98C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98C4u;
label_2e98c4:
    // 0x2e98c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e98c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e98c8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2e98cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e98ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e98d0: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x2E98D0u;
    SET_GPR_U32(ctx, 31, 0x2E98D8u);
    ctx->pc = 0x2E98D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98D0u;
    // 0x2e98d4: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x2E98D0u, 0x2E98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98D8u;
label_2e98d8:
    // 0x2e98d8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e98d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e98dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e98dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e98e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e98e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e98e4: 0x0  nop
    ctx->pc = 0x2e98e4u;
    // NOP
    // 0x2e98e8: 0x4600a5c0  add.s       $f23, $f20, $f0
    ctx->pc = 0x2e98e8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2e98ec:
    // 0x2e98ec: 0x26420480  addiu       $v0, $s2, 0x480
    ctx->pc = 0x2e98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e98f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e98f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e98f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e98f8: 0xc4401630  lwc1        $f0, 0x1630($v0)
    ctx->pc = 0x2e98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e98fc: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e98fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9900: 0x0  nop
    ctx->pc = 0x2e9900u;
    // NOP
    // 0x2e9904: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9904u;
    {
        const bool branch_taken_0x2e9904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9904) {
            ctx->pc = 0x2E9908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9904u;
            // 0x2e9908: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E990Cu;
            goto label_2e990c;
        }
    }
    ctx->pc = 0x2E990Cu;
label_2e990c:
    // 0x2e990c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x2e990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9914: 0x0  nop
    ctx->pc = 0x2e9914u;
    // NOP
    // 0x2e9918: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e9918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e991c: 0x0  nop
    ctx->pc = 0x2e991cu;
    // NOP
    // 0x2e9920: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x2E9920u;
    {
        const bool branch_taken_0x2e9920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9920u;
        // 0x2e9924: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9920) {
            ctx->pc = 0x2E9A0Cu;
            goto label_2e9a0c;
        }
    }
    ctx->pc = 0x2E9928u;
    // 0x2e9928: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2e9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2e992c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E992Cu;
    {
        const bool branch_taken_0x2e992c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E992Cu;
        // 0x2e9930: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e992c) {
            ctx->pc = 0x2E9948u;
            goto label_2e9948;
        }
    }
    ctx->pc = 0x2E9934u;
    // 0x2e9934: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e9934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e9938: 0x0  nop
    ctx->pc = 0x2e9938u;
    // NOP
    // 0x2e993c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2e993cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2e9940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9940u;
    {
        const bool branch_taken_0x2e9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9940) {
            ctx->pc = 0x2E9960u;
            goto label_2e9960;
        }
    }
    ctx->pc = 0x2E9948u;
label_2e9948:
    // 0x2e9948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e994c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9950: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e9950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e9954: 0x0  nop
    ctx->pc = 0x2e9954u;
    // NOP
    // 0x2e9958: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2e9958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2e995c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2e995cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2e9960:
    // 0x2e9960: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e9960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e9964: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e9964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e9968: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e9968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e996c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2e996cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2e9970: 0xc620b82c  lwc1        $f0, -0x47D4($s1)
    ctx->pc = 0x2e9970u;
    { uint32_t bits = FAST_READ32(0x3FB82Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9974: 0x4601a542  mul.s       $f21, $f20, $f1
    ctx->pc = 0x2e9974u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2e9978: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2e9978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e997c: 0x0  nop
    ctx->pc = 0x2e997cu;
    // NOP
    // 0x2e9980: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2E9980u;
    {
        const bool branch_taken_0x2e9980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9980u;
        // 0x2e9984: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9980) {
            ctx->pc = 0x2E9A0Cu;
            goto label_2e9a0c;
        }
    }
    ctx->pc = 0x2E9988u;
    // 0x2e9988: 0x8c62b9e0  lw          $v0, -0x4620($v1)
    ctx->pc = 0x2e9988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949344)));
    // 0x2e998c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E998Cu;
    {
        const bool branch_taken_0x2e998c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E998Cu;
        // 0x2e9990: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e998c) {
            ctx->pc = 0x2E99C0u;
            goto label_2e99c0;
        }
    }
    ctx->pc = 0x2E9994u;
    // 0x2e9994: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e9994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e9998: 0x26430480  addiu       $v1, $s2, 0x480
    ctx->pc = 0x2e9998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e999c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e99a0: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2e99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e99a4: 0xc460163c  lwc1        $f0, 0x163C($v1)
    ctx->pc = 0x2e99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e99a8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2e99a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2e99ac: 0xc4741628  lwc1        $f20, 0x1628($v1)
    ctx->pc = 0x2e99acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e99b0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2e99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2e99b4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2e99b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2e99b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E99B8u;
    {
        const bool branch_taken_0x2e99b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99B8u;
        // 0x2e99bc: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e99b8) {
            ctx->pc = 0x2E99E8u;
            goto label_2e99e8;
        }
    }
    ctx->pc = 0x2E99C0u;
label_2e99c0:
    // 0x2e99c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e99c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e99c4: 0x26430480  addiu       $v1, $s2, 0x480
    ctx->pc = 0x2e99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e99c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e99cc: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2e99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e99d0: 0xc4601638  lwc1        $f0, 0x1638($v1)
    ctx->pc = 0x2e99d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e99d4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2e99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2e99d8: 0xc4741628  lwc1        $f20, 0x1628($v1)
    ctx->pc = 0x2e99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e99dc: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2e99e0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2e99e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2e99e4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2e99e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2e99e8:
    // 0x2e99e8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x2E99E8u;
    SET_GPR_U32(ctx, 31, 0x2E99F0u);
    ctx->pc = 0x2E99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E99E8u;
    // 0x2e99ec: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2E99E8u, 0x2E99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E99F0u;
label_2e99f0:
    // 0x2e99f0: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x2e99f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2e99f4: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x2e99f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2e99f8: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x2e99f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2e99fc: 0xe634b82c  swc1        $f20, -0x47D4($s1)
    ctx->pc = 0x2e99fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294948908), bits); }
    // 0x2e9a00: 0x8e62b9e0  lw          $v0, -0x4620($s3)
    ctx->pc = 0x2e9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949344)));
    // 0x2e9a04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e9a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e9a08: 0xae62b9e0  sw          $v0, -0x4620($s3)
    ctx->pc = 0x2e9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294949344), GPR_U32(ctx, 2));
label_2e9a0c:
    // 0x2e9a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e9a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9a14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e9a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9a18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e9a18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e9a1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9a20: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2e9a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e9a24: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2e9a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e9a28: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2e9a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e9a2c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2e9a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e9a30: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2e9a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e9a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A34u;
        // 0x2e9a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9A3Cu;
    // 0x2e9a3c: 0x0  nop
    ctx->pc = 0x2e9a3cu;
    // NOP
    ctx->pc = 0x2e9a40u;
}
