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

// Function: sub_002FF478
// Address: 0x2ff478 - 0x2ff5c8
void sub_002FF478_0x2ff478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF478_0x2ff478");
#endif

    switch (ctx->pc) {
        case 0x2ff498u: goto label_2ff498;
        case 0x2ff4f0u: goto label_2ff4f0;
        case 0x2ff500u: goto label_2ff500;
        case 0x2ff52cu: goto label_2ff52c;
        case 0x2ff534u: goto label_2ff534;
        case 0x2ff5a0u: goto label_2ff5a0;
        case 0x2ff5acu: goto label_2ff5ac;
        default: break;
    }

    ctx->pc = 0x2ff478u;

    // 0x2ff478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ff478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ff47c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ff47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ff480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff484: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ff484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ff488: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ff488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ff48c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ff48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2ff490: 0xc09c6fa  jal         func_271BE8
    ctx->pc = 0x2FF490u;
    SET_GPR_U32(ctx, 31, 0x2FF498u);
    ctx->pc = 0x2FF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF490u;
    // 0x2ff494: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x271BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BE8u, 0x2FF490u, 0x2FF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF498u;
label_2ff498:
    // 0x2ff498: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2ff498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2ff49c: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x2ff49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x2ff4a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ff4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff4a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2ff4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2ff4a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2ff4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff4ac: 0xfa010230  sqc2        $vf1, 0x230($s0)
    ctx->pc = 0x2ff4acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ff4b0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2ff4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2ff4b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2ff4b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2ff4b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ff4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff4bc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2ff4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ff4c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ff4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ff4c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff4c8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ff4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff4cc: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2ff4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2ff4d0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2ff4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2ff4d4: 0xae030224  sw          $v1, 0x224($s0)
    ctx->pc = 0x2ff4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 3));
    // 0x2ff4d8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2ff4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2ff4dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ff4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff4e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ff4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ff4e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ff4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff4e8: 0xc040d5c  jal         func_103570
    ctx->pc = 0x2FF4E8u;
    SET_GPR_U32(ctx, 31, 0x2FF4F0u);
    ctx->pc = 0x2FF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4E8u;
    // 0x2ff4ec: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x2FF4E8u, 0x2FF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4F0u;
label_2ff4f0:
    // 0x2ff4f0: 0xa21202d5  sb          $s2, 0x2D5($s0)
    ctx->pc = 0x2ff4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 725), (uint8_t)GPR_U32(ctx, 18));
    // 0x2ff4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff4f8: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x2FF4F8u;
    SET_GPR_U32(ctx, 31, 0x2FF500u);
    ctx->pc = 0x2FF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4F8u;
    // 0x2ff4fc: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2FF4F8u, 0x2FF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF500u;
label_2ff500:
    // 0x2ff500: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2ff500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2ff504: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2ff504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2ff508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff50c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ff50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ff510: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ff510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ff514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff518: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x2ff518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x2ff51c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2ff51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2ff520: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2ff520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2ff524: 0xc0bfd1c  jal         func_2FF470
    ctx->pc = 0x2FF524u;
    SET_GPR_U32(ctx, 31, 0x2FF52Cu);
    ctx->pc = 0x2FF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF524u;
    // 0x2ff528: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF470u, 0x2FF524u, 0x2FF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF52Cu;
label_2ff52c:
    // 0x2ff52c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2FF52Cu;
    SET_GPR_U32(ctx, 31, 0x2FF534u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2FF52Cu, 0x2FF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF534u;
label_2ff534:
    // 0x2ff534: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x2ff534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x2ff538: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2ff538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2ff53c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ff53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff540: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ff540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ff544: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x2ff544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x2ff548: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ff548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ff54c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff550: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x2ff550u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x2ff554: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ff558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ff558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff55c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2ff55cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2ff560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff564: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ff564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff568: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff56c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x2ff56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x2ff570: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ff570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff574: 0xac40d2d0  sw          $zero, -0x2D30($v0)
    ctx->pc = 0x2ff574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2D0u, _value); } while (0);
    // 0x2ff578: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2ff578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff57c: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x2ff57cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ff580: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ff580u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ff584: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2ff584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2ff588: 0xc60e02e8  lwc1        $f14, 0x2E8($s0)
    ctx->pc = 0x2ff588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ff58c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ff58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff590: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2ff590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2ff594: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2ff594u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2ff598: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x2FF598u;
    SET_GPR_U32(ctx, 31, 0x2FF5A0u);
    ctx->pc = 0x2FF59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF598u;
    // 0x2ff59c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x2FF598u, 0x2FF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5A0u;
label_2ff5a0:
    // 0x2ff5a0: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x2ff5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x2ff5a4: 0xc0bfcfe  jal         func_2FF3F8
    ctx->pc = 0x2FF5A4u;
    SET_GPR_U32(ctx, 31, 0x2FF5ACu);
    ctx->pc = 0x2FF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5A4u;
    // 0x2ff5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF3F8u, 0x2FF5A4u, 0x2FF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5ACu;
label_2ff5ac:
    // 0x2ff5ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ff5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff5b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ff5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ff5b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ff5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff5b8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ff5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ff5bc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2ff5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ff5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5C0u;
        // 0x2ff5c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF5C8u;
}
