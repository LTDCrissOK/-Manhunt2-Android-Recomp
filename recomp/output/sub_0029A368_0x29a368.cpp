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

// Function: sub_0029A368
// Address: 0x29a368 - 0x29a580
void sub_0029A368_0x29a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A368_0x29a368");
#endif

    switch (ctx->pc) {
        case 0x29a3c8u: goto label_29a3c8;
        case 0x29a3e0u: goto label_29a3e0;
        case 0x29a3ecu: goto label_29a3ec;
        case 0x29a448u: goto label_29a448;
        case 0x29a480u: goto label_29a480;
        case 0x29a498u: goto label_29a498;
        case 0x29a4e0u: goto label_29a4e0;
        default: break;
    }

    ctx->pc = 0x29a368u;

    // 0x29a368: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29a36c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x29a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x29a370: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x29a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x29a374: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29a378: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29a378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a37c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29a37cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a380: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x29a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29a384: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x29a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x29a388: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x29a388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a38c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x29a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x29a390: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x29a390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x29a394: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x29a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x29a398: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x29a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x29a39c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29a39cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3a0: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x29a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x29a3a4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x29a3a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3a8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29a3ac: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x29a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a3b0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x29a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x29a3b4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x29a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x29a3b8: 0xae760078  sw          $s6, 0x78($s3)
    ctx->pc = 0x29a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 22));
    // 0x29a3bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a3c0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x29A3C0u;
    SET_GPR_U32(ctx, 31, 0x29A3C8u);
    ctx->pc = 0x29A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A3C0u;
    // 0x29a3c4: 0xae630080  sw          $v1, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x29A3C0u, 0x29A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A3C8u;
label_29a3c8:
    // 0x29a3c8: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x29a3c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a3cc: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x29a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x29a3d0: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x29A3D0u;
    {
        const bool branch_taken_0x29a3d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3D0u;
        // 0x29a3d4: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3d0) {
            ctx->pc = 0x29A3F8u;
            goto label_29a3f8;
        }
    }
    ctx->pc = 0x29A3D8u;
    // 0x29a3d8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29a3d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a3dc: 0x0  nop
    ctx->pc = 0x29a3dcu;
    // NOP
label_29a3e0:
    // 0x29a3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3e4: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x29A3E4u;
    SET_GPR_U32(ctx, 31, 0x29A3ECu);
    ctx->pc = 0x29A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A3E4u;
    // 0x29a3e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x29A3E4u, 0x29A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A3ECu;
label_29a3ec:
    // 0x29a3ec: 0x0  nop
    ctx->pc = 0x29a3ecu;
    // NOP
    // 0x29a3f0: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29A3F0u;
    {
        const bool branch_taken_0x29a3f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x29A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3F0u;
        // 0x29a3f4: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3f0) {
            ctx->pc = 0x29A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a3e0;
        }
    }
    ctx->pc = 0x29A3F8u;
label_29a3f8:
    // 0x29a3f8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x29a3fc: 0x2443be00  addiu       $v1, $v0, -0x4200
    ctx->pc = 0x29a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x29a400: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x29a400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x29a404: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x29a404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x29a408: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x29a408u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x46BE08u));
    // 0x29a40c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x29a40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29a410: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x29a410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29a414: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x29a414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x29a418: 0xae75007c  sw          $s5, 0x7C($s3)
    ctx->pc = 0x29a418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 21));
    // 0x29a41c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x29a420: 0x2443be10  addiu       $v1, $v0, -0x41F0
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950416));
    // 0x29a424: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x29a424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x29a428: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x29a428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x29a42c: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x29a42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29a430: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x29a430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29a434: 0x1ac00045  blez        $s6, . + 4 + (0x45 << 2)
    ctx->pc = 0x29A434u;
    {
        const bool branch_taken_0x29a434 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x29A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A434u;
        // 0x29a438: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a434) {
            ctx->pc = 0x29A54Cu;
            goto label_29a54c;
        }
    }
    ctx->pc = 0x29A43Cu;
    // 0x29a43c: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x29a43cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a440: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x29a440u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a444: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x29a444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_29a448:
    // 0x29a448: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x29a448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29a44c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A44Cu;
    {
        const bool branch_taken_0x29a44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A44Cu;
        // 0x29a450: 0x2445baf8  addiu       $a1, $v0, -0x4508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a44c) {
            ctx->pc = 0x29A458u;
            goto label_29a458;
        }
    }
    ctx->pc = 0x29A454u;
    // 0x29a454: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x29a454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_29a458:
    // 0x29a458: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x29a458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x29a45c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x29a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a460: 0x2918818  mult        $s1, $s4, $s1
    ctx->pc = 0x29a460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x29a464: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x29a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a468: 0x2869026  xor         $s2, $s4, $a2
    ctx->pc = 0x29a468u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 6));
    // 0x29a46c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x29a46cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x29a470: 0x2e520001  sltiu       $s2, $s2, 0x1
    ctx->pc = 0x29a470u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29a474: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29a474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29a478: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x29A478u;
    SET_GPR_U32(ctx, 31, 0x29A480u);
    ctx->pc = 0x29A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A478u;
    // 0x29a47c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29A478u, 0x29A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A480u;
label_29a480:
    // 0x29a480: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x29a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a484: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x29a484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a488: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x29a488u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x29a48c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x29a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x29a490: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x29A490u;
    SET_GPR_U32(ctx, 31, 0x29A498u);
    ctx->pc = 0x29A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A490u;
    // 0x29a494: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29A490u, 0x29A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A498u;
label_29a498:
    // 0x29a498: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x29a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a49c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x29a49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a4a0: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x29a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a4a4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x29a4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x29a4a8: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x29a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a4ac: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x29a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a4b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29a4b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29a4b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x29a4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29a4b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29a4bc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x29a4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29a4c0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x29a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x29a4c4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x29a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29a4c8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x29a4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29a4cc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x29a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a4d0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x29a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29a4d4: 0x8e70007c  lw          $s0, 0x7C($s3)
    ctx->pc = 0x29a4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a4d8: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x29A4D8u;
    SET_GPR_U32(ctx, 31, 0x29A4E0u);
    ctx->pc = 0x29A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4D8u;
    // 0x29a4dc: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x29A4D8u, 0x29A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4E0u;
label_29a4e0:
    // 0x29a4e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x29a4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29a4e4: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x29a4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x29a4e8: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x29a4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x29a4ec: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x29a4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x29a4f0: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x29a4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x29a4f4: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x29a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x29a4f8: 0x296302a  slt         $a2, $s4, $s6
    ctx->pc = 0x29a4f8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x29a4fc: 0xa3a50023  sb          $a1, 0x23($sp)
    ctx->pc = 0x29a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x29a500: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x29a500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a504: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x29a504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x29a508: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x29a508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x29a50c: 0xaa020017  swl         $v0, 0x17($s0)
    ctx->pc = 0x29a50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29a510: 0xba020014  swr         $v0, 0x14($s0)
    ctx->pc = 0x29a510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29a514: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x29a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a518: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29a51c: 0xa0520060  sb          $s2, 0x60($v0)
    ctx->pc = 0x29a51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 18));
    // 0x29a520: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x29a520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a524: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x29a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29a528: 0xac670064  sw          $a3, 0x64($v1)
    ctx->pc = 0x29a528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 7));
    // 0x29a52c: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x29a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x29a530: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29a530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29a534: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x29a534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x29a538: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x29a538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x29a53c: 0xaa22006b  swl         $v0, 0x6B($s1)
    ctx->pc = 0x29a53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 107); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29a540: 0xba220068  swr         $v0, 0x68($s1)
    ctx->pc = 0x29a540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 104); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29a544: 0x14c0ffc0  bnez        $a2, . + 4 + (-0x40 << 2)
    ctx->pc = 0x29A544u;
    {
        const bool branch_taken_0x29a544 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A544u;
        // 0x29a548: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a544) {
            ctx->pc = 0x29A448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a448;
        }
    }
    ctx->pc = 0x29A54Cu;
label_29a54c:
    // 0x29a54c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x29a54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a550: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x29a550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29a554: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29a554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a558: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x29a558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29a55c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x29a55cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a560: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x29a560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29a564: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29a564u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a568: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x29a568u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x29a56c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x29a56cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29a570: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x29a570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x29a574: 0x3e00008  jr          $ra
    ctx->pc = 0x29A574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A574u;
        // 0x29a578: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A57Cu;
    // 0x29a57c: 0x0  nop
    ctx->pc = 0x29a57cu;
    // NOP
    ctx->pc = 0x29a580u;
}
