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

// Function: sub_0019F800
// Address: 0x19f800 - 0x19fd58
void sub_0019F800_0x19f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F800_0x19f800");
#endif

    switch (ctx->pc) {
        case 0x19f9bcu: goto label_19f9bc;
        case 0x19fc04u: goto label_19fc04;
        default: break;
    }

    ctx->pc = 0x19f800u;

    // 0x19f800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f804: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19f808: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19f80c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19f80cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f810: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f814: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19f814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x19f818: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f824: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19f828: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19f82c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F82Cu;
    {
        const bool branch_taken_0x19f82c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F82Cu;
        // 0x19f830: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f82c) {
            ctx->pc = 0x19F848u;
            goto label_19f848;
        }
    }
    ctx->pc = 0x19F834u;
    // 0x19f834: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19f834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f838: 0x0  nop
    ctx->pc = 0x19f838u;
    // NOP
    // 0x19f83c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19f83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19f840: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F840u;
    {
        const bool branch_taken_0x19f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f840) {
            ctx->pc = 0x19F864u;
            goto label_19f864;
        }
    }
    ctx->pc = 0x19F848u;
label_19f848:
    // 0x19f848: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19f84c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19f854: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19f854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f858: 0x0  nop
    ctx->pc = 0x19f858u;
    // NOP
    // 0x19f85c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19f85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19f860: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19f860u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19f864:
    // 0x19f864: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19f868: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19f868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19f86c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f870: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x19f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f874: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19f874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19f878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19f878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f87c: 0x0  nop
    ctx->pc = 0x19f87cu;
    // NOP
    // 0x19f880: 0x4501012b  bc1t        . + 4 + (0x12B << 2)
    ctx->pc = 0x19F880u;
    {
        const bool branch_taken_0x19f880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F880u;
        // 0x19f884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f880) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19F888u;
    // 0x19f888: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f88c: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x19f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x19f890: 0x8c510ff8  lw          $s1, 0xFF8($v0)
    ctx->pc = 0x19f890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x19f894: 0x8c641004  lw          $a0, 0x1004($v1)
    ctx->pc = 0x19f894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x19f898: 0xc6340138  lwc1        $f20, 0x138($s1)
    ctx->pc = 0x19f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f89c: 0x8c700338  lw          $s0, 0x338($v1)
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x19f8a0: 0x14820122  bne         $a0, $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x19F8A0u;
    {
        const bool branch_taken_0x19f8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8A0u;
        // 0x19f8a4: 0x8c730ff8  lw          $s3, 0xFF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8a0) {
            ctx->pc = 0x19FD2Cu;
            goto label_19fd2c;
        }
    }
    ctx->pc = 0x19F8A8u;
    // 0x19f8a8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x19f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x19f8ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f8b4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F8B4u;
    {
        const bool branch_taken_0x19f8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8B4u;
        // 0x19f8b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8b4) {
            ctx->pc = 0x19F8C4u;
            goto label_19f8c4;
        }
    }
    ctx->pc = 0x19F8BCu;
    // 0x19f8bc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19f8c0: 0x2844006f  slti        $a0, $v0, 0x6F
    ctx->pc = 0x19f8c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_19f8c4:
    // 0x19f8c4: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19F8C4u;
    {
        const bool branch_taken_0x19f8c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8c4) {
            ctx->pc = 0x19F8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8C4u;
            // 0x19f8c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F904u;
            goto label_19f904;
        }
    }
    ctx->pc = 0x19F8CCu;
    // 0x19f8cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19f8d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F8D0u;
    {
        const bool branch_taken_0x19f8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8D0u;
        // 0x19f8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8d0) {
            ctx->pc = 0x19F8E0u;
            goto label_19f8e0;
        }
    }
    ctx->pc = 0x19F8D8u;
    // 0x19f8d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19f8dc: 0x28440083  slti        $a0, $v0, 0x83
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_19f8e0:
    // 0x19f8e0: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F8E0u;
    {
        const bool branch_taken_0x19f8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8e0) {
            ctx->pc = 0x19F8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8E0u;
            // 0x19f8e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F904u;
            goto label_19f904;
        }
    }
    ctx->pc = 0x19F8E8u;
    // 0x19f8e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f8ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F8ECu;
    {
        const bool branch_taken_0x19f8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8ECu;
        // 0x19f8f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8ec) {
            ctx->pc = 0x19F8FCu;
            goto label_19f8fc;
        }
    }
    ctx->pc = 0x19F8F4u;
    // 0x19f8f4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19f8f8: 0x28440097  slti        $a0, $v0, 0x97
    ctx->pc = 0x19f8f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_19f8fc:
    // 0x19f8fc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19F8FCu;
    {
        const bool branch_taken_0x19f8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8fc) {
            ctx->pc = 0x19F900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8FCu;
            // 0x19f900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F904u;
            goto label_19f904;
        }
    }
    ctx->pc = 0x19F904u;
label_19f904:
    // 0x19f904: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x19F904u;
    {
        const bool branch_taken_0x19f904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F904u;
        // 0x19f908: 0x8e822b00  lw          $v0, 0x2B00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f904) {
            ctx->pc = 0x19F93Cu;
            goto label_19f93c;
        }
    }
    ctx->pc = 0x19F90Cu;
    // 0x19f90c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x19f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x19f910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f914: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F914u;
    {
        const bool branch_taken_0x19f914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F914u;
        // 0x19f918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f914) {
            ctx->pc = 0x19F930u;
            goto label_19f930;
        }
    }
    ctx->pc = 0x19F91Cu;
    // 0x19f91c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f920: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F920u;
    {
        const bool branch_taken_0x19f920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F920u;
        // 0x19f924: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f920) {
            ctx->pc = 0x19F930u;
            goto label_19f930;
        }
    }
    ctx->pc = 0x19F928u;
    // 0x19f928: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F928u;
    {
        const bool branch_taken_0x19f928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f928) {
            ctx->pc = 0x19F934u;
            goto label_19f934;
        }
    }
    ctx->pc = 0x19F930u;
label_19f930:
    // 0x19f930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f934:
    // 0x19f934: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x19F934u;
    {
        const bool branch_taken_0x19f934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F934u;
        // 0x19f938: 0x8e822b00  lw          $v0, 0x2B00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f934) {
            ctx->pc = 0x19FAE4u;
            goto label_19fae4;
        }
    }
    ctx->pc = 0x19F93Cu;
label_19f93c:
    // 0x19f93c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F93Cu;
    {
        const bool branch_taken_0x19f93c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F93Cu;
        // 0x19f940: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f93c) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F944u;
    // 0x19f944: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19f944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f948: 0x0  nop
    ctx->pc = 0x19f948u;
    // NOP
    // 0x19f94c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19f94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19f950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F950u;
    {
        const bool branch_taken_0x19f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f950) {
            ctx->pc = 0x19F970u;
            goto label_19f970;
        }
    }
    ctx->pc = 0x19F958u;
label_19f958:
    // 0x19f958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19f95c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19f960: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19f960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f964: 0x0  nop
    ctx->pc = 0x19f964u;
    // NOP
    // 0x19f968: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19f968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19f96c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19f96cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19f970:
    // 0x19f970: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19f970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19f974: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19f974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19f978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f97c: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x19f97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x19f980: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x19f980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x19f984: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19f984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x19f988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f98c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x19f990: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19f990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19f994: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f998: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x19f99c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f9a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19f9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19f9a4: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x19f9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x19f9a8: 0x8c820ff4  lw          $v0, 0xFF4($a0)
    ctx->pc = 0x19f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x19f9ac: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x19f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19f9b0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x19f9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19f9b4: 0xc06030c  jal         func_180C30
    ctx->pc = 0x19F9B4u;
    SET_GPR_U32(ctx, 31, 0x19F9BCu);
    ctx->pc = 0x19F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9B4u;
    // 0x19f9b8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C30u, 0x19F9B4u, 0x19F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9BCu;
label_19f9bc:
    // 0x19f9bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f9c0: 0x54430049  bnel        $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x19F9C0u;
    {
        const bool branch_taken_0x19f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f9c0) {
            ctx->pc = 0x19F9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F9C0u;
            // 0x19f9c4: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FAE8u;
            goto label_19fae8;
        }
    }
    ctx->pc = 0x19F9C8u;
    // 0x19f9c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f9cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19f9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19f9d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F9D4u;
    {
        const bool branch_taken_0x19f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9D4u;
        // 0x19f9d8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9d4) {
            ctx->pc = 0x19FA1Cu;
            goto label_19fa1c;
        }
    }
    ctx->pc = 0x19F9DCu;
    // 0x19f9dc: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x19f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x19f9e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19f9e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19f9e8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19F9E8u;
    {
        const bool branch_taken_0x19f9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9E8u;
        // 0x19f9ec: 0x30820100  andi        $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9e8) {
            ctx->pc = 0x19FA20u;
            goto label_19fa20;
        }
    }
    ctx->pc = 0x19F9F0u;
    // 0x19f9f0: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x19f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x19f9f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19F9F4u;
    {
        const bool branch_taken_0x19f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F4u;
        // 0x19f9f8: 0x30820100  andi        $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f4) {
            ctx->pc = 0x19FA20u;
            goto label_19fa20;
        }
    }
    ctx->pc = 0x19F9FCu;
    // 0x19f9fc: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x19f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x19fa00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19fa00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19fa04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fa08: 0x0  nop
    ctx->pc = 0x19fa08u;
    // NOP
    // 0x19fa0c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fa0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fa10: 0x0  nop
    ctx->pc = 0x19fa10u;
    // NOP
    // 0x19fa14: 0x450100c6  bc1t        . + 4 + (0xC6 << 2)
    ctx->pc = 0x19FA14u;
    {
        const bool branch_taken_0x19fa14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA14u;
        // 0x19fa18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa14) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FA1Cu;
label_19fa1c:
    // 0x19fa1c: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x19fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_19fa20:
    // 0x19fa20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FA20u;
    {
        const bool branch_taken_0x19fa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA20u;
        // 0x19fa24: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa20) {
            ctx->pc = 0x19FA64u;
            goto label_19fa64;
        }
    }
    ctx->pc = 0x19FA28u;
    // 0x19fa28: 0x92220111  lbu         $v0, 0x111($s1)
    ctx->pc = 0x19fa28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 273)));
    // 0x19fa2c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x19fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x19fa30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19FA30u;
    {
        const bool branch_taken_0x19fa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA30u;
        // 0x19fa34: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa30) {
            ctx->pc = 0x19FA60u;
            goto label_19fa60;
        }
    }
    ctx->pc = 0x19FA38u;
    // 0x19fa38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FA38u;
    {
        const bool branch_taken_0x19fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA38u;
        // 0x19fa3c: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa38) {
            ctx->pc = 0x19FA64u;
            goto label_19fa64;
        }
    }
    ctx->pc = 0x19FA40u;
    // 0x19fa40: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x19fa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x19fa44: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19fa44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19fa48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fa48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fa4c: 0x0  nop
    ctx->pc = 0x19fa4cu;
    // NOP
    // 0x19fa50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fa54: 0x0  nop
    ctx->pc = 0x19fa54u;
    // NOP
    // 0x19fa58: 0x450100b5  bc1t        . + 4 + (0xB5 << 2)
    ctx->pc = 0x19FA58u;
    {
        const bool branch_taken_0x19fa58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA58u;
        // 0x19fa5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa58) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FA60u;
label_19fa60:
    // 0x19fa60: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_19fa64:
    // 0x19fa64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19FA64u;
    {
        const bool branch_taken_0x19fa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA64u;
        // 0x19fa68: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa64) {
            ctx->pc = 0x19FAA4u;
            goto label_19faa4;
        }
    }
    ctx->pc = 0x19FA6Cu;
    // 0x19fa6c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x19fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x19fa70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19fa74: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FA74u;
    {
        const bool branch_taken_0x19fa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA74u;
        // 0x19fa78: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa74) {
            ctx->pc = 0x19FAA8u;
            goto label_19faa8;
        }
    }
    ctx->pc = 0x19FA7Cu;
    // 0x19fa7c: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x19fa80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FA80u;
    {
        const bool branch_taken_0x19fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA80u;
        // 0x19fa84: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa80) {
            ctx->pc = 0x19FAA8u;
            goto label_19faa8;
        }
    }
    ctx->pc = 0x19FA88u;
    // 0x19fa88: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x19fa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x19fa8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fa90: 0x0  nop
    ctx->pc = 0x19fa90u;
    // NOP
    // 0x19fa94: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fa94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fa98: 0x0  nop
    ctx->pc = 0x19fa98u;
    // NOP
    // 0x19fa9c: 0x450100a4  bc1t        . + 4 + (0xA4 << 2)
    ctx->pc = 0x19FA9Cu;
    {
        const bool branch_taken_0x19fa9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA9Cu;
        // 0x19faa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa9c) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FAA4u;
label_19faa4:
    // 0x19faa4: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x19faa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_19faa8:
    // 0x19faa8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x19FAA8u;
    {
        const bool branch_taken_0x19faa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19faa8) {
            ctx->pc = 0x19FAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FAA8u;
            // 0x19faac: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FAE8u;
            goto label_19fae8;
        }
    }
    ctx->pc = 0x19FAB0u;
    // 0x19fab0: 0x92220111  lbu         $v0, 0x111($s1)
    ctx->pc = 0x19fab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 273)));
    // 0x19fab4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x19fab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x19fab8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FAB8u;
    {
        const bool branch_taken_0x19fab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAB8u;
        // 0x19fabc: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fab8) {
            ctx->pc = 0x19FAE4u;
            goto label_19fae4;
        }
    }
    ctx->pc = 0x19FAC0u;
    // 0x19fac0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FAC0u;
    {
        const bool branch_taken_0x19fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fac0) {
            ctx->pc = 0x19FAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FAC0u;
            // 0x19fac4: 0x8e030088  lw          $v1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FAE8u;
            goto label_19fae8;
        }
    }
    ctx->pc = 0x19FAC8u;
    // 0x19fac8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x19fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x19facc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19faccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fad0: 0x0  nop
    ctx->pc = 0x19fad0u;
    // NOP
    // 0x19fad4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fad8: 0x0  nop
    ctx->pc = 0x19fad8u;
    // NOP
    // 0x19fadc: 0x45010094  bc1t        . + 4 + (0x94 << 2)
    ctx->pc = 0x19FADCu;
    {
        const bool branch_taken_0x19fadc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FADCu;
        // 0x19fae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fadc) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FAE4u;
label_19fae4:
    // 0x19fae4: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x19fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_19fae8:
    // 0x19fae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19faf0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FAF0u;
    {
        const bool branch_taken_0x19faf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAF0u;
        // 0x19faf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faf0) {
            ctx->pc = 0x19FB04u;
            goto label_19fb04;
        }
    }
    ctx->pc = 0x19FAF8u;
    // 0x19faf8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19fafc: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x19fafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x19fb00: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x19fb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_19fb04:
    // 0x19fb04: 0x54800011  bnel        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FB04u;
    {
        const bool branch_taken_0x19fb04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb04) {
            ctx->pc = 0x19FB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB04u;
            // 0x19fb08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB4Cu;
            goto label_19fb4c;
        }
    }
    ctx->pc = 0x19FB0Cu;
    // 0x19fb0c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19fb10: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB10u;
    {
        const bool branch_taken_0x19fb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB10u;
        // 0x19fb14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb10) {
            ctx->pc = 0x19FB24u;
            goto label_19fb24;
        }
    }
    ctx->pc = 0x19FB18u;
    // 0x19fb18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19fb1c: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x19fb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x19fb20: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x19fb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_19fb24:
    // 0x19fb24: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FB24u;
    {
        const bool branch_taken_0x19fb24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb24) {
            ctx->pc = 0x19FB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB24u;
            // 0x19fb28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB4Cu;
            goto label_19fb4c;
        }
    }
    ctx->pc = 0x19FB2Cu;
    // 0x19fb2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19fb30: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB30u;
    {
        const bool branch_taken_0x19fb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB30u;
        // 0x19fb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb30) {
            ctx->pc = 0x19FB44u;
            goto label_19fb44;
        }
    }
    ctx->pc = 0x19FB38u;
    // 0x19fb38: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19fb3c: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x19fb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x19fb40: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x19fb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_19fb44:
    // 0x19fb44: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19FB44u;
    {
        const bool branch_taken_0x19fb44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb44) {
            ctx->pc = 0x19FB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB44u;
            // 0x19fb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB4Cu;
            goto label_19fb4c;
        }
    }
    ctx->pc = 0x19FB4Cu;
label_19fb4c:
    // 0x19fb4c: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x19FB4Cu;
    {
        const bool branch_taken_0x19fb4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB4Cu;
        // 0x19fb50: 0x8e822b00  lw          $v0, 0x2B00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb4c) {
            ctx->pc = 0x19FB84u;
            goto label_19fb84;
        }
    }
    ctx->pc = 0x19FB54u;
    // 0x19fb54: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x19fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x19fb58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fb5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB5Cu;
    {
        const bool branch_taken_0x19fb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB5Cu;
        // 0x19fb60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb5c) {
            ctx->pc = 0x19FB78u;
            goto label_19fb78;
        }
    }
    ctx->pc = 0x19FB64u;
    // 0x19fb64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19fb68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FB68u;
    {
        const bool branch_taken_0x19fb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB68u;
        // 0x19fb6c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb68) {
            ctx->pc = 0x19FB78u;
            goto label_19fb78;
        }
    }
    ctx->pc = 0x19FB70u;
    // 0x19fb70: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19FB70u;
    {
        const bool branch_taken_0x19fb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19fb70) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FB78u;
label_19fb78:
    // 0x19fb78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fb7c:
    // 0x19fb7c: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x19FB7Cu;
    {
        const bool branch_taken_0x19fb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB7Cu;
        // 0x19fb80: 0x8e822b00  lw          $v0, 0x2B00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb7c) {
            ctx->pc = 0x19FD2Cu;
            goto label_19fd2c;
        }
    }
    ctx->pc = 0x19FB84u;
label_19fb84:
    // 0x19fb84: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB84u;
    {
        const bool branch_taken_0x19fb84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB84u;
        // 0x19fb88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb84) {
            ctx->pc = 0x19FBA0u;
            goto label_19fba0;
        }
    }
    ctx->pc = 0x19FB8Cu;
    // 0x19fb8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19fb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19fb90: 0x0  nop
    ctx->pc = 0x19fb90u;
    // NOP
    // 0x19fb94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19fb94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19fb98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FB98u;
    {
        const bool branch_taken_0x19fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb98) {
            ctx->pc = 0x19FBB8u;
            goto label_19fbb8;
        }
    }
    ctx->pc = 0x19FBA0u;
label_19fba0:
    // 0x19fba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19fba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19fba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19fba8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19fba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19fbac: 0x0  nop
    ctx->pc = 0x19fbacu;
    // NOP
    // 0x19fbb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19fbb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19fbb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19fbb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19fbb8:
    // 0x19fbb8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19fbbc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19fbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19fbc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fbc4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x19fbc8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x19fbcc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x19fbccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x19fbd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19fbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19fbd4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x19fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x19fbd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19fbd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19fbdc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x19fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19fbe0: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x19fbe4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19fbe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19fbe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19fbec: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x19fbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x19fbf0: 0x8c820ff4  lw          $v0, 0xFF4($a0)
    ctx->pc = 0x19fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x19fbf4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x19fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19fbf8: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x19fbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19fbfc: 0xc06030c  jal         func_180C30
    ctx->pc = 0x19FBFCu;
    SET_GPR_U32(ctx, 31, 0x19FC04u);
    ctx->pc = 0x19FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBFCu;
    // 0x19fc00: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C30u, 0x19FBFCu, 0x19FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC04u;
label_19fc04:
    // 0x19fc04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fc08: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x19FC08u;
    {
        const bool branch_taken_0x19fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC08u;
        // 0x19fc0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc08) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FC10u;
    // 0x19fc10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19fc14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc18: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19fc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19fc1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FC1Cu;
    {
        const bool branch_taken_0x19fc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC1Cu;
        // 0x19fc20: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc1c) {
            ctx->pc = 0x19FC60u;
            goto label_19fc60;
        }
    }
    ctx->pc = 0x19FC24u;
    // 0x19fc24: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x19fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x19fc28: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19fc2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19fc30: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FC30u;
    {
        const bool branch_taken_0x19fc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x30820100  andi        $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc30) {
            ctx->pc = 0x19FC64u;
            goto label_19fc64;
        }
    }
    ctx->pc = 0x19FC38u;
    // 0x19fc38: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x19fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x19fc3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FC3Cu;
    {
        const bool branch_taken_0x19fc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC3Cu;
        // 0x19fc40: 0x30820100  andi        $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc3c) {
            ctx->pc = 0x19FC64u;
            goto label_19fc64;
        }
    }
    ctx->pc = 0x19FC44u;
    // 0x19fc44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19fc48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fc4c: 0x0  nop
    ctx->pc = 0x19fc4cu;
    // NOP
    // 0x19fc50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fc54: 0x0  nop
    ctx->pc = 0x19fc54u;
    // NOP
    // 0x19fc58: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x19FC58u;
    {
        const bool branch_taken_0x19fc58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc58) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FC60u;
label_19fc60:
    // 0x19fc60: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x19fc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_19fc64:
    // 0x19fc64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19FC64u;
    {
        const bool branch_taken_0x19fc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC64u;
        // 0x19fc68: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc64) {
            ctx->pc = 0x19FCA4u;
            goto label_19fca4;
        }
    }
    ctx->pc = 0x19FC6Cu;
    // 0x19fc6c: 0x92220111  lbu         $v0, 0x111($s1)
    ctx->pc = 0x19fc6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 273)));
    // 0x19fc70: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x19fc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x19fc74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FC74u;
    {
        const bool branch_taken_0x19fc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC74u;
        // 0x19fc78: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc74) {
            ctx->pc = 0x19FCA0u;
            goto label_19fca0;
        }
    }
    ctx->pc = 0x19FC7Cu;
    // 0x19fc7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FC7Cu;
    {
        const bool branch_taken_0x19fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC7Cu;
        // 0x19fc80: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc7c) {
            ctx->pc = 0x19FCA4u;
            goto label_19fca4;
        }
    }
    ctx->pc = 0x19FC84u;
    // 0x19fc84: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19fc88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fc8c: 0x0  nop
    ctx->pc = 0x19fc8cu;
    // NOP
    // 0x19fc90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fc94: 0x0  nop
    ctx->pc = 0x19fc94u;
    // NOP
    // 0x19fc98: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x19FC98u;
    {
        const bool branch_taken_0x19fc98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC98u;
        // 0x19fc9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc98) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FCA0u;
label_19fca0:
    // 0x19fca0: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x19fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_19fca4:
    // 0x19fca4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FCA4u;
    {
        const bool branch_taken_0x19fca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCA4u;
        // 0x19fca8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fca4) {
            ctx->pc = 0x19FCE8u;
            goto label_19fce8;
        }
    }
    ctx->pc = 0x19FCACu;
    // 0x19fcac: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x19fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x19fcb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19fcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19fcb4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19FCB4u;
    {
        const bool branch_taken_0x19fcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB4u;
        // 0x19fcb8: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcb4) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FCBCu;
    // 0x19fcbc: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x19fcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x19fcc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FCC0u;
    {
        const bool branch_taken_0x19fcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC0u;
        // 0x19fcc4: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc0) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FCC8u;
    // 0x19fcc8: 0x3c01406c  lui         $at, 0x406C
    ctx->pc = 0x19fcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16492 << 16));
    // 0x19fccc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19fcccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19fcd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fcd4: 0x0  nop
    ctx->pc = 0x19fcd4u;
    // NOP
    // 0x19fcd8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fcd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fcdc: 0x0  nop
    ctx->pc = 0x19fcdcu;
    // NOP
    // 0x19fce0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x19FCE0u;
    {
        const bool branch_taken_0x19fce0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCE0u;
        // 0x19fce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fce0) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FCE8u;
label_19fce8:
    // 0x19fce8: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x19fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_19fcec:
    // 0x19fcec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCECu;
        // 0x19fcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FCF4u;
    // 0x19fcf4: 0x92220111  lbu         $v0, 0x111($s1)
    ctx->pc = 0x19fcf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 273)));
    // 0x19fcf8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x19fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x19fcfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19FCFCu;
    {
        const bool branch_taken_0x19fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCFCu;
        // 0x19fd00: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcfc) {
            ctx->pc = 0x19FD2Cu;
            goto label_19fd2c;
        }
    }
    ctx->pc = 0x19FD04u;
    // 0x19fd04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19FD04u;
    {
        const bool branch_taken_0x19fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD04u;
        // 0x19fd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd04) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FD0Cu;
    // 0x19fd0c: 0x3c01406c  lui         $at, 0x406C
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16492 << 16));
    // 0x19fd10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19fd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19fd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fd18: 0x0  nop
    ctx->pc = 0x19fd18u;
    // NOP
    // 0x19fd1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19fd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fd20: 0x0  nop
    ctx->pc = 0x19fd20u;
    // NOP
    // 0x19fd24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19FD24u;
    {
        const bool branch_taken_0x19fd24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD24u;
        // 0x19fd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd24) {
            ctx->pc = 0x19FD30u;
            goto label_19fd30;
        }
    }
    ctx->pc = 0x19FD2Cu;
label_19fd2c:
    // 0x19fd2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fd30:
    // 0x19fd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19fd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fd38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19fd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19fd3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fd40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fd44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19fd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19fd48: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x19fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19fd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD4Cu;
        // 0x19fd50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FD54u;
    // 0x19fd54: 0x0  nop
    ctx->pc = 0x19fd54u;
    // NOP
    ctx->pc = 0x19fd58u;
}
