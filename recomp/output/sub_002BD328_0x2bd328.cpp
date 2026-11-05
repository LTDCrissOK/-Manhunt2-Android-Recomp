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

// Function: sub_002BD328
// Address: 0x2bd328 - 0x2bdc98
void sub_002BD328_0x2bd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD328_0x2bd328");
#endif

    switch (ctx->pc) {
        case 0x2bd38cu: goto label_2bd38c;
        case 0x2bd3a0u: goto label_2bd3a0;
        case 0x2bd4b4u: goto label_2bd4b4;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd554u: goto label_2bd554;
        case 0x2bd5bcu: goto label_2bd5bc;
        case 0x2bd624u: goto label_2bd624;
        case 0x2bd6c4u: goto label_2bd6c4;
        case 0x2bd758u: goto label_2bd758;
        case 0x2bd7c8u: goto label_2bd7c8;
        case 0x2bd838u: goto label_2bd838;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd9b8u: goto label_2bd9b8;
        case 0x2bda40u: goto label_2bda40;
        case 0x2bda48u: goto label_2bda48;
        case 0x2bda50u: goto label_2bda50;
        case 0x2bda5cu: goto label_2bda5c;
        case 0x2bda6cu: goto label_2bda6c;
        case 0x2bda78u: goto label_2bda78;
        case 0x2bda84u: goto label_2bda84;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bda9cu: goto label_2bda9c;
        case 0x2bdb40u: goto label_2bdb40;
        case 0x2bdb48u: goto label_2bdb48;
        case 0x2bdbe8u: goto label_2bdbe8;
        case 0x2bdbf4u: goto label_2bdbf4;
        case 0x2bdc08u: goto label_2bdc08;
        case 0x2bdc54u: goto label_2bdc54;
        default: break;
    }

    ctx->pc = 0x2bd328u;

    // 0x2bd328: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bd328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bd32c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2bd32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2bd330: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2bd330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2bd334: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bd334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd338: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bd338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bd33c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bd33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd340: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2bd340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2bd344: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bd344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bd348: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2bd348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2bd34c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bd34cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd350: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2bd350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2bd354: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2bd354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd358: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x2bd358u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bd35c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2bd35cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd360: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2bd360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2bd364: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2bd364u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd368: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2bd368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2bd36c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2bd36cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd370: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x2bd370u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2bd374: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x2bd374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x2bd378: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2bd378u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bd37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bd37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd380: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2bd380u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2bd384: 0xc0b0ba0  jal         func_2C2E80
    ctx->pc = 0x2BD384u;
    SET_GPR_U32(ctx, 31, 0x2BD38Cu);
    ctx->pc = 0x2BD388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD384u;
    // 0x2bd388: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E80u, 0x2BD384u, 0x2BD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD38Cu;
label_2bd38c:
    // 0x2bd38c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd390: 0x12200231  beqz        $s1, . + 4 + (0x231 << 2)
    ctx->pc = 0x2BD390u;
    {
        const bool branch_taken_0x2bd390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD390u;
        // 0x2bd394: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd390) {
            ctx->pc = 0x2BDC58u;
            goto label_2bdc58;
        }
    }
    ctx->pc = 0x2BD398u;
    // 0x2bd398: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD398u;
    SET_GPR_U32(ctx, 31, 0x2BD3A0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD398u, 0x2BD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3A0u;
label_2bd3a0:
    // 0x2bd3a0: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd3a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd3a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd3a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD3A8u;
    {
        const bool branch_taken_0x2bd3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3a8) {
            ctx->pc = 0x2BD3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD3A8u;
            // 0x2bd3ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD3B0u;
            goto label_2bd3b0;
        }
    }
    ctx->pc = 0x2BD3B0u;
label_2bd3b0:
    // 0x2bd3b0: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd3b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd3b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD3B4u;
    {
        const bool branch_taken_0x2bd3b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3B4u;
        // 0x2bd3b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3b4) {
            ctx->pc = 0x2BD3D0u;
            goto label_2bd3d0;
        }
    }
    ctx->pc = 0x2BD3BCu;
    // 0x2bd3bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd3c0: 0x0  nop
    ctx->pc = 0x2bd3c0u;
    // NOP
    // 0x2bd3c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bd3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bd3c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD3C8u;
    {
        const bool branch_taken_0x2bd3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3c8) {
            ctx->pc = 0x2BD3E8u;
            goto label_2bd3e8;
        }
    }
    ctx->pc = 0x2BD3D0u;
label_2bd3d0:
    // 0x2bd3d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd3d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd3d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd3dc: 0x0  nop
    ctx->pc = 0x2bd3dcu;
    // NOP
    // 0x2bd3e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bd3e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bd3e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2bd3e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2bd3e8:
    // 0x2bd3e8: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bd3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bd3ec: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd3ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd3f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd3f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bd3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd3fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bd3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd400: 0xc644005c  lwc1        $f4, 0x5C($s2)
    ctx->pc = 0x2bd400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd404: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x2bd404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd408: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2bd408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd40c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bd40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bd410: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2bd410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x2bd414: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2bd414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2bd418: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bd418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd41c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2bd41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bd420: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bd420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd424: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bd424u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bd428: 0xe6220040  swc1        $f2, 0x40($s1)
    ctx->pc = 0x2bd428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2bd42c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2bd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bd430: 0xae34003c  sw          $s4, 0x3C($s1)
    ctx->pc = 0x2bd430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 20));
    // 0x2bd434: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2bd434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2bd438: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bd438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd43c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd440: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd444: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd448: 0xa2220034  sb          $v0, 0x34($s1)
    ctx->pc = 0x2bd448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd44c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2bd44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd450: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd454: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd458: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd45c: 0xa2220035  sb          $v0, 0x35($s1)
    ctx->pc = 0x2bd45cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd460: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2bd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd464: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd468: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd46c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd470: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x2bd470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd474: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2bd474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd478: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd47c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd480: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd484: 0xa2220037  sb          $v0, 0x37($s1)
    ctx->pc = 0x2bd484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd488: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2bd488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd48c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd490: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd494: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd498: 0xa2220038  sb          $v0, 0x38($s1)
    ctx->pc = 0x2bd498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd49c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2bd49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd4a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bd4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bd4a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd4a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd4a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd4ac: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD4ACu;
    SET_GPR_U32(ctx, 31, 0x2BD4B4u);
    ctx->pc = 0x2BD4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4ACu;
    // 0x2bd4b0: 0xa2220039  sb          $v0, 0x39($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD4ACu, 0x2BD4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4B4u;
label_2bd4b4:
    // 0x2bd4b4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd4b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd4b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd4bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD4BCu;
    {
        const bool branch_taken_0x2bd4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd4bc) {
            ctx->pc = 0x2BD4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD4BCu;
            // 0x2bd4c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD4C4u;
            goto label_2bd4c4;
        }
    }
    ctx->pc = 0x2BD4C4u;
label_2bd4c4:
    // 0x2bd4c4: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd4c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd4c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD4C8u;
    {
        const bool branch_taken_0x2bd4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4C8u;
        // 0x2bd4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4c8) {
            ctx->pc = 0x2BD4E4u;
            goto label_2bd4e4;
        }
    }
    ctx->pc = 0x2BD4D0u;
    // 0x2bd4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd4d4: 0x0  nop
    ctx->pc = 0x2bd4d4u;
    // NOP
    // 0x2bd4d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bd4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bd4dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD4DCu;
    {
        const bool branch_taken_0x2bd4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd4dc) {
            ctx->pc = 0x2BD4FCu;
            goto label_2bd4fc;
        }
    }
    ctx->pc = 0x2BD4E4u;
label_2bd4e4:
    // 0x2bd4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd4e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd4f0: 0x0  nop
    ctx->pc = 0x2bd4f0u;
    // NOP
    // 0x2bd4f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bd4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bd4f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2bd4f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2bd4fc:
    // 0x2bd4fc: 0x3c013cd0  lui         $at, 0x3CD0
    ctx->pc = 0x2bd4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15568 << 16));
    // 0x2bd500: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x2bd500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
    // 0x2bd504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd508: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2bd508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2bd50c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bd50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd510: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd514: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd518: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD518u;
    {
        const bool branch_taken_0x2bd518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD518u;
        // 0x2bd51c: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd518) {
            ctx->pc = 0x2BD528u;
            goto label_2bd528;
        }
    }
    ctx->pc = 0x2BD520u;
    // 0x2bd520: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BD520u;
    SET_GPR_U32(ctx, 31, 0x2BD528u);
    ctx->pc = 0x2BD524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD520u;
    // 0x2bd524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BD520u, 0x2BD528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD528u;
label_2bd528:
    // 0x2bd528: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2bd528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd52c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2bd52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2bd530: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2bd530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2bd534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd538: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bd538u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bd53c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bd53cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd540: 0x0  nop
    ctx->pc = 0x2bd540u;
    // NOP
    // 0x2bd544: 0x45000082  bc1f        . + 4 + (0x82 << 2)
    ctx->pc = 0x2BD544u;
    {
        const bool branch_taken_0x2bd544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd544) {
            ctx->pc = 0x2BD750u;
            goto label_2bd750;
        }
    }
    ctx->pc = 0x2BD54Cu;
    // 0x2bd54c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD54Cu;
    SET_GPR_U32(ctx, 31, 0x2BD554u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD54Cu, 0x2BD554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD554u;
label_2bd554:
    // 0x2bd554: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd558: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd558u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd55c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD55Cu;
    {
        const bool branch_taken_0x2bd55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd55c) {
            ctx->pc = 0x2BD560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD55Cu;
            // 0x2bd560: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD564u;
            goto label_2bd564;
        }
    }
    ctx->pc = 0x2BD564u;
label_2bd564:
    // 0x2bd564: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd564u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd568: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD568u;
    {
        const bool branch_taken_0x2bd568 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD568u;
        // 0x2bd56c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd568) {
            ctx->pc = 0x2BD584u;
            goto label_2bd584;
        }
    }
    ctx->pc = 0x2BD570u;
    // 0x2bd570: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2bd570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bd574: 0x0  nop
    ctx->pc = 0x2bd574u;
    // NOP
    // 0x2bd578: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2bd578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2bd57c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD57Cu;
    {
        const bool branch_taken_0x2bd57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd57c) {
            ctx->pc = 0x2BD59Cu;
            goto label_2bd59c;
        }
    }
    ctx->pc = 0x2BD584u;
label_2bd584:
    // 0x2bd584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd58c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2bd58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bd590: 0x0  nop
    ctx->pc = 0x2bd590u;
    // NOP
    // 0x2bd594: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2bd594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2bd598: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2bd598u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_2bd59c:
    // 0x2bd59c: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bd59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bd5a0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd5a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd5a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd5ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd5b0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2bd5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bd5b4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD5B4u;
    SET_GPR_U32(ctx, 31, 0x2BD5BCu);
    ctx->pc = 0x2BD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD5B4u;
    // 0x2bd5b8: 0x46010581  sub.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD5B4u, 0x2BD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD5BCu;
label_2bd5bc:
    // 0x2bd5bc: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd5c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd5c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd5c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD5C4u;
    {
        const bool branch_taken_0x2bd5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5c4) {
            ctx->pc = 0x2BD5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5C4u;
            // 0x2bd5c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5CCu;
            goto label_2bd5cc;
        }
    }
    ctx->pc = 0x2BD5CCu;
label_2bd5cc:
    // 0x2bd5cc: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd5ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd5d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD5D0u;
    {
        const bool branch_taken_0x2bd5d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5D0u;
        // 0x2bd5d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5d0) {
            ctx->pc = 0x2BD5ECu;
            goto label_2bd5ec;
        }
    }
    ctx->pc = 0x2BD5D8u;
    // 0x2bd5d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd5dc: 0x0  nop
    ctx->pc = 0x2bd5dcu;
    // NOP
    // 0x2bd5e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd5e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD5E4u;
    {
        const bool branch_taken_0x2bd5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5e4) {
            ctx->pc = 0x2BD604u;
            goto label_2bd604;
        }
    }
    ctx->pc = 0x2BD5ECu;
label_2bd5ec:
    // 0x2bd5ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd5f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd5f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd5f8: 0x0  nop
    ctx->pc = 0x2bd5f8u;
    // NOP
    // 0x2bd5fc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd600: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd600u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd604:
    // 0x2bd604: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bd604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bd608: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd60c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd618: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bd618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bd61c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD61Cu;
    SET_GPR_U32(ctx, 31, 0x2BD624u);
    ctx->pc = 0x2BD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD61Cu;
    // 0x2bd620: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD61Cu, 0x2BD624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD624u;
label_2bd624:
    // 0x2bd624: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd628: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd628u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd62c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD62Cu;
    {
        const bool branch_taken_0x2bd62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd62c) {
            ctx->pc = 0x2BD630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD62Cu;
            // 0x2bd630: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD634u;
            goto label_2bd634;
        }
    }
    ctx->pc = 0x2BD634u;
label_2bd634:
    // 0x2bd634: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd634u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd638: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD638u;
    {
        const bool branch_taken_0x2bd638 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD638u;
        // 0x2bd63c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd638) {
            ctx->pc = 0x2BD654u;
            goto label_2bd654;
        }
    }
    ctx->pc = 0x2BD640u;
    // 0x2bd640: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd644: 0x0  nop
    ctx->pc = 0x2bd644u;
    // NOP
    // 0x2bd648: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bd648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bd64c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD64Cu;
    {
        const bool branch_taken_0x2bd64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd64c) {
            ctx->pc = 0x2BD66Cu;
            goto label_2bd66c;
        }
    }
    ctx->pc = 0x2BD654u;
label_2bd654:
    // 0x2bd654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd658: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd65c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd660: 0x0  nop
    ctx->pc = 0x2bd660u;
    // NOP
    // 0x2bd664: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bd664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bd668: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bd668u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bd66c:
    // 0x2bd66c: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bd66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bd670: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd678: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2bd678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd67c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bd67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd680: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bd680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bd684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd688: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2bd688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2bd68c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2bd68cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd690: 0x0  nop
    ctx->pc = 0x2bd690u;
    // NOP
    // 0x2bd694: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD694u;
    {
        const bool branch_taken_0x2bd694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD694u;
        // 0x2bd698: 0x46170501  sub.s       $f20, $f0, $f23 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd694) {
            ctx->pc = 0x2BD6BCu;
            goto label_2bd6bc;
        }
    }
    ctx->pc = 0x2BD69Cu;
    // 0x2bd69c: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2bd69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2bd6a0: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2bd6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2bd6a4: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2bd6a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2bd6a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd6ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bd6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bd6b0: 0x4600b816  rsqrt.s     $f0, $f23, $f0
    ctx->pc = 0x2bd6b0u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[23], ctx->f[0]);
    // 0x2bd6b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BD6B4u;
    {
        const bool branch_taken_0x2bd6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B4u;
        // 0x2bd6b8: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6b4) {
            ctx->pc = 0x2BD740u;
            goto label_2bd740;
        }
    }
    ctx->pc = 0x2BD6BCu;
label_2bd6bc:
    // 0x2bd6bc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD6BCu;
    SET_GPR_U32(ctx, 31, 0x2BD6C4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD6BCu, 0x2BD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6C4u;
label_2bd6c4:
    // 0x2bd6c4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd6c8: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2bd6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2bd6cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd6ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd6d0: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2bd6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2bd6d4: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x2bd6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2bd6d8: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2bd6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2bd6dc: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd6e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bd6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd6e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD6E4u;
    {
        const bool branch_taken_0x2bd6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6e4) {
            ctx->pc = 0x2BD6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD6E4u;
            // 0x2bd6e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD6ECu;
            goto label_2bd6ec;
        }
    }
    ctx->pc = 0x2BD6ECu;
label_2bd6ec:
    // 0x2bd6ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd6f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bd6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bd6f4: 0x4600b816  rsqrt.s     $f0, $f23, $f0
    ctx->pc = 0x2bd6f4u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[23], ctx->f[0]);
    // 0x2bd6f8: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd6f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd6fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD6FCu;
    {
        const bool branch_taken_0x2bd6fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6FCu;
        // 0x2bd700: 0x46030042  mul.s       $f1, $f0, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6fc) {
            ctx->pc = 0x2BD718u;
            goto label_2bd718;
        }
    }
    ctx->pc = 0x2BD704u;
    // 0x2bd704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd708: 0x0  nop
    ctx->pc = 0x2bd708u;
    // NOP
    // 0x2bd70c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd710: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD710u;
    {
        const bool branch_taken_0x2bd710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD710u;
        // 0x2bd714: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd710) {
            ctx->pc = 0x2BD738u;
            goto label_2bd738;
        }
    }
    ctx->pc = 0x2BD718u;
label_2bd718:
    // 0x2bd718: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2bd718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2bd71c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd720: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd728: 0x0  nop
    ctx->pc = 0x2bd728u;
    // NOP
    // 0x2bd72c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd730: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bd730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bd734: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2bd738:
    // 0x2bd738: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2bd738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd73c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bd73cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2bd740:
    // 0x2bd740: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2bd740u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2bd744: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2bd744u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2bd748: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2BD748u;
    {
        const bool branch_taken_0x2bd748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD748u;
        // 0x2bd74c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd748) {
            ctx->pc = 0x2BD8A4u;
            goto label_2bd8a4;
        }
    }
    ctx->pc = 0x2BD750u;
label_2bd750:
    // 0x2bd750: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD750u;
    SET_GPR_U32(ctx, 31, 0x2BD758u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD750u, 0x2BD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD758u;
label_2bd758:
    // 0x2bd758: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd75c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd75cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd760: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD760u;
    {
        const bool branch_taken_0x2bd760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd760) {
            ctx->pc = 0x2BD764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD760u;
            // 0x2bd764: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD768u;
            goto label_2bd768;
        }
    }
    ctx->pc = 0x2BD768u;
label_2bd768:
    // 0x2bd768: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd768u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd76c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD76Cu;
    {
        const bool branch_taken_0x2bd76c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD76Cu;
        // 0x2bd770: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd76c) {
            ctx->pc = 0x2BD788u;
            goto label_2bd788;
        }
    }
    ctx->pc = 0x2BD774u;
    // 0x2bd774: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2bd774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bd778: 0x0  nop
    ctx->pc = 0x2bd778u;
    // NOP
    // 0x2bd77c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2bd77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2bd780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD780u;
    {
        const bool branch_taken_0x2bd780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD780u;
        // 0x2bd784: 0xc6420010  lwc1        $f2, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd780) {
            ctx->pc = 0x2BD7A4u;
            goto label_2bd7a4;
        }
    }
    ctx->pc = 0x2BD788u;
label_2bd788:
    // 0x2bd788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd78c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd790: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2bd790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bd794: 0x0  nop
    ctx->pc = 0x2bd794u;
    // NOP
    // 0x2bd798: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2bd798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2bd79c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2bd79cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2bd7a0: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x2bd7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bd7a4:
    // 0x2bd7a4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2bd7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd7a8: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2bd7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2bd7ac: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd7b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd7b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bd7b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bd7b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bd7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bd7bc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2bd7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2bd7c0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD7C0u;
    SET_GPR_U32(ctx, 31, 0x2BD7C8u);
    ctx->pc = 0x2BD7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7C0u;
    // 0x2bd7c4: 0x46001580  add.s       $f22, $f2, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD7C0u, 0x2BD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7C8u;
label_2bd7c8:
    // 0x2bd7c8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd7cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd7ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd7d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD7D0u;
    {
        const bool branch_taken_0x2bd7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd7d0) {
            ctx->pc = 0x2BD7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7D0u;
            // 0x2bd7d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7D8u;
            goto label_2bd7d8;
        }
    }
    ctx->pc = 0x2BD7D8u;
label_2bd7d8:
    // 0x2bd7d8: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd7d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd7dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD7DCu;
    {
        const bool branch_taken_0x2bd7dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7DCu;
        // 0x2bd7e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7dc) {
            ctx->pc = 0x2BD7F8u;
            goto label_2bd7f8;
        }
    }
    ctx->pc = 0x2BD7E4u;
    // 0x2bd7e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd7e8: 0x0  nop
    ctx->pc = 0x2bd7e8u;
    // NOP
    // 0x2bd7ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd7f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD7F0u;
    {
        const bool branch_taken_0x2bd7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7F0u;
        // 0x2bd7f4: 0xc6420014  lwc1        $f2, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7f0) {
            ctx->pc = 0x2BD814u;
            goto label_2bd814;
        }
    }
    ctx->pc = 0x2BD7F8u;
label_2bd7f8:
    // 0x2bd7f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd800: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd804: 0x0  nop
    ctx->pc = 0x2bd804u;
    // NOP
    // 0x2bd808: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd80c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd80cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2bd810: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x2bd810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bd814:
    // 0x2bd814: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x2bd814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd818: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2bd818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2bd81c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd81cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bd820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd824: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bd824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bd828: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bd828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bd82c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bd82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bd830: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD830u;
    SET_GPR_U32(ctx, 31, 0x2BD838u);
    ctx->pc = 0x2BD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD830u;
    // 0x2bd834: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD830u, 0x2BD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD838u;
label_2bd838:
    // 0x2bd838: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd83c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd83cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd840: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD840u;
    {
        const bool branch_taken_0x2bd840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd840) {
            ctx->pc = 0x2BD844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD840u;
            // 0x2bd844: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD848u;
            goto label_2bd848;
        }
    }
    ctx->pc = 0x2BD848u;
label_2bd848:
    // 0x2bd848: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd848u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd84c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD84Cu;
    {
        const bool branch_taken_0x2bd84c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD84Cu;
        // 0x2bd850: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd84c) {
            ctx->pc = 0x2BD868u;
            goto label_2bd868;
        }
    }
    ctx->pc = 0x2BD854u;
    // 0x2bd854: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd858: 0x0  nop
    ctx->pc = 0x2bd858u;
    // NOP
    // 0x2bd85c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD860u;
    {
        const bool branch_taken_0x2bd860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD860u;
        // 0x2bd864: 0xc6400018  lwc1        $f0, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd860) {
            ctx->pc = 0x2BD884u;
            goto label_2bd884;
        }
    }
    ctx->pc = 0x2BD868u;
label_2bd868:
    // 0x2bd868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd86c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd870: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd874: 0x0  nop
    ctx->pc = 0x2bd874u;
    // NOP
    // 0x2bd878: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd87c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd87cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2bd880: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2bd880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd884:
    // 0x2bd884: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x2bd884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd888: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2bd888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2bd88c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd88cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd894: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd898: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd89c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2bd89cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bd8a0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2bd8a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2bd8a4:
    // 0x2bd8a4: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2bd8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8a8: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x2bd8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8ac: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2bd8acu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2bd8b0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2bd8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd8b4: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x2bd8b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x2bd8b8: 0xc6440068  lwc1        $f4, 0x68($s2)
    ctx->pc = 0x2bd8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd8bc: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2bd8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8c0: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x2bd8c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x2bd8c4: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x2bd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd8c8: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x2bd8c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x2bd8cc: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x2bd8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8d0: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x2bd8d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2bd8d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2bd8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bd8d8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2bd8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2bd8dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bd8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bd8e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd8e4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2bd8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2bd8e8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2bd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd8ec: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x2bd8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8f0: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x2bd8f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x2bd8f4: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x2bd8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8f8: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x2bd8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd8fc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2bd8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2bd900: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2bd900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bd904: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2bd904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2bd908: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd90c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bd90cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bd910: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2bd910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2bd914: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x2bd914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd918: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x2bd918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd91c: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x2bd91cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x2bd920: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x2bd920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd924: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x2bd924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd928: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2bd928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2bd92c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2bd92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bd930: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2bd930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2bd934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd938: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bd938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bd93c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD93Cu;
    {
        const bool branch_taken_0x2bd93c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD93Cu;
        // 0x2bd940: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd93c) {
            ctx->pc = 0x2BD954u;
            goto label_2bd954;
        }
    }
    ctx->pc = 0x2BD944u;
    // 0x2bd944: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2bd944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2bd948: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x2bd948u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd94c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2BD94Cu;
    {
        const bool branch_taken_0x2bd94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd94c) {
            ctx->pc = 0x2BDBE0u;
            goto label_2bdbe0;
        }
    }
    ctx->pc = 0x2BD954u;
label_2bd954:
    // 0x2bd954: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD954u;
    SET_GPR_U32(ctx, 31, 0x2BD95Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD954u, 0x2BD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD95Cu;
label_2bd95c:
    // 0x2bd95c: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd960: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd960u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd964: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD964u;
    {
        const bool branch_taken_0x2bd964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd964) {
            ctx->pc = 0x2BD968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD964u;
            // 0x2bd968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD96Cu;
            goto label_2bd96c;
        }
    }
    ctx->pc = 0x2BD96Cu;
label_2bd96c:
    // 0x2bd96c: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd96cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd970: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD970u;
    {
        const bool branch_taken_0x2bd970 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD970u;
        // 0x2bd974: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd970) {
            ctx->pc = 0x2BD98Cu;
            goto label_2bd98c;
        }
    }
    ctx->pc = 0x2BD978u;
    // 0x2bd978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd97c: 0x0  nop
    ctx->pc = 0x2bd97cu;
    // NOP
    // 0x2bd980: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2bd980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2bd984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD984u;
    {
        const bool branch_taken_0x2bd984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd984) {
            ctx->pc = 0x2BD9A4u;
            goto label_2bd9a4;
        }
    }
    ctx->pc = 0x2BD98Cu;
label_2bd98c:
    // 0x2bd98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd990: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd994: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd998: 0x0  nop
    ctx->pc = 0x2bd998u;
    // NOP
    // 0x2bd99c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2bd99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2bd9a0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2bd9a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2bd9a4:
    // 0x2bd9a4: 0x3c013a24  lui         $at, 0x3A24
    ctx->pc = 0x2bd9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14884 << 16));
    // 0x2bd9a8: 0x3421b5b5  ori         $at, $at, 0xB5B5
    ctx->pc = 0x2bd9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46517);
    // 0x2bd9ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd9b0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD9B0u;
    SET_GPR_U32(ctx, 31, 0x2BD9B8u);
    ctx->pc = 0x2BD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9B0u;
    // 0x2bd9b4: 0x46006582  mul.s       $f22, $f12, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD9B0u, 0x2BD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9B8u;
label_2bd9b8:
    // 0x2bd9b8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bd9bc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bd9bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd9c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD9C0u;
    {
        const bool branch_taken_0x2bd9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd9c0) {
            ctx->pc = 0x2BD9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD9C0u;
            // 0x2bd9c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD9C8u;
            goto label_2bd9c8;
        }
    }
    ctx->pc = 0x2BD9C8u;
label_2bd9c8:
    // 0x2bd9c8: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd9c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd9cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD9CCu;
    {
        const bool branch_taken_0x2bd9cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9CCu;
        // 0x2bd9d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9cc) {
            ctx->pc = 0x2BD9E8u;
            goto label_2bd9e8;
        }
    }
    ctx->pc = 0x2BD9D4u;
    // 0x2bd9d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd9d8: 0x0  nop
    ctx->pc = 0x2bd9d8u;
    // NOP
    // 0x2bd9dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd9e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD9E0u;
    {
        const bool branch_taken_0x2bd9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd9e0) {
            ctx->pc = 0x2BDA00u;
            goto label_2bda00;
        }
    }
    ctx->pc = 0x2BD9E8u;
label_2bd9e8:
    // 0x2bd9e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd9ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd9f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd9f4: 0x0  nop
    ctx->pc = 0x2bd9f4u;
    // NOP
    // 0x2bd9f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd9fc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd9fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bda00:
    // 0x2bda00: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2bda00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2bda04: 0x3421fa2e  ori         $at, $at, 0xFA2E
    ctx->pc = 0x2bda04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64046);
    // 0x2bda08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bda08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bda0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bda0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda10: 0xc6540054  lwc1        $f20, 0x54($s2)
    ctx->pc = 0x2bda10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bda14: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2bda14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bda18: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2bda18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2bda1c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2bda1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2bda20: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bda20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bda24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bda24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bda28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bda28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bda2c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2bda2cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2bda30: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2bda30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2bda34: 0x46141d02  mul.s       $f20, $f3, $f20
    ctx->pc = 0x2bda34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2bda38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BDA38u;
    SET_GPR_U32(ctx, 31, 0x2BDA40u);
    ctx->pc = 0x2BDA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA38u;
    // 0x2bda3c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BDA38u, 0x2BDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA40u;
label_2bda40:
    // 0x2bda40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BDA40u;
    SET_GPR_U32(ctx, 31, 0x2BDA48u);
    ctx->pc = 0x2BDA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA40u;
    // 0x2bda44: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BDA40u, 0x2BDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA48u;
label_2bda48:
    // 0x2bda48: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2BDA48u;
    SET_GPR_U32(ctx, 31, 0x2BDA50u);
    ctx->pc = 0x2BDA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA48u;
    // 0x2bda4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2BDA48u, 0x2BDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA50u;
label_2bda50:
    // 0x2bda50: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2bda50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2bda54: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2BDA54u;
    SET_GPR_U32(ctx, 31, 0x2BDA5Cu);
    ctx->pc = 0x2BDA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA54u;
    // 0x2bda58: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2BDA54u, 0x2BDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA5Cu;
label_2bda5c:
    // 0x2bda5c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2bda5cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2bda60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bda60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bda64: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2BDA64u;
    SET_GPR_U32(ctx, 31, 0x2BDA6Cu);
    ctx->pc = 0x2BDA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA64u;
    // 0x2bda68: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2BDA64u, 0x2BDA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA6Cu;
label_2bda6c:
    // 0x2bda6c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2bda6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bda70: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2BDA70u;
    SET_GPR_U32(ctx, 31, 0x2BDA78u);
    ctx->pc = 0x2BDA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA70u;
    // 0x2bda74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2BDA70u, 0x2BDA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA78u;
label_2bda78:
    // 0x2bda78: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2bda78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2bda7c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2BDA7Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA84u);
    ctx->pc = 0x2BDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA7Cu;
    // 0x2bda80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2BDA7Cu, 0x2BDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA84u;
label_2bda84:
    // 0x2bda84: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2bda84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2bda88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bda88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bda8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BDA8Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA94u);
    ctx->pc = 0x2BDA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA8Cu;
    // 0x2bda90: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BDA8Cu, 0x2BDA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA94u;
label_2bda94:
    // 0x2bda94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BDA94u;
    SET_GPR_U32(ctx, 31, 0x2BDA9Cu);
    ctx->pc = 0x2BDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA94u;
    // 0x2bda98: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BDA94u, 0x2BDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA9Cu;
label_2bda9c:
    // 0x2bda9c: 0xc6420040  lwc1        $f2, 0x40($s2)
    ctx->pc = 0x2bda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdaa0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bdaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bdaa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdaa8: 0x0  nop
    ctx->pc = 0x2bdaa8u;
    // NOP
    // 0x2bdaac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bdaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdab0: 0x0  nop
    ctx->pc = 0x2bdab0u;
    // NOP
    // 0x2bdab4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDAB4u;
    {
        const bool branch_taken_0x2bdab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAB4u;
        // 0x2bdab8: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdab4) {
            ctx->pc = 0x2BDAD8u;
            goto label_2bdad8;
        }
    }
    ctx->pc = 0x2BDABCu;
    // 0x2bdabc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2bdabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdac0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bdac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bdac4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2bdac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdac8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bdac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bdacc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2bdaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdad0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BDAD0u;
    {
        const bool branch_taken_0x2bdad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAD0u;
        // 0x2bdad4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdad0) {
            ctx->pc = 0x2BDB0Cu;
            goto label_2bdb0c;
        }
    }
    ctx->pc = 0x2BDAD8u;
label_2bdad8:
    // 0x2bdad8: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x2bdad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdadc: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x2bdadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdae0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2bdae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bdae4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2bdae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bdae8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2bdae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bdaec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bdaecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bdaf0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bdaf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bdaf4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bdaf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bdaf8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bdaf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bdafc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bdafcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bdb00: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bdb00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bdb04: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bdb04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bdb08: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2bdb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2bdb0c:
    // 0x2bdb0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2bdb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bdb10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bdb10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bdb14: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2bdb14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bdb18: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x2bdb18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2bdb1c: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x2bdb1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2bdb20: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x2bdb20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2bdb24: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2bdb24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bdb28: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2bdb28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bdb2c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2bdb2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bdb30: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x2bdb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bdb34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bdb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdb38: 0xc0aee3e  jal         func_2BB8F8
    ctx->pc = 0x2BDB38u;
    SET_GPR_U32(ctx, 31, 0x2BDB40u);
    ctx->pc = 0x2BDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB38u;
    // 0x2bdb3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB8F8u, 0x2BDB38u, 0x2BDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB40u;
label_2bdb40:
    // 0x2bdb40: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BDB40u;
    SET_GPR_U32(ctx, 31, 0x2BDB48u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BDB40u, 0x2BDB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB48u;
label_2bdb48:
    // 0x2bdb48: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bdb4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bdb4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bdb50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BDB50u;
    {
        const bool branch_taken_0x2bdb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb50) {
            ctx->pc = 0x2BDB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB50u;
            // 0x2bdb54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB58u;
            goto label_2bdb58;
        }
    }
    ctx->pc = 0x2BDB58u;
label_2bdb58:
    // 0x2bdb58: 0x1010  mfhi        $v0
    ctx->pc = 0x2bdb58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bdb5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDB5Cu;
    {
        const bool branch_taken_0x2bdb5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB5Cu;
        // 0x2bdb60: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb5c) {
            ctx->pc = 0x2BDB78u;
            goto label_2bdb78;
        }
    }
    ctx->pc = 0x2BDB64u;
    // 0x2bdb64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bdb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb68: 0x0  nop
    ctx->pc = 0x2bdb68u;
    // NOP
    // 0x2bdb6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bdb6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bdb70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDB70u;
    {
        const bool branch_taken_0x2bdb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb70) {
            ctx->pc = 0x2BDB90u;
            goto label_2bdb90;
        }
    }
    ctx->pc = 0x2BDB78u;
label_2bdb78:
    // 0x2bdb78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdb7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bdb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bdb80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bdb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb84: 0x0  nop
    ctx->pc = 0x2bdb84u;
    // NOP
    // 0x2bdb88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bdb88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bdb8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2bdb8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2bdb90:
    // 0x2bdb90: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bdb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bdb94: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bdb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bdb98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdb9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdba0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2bdba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bdba4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bdba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdba8: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2bdba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdbac: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x2bdbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdbb0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2bdbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdbb4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2bdbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2bdbb8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bdbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdbbc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bdbbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bdbc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdbc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdbc4: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x2bdbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2bdbc8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2bdbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdbcc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bdbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bdbd0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2bdbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2bdbd4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2bdbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdbd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdbd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdbdc: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x2bdbdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_2bdbe0:
    // 0x2bdbe0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BDBE0u;
    SET_GPR_U32(ctx, 31, 0x2BDBE8u);
    ctx->pc = 0x2BDBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBE0u;
    // 0x2bdbe4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BDBE0u, 0x2BDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBE8u;
label_2bdbe8:
    // 0x2bdbe8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2bdbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bdbec: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x2BDBECu;
    SET_GPR_U32(ctx, 31, 0x2BDBF4u);
    ctx->pc = 0x2BDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDBECu;
    // 0x2bdbf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x2BDBECu, 0x2BDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBF4u;
label_2bdbf4:
    // 0x2bdbf4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2bdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bdbf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bdbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdbfc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2bdbfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2bdc00: 0xc0af28a  jal         func_2BCA28
    ctx->pc = 0x2BDC00u;
    SET_GPR_U32(ctx, 31, 0x2BDC08u);
    ctx->pc = 0x2BDC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC00u;
    // 0x2bdc04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA28u, 0x2BDC00u, 0x2BDC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC08u;
label_2bdc08:
    // 0x2bdc08: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2bdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bdc0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bdc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdc10: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2bdc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc14: 0xc4620070  lwc1        $f2, 0x70($v1)
    ctx->pc = 0x2bdc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdc18: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2bdc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdc1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bdc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bdc20: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x2bdc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdc24: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2bdc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2bdc28: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2bdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bdc2c: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2bdc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bdc30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bdc34: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2bdc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2bdc38: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bdc3c: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2bdc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc40: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bdc40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bdc44: 0xe6230028  swc1        $f3, 0x28($s1)
    ctx->pc = 0x2bdc44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2bdc48: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2bdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bdc4c: 0xc0b0596  jal         func_2C1658
    ctx->pc = 0x2BDC4Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC54u);
    ctx->pc = 0x2BDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC4Cu;
    // 0x2bdc50: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1658u, 0x2BDC4Cu, 0x2BDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC54u;
label_2bdc54:
    // 0x2bdc54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bdc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc58:
    // 0x2bdc58: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bdc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdc5c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2bdc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bdc60: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2bdc60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bdc64: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2bdc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bdc68: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2bdc68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bdc6c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2bdc6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bdc70: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2bdc70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bdc74: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2bdc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2bdc78: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x2bdc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2bdc7c: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x2bdc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bdc80: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2bdc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bdc84: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2bdc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bdc88: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2bdc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bdc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC8Cu;
        // 0x2bdc90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDC94u;
    // 0x2bdc94: 0x0  nop
    ctx->pc = 0x2bdc94u;
    // NOP
    ctx->pc = 0x2bdc98u;
}
