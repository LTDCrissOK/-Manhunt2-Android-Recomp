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

// Function: sub_0031E3E8
// Address: 0x31e3e8 - 0x31e540
void sub_0031E3E8_0x31e3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E3E8_0x31e3e8");
#endif

    switch (ctx->pc) {
        case 0x31e434u: goto label_31e434;
        case 0x31e46cu: goto label_31e46c;
        default: break;
    }

    ctx->pc = 0x31e3e8u;

    // 0x31e3e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31e3ec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x31e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x31e3f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e3f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31e3f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31e400: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31e400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e404: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x31e408: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31e408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e40c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x31e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x31e410: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31e410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e414: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x31e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x31e418: 0x24555870  addiu       $s5, $v0, 0x5870
    ctx->pc = 0x31e418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x31e41c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x31e41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31e420: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x31e420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e428: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x31e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x31e42c: 0xc0c78d6  jal         func_31E358
    ctx->pc = 0x31E42Cu;
    SET_GPR_U32(ctx, 31, 0x31E434u);
    ctx->pc = 0x31E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E42Cu;
    // 0x31e430: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E358u, 0x31E42Cu, 0x31E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E434u;
label_31e434:
    // 0x31e434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e438: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E438u;
    {
        const bool branch_taken_0x31e438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E438u;
        // 0x31e43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e438) {
            ctx->pc = 0x31E448u;
            goto label_31e448;
        }
    }
    ctx->pc = 0x31E440u;
    // 0x31e440: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31E440u;
    {
        const bool branch_taken_0x31e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E440u;
        // 0x31e444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e440) {
            ctx->pc = 0x31E514u;
            goto label_31e514;
        }
    }
    ctx->pc = 0x31E448u;
label_31e448:
    // 0x31e448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e44c: 0x0  nop
    ctx->pc = 0x31e44cu;
    // NOP
    // 0x31e450: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x31e450u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e454: 0x0  nop
    ctx->pc = 0x31e454u;
    // NOP
    // 0x31e458: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x31E458u;
    {
        const bool branch_taken_0x31e458 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E458u;
        // 0x31e45c: 0xa2a2045c  sb          $v0, 0x45C($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e458) {
            ctx->pc = 0x31E47Cu;
            goto label_31e47c;
        }
    }
    ctx->pc = 0x31E460u;
    // 0x31e460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e464: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x31E464u;
    SET_GPR_U32(ctx, 31, 0x31E46Cu);
    ctx->pc = 0x31E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E464u;
    // 0x31e468: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x31E464u, 0x31E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E46Cu;
label_31e46c:
    // 0x31e46c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x31e46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x31e470: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x31e470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x31e474: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x31e474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x31e478: 0xae140034  sw          $s4, 0x34($s0)
    ctx->pc = 0x31e478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 20));
label_31e47c:
    // 0x31e47c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31e480: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x31e480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x31e484: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E484u;
    {
        const bool branch_taken_0x31e484 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E484u;
        // 0x31e488: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e484) {
            ctx->pc = 0x31E4A0u;
            goto label_31e4a0;
        }
    }
    ctx->pc = 0x31E48Cu;
    // 0x31e48c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31e48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e490: 0x0  nop
    ctx->pc = 0x31e490u;
    // NOP
    // 0x31e494: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31e494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31e498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31E498u;
    {
        const bool branch_taken_0x31e498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e498) {
            ctx->pc = 0x31E4B8u;
            goto label_31e4b8;
        }
    }
    ctx->pc = 0x31E4A0u;
label_31e4a0:
    // 0x31e4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31e4a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31e4a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31e4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e4ac: 0x0  nop
    ctx->pc = 0x31e4acu;
    // NOP
    // 0x31e4b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31e4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31e4b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31e4b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31e4b8:
    // 0x31e4b8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x31e4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x31e4bc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x31e4bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x31e4c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4c4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x31e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e4c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31e4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31e4cc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x31e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x31e4d0: 0xae160028  sw          $s6, 0x28($s0)
    ctx->pc = 0x31e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 22));
    // 0x31e4d4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x31e4d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31e4d8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x31e4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x31e4dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E4DCu;
    {
        const bool branch_taken_0x31e4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4DCu;
        // 0x31e4e0: 0xe6010040  swc1        $f1, 0x40($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4dc) {
            ctx->pc = 0x31E4FCu;
            goto label_31e4fc;
        }
    }
    ctx->pc = 0x31E4E4u;
    // 0x31e4e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e4ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31e4f0: 0xa043bdac  sb          $v1, -0x4254($v0)
    ctx->pc = 0x31e4f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBDACu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBDACu, _value); } while (0);
    // 0x31e4f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31E4F4u;
    {
        const bool branch_taken_0x31e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4F4u;
        // 0x31e4f8: 0xac90bdb0  sw          $s0, -0x4250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950320), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4f4) {
            ctx->pc = 0x31E510u;
            goto label_31e510;
        }
    }
    ctx->pc = 0x31E4FCu;
label_31e4fc:
    // 0x31e4fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e504: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31e504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31e508: 0xa043bdad  sb          $v1, -0x4253($v0)
    ctx->pc = 0x31e508u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBDADu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBDADu, _value); } while (0);
    // 0x31e50c: 0xac90bdb4  sw          $s0, -0x424C($a0)
    ctx->pc = 0x31e50cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FBDB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDB4u, _value); } while (0);
label_31e510:
    // 0x31e510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e514:
    // 0x31e514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e51c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31e51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31e520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31e524: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31e524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e528: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x31e528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e52c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x31e52cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e530: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31e534: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x31e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e538: 0x3e00008  jr          $ra
    ctx->pc = 0x31E538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E538u;
        // 0x31e53c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E540u;
}
