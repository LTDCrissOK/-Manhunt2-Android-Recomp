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

// Function: sub_00313280
// Address: 0x313280 - 0x313670
void sub_00313280_0x313280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313280_0x313280");
#endif

    switch (ctx->pc) {
        case 0x3132d4u: goto label_3132d4;
        case 0x3132e0u: goto label_3132e0;
        case 0x313354u: goto label_313354;
        case 0x313360u: goto label_313360;
        case 0x313378u: goto label_313378;
        case 0x3133c8u: goto label_3133c8;
        case 0x3133d4u: goto label_3133d4;
        case 0x3133e4u: goto label_3133e4;
        case 0x3133ecu: goto label_3133ec;
        case 0x31347cu: goto label_31347c;
        case 0x313484u: goto label_313484;
        case 0x313498u: goto label_313498;
        case 0x3134a0u: goto label_3134a0;
        case 0x3134a8u: goto label_3134a8;
        case 0x3134fcu: goto label_3134fc;
        case 0x313504u: goto label_313504;
        case 0x313510u: goto label_313510;
        case 0x313520u: goto label_313520;
        case 0x313528u: goto label_313528;
        case 0x313530u: goto label_313530;
        case 0x31359cu: goto label_31359c;
        case 0x3135a4u: goto label_3135a4;
        case 0x3135e4u: goto label_3135e4;
        case 0x3135ecu: goto label_3135ec;
        case 0x3135fcu: goto label_3135fc;
        case 0x313604u: goto label_313604;
        case 0x31360cu: goto label_31360c;
        case 0x313614u: goto label_313614;
        default: break;
    }

    ctx->pc = 0x313280u;

    // 0x313280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x313284: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x313284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x313288: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x313288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x31328c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x31328cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313290: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x313290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x313294: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x313294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x313298: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x313298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x31329c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3132a0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x3132a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x3132a4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3132a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3132a8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x3132a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x3132ac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x3132acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x3132b0: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x3132b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3132b4: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x3132b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3132b8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x3132b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3132bc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x3132bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3132c0: 0x13c0002e  beqz        $fp, . + 4 + (0x2E << 2)
    ctx->pc = 0x3132C0u;
    {
        const bool branch_taken_0x3132c0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132C0u;
        // 0x3132c4: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132c0) {
            ctx->pc = 0x31337Cu;
            goto label_31337c;
        }
    }
    ctx->pc = 0x3132C8u;
    // 0x3132c8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3132c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3132cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3132CCu;
    SET_GPR_U32(ctx, 31, 0x3132D4u);
    ctx->pc = 0x3132D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3132CCu;
    // 0x3132d0: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3132CCu, 0x3132D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3132D4u;
label_3132d4:
    // 0x3132d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3132d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132d8: 0xc0c49dc  jal         func_312770
    ctx->pc = 0x3132D8u;
    SET_GPR_U32(ctx, 31, 0x3132E0u);
    ctx->pc = 0x3132DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3132D8u;
    // 0x3132dc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312770u, 0x3132D8u, 0x3132E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3132E0u;
label_3132e0:
    // 0x3132e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3132e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132e4: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3132E4u;
    {
        const bool branch_taken_0x3132e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132E4u;
        // 0x3132e8: 0xae63bcec  sw          $v1, -0x4314($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294950124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132e4) {
            ctx->pc = 0x31337Cu;
            goto label_31337c;
        }
    }
    ctx->pc = 0x3132ECu;
    // 0x3132ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3132ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3132f0: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3132f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x3132f4: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x3132f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x3132f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3132f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3132fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3132fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x313300: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x313300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x313304: 0x8e62bcec  lw          $v0, -0x4314($s3)
    ctx->pc = 0x313304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    // 0x313308: 0x34a5fffc  ori         $a1, $a1, 0xFFFC
    ctx->pc = 0x313308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65532);
    // 0x31330c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31330cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x313310: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x313310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x313314: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x313314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x313318: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x313318u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x31331c: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x31331cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x313320: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x313320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313324: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x313324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313328: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x313328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x31332c: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x31332cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x313330: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x313330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313334: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x313334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313338: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x313338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31333c: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x31333cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313340: 0x8e63bcec  lw          $v1, -0x4314($s3)
    ctx->pc = 0x313340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    // 0x313344: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x313348: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x313348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x31334c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x31334Cu;
    SET_GPR_U32(ctx, 31, 0x313354u);
    ctx->pc = 0x313350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31334Cu;
    // 0x313350: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x31334Cu, 0x313354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313354u;
label_313354:
    // 0x313354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x313354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313358: 0xc0c49dc  jal         func_312770
    ctx->pc = 0x313358u;
    SET_GPR_U32(ctx, 31, 0x313360u);
    ctx->pc = 0x31335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313358u;
    // 0x31335c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312770u, 0x313358u, 0x313360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313360u;
label_313360:
    // 0x313360: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x313360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313364: 0x8e62bcec  lw          $v0, -0x4314($s3)
    ctx->pc = 0x313364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    // 0x313368: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313368u;
    {
        const bool branch_taken_0x313368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313368u;
        // 0x31336c: 0xaea3bcf8  sw          $v1, -0x4308($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294950136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313368) {
            ctx->pc = 0x313384u;
            goto label_313384;
        }
    }
    ctx->pc = 0x313370u;
    // 0x313370: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313370u;
    SET_GPR_U32(ctx, 31, 0x313378u);
    ctx->pc = 0x313374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313370u;
    // 0x313374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313370u, 0x313378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313378u;
label_313378:
    // 0x313378: 0xae60bcec  sw          $zero, -0x4314($s3)
    ctx->pc = 0x313378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950124), GPR_U32(ctx, 0));
label_31337c:
    // 0x31337c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x31337Cu;
    {
        const bool branch_taken_0x31337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31337Cu;
        // 0x313380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31337c) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x313384u;
label_313384:
    // 0x313384: 0xac700028  sw          $s0, 0x28($v1)
    ctx->pc = 0x313384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 16));
    // 0x313388: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x313388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31338c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31338cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x313390: 0x8ea2bcf8  lw          $v0, -0x4308($s5)
    ctx->pc = 0x313390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x313394: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x313394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x313398: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x313398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31339c: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x31339cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x3133a0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3133a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3133a4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3133a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3133a8: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x3133a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3133ac: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x3133acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3133b0: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x3133b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3133b4: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x3133b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3133b8: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x3133b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3133bc: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x3133bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3133c0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3133C0u;
    SET_GPR_U32(ctx, 31, 0x3133C8u);
    ctx->pc = 0x3133C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133C0u;
    // 0x3133c4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3133C0u, 0x3133C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133C8u;
label_3133c8:
    // 0x3133c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3133c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133cc: 0xc0c49dc  jal         func_312770
    ctx->pc = 0x3133CCu;
    SET_GPR_U32(ctx, 31, 0x3133D4u);
    ctx->pc = 0x3133D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133CCu;
    // 0x3133d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312770u, 0x3133CCu, 0x3133D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133D4u;
label_3133d4:
    // 0x3133d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3133D4u;
    {
        const bool branch_taken_0x3133d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3133D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133D4u;
        // 0x3133d8: 0xae22bcf0  sw          $v0, -0x4310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133d4) {
            ctx->pc = 0x3133FCu;
            goto label_3133fc;
        }
    }
    ctx->pc = 0x3133DCu;
    // 0x3133dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3133DCu;
    SET_GPR_U32(ctx, 31, 0x3133E4u);
    ctx->pc = 0x3133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133DCu;
    // 0x3133e0: 0x8e64bcec  lw          $a0, -0x4314($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3133DCu, 0x3133E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133E4u;
label_3133e4:
    // 0x3133e4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3133E4u;
    SET_GPR_U32(ctx, 31, 0x3133ECu);
    ctx->pc = 0x3133E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3133E4u;
    // 0x3133e8: 0x8ea4bcf8  lw          $a0, -0x4308($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3133E4u, 0x3133ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133ECu;
label_3133ec:
    // 0x3133ec: 0xae60bcec  sw          $zero, -0x4314($s3)
    ctx->pc = 0x3133ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950124), GPR_U32(ctx, 0));
    // 0x3133f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3133f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133f4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3133F4u;
    {
        const bool branch_taken_0x3133f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3133F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3133F4u;
        // 0x3133f8: 0xaea0bcf8  sw          $zero, -0x4308($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294950136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3133f4) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x3133FCu;
label_3133fc:
    // 0x3133fc: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x3133fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
    // 0x313400: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x313404: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x313408: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x313408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x31340c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31340cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x313410: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x313410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x313414: 0x24572170  addiu       $s7, $v0, 0x2170
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
    // 0x313418: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x313418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x31341c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31341cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x313420: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x313420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x313424: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x313424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x313428: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x313428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x31342c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313430: 0x8e22bcf0  lw          $v0, -0x4310($s1)
    ctx->pc = 0x313430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
    // 0x313434: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x313434u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x313438: 0xe7b80004  swc1        $f24, 0x4($sp)
    ctx->pc = 0x313438u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31343c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x31343cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x313440: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x313440u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x313444: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x313444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x313448: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x313448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31344c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x31344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313450: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x313450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313454: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x313454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313458: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x313458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31345c: 0xb043001f  sdl         $v1, 0x1F($v0)
    ctx->pc = 0x31345cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313460: 0xb4430018  sdr         $v1, 0x18($v0)
    ctx->pc = 0x313460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313464: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x313468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x313468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31346c: 0x8e22bcf0  lw          $v0, -0x4310($s1)
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
    // 0x313470: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x313470u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x313474: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x313474u;
    SET_GPR_U32(ctx, 31, 0x31347Cu);
    ctx->pc = 0x313478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313474u;
    // 0x313478: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x313474u, 0x31347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31347Cu;
label_31347c:
    // 0x31347c: 0xc0c4808  jal         func_312020
    ctx->pc = 0x31347Cu;
    SET_GPR_U32(ctx, 31, 0x313484u);
    ctx->pc = 0x313480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31347Cu;
    // 0x313480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x31347Cu, 0x313484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313484u;
label_313484:
    // 0x313484: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313488: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x313488u;
    {
        const bool branch_taken_0x313488 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313488u;
        // 0x31348c: 0x8e22bcf0  lw          $v0, -0x4310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313488) {
            ctx->pc = 0x3134BCu;
            goto label_3134bc;
        }
    }
    ctx->pc = 0x313490u;
    // 0x313490: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313490u;
    SET_GPR_U32(ctx, 31, 0x313498u);
    ctx->pc = 0x313494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313490u;
    // 0x313494: 0x8e64bcec  lw          $a0, -0x4314($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313490u, 0x313498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313498u;
label_313498:
    // 0x313498: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313498u;
    SET_GPR_U32(ctx, 31, 0x3134A0u);
    ctx->pc = 0x31349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313498u;
    // 0x31349c: 0x8ea4bcf8  lw          $a0, -0x4308($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313498u, 0x3134A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134A0u;
label_3134a0:
    // 0x3134a0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3134A0u;
    SET_GPR_U32(ctx, 31, 0x3134A8u);
    ctx->pc = 0x3134A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134A0u;
    // 0x3134a4: 0x8e24bcf0  lw          $a0, -0x4310($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3134A0u, 0x3134A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134A8u;
label_3134a8:
    // 0x3134a8: 0xae20bcf0  sw          $zero, -0x4310($s1)
    ctx->pc = 0x3134a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950128), GPR_U32(ctx, 0));
    // 0x3134ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3134acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134b0: 0xaea0bcf8  sw          $zero, -0x4308($s5)
    ctx->pc = 0x3134b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294950136), GPR_U32(ctx, 0));
    // 0x3134b4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3134B4u;
    {
        const bool branch_taken_0x3134b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3134B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134B4u;
        // 0x3134b8: 0xae60bcec  sw          $zero, -0x4314($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294950124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134b4) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x3134BCu;
label_3134bc:
    // 0x3134bc: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x3134bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3134c0: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x3134c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x3134c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3134c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3134c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3134cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3134ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3134d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3134d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134d4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x3134d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x3134d8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3134d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3134dc: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3134dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3134e0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3134e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3134e4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3134e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3134e8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3134e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3134ec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3134ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3134f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3134f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3134f4: 0xc0c48b6  jal         func_3122D8
    ctx->pc = 0x3134F4u;
    SET_GPR_U32(ctx, 31, 0x3134FCu);
    ctx->pc = 0x3134F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134F4u;
    // 0x3134f8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3122D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122D8u, 0x3134F4u, 0x3134FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134FCu;
label_3134fc:
    // 0x3134fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3134FCu;
    SET_GPR_U32(ctx, 31, 0x313504u);
    ctx->pc = 0x313500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134FCu;
    // 0x313500: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3134FCu, 0x313504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313504u;
label_313504:
    // 0x313504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x313504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313508: 0xc0c49dc  jal         func_312770
    ctx->pc = 0x313508u;
    SET_GPR_U32(ctx, 31, 0x313510u);
    ctx->pc = 0x31350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313508u;
    // 0x31350c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312770u, 0x313508u, 0x313510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313510u;
label_313510:
    // 0x313510: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x313510u;
    {
        const bool branch_taken_0x313510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313510u;
        // 0x313514: 0xae42bcf4  sw          $v0, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313510) {
            ctx->pc = 0x313544u;
            goto label_313544;
        }
    }
    ctx->pc = 0x313518u;
    // 0x313518: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313518u;
    SET_GPR_U32(ctx, 31, 0x313520u);
    ctx->pc = 0x31351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313518u;
    // 0x31351c: 0x8e24bcf0  lw          $a0, -0x4310($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313518u, 0x313520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313520u;
label_313520:
    // 0x313520: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313520u;
    SET_GPR_U32(ctx, 31, 0x313528u);
    ctx->pc = 0x313524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313520u;
    // 0x313524: 0x8e64bcec  lw          $a0, -0x4314($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313520u, 0x313528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313528u;
label_313528:
    // 0x313528: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313528u;
    SET_GPR_U32(ctx, 31, 0x313530u);
    ctx->pc = 0x31352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313528u;
    // 0x31352c: 0x8ea4bcf8  lw          $a0, -0x4308($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313528u, 0x313530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313530u;
label_313530:
    // 0x313530: 0xae20bcf0  sw          $zero, -0x4310($s1)
    ctx->pc = 0x313530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950128), GPR_U32(ctx, 0));
    // 0x313534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313538: 0xae60bcec  sw          $zero, -0x4314($s3)
    ctx->pc = 0x313538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950124), GPR_U32(ctx, 0));
    // 0x31353c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x31353Cu;
    {
        const bool branch_taken_0x31353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31353Cu;
        // 0x313540: 0xaea0bcf8  sw          $zero, -0x4308($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294950136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31353c) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x313544u;
label_313544:
    // 0x313544: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x313544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
    // 0x313548: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x313548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31354c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x31354cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x313550: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x313550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x313554: 0x8e42bcf4  lw          $v0, -0x430C($s2)
    ctx->pc = 0x313554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950132)));
    // 0x313558: 0xe7b80004  swc1        $f24, 0x4($sp)
    ctx->pc = 0x313558u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31355c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x31355cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x313560: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x313560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x313564: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x313564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x313568: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x313568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x31356c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x31356cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313570: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x313570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313574: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x313574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313578: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x313578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31357c: 0xb043001f  sdl         $v1, 0x1F($v0)
    ctx->pc = 0x31357cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313580: 0xb4430018  sdr         $v1, 0x18($v0)
    ctx->pc = 0x313580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313584: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x313584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x313588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x313588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31358c: 0x8e42bcf4  lw          $v0, -0x430C($s2)
    ctx->pc = 0x31358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950132)));
    // 0x313590: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x313590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x313594: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x313594u;
    SET_GPR_U32(ctx, 31, 0x31359Cu);
    ctx->pc = 0x313598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313594u;
    // 0x313598: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x313594u, 0x31359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31359Cu;
label_31359c:
    // 0x31359c: 0xc0c4808  jal         func_312020
    ctx->pc = 0x31359Cu;
    SET_GPR_U32(ctx, 31, 0x3135A4u);
    ctx->pc = 0x3135A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31359Cu;
    // 0x3135a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x31359Cu, 0x3135A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135A4u;
label_3135a4:
    // 0x3135a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3135a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135a8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3135A8u;
    {
        const bool branch_taken_0x3135a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3135ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135A8u;
        // 0x3135ac: 0x8e42bcf4  lw          $v0, -0x430C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135a8) {
            ctx->pc = 0x3135F4u;
            goto label_3135f4;
        }
    }
    ctx->pc = 0x3135B0u;
    // 0x3135b0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3135b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3135b4: 0xae90bce4  sw          $s0, -0x431C($s4)
    ctx->pc = 0x3135b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950116), GPR_U32(ctx, 16));
    // 0x3135b8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3135b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3135bc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3135bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3135c0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3135c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3135c4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3135c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3135c8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3135c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3135cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3135ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3135d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3135d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3135d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3135d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3135d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135dc: 0xc0c48b6  jal         func_3122D8
    ctx->pc = 0x3135DCu;
    SET_GPR_U32(ctx, 31, 0x3135E4u);
    ctx->pc = 0x3135E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135DCu;
    // 0x3135e0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3122D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122D8u, 0x3135DCu, 0x3135E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135E4u;
label_3135e4:
    // 0x3135e4: 0xc0c4d9c  jal         func_313670
    ctx->pc = 0x3135E4u;
    SET_GPR_U32(ctx, 31, 0x3135ECu);
    ctx->pc = 0x3135E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135E4u;
    // 0x3135e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313670u, 0x3135E4u, 0x3135ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135ECu;
label_3135ec:
    // 0x3135ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3135ECu;
    {
        const bool branch_taken_0x3135ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3135F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135ECu;
        // 0x3135f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135ec) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x3135F4u;
label_3135f4:
    // 0x3135f4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3135F4u;
    SET_GPR_U32(ctx, 31, 0x3135FCu);
    ctx->pc = 0x3135F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135F4u;
    // 0x3135f8: 0x8e64bcec  lw          $a0, -0x4314($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3135F4u, 0x3135FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135FCu;
label_3135fc:
    // 0x3135fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3135FCu;
    SET_GPR_U32(ctx, 31, 0x313604u);
    ctx->pc = 0x313600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135FCu;
    // 0x313600: 0x8ea4bcf8  lw          $a0, -0x4308($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3135FCu, 0x313604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313604u;
label_313604:
    // 0x313604: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313604u;
    SET_GPR_U32(ctx, 31, 0x31360Cu);
    ctx->pc = 0x313608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313604u;
    // 0x313608: 0x8e24bcf0  lw          $a0, -0x4310($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313604u, 0x31360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31360Cu;
label_31360c:
    // 0x31360c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x31360Cu;
    SET_GPR_U32(ctx, 31, 0x313614u);
    ctx->pc = 0x313610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31360Cu;
    // 0x313610: 0x8e44bcf4  lw          $a0, -0x430C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x31360Cu, 0x313614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313614u;
label_313614:
    // 0x313614: 0xae20bcf0  sw          $zero, -0x4310($s1)
    ctx->pc = 0x313614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950128), GPR_U32(ctx, 0));
    // 0x313618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31361c: 0xaea0bcf8  sw          $zero, -0x4308($s5)
    ctx->pc = 0x31361cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294950136), GPR_U32(ctx, 0));
    // 0x313620: 0xae60bcec  sw          $zero, -0x4314($s3)
    ctx->pc = 0x313620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950124), GPR_U32(ctx, 0));
    // 0x313624: 0xae40bcf4  sw          $zero, -0x430C($s2)
    ctx->pc = 0x313624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 0));
label_313628:
    // 0x313628: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x313628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31362c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x31362cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313630: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x313630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313634: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x313634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x313638: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x313638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31363c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x31363cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x313640: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x313640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313644: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x313644u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x313648: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x313648u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31364c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x31364cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x313650: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x313650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x313654: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x313654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x313658: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x313658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31365c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x31365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x313660: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x313660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313664: 0x3e00008  jr          $ra
    ctx->pc = 0x313664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313664u;
        // 0x313668: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31366Cu;
    // 0x31366c: 0x0  nop
    ctx->pc = 0x31366cu;
    // NOP
    ctx->pc = 0x313670u;
}
