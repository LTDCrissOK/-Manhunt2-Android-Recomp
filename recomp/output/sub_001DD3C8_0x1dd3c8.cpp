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

// Function: sub_001DD3C8
// Address: 0x1dd3c8 - 0x1dd6e0
void sub_001DD3C8_0x1dd3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD3C8_0x1dd3c8");
#endif

    switch (ctx->pc) {
        case 0x1dd428u: goto label_1dd428;
        case 0x1dd440u: goto label_1dd440;
        case 0x1dd488u: goto label_1dd488;
        case 0x1dd498u: goto label_1dd498;
        case 0x1dd4a0u: goto label_1dd4a0;
        case 0x1dd4a8u: goto label_1dd4a8;
        case 0x1dd610u: goto label_1dd610;
        case 0x1dd628u: goto label_1dd628;
        default: break;
    }

    ctx->pc = 0x1dd3c8u;

    // 0x1dd3c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1dd3cc: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1dd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1dd3d0: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1dd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1dd3d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3d8: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1dd3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1dd3dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dd3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e0: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x1dd3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x1dd3e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1dd3e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e8: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x1dd3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x1dd3ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dd3ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3f0: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x1dd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x1dd3f4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1dd3f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3f8: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1dd3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1dd3fc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1dd3fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd400: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x1dd400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x1dd404: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x1dd404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x1dd408: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DD408u;
    {
        const bool branch_taken_0x1dd408 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD408u;
        // 0x1dd40c: 0xffbf00f8  sd          $ra, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd408) {
            ctx->pc = 0x1DD480u;
            goto label_1dd480;
        }
    }
    ctx->pc = 0x1DD410u;
    // 0x1dd410: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dd414: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1DD414u;
    {
        const bool branch_taken_0x1dd414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD414u;
        // 0x1dd418: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd414) {
            ctx->pc = 0x1DD6ACu;
            goto label_1dd6ac;
        }
    }
    ctx->pc = 0x1DD41Cu;
    // 0x1dd41c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1dd41cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd420: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd424: 0x0  nop
    ctx->pc = 0x1dd424u;
    // NOP
label_1dd428:
    // 0x1dd428: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd42c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd430: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd434: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1dd434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd438: 0xc078ad2  jal         func_1E2B48
    ctx->pc = 0x1DD438u;
    SET_GPR_U32(ctx, 31, 0x1DD440u);
    ctx->pc = 0x1DD43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD438u;
    // 0x1dd43c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B48u, 0x1DD438u, 0x1DD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD440u;
label_1dd440:
    // 0x1dd440: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD440u;
    {
        const bool branch_taken_0x1dd440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd440) {
            ctx->pc = 0x1DD444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD440u;
            // 0x1dd444: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD468u;
            goto label_1dd468;
        }
    }
    ctx->pc = 0x1DD448u;
    // 0x1dd448: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dd448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd44c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1dd44cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd450: 0xae160030  sw          $s6, 0x30($s0)
    ctx->pc = 0x1dd450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 22));
    // 0x1dd454: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd458: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1dd458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1dd45c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1dd45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd460: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1dd460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1dd464: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1dd468:
    // 0x1dd468: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1dd468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1dd46c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1dd46cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd470: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DD470u;
    {
        const bool branch_taken_0x1dd470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD470u;
        // 0x1dd474: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd470) {
            ctx->pc = 0x1DD428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd428;
        }
    }
    ctx->pc = 0x1DD478u;
    // 0x1dd478: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1DD478u;
    {
        const bool branch_taken_0x1dd478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD478u;
        // 0x1dd47c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd478) {
            ctx->pc = 0x1DD6B0u;
            goto label_1dd6b0;
        }
    }
    ctx->pc = 0x1DD480u;
label_1dd480:
    // 0x1dd480: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1DD480u;
    SET_GPR_U32(ctx, 31, 0x1DD488u);
    ctx->pc = 0x1DD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD480u;
    // 0x1dd484: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1DD480u, 0x1DD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD488u;
label_1dd488:
    // 0x1dd488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd48c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd490: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1DD490u;
    SET_GPR_U32(ctx, 31, 0x1DD498u);
    ctx->pc = 0x1DD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD490u;
    // 0x1dd494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1DD490u, 0x1DD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD498u;
label_1dd498:
    // 0x1dd498: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DD498u;
    SET_GPR_U32(ctx, 31, 0x1DD4A0u);
    ctx->pc = 0x1DD49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD498u;
    // 0x1dd49c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DD498u, 0x1DD4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4A0u;
label_1dd4a0:
    // 0x1dd4a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DD4A0u;
    SET_GPR_U32(ctx, 31, 0x1DD4A8u);
    ctx->pc = 0x1DD4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4A0u;
    // 0x1dd4a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DD4A0u, 0x1DD4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4A8u;
label_1dd4a8:
    // 0x1dd4a8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1dd4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1dd4ac: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dd4b0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1dd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1dd4b4: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1dd4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1dd4b8: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1dd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1dd4bc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1dd4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dd4c0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1dd4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1dd4c4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1dd4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1dd4c8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1dd4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1dd4cc: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1dd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1dd4d0: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1dd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1dd4d4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1dd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1dd4d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dd4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd4dc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dd4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd4e0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1dd4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dd4e4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1dd4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1dd4e8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1dd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1dd4ec: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1dd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1dd4f0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1dd4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1dd4f4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dd4f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd4f8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd4fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dd500: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1dd500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1dd504: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1dd504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1dd508: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1dd508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1dd50c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1dd50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1dd510: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd514: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dd514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd518: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dd518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd51c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1dd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd520: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dd524: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x1dd524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1dd528: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dd528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd52c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dd52cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd530: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dd530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd534: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd538: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dd538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd53c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dd53cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd540: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1dd540u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd544: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1dd544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd548: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1dd548u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd54c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dd54cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd550: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dd550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd554: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dd554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dd558: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1dd558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dd55c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd560: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dd560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd564: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1dd564u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd568: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1dd568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd56c: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1dd56cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd570: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dd570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd574: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dd574u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd578: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dd578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dd57c: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x1dd57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dd580: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd584: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1dd584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd588: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dd588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd58c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dd58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd590: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1dd590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd594: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1dd594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dd598: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1dd598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dd59c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1dd59cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1dd5a0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1dd5a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1dd5a4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1dd5a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1dd5a8: 0x0  nop
    ctx->pc = 0x1dd5a8u;
    // NOP
    // 0x1dd5ac: 0x0  nop
    ctx->pc = 0x1dd5acu;
    // NOP
    // 0x1dd5b0: 0x46010084  c1          0x10084
    ctx->pc = 0x1dd5b0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dd5b4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1dd5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dd5b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd5bc: 0x0  nop
    ctx->pc = 0x1dd5bcu;
    // NOP
    // 0x1dd5c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1dd5c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd5c4: 0x0  nop
    ctx->pc = 0x1dd5c4u;
    // NOP
    // 0x1dd5c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1DD5C8u;
    {
        const bool branch_taken_0x1dd5c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5C8u;
        // 0x1dd5cc: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5c8) {
            ctx->pc = 0x1DD5F4u;
            goto label_1dd5f4;
        }
    }
    ctx->pc = 0x1DD5D0u;
    // 0x1dd5d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd5d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd5d8: 0x0  nop
    ctx->pc = 0x1dd5d8u;
    // NOP
    // 0x1dd5dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1dd5dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1dd5e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dd5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dd5e4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dd5e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dd5e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1dd5e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dd5ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1dd5ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd5f0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dd5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_1dd5f4:
    // 0x1dd5f4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dd5f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DD5F8u;
    {
        const bool branch_taken_0x1dd5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5F8u;
        // 0x1dd5fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5f8) {
            ctx->pc = 0x1DD6ACu;
            goto label_1dd6ac;
        }
    }
    ctx->pc = 0x1DD600u;
    // 0x1dd600: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1dd600u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd604: 0x26160010  addiu       $s6, $s0, 0x10
    ctx->pc = 0x1dd604u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dd608: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd60c: 0x0  nop
    ctx->pc = 0x1dd60cu;
    // NOP
label_1dd610:
    // 0x1dd610: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1dd610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd614: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dd618: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd61c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1dd61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd620: 0xc078ad2  jal         func_1E2B48
    ctx->pc = 0x1DD620u;
    SET_GPR_U32(ctx, 31, 0x1DD628u);
    ctx->pc = 0x1DD624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD620u;
    // 0x1dd624: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B48u, 0x1DD620u, 0x1DD628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD628u;
label_1dd628:
    // 0x1dd628: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DD628u;
    {
        const bool branch_taken_0x1dd628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd628) {
            ctx->pc = 0x1DD62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD628u;
            // 0x1dd62c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD69Cu;
            goto label_1dd69c;
        }
    }
    ctx->pc = 0x1DD630u;
    // 0x1dd630: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd634: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1dd634u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd638: 0xae170030  sw          $s7, 0x30($s0)
    ctx->pc = 0x1dd638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 23));
    // 0x1dd63c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd640: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1dd640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1dd644: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dd644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd648: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1dd648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dd64c: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x1dd64cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1dd650: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x1dd650u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1dd654: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x1dd654u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1dd658: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dd658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd65c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dd65cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd660: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1dd660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd664: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1dd664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd668: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dd668u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd66c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1dd66cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dd670: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1dd670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dd674: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x1dd674u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1dd678: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x1dd678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1dd67c: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x1dd67cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1dd680: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dd680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd684: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dd684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd688: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dd688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dd68c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x1dd68cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dd690: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1dd690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd694: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1dd694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1dd698: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1dd69c:
    // 0x1dd69c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1dd6a0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1dd6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd6a4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1DD6A4u;
    {
        const bool branch_taken_0x1dd6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A4u;
        // 0x1dd6a8: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6a4) {
            ctx->pc = 0x1DD610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd610;
        }
    }
    ctx->pc = 0x1DD6ACu;
label_1dd6ac:
    // 0x1dd6ac: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1dd6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6b0:
    // 0x1dd6b0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1dd6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd6b4: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1dd6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dd6b8: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1dd6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dd6bc: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dd6c0: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x1dd6c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dd6c4: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x1dd6c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dd6c8: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x1dd6c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dd6cc: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x1dd6ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dd6d0: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x1dd6d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dd6d4: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1dd6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dd6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D8u;
        // 0x1dd6dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6E0u;
}
