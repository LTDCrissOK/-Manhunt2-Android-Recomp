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

// Function: sub_0026E820
// Address: 0x26e820 - 0x26ea20
void sub_0026E820_0x26e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E820_0x26e820");
#endif

    switch (ctx->pc) {
        case 0x26e870u: goto label_26e870;
        case 0x26e8c4u: goto label_26e8c4;
        case 0x26e944u: goto label_26e944;
        case 0x26e958u: goto label_26e958;
        case 0x26e968u: goto label_26e968;
        case 0x26e97cu: goto label_26e97c;
        case 0x26e9acu: goto label_26e9ac;
        case 0x26e9b8u: goto label_26e9b8;
        case 0x26e9c8u: goto label_26e9c8;
        default: break;
    }

    ctx->pc = 0x26e820u;

    // 0x26e820: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26e824: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x26e824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x26e828: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x26e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x26e82c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x26e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x26e830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26e830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e834: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x26e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x26e838: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x26e838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26e83c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x26e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x26e840: 0x24543d20  addiu       $s4, $v0, 0x3D20
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x26e844: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x26e844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x26e848: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x26e848u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e84c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x26e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x26e850: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x26e850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x26e854: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26e858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26e858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26e85c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26e85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26e860: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x26e864: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x26E864u;
    {
        const bool branch_taken_0x26e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E864u;
        // 0x26e868: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e864) {
            ctx->pc = 0x26E9C8u;
            goto label_26e9c8;
        }
    }
    ctx->pc = 0x26E86Cu;
    // 0x26e86c: 0x0  nop
    ctx->pc = 0x26e86cu;
    // NOP
label_26e870:
    // 0x26e870: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x26e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x26e874: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x26E874u;
    {
        const bool branch_taken_0x26e874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e874) {
            ctx->pc = 0x26E878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E874u;
            // 0x26e878: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E9CCu;
            goto label_26e9cc;
        }
    }
    ctx->pc = 0x26E87Cu;
    // 0x26e87c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x26e880: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26E880u;
    {
        const bool branch_taken_0x26e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e880) {
            ctx->pc = 0x26E884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E880u;
            // 0x26e884: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E8B4u;
            goto label_26e8b4;
        }
    }
    ctx->pc = 0x26E888u;
    // 0x26e888: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x26e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x26e88c: 0x2442ffc8  addiu       $v0, $v0, -0x38
    ctx->pc = 0x26e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x26e890: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x26e890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26e894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E894u;
    {
        const bool branch_taken_0x26e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E894u;
        // 0x26e898: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e894) {
            ctx->pc = 0x26E8B0u;
            goto label_26e8b0;
        }
    }
    ctx->pc = 0x26E89Cu;
    // 0x26e89c: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x26e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x26e8a0: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x26e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x26e8a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e8a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E8A8u;
    {
        const bool branch_taken_0x26e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8A8u;
        // 0x26e8ac: 0x24500070  addiu       $s0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8a8) {
            ctx->pc = 0x26E8BCu;
            goto label_26e8bc;
        }
    }
    ctx->pc = 0x26E8B0u;
label_26e8b0:
    // 0x26e8b0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26e8b4:
    // 0x26e8b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e8b8: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x26e8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_26e8bc:
    // 0x26e8bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E8BCu;
    SET_GPR_U32(ctx, 31, 0x26E8C4u);
    ctx->pc = 0x26E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8BCu;
    // 0x26e8c0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E8BCu, 0x26E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8C4u;
label_26e8c4:
    // 0x26e8c4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x26e8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e8c8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26e8c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26e8cc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x26e8ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e8d0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x26e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x26e8d4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x26e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e8d8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26e8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26e8dc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x26e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e8e0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26e8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26e8e4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x26e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e8e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26e8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26e8ec: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x26e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e8f0: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x26e8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x26e8f4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26e8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x26e8f8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e8fc: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x26e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x26e900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e904: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26E904u;
    {
        const bool branch_taken_0x26e904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E904u;
        // 0x26e908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e904) {
            ctx->pc = 0x26E94Cu;
            goto label_26e94c;
        }
    }
    ctx->pc = 0x26E90Cu;
    // 0x26e90c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x26e90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26e910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E910u;
    {
        const bool branch_taken_0x26e910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E910u;
        // 0x26e914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e910) {
            ctx->pc = 0x26E928u;
            goto label_26e928;
        }
    }
    ctx->pc = 0x26E918u;
    // 0x26e918: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E918u;
    {
        const bool branch_taken_0x26e918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e918) {
            ctx->pc = 0x26E91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E918u;
            // 0x26e91c: 0x8e250258  lw          $a1, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E93Cu;
            goto label_26e93c;
        }
    }
    ctx->pc = 0x26E920u;
    // 0x26e920: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26E920u;
    {
        const bool branch_taken_0x26e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e920) {
            ctx->pc = 0x26E96Cu;
            goto label_26e96c;
        }
    }
    ctx->pc = 0x26E928u;
label_26e928:
    // 0x26e928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e92c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26E92Cu;
    {
        const bool branch_taken_0x26e92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e92c) {
            ctx->pc = 0x26E930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E92Cu;
            // 0x26e930: 0x8e250260  lw          $a1, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E960u;
            goto label_26e960;
        }
    }
    ctx->pc = 0x26E934u;
    // 0x26e934: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26E934u;
    {
        const bool branch_taken_0x26e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e934) {
            ctx->pc = 0x26E96Cu;
            goto label_26e96c;
        }
    }
    ctx->pc = 0x26E93Cu;
label_26e93c:
    // 0x26e93c: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x26E93Cu;
    SET_GPR_U32(ctx, 31, 0x26E944u);
    ctx->pc = 0x26E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E93Cu;
    // 0x26e940: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x26E93Cu, 0x26E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E944u;
label_26e944:
    // 0x26e944: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26E944u;
    {
        const bool branch_taken_0x26e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E944u;
        // 0x26e948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e944) {
            ctx->pc = 0x26E96Cu;
            goto label_26e96c;
        }
    }
    ctx->pc = 0x26E94Cu;
label_26e94c:
    // 0x26e94c: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x26e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x26e950: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x26E950u;
    SET_GPR_U32(ctx, 31, 0x26E958u);
    ctx->pc = 0x26E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E950u;
    // 0x26e954: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x26E950u, 0x26E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E958u;
label_26e958:
    // 0x26e958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E958u;
    {
        const bool branch_taken_0x26e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E958u;
        // 0x26e95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e958) {
            ctx->pc = 0x26E96Cu;
            goto label_26e96c;
        }
    }
    ctx->pc = 0x26E960u;
label_26e960:
    // 0x26e960: 0xc078932  jal         func_1E24C8
    ctx->pc = 0x26E960u;
    SET_GPR_U32(ctx, 31, 0x26E968u);
    ctx->pc = 0x26E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E960u;
    // 0x26e964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24C8u, 0x26E960u, 0x26E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E968u;
label_26e968:
    // 0x26e968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e96c:
    // 0x26e96c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26E96Cu;
    {
        const bool branch_taken_0x26e96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E96Cu;
        // 0x26e970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e96c) {
            ctx->pc = 0x26E9C8u;
            goto label_26e9c8;
        }
    }
    ctx->pc = 0x26E974u;
    // 0x26e974: 0xc09b79c  jal         func_26DE70
    ctx->pc = 0x26E974u;
    SET_GPR_U32(ctx, 31, 0x26E97Cu);
    ctx->pc = 0x26E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E974u;
    // 0x26e978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26E974u, 0x26E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E97Cu;
label_26e97c:
    // 0x26e97c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26E97Cu;
    {
        const bool branch_taken_0x26e97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e97c) {
            ctx->pc = 0x26E980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E97Cu;
            // 0x26e980: 0x8e240268  lw          $a0, 0x268($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E9C0u;
            goto label_26e9c0;
        }
    }
    ctx->pc = 0x26E984u;
    // 0x26e984: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x26e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x26e988: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x26e98c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26E98Cu;
    {
        const bool branch_taken_0x26e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e98c) {
            ctx->pc = 0x26E990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E98Cu;
            // 0x26e990: 0x8e240268  lw          $a0, 0x268($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E9C0u;
            goto label_26e9c0;
        }
    }
    ctx->pc = 0x26E994u;
    // 0x26e994: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x26e998: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E998u;
    {
        const bool branch_taken_0x26e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e998) {
            ctx->pc = 0x26E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E998u;
            // 0x26e99c: 0x8e240268  lw          $a0, 0x268($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E9C0u;
            goto label_26e9c0;
        }
    }
    ctx->pc = 0x26E9A0u;
    // 0x26e9a0: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x26e9a4: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x26E9A4u;
    SET_GPR_U32(ctx, 31, 0x26E9ACu);
    ctx->pc = 0x26E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9A4u;
    // 0x26e9a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26E9A4u, 0x26E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9ACu;
label_26e9ac:
    // 0x26e9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9b0: 0xc0cda74  jal         func_3369D0
    ctx->pc = 0x26E9B0u;
    SET_GPR_U32(ctx, 31, 0x26E9B8u);
    ctx->pc = 0x26E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9B0u;
    // 0x26e9b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26E9B0u, 0x26E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9B8u;
label_26e9b8:
    // 0x26e9b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E9B8u;
    {
        const bool branch_taken_0x26e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9B8u;
        // 0x26e9bc: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9b8) {
            ctx->pc = 0x26E9CCu;
            goto label_26e9cc;
        }
    }
    ctx->pc = 0x26E9C0u;
label_26e9c0:
    // 0x26e9c0: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x26E9C0u;
    SET_GPR_U32(ctx, 31, 0x26E9C8u);
    ctx->pc = 0x26E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9C0u;
    // 0x26e9c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26E9C0u, 0x26E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9C8u;
label_26e9c8:
    // 0x26e9c8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26e9cc:
    // 0x26e9cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26e9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E9D0u;
    {
        const bool branch_taken_0x26e9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9D0u;
        // 0x26e9d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9d0) {
            ctx->pc = 0x26E9DCu;
            goto label_26e9dc;
        }
    }
    ctx->pc = 0x26E9D8u;
    // 0x26e9d8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x26e9d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e9dc:
    // 0x26e9dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E9DCu;
    {
        const bool branch_taken_0x26e9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e9dc) {
            ctx->pc = 0x26E9ECu;
            goto label_26e9ec;
        }
    }
    ctx->pc = 0x26E9E4u;
    // 0x26e9e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26e9e8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_26e9ec:
    // 0x26e9ec: 0x5640ffa0  bnel        $s2, $zero, . + 4 + (-0x60 << 2)
    ctx->pc = 0x26E9ECu;
    {
        const bool branch_taken_0x26e9ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e9ec) {
            ctx->pc = 0x26E9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E9ECu;
            // 0x26e9f0: 0x8e421060  lw          $v0, 0x1060($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e870;
        }
    }
    ctx->pc = 0x26E9F4u;
    // 0x26e9f4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x26e9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e9f8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x26e9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26e9fc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x26e9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26ea00: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x26ea00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26ea04: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x26ea04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ea08: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x26ea08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x26ea0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26ea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26ea10: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x26ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x26EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA14u;
        // 0x26ea18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EA1Cu;
    // 0x26ea1c: 0x0  nop
    ctx->pc = 0x26ea1cu;
    // NOP
    ctx->pc = 0x26ea20u;
}
