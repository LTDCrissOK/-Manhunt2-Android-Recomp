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

// Function: sub_001CA270
// Address: 0x1ca270 - 0x1ca400
void sub_001CA270_0x1ca270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA270_0x1ca270");
#endif

    switch (ctx->pc) {
        case 0x1ca2a4u: goto label_1ca2a4;
        case 0x1ca2b4u: goto label_1ca2b4;
        case 0x1ca2dcu: goto label_1ca2dc;
        case 0x1ca2ecu: goto label_1ca2ec;
        case 0x1ca2fcu: goto label_1ca2fc;
        case 0x1ca328u: goto label_1ca328;
        case 0x1ca338u: goto label_1ca338;
        case 0x1ca340u: goto label_1ca340;
        case 0x1ca39cu: goto label_1ca39c;
        case 0x1ca3a4u: goto label_1ca3a4;
        case 0x1ca3b4u: goto label_1ca3b4;
        case 0x1ca3ccu: goto label_1ca3cc;
        case 0x1ca3e4u: goto label_1ca3e4;
        default: break;
    }

    ctx->pc = 0x1ca270u;

    // 0x1ca270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca284: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca28c: 0x8c520ff8  lw          $s2, 0xFF8($v0)
    ctx->pc = 0x1ca28cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1ca290: 0x8e43011c  lw          $v1, 0x11C($s2)
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x1ca294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca298: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1ca29c: 0xc072fda  jal         func_1CBF68
    ctx->pc = 0x1CA29Cu;
    SET_GPR_U32(ctx, 31, 0x1CA2A4u);
    ctx->pc = 0x1CA2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA29Cu;
    // 0x1ca2a0: 0x2451004c  addiu       $s1, $v0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF68u, 0x1CA29Cu, 0x1CA2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2A4u;
label_1ca2a4:
    // 0x1ca2a4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1CA2A4u;
    {
        const bool branch_taken_0x1ca2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2a4) {
            ctx->pc = 0x1CA39Cu;
            goto label_1ca39c;
        }
    }
    ctx->pc = 0x1CA2ACu;
    // 0x1ca2ac: 0xc072926  jal         func_1CA498
    ctx->pc = 0x1CA2ACu;
    SET_GPR_U32(ctx, 31, 0x1CA2B4u);
    ctx->pc = 0x1CA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2ACu;
    // 0x1ca2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA498u, 0x1CA2ACu, 0x1CA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2B4u;
label_1ca2b4:
    // 0x1ca2b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ca2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca2b8: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA2B8u;
    {
        const bool branch_taken_0x1ca2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2B8u;
        // 0x1ca2bc: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2b8) {
            ctx->pc = 0x1CA304u;
            goto label_1ca304;
        }
    }
    ctx->pc = 0x1CA2C0u;
    // 0x1ca2c0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1ca2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca2cc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ca2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ca2d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ca2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ca2d4: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA2D4u;
    SET_GPR_U32(ctx, 31, 0x1CA2DCu);
    ctx->pc = 0x1CA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2D4u;
    // 0x1ca2d8: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA400u, 0x1CA2D4u, 0x1CA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2DCu;
label_1ca2dc:
    // 0x1ca2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2e0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1ca2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ca2e4: 0xc0f7534  jal         func_3DD4D0
    ctx->pc = 0x1CA2E4u;
    SET_GPR_U32(ctx, 31, 0x1CA2ECu);
    ctx->pc = 0x1CA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2E4u;
    // 0x1ca2e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4D0u, 0x1CA2E4u, 0x1CA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2ECu;
label_1ca2ec:
    // 0x1ca2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2f0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ca2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca2f4: 0xc0f7534  jal         func_3DD4D0
    ctx->pc = 0x1CA2F4u;
    SET_GPR_U32(ctx, 31, 0x1CA2FCu);
    ctx->pc = 0x1CA2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2F4u;
    // 0x1ca2f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4D0u, 0x1CA2F4u, 0x1CA2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2FCu;
label_1ca2fc:
    // 0x1ca2fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CA2FCu;
    {
        const bool branch_taken_0x1ca2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2fc) {
            ctx->pc = 0x1CA338u;
            goto label_1ca338;
        }
    }
    ctx->pc = 0x1CA304u;
label_1ca304:
    // 0x1ca304: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1ca304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1ca308: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1ca30c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca310: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca314: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ca314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ca318: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca31c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ca31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ca320: 0xc0f7534  jal         func_3DD4D0
    ctx->pc = 0x1CA320u;
    SET_GPR_U32(ctx, 31, 0x1CA328u);
    ctx->pc = 0x1CA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA320u;
    // 0x1ca324: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4D0u, 0x1CA320u, 0x1CA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA328u;
label_1ca328:
    // 0x1ca328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca32c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1ca32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ca330: 0xc0f7534  jal         func_3DD4D0
    ctx->pc = 0x1CA330u;
    SET_GPR_U32(ctx, 31, 0x1CA338u);
    ctx->pc = 0x1CA334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA330u;
    // 0x1ca334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4D0u, 0x1CA330u, 0x1CA338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA338u;
label_1ca338:
    // 0x1ca338: 0xc07293e  jal         func_1CA4F8
    ctx->pc = 0x1CA338u;
    SET_GPR_U32(ctx, 31, 0x1CA340u);
    ctx->pc = 0x1CA33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA338u;
    // 0x1ca33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA4F8u, 0x1CA338u, 0x1CA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA340u;
label_1ca340:
    // 0x1ca340: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ca344: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1ca344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1ca348: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA348u;
    {
        const bool branch_taken_0x1ca348 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA348u;
        // 0x1ca34c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca348) {
            ctx->pc = 0x1CA364u;
            goto label_1ca364;
        }
    }
    ctx->pc = 0x1CA350u;
    // 0x1ca350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca354: 0x0  nop
    ctx->pc = 0x1ca354u;
    // NOP
    // 0x1ca358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca35c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA35Cu;
    {
        const bool branch_taken_0x1ca35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca35c) {
            ctx->pc = 0x1CA37Cu;
            goto label_1ca37c;
        }
    }
    ctx->pc = 0x1CA364u;
label_1ca364:
    // 0x1ca364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ca364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ca368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca36c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca370: 0x0  nop
    ctx->pc = 0x1ca370u;
    // NOP
    // 0x1ca374: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca378: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ca378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ca37c:
    // 0x1ca37c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ca380: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ca384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ca390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ca394: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA394u;
    SET_GPR_U32(ctx, 31, 0x1CA39Cu);
    ctx->pc = 0x1CA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA394u;
    // 0x1ca398: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA400u, 0x1CA394u, 0x1CA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA39Cu;
label_1ca39c:
    // 0x1ca39c: 0xc072fc6  jal         func_1CBF18
    ctx->pc = 0x1CA39Cu;
    SET_GPR_U32(ctx, 31, 0x1CA3A4u);
    ctx->pc = 0x1CA3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA39Cu;
    // 0x1ca3a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF18u, 0x1CA39Cu, 0x1CA3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3A4u;
label_1ca3a4:
    // 0x1ca3a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA3A4u;
    {
        const bool branch_taken_0x1ca3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3A4u;
        // 0x1ca3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3a4) {
            ctx->pc = 0x1CA3B4u;
            goto label_1ca3b4;
        }
    }
    ctx->pc = 0x1CA3ACu;
    // 0x1ca3ac: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA3ACu;
    SET_GPR_U32(ctx, 31, 0x1CA3B4u);
    ctx->pc = 0x1CA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3ACu;
    // 0x1ca3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA400u, 0x1CA3ACu, 0x1CA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3B4u;
label_1ca3b4:
    // 0x1ca3b4: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1ca3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1ca3b8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1ca3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1ca3bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA3BCu;
    {
        const bool branch_taken_0x1ca3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3BCu;
        // 0x1ca3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3bc) {
            ctx->pc = 0x1CA3CCu;
            goto label_1ca3cc;
        }
    }
    ctx->pc = 0x1CA3C4u;
    // 0x1ca3c4: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA3C4u;
    SET_GPR_U32(ctx, 31, 0x1CA3CCu);
    ctx->pc = 0x1CA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3C4u;
    // 0x1ca3c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA400u, 0x1CA3C4u, 0x1CA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3CCu;
label_1ca3cc:
    // 0x1ca3cc: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x1ca3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1ca3d0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1ca3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1ca3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA3D4u;
    {
        const bool branch_taken_0x1ca3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3D4u;
        // 0x1ca3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3d4) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA3DCu;
    // 0x1ca3dc: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA3DCu;
    SET_GPR_U32(ctx, 31, 0x1CA3E4u);
    ctx->pc = 0x1CA3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3DCu;
    // 0x1ca3e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA400u, 0x1CA3DCu, 0x1CA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3E4u;
label_1ca3e4:
    // 0x1ca3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3F4u;
        // 0x1ca3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3FCu;
    // 0x1ca3fc: 0x0  nop
    ctx->pc = 0x1ca3fcu;
    // NOP
    ctx->pc = 0x1ca400u;
}
