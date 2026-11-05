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

// Function: sub_0022F2F8
// Address: 0x22f2f8 - 0x22f658
void sub_0022F2F8_0x22f2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F2F8_0x22f2f8");
#endif

    switch (ctx->pc) {
        case 0x22f534u: goto label_22f534;
        default: break;
    }

    ctx->pc = 0x22f2f8u;

    // 0x22f2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f2fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f300: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x22f300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22f304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f30c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f310: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22f310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22f314: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x22f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x22f318: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x22F318u;
    {
        const bool branch_taken_0x22f318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F318u;
        // 0x22f31c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f318) {
            ctx->pc = 0x22F63Cu;
            goto label_22f63c;
        }
    }
    ctx->pc = 0x22F320u;
    // 0x22f320: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x22f324: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F324u;
    {
        const bool branch_taken_0x22f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F324u;
        // 0x22f328: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f324) {
            ctx->pc = 0x22F348u;
            goto label_22f348;
        }
    }
    ctx->pc = 0x22F32Cu;
    // 0x22f32c: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x22f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f334: 0x0  nop
    ctx->pc = 0x22f334u;
    // NOP
    // 0x22f338: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22f338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f33c: 0x0  nop
    ctx->pc = 0x22f33cu;
    // NOP
    // 0x22f340: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F34Cu;
            goto label_22f34c;
        }
    }
    ctx->pc = 0x22F348u;
label_22f348:
    // 0x22f348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f34c:
    // 0x22f34c: 0x546000bc  bnel        $v1, $zero, . + 4 + (0xBC << 2)
    ctx->pc = 0x22F34Cu;
    {
        const bool branch_taken_0x22f34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f34c) {
            ctx->pc = 0x22F350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F34Cu;
            // 0x22f350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F640u;
            goto label_22f640;
        }
    }
    ctx->pc = 0x22F354u;
    // 0x22f354: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22f358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22f358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f35c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x22f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x22f360: 0x54400098  bnel        $v0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x22F360u;
    {
        const bool branch_taken_0x22f360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f360) {
            ctx->pc = 0x22F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F360u;
            // 0x22f364: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5C4u;
            goto label_22f5c4;
        }
    }
    ctx->pc = 0x22F368u;
    // 0x22f368: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x22f36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f370: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22f374: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22F374u;
    {
        const bool branch_taken_0x22f374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F374u;
        // 0x22f378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f374) {
            ctx->pc = 0x22F3E4u;
            goto label_22f3e4;
        }
    }
    ctx->pc = 0x22F37Cu;
    // 0x22f37c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x22f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22f380: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x22f384: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x22f388: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f38c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F38Cu;
    {
        const bool branch_taken_0x22f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f38c) {
            ctx->pc = 0x22F390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F38Cu;
            // 0x22f390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F3A8u;
            goto label_22f3a8;
        }
    }
    ctx->pc = 0x22F394u;
    // 0x22f394: 0x2462ffed  addiu       $v0, $v1, -0x13
    ctx->pc = 0x22f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
    // 0x22f398: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22f398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22f39c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F39Cu;
    {
        const bool branch_taken_0x22f39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F39Cu;
        // 0x22f3a0: 0x3882020f  xori        $v0, $a0, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f39c) {
            ctx->pc = 0x22F3ACu;
            goto label_22f3ac;
        }
    }
    ctx->pc = 0x22F3A4u;
    // 0x22f3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f3a8:
    // 0x22f3a8: 0x3882020f  xori        $v0, $a0, 0x20F
    ctx->pc = 0x22f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
label_22f3ac:
    // 0x22f3ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F3ACu;
    {
        const bool branch_taken_0x22f3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3ACu;
        // 0x22f3b0: 0x30c24000  andi        $v0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3ac) {
            ctx->pc = 0x22F3E4u;
            goto label_22f3e4;
        }
    }
    ctx->pc = 0x22F3B4u;
    // 0x22f3b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F3B4u;
    {
        const bool branch_taken_0x22f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3b4) {
            ctx->pc = 0x22F3E4u;
            goto label_22f3e4;
        }
    }
    ctx->pc = 0x22F3BCu;
    // 0x22f3bc: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x22f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x22f3c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F3C0u;
    {
        const bool branch_taken_0x22f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3C0u;
        // 0x22f3c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3c0) {
            ctx->pc = 0x22F3DCu;
            goto label_22f3dc;
        }
    }
    ctx->pc = 0x22F3C8u;
    // 0x22f3c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x22f3cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f3d0: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x22f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x22f3d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22f3d8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x22f3d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_22f3dc:
    // 0x22f3dc: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22F3DCu;
    {
        const bool branch_taken_0x22f3dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3dc) {
            ctx->pc = 0x22F44Cu;
            goto label_22f44c;
        }
    }
    ctx->pc = 0x22F3E4u;
label_22f3e4:
    // 0x22f3e4: 0x54a00076  bnel        $a1, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x22F3E4u;
    {
        const bool branch_taken_0x22f3e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3e4) {
            ctx->pc = 0x22F3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F3E4u;
            // 0x22f3e8: 0xae0003a0  sw          $zero, 0x3A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F3ECu;
    // 0x22f3ec: 0xc60003a0  lwc1        $f0, 0x3A0($s0)
    ctx->pc = 0x22f3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f3f0: 0xc6020374  lwc1        $f2, 0x374($s0)
    ctx->pc = 0x22f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f3f4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x22f3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x22f3f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22f3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f3fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x22f3fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22f400: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x22f400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f404: 0x0  nop
    ctx->pc = 0x22f404u;
    // NOP
    // 0x22f408: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22F408u;
    {
        const bool branch_taken_0x22f408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F408u;
        // 0x22f40c: 0xe6020374  swc1        $f2, 0x374($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f408) {
            ctx->pc = 0x22F420u;
            goto label_22f420;
        }
    }
    ctx->pc = 0x22F410u;
    // 0x22f410: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f418: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F418u;
    {
        const bool branch_taken_0x22f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F418u;
        // 0x22f41c: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f418) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F420u;
label_22f420:
    // 0x22f420: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f428: 0x0  nop
    ctx->pc = 0x22f428u;
    // NOP
    // 0x22f42c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22f42cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f430: 0x0  nop
    ctx->pc = 0x22f430u;
    // NOP
    // 0x22f434: 0x45020062  bc1fl       . + 4 + (0x62 << 2)
    ctx->pc = 0x22F434u;
    {
        const bool branch_taken_0x22f434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f434) {
            ctx->pc = 0x22F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F434u;
            // 0x22f438: 0xae0003a0  sw          $zero, 0x3A0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F43Cu;
    // 0x22f43c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x22f43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_22f440:
    // 0x22f440: 0xe6000374  swc1        $f0, 0x374($s0)
    ctx->pc = 0x22f440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
    // 0x22f444: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x22F444u;
    {
        const bool branch_taken_0x22f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F444u;
        // 0x22f448: 0xae0003a0  sw          $zero, 0x3A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f444) {
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F44Cu;
label_22f44c:
    // 0x22f44c: 0x54a0005d  bnel        $a1, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x22F44Cu;
    {
        const bool branch_taken_0x22f44c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f44c) {
            ctx->pc = 0x22F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F44Cu;
            // 0x22f450: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5C4u;
            goto label_22f5c4;
        }
    }
    ctx->pc = 0x22F454u;
    // 0x22f454: 0xc60003a0  lwc1        $f0, 0x3A0($s0)
    ctx->pc = 0x22f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f458: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22f458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x22f45c: 0xc44196bc  lwc1        $f1, -0x6944($v0)
    ctx->pc = 0x22f45cu;
    { uint32_t bits = FAST_READ32(0x3F96BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f460: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22f460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22f464: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22f464u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22f468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f46c: 0x0  nop
    ctx->pc = 0x22f46cu;
    // NOP
    // 0x22f470: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x22F470u;
    {
        const bool branch_taken_0x22f470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f470) {
            ctx->pc = 0x22F474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F470u;
            // 0x22f474: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F50Cu;
            goto label_22f50c;
        }
    }
    ctx->pc = 0x22F478u;
    // 0x22f478: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22f478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22f480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f484: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x22f484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f488: 0x0  nop
    ctx->pc = 0x22f488u;
    // NOP
    // 0x22f48c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22F48Cu;
    {
        const bool branch_taken_0x22f48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F48Cu;
        // 0x22f490: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f48c) {
            ctx->pc = 0x22F49Cu;
            goto label_22f49c;
        }
    }
    ctx->pc = 0x22F494u;
    // 0x22f494: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22f494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x22f498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f49c:
    // 0x22f49c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x22f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x22f4a0: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x22f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x22f4a4: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F4A4u;
    {
        const bool branch_taken_0x22f4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22f4a4) {
            ctx->pc = 0x22F4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F4A4u;
            // 0x22f4a8: 0xc6000374  lwc1        $f0, 0x374($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F4B8u;
            goto label_22f4b8;
        }
    }
    ctx->pc = 0x22F4ACu;
    // 0x22f4ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22f4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f4b0: 0xe60003a0  swc1        $f0, 0x3A0($s0)
    ctx->pc = 0x22f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x22f4b4: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x22f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22f4b8:
    // 0x22f4b8: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x22f4b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22f4bc: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x22f4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f4c0: 0x0  nop
    ctx->pc = 0x22f4c0u;
    // NOP
    // 0x22f4c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22F4C4u;
    {
        const bool branch_taken_0x22f4c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4C4u;
        // 0x22f4c8: 0xe60c0374  swc1        $f12, 0x374($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4c4) {
            ctx->pc = 0x22F4E4u;
            goto label_22f4e4;
        }
    }
    ctx->pc = 0x22F4CCu;
    // 0x22f4cc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f4d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4d4: 0x0  nop
    ctx->pc = 0x22f4d4u;
    // NOP
    // 0x22f4d8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x22f4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x22f4dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x22F4DCu;
    {
        const bool branch_taken_0x22f4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4DCu;
        // 0x22f4e0: 0xe6000374  swc1        $f0, 0x374($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4dc) {
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F4E4u;
label_22f4e4:
    // 0x22f4e4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4ec: 0x0  nop
    ctx->pc = 0x22f4ecu;
    // NOP
    // 0x22f4f0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x22f4f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f4f4: 0x0  nop
    ctx->pc = 0x22f4f4u;
    // NOP
    // 0x22f4f8: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x22F4F8u;
    {
        const bool branch_taken_0x22f4f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f4f8) {
            ctx->pc = 0x22F4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F4F8u;
            // 0x22f4fc: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5C4u;
            goto label_22f5c4;
        }
    }
    ctx->pc = 0x22F500u;
    // 0x22f500: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x22f500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x22f504: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x22F504u;
    {
        const bool branch_taken_0x22f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F504u;
        // 0x22f508: 0xe6000374  swc1        $f0, 0x374($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f504) {
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F50Cu;
label_22f50c:
    // 0x22f50c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f510: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22f514: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f518: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F518u;
    {
        const bool branch_taken_0x22f518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F518u;
        // 0x22f51c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f518) {
            ctx->pc = 0x22F554u;
            goto label_22f554;
        }
    }
    ctx->pc = 0x22F520u;
    // 0x22f520: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22f524: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F524u;
    {
        const bool branch_taken_0x22f524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f524) {
            ctx->pc = 0x22F528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F524u;
            // 0x22f528: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F558u;
            goto label_22f558;
        }
    }
    ctx->pc = 0x22F52Cu;
    // 0x22f52c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22F52Cu;
    SET_GPR_U32(ctx, 31, 0x22F534u);
    ctx->pc = 0x22F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F52Cu;
    // 0x22f530: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22F52Cu, 0x22F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F534u;
label_22f534:
    // 0x22f534: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F534u;
    {
        const bool branch_taken_0x22f534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f534) {
            ctx->pc = 0x22F538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F534u;
            // 0x22f538: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F558u;
            goto label_22f558;
        }
    }
    ctx->pc = 0x22F53Cu;
    // 0x22f53c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f540: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22f544: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F544u;
    {
        const bool branch_taken_0x22f544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F544u;
        // 0x22f548: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f544) {
            ctx->pc = 0x22F554u;
            goto label_22f554;
        }
    }
    ctx->pc = 0x22F54Cu;
    // 0x22f54c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F54Cu;
    {
        const bool branch_taken_0x22f54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f54c) {
            ctx->pc = 0x22F558u;
            goto label_22f558;
        }
    }
    ctx->pc = 0x22F554u;
label_22f554:
    // 0x22f554: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22f554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f558:
    // 0x22f558: 0x52400017  beql        $s2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x22F558u;
    {
        const bool branch_taken_0x22f558 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f558) {
            ctx->pc = 0x22F55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F558u;
            // 0x22f55c: 0xc60003a0  lwc1        $f0, 0x3A0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5B8u;
            goto label_22f5b8;
        }
    }
    ctx->pc = 0x22F560u;
    // 0x22f560: 0xc6000524  lwc1        $f0, 0x524($s0)
    ctx->pc = 0x22f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f564: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22f564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x22f568: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22f568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22f56c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f570: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22f570u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22f574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f578: 0x0  nop
    ctx->pc = 0x22f578u;
    // NOP
    // 0x22f57c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x22F57Cu;
    {
        const bool branch_taken_0x22f57c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f57c) {
            ctx->pc = 0x22F580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F57Cu;
            // 0x22f580: 0xc6000374  lwc1        $f0, 0x374($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5ACu;
            goto label_22f5ac;
        }
    }
    ctx->pc = 0x22F584u;
    // 0x22f584: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22f584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22f588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f58c: 0xc60203a0  lwc1        $f2, 0x3A0($s0)
    ctx->pc = 0x22f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f590: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22f590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x22f594: 0xc6010374  lwc1        $f1, 0x374($s0)
    ctx->pc = 0x22f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f598: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x22f598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22f59c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22f59cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f5a0: 0xe60203a0  swc1        $f2, 0x3A0($s0)
    ctx->pc = 0x22f5a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
    // 0x22f5a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22F5A4u;
    {
        const bool branch_taken_0x22f5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A4u;
        // 0x22f5a8: 0xe6010374  swc1        $f1, 0x374($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a4) {
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F5ACu;
label_22f5ac:
    // 0x22f5ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22f5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22f5b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22F5B0u;
    {
        const bool branch_taken_0x22f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5B0u;
        // 0x22f5b4: 0xe6000374  swc1        $f0, 0x374($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5b0) {
            ctx->pc = 0x22F5C0u;
            goto label_22f5c0;
        }
    }
    ctx->pc = 0x22F5B8u;
label_22f5b8:
    // 0x22f5b8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x22f5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22f5bc: 0xe60003a0  swc1        $f0, 0x3A0($s0)
    ctx->pc = 0x22f5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
label_22f5c0:
    // 0x22f5c0: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22f5c4:
    // 0x22f5c4: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22f5c8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22f5cc: 0x5464001c  bnel        $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F5CCu;
    {
        const bool branch_taken_0x22f5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f5cc) {
            ctx->pc = 0x22F5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F5CCu;
            // 0x22f5d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F640u;
            goto label_22f640;
        }
    }
    ctx->pc = 0x22F5D4u;
    // 0x22f5d4: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x22f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f5d8: 0xc6010400  lwc1        $f1, 0x400($s0)
    ctx->pc = 0x22f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f5dc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x22f5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x22f5e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22f5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f5e4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x22f5e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f5e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x22f5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f5ec: 0x0  nop
    ctx->pc = 0x22f5ecu;
    // NOP
    // 0x22f5f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22F5F0u;
    {
        const bool branch_taken_0x22f5f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5F0u;
        // 0x22f5f4: 0xe6010404  swc1        $f1, 0x404($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5f0) {
            ctx->pc = 0x22F608u;
            goto label_22f608;
        }
    }
    ctx->pc = 0x22F5F8u;
    // 0x22f5f8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f5fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f600: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22F600u;
    {
        const bool branch_taken_0x22f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F600u;
        // 0x22f604: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f600) {
            ctx->pc = 0x22F634u;
            goto label_22f634;
        }
    }
    ctx->pc = 0x22F608u;
label_22f608:
    // 0x22f608: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x22f608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x22f60c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f610: 0x0  nop
    ctx->pc = 0x22f610u;
    // NOP
    // 0x22f614: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f618: 0x0  nop
    ctx->pc = 0x22f618u;
    // NOP
    // 0x22f61c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x22F61Cu;
    {
        const bool branch_taken_0x22f61c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f61c) {
            ctx->pc = 0x22F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F61Cu;
            // 0x22f620: 0xae000408  sw          $zero, 0x408($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F63Cu;
            goto label_22f63c;
        }
    }
    ctx->pc = 0x22F624u;
    // 0x22f624: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f62c: 0x0  nop
    ctx->pc = 0x22f62cu;
    // NOP
    // 0x22f630: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22f634:
    // 0x22f634: 0xe6000404  swc1        $f0, 0x404($s0)
    ctx->pc = 0x22f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1028), bits); }
    // 0x22f638: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x22f638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
label_22f63c:
    // 0x22f63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f640:
    // 0x22f640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f648: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f64c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x22f64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f650: 0x3e00008  jr          $ra
    ctx->pc = 0x22F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F658u;
}
