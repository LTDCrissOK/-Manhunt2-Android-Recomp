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

// Function: sub_002CD458
// Address: 0x2cd458 - 0x2cd800
void sub_002CD458_0x2cd458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD458_0x2cd458");
#endif

    switch (ctx->pc) {
        case 0x2cd4acu: goto label_2cd4ac;
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4c0u: goto label_2cd4c0;
        case 0x2cd4f8u: goto label_2cd4f8;
        case 0x2cd508u: goto label_2cd508;
        case 0x2cd510u: goto label_2cd510;
        case 0x2cd524u: goto label_2cd524;
        case 0x2cd530u: goto label_2cd530;
        case 0x2cd55cu: goto label_2cd55c;
        case 0x2cd570u: goto label_2cd570;
        case 0x2cd58cu: goto label_2cd58c;
        case 0x2cd5dcu: goto label_2cd5dc;
        case 0x2cd610u: goto label_2cd610;
        case 0x2cd630u: goto label_2cd630;
        case 0x2cd65cu: goto label_2cd65c;
        case 0x2cd698u: goto label_2cd698;
        case 0x2cd6c4u: goto label_2cd6c4;
        case 0x2cd6d0u: goto label_2cd6d0;
        case 0x2cd6f0u: goto label_2cd6f0;
        case 0x2cd710u: goto label_2cd710;
        case 0x2cd73cu: goto label_2cd73c;
        case 0x2cd748u: goto label_2cd748;
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd780u: goto label_2cd780;
        case 0x2cd788u: goto label_2cd788;
        case 0x2cd79cu: goto label_2cd79c;
        case 0x2cd7b0u: goto label_2cd7b0;
        case 0x2cd7c4u: goto label_2cd7c4;
        case 0x2cd7d8u: goto label_2cd7d8;
        default: break;
    }

    ctx->pc = 0x2cd458u;

    // 0x2cd458: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2cd458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2cd45c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cd460: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x2cd460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x2cd464: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2cd464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2cd468: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2cd468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2cd46c: 0x34a5e000  ori         $a1, $a1, 0xE000
    ctx->pc = 0x2cd46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57344);
    // 0x2cd470: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2cd470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2cd474: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cd474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cd478: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2cd478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2cd47c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2cd47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd480: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x2cd480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x2cd484: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x2cd484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x2cd488: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2cd488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2cd48c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd490: 0xac40b4a0  sw          $zero, -0x4B60($v0)
    ctx->pc = 0x2cd490u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB4A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB4A0u, _value); } while (0);
    // 0x2cd494: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cd494u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u)); // MMIO: 0x1000e000
    // 0x2cd498: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cd498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cd49c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cd49cu;
    runtime->Store32(rdram, ctx, 0x1000E000u, GPR_U32(ctx, 2)); // MMIO: 0x1000e000
    // 0x2cd4a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2cd4a0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x2cd4a4: 0xc082ecc  jal         func_20BB30
    ctx->pc = 0x2CD4A4u;
    SET_GPR_U32(ctx, 31, 0x2CD4ACu);
    ctx->pc = 0x2CD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4A4u;
    // 0x2cd4a8: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB30u, 0x2CD4A4u, 0x2CD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4ACu;
label_2cd4ac:
    // 0x2cd4ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CD4ACu;
    {
        const bool branch_taken_0x2cd4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4ACu;
        // 0x2cd4b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4ac) {
            ctx->pc = 0x2CD4E0u;
            goto label_2cd4e0;
        }
    }
    ctx->pc = 0x2CD4B4u;
    // 0x2cd4b4: 0x0  nop
    ctx->pc = 0x2cd4b4u;
    // NOP
label_2cd4b8:
    // 0x2cd4b8: 0xc082ecc  jal         func_20BB30
    ctx->pc = 0x2CD4B8u;
    SET_GPR_U32(ctx, 31, 0x2CD4C0u);
    ctx->pc = 0x20BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB30u, 0x2CD4B8u, 0x2CD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4C0u;
label_2cd4c0:
    // 0x2cd4c0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2cd4c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2cd4c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cd4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cd4c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cd4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd4cc: 0x0  nop
    ctx->pc = 0x2cd4ccu;
    // NOP
    // 0x2cd4d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd4d4: 0x0  nop
    ctx->pc = 0x2cd4d4u;
    // NOP
    // 0x2cd4d8: 0x450100c0  bc1t        . + 4 + (0xC0 << 2)
    ctx->pc = 0x2CD4D8u;
    {
        const bool branch_taken_0x2cd4d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4D8u;
        // 0x2cd4dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4d8) {
            ctx->pc = 0x2CD7DCu;
            goto label_2cd7dc;
        }
    }
    ctx->pc = 0x2CD4E0u;
label_2cd4e0:
    // 0x2cd4e0: 0x8e42b4a8  lw          $v0, -0x4B58($s2)
    ctx->pc = 0x2cd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd4e4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd4e8: 0x34842f48  ori         $a0, $a0, 0x2F48
    ctx->pc = 0x2cd4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12104);
    // 0x2cd4ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cd4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f0: 0xc0b37dc  jal         func_2CDF70
    ctx->pc = 0x2CD4F0u;
    SET_GPR_U32(ctx, 31, 0x2CD4F8u);
    ctx->pc = 0x2CD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4F0u;
    // 0x2cd4f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDF70u, 0x2CD4F0u, 0x2CD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4F8u;
label_2cd4f8:
    // 0x2cd4f8: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CD4F8u;
    {
        const bool branch_taken_0x2cd4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4f8) {
            ctx->pc = 0x2CD4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd4b8;
        }
    }
    ctx->pc = 0x2CD500u;
    // 0x2cd500: 0xc0b38a8  jal         func_2CE2A0
    ctx->pc = 0x2CD500u;
    SET_GPR_U32(ctx, 31, 0x2CD508u);
    ctx->pc = 0x2CE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE2A0u, 0x2CD500u, 0x2CD508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD508u;
label_2cd508:
    // 0x2cd508: 0xc0a21cc  jal         func_288730
    ctx->pc = 0x2CD508u;
    SET_GPR_U32(ctx, 31, 0x2CD510u);
    ctx->pc = 0x288730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288730u, 0x2CD508u, 0x2CD510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD510u;
label_2cd510:
    // 0x2cd510: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CD510u;
    {
        const bool branch_taken_0x2cd510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD510u;
        // 0x2cd514: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd510) {
            ctx->pc = 0x2CD570u;
            goto label_2cd570;
        }
    }
    ctx->pc = 0x2CD518u;
    // 0x2cd518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cd518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd51c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2CD51Cu;
    SET_GPR_U32(ctx, 31, 0x2CD524u);
    ctx->pc = 0x2CD520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD51Cu;
    // 0x2cd520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2CD51Cu, 0x2CD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD524u;
label_2cd524:
    // 0x2cd524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd528: 0xc0f0aaa  jal         func_3C2AA8
    ctx->pc = 0x2CD528u;
    SET_GPR_U32(ctx, 31, 0x2CD530u);
    ctx->pc = 0x2CD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD528u;
    // 0x2cd52c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AA8u, 0x2CD528u, 0x2CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD530u;
label_2cd530:
    // 0x2cd530: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2cd534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd538: 0x24690a28  addiu       $t1, $v1, 0xA28
    ctx->pc = 0x2cd538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2600));
    // 0x2cd53c: 0x89260003  lwl         $a2, 0x3($t1)
    ctx->pc = 0x2cd53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2cd540: 0x99260000  lwr         $a2, 0x0($t1)
    ctx->pc = 0x2cd540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2cd544: 0x81270004  lb          $a3, 0x4($t1)
    ctx->pc = 0x2cd544u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x470A2Cu));
    // 0x2cd548: 0xa8460003  swl         $a2, 0x3($v0)
    ctx->pc = 0x2cd548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2cd54c: 0xb8460000  swr         $a2, 0x0($v0)
    ctx->pc = 0x2cd54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2cd550: 0xa0470004  sb          $a3, 0x4($v0)
    ctx->pc = 0x2cd550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cd554: 0xc0f0aaa  jal         func_3C2AA8
    ctx->pc = 0x2CD554u;
    SET_GPR_U32(ctx, 31, 0x2CD55Cu);
    ctx->pc = 0x2CD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD554u;
    // 0x2cd558: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AA8u, 0x2CD554u, 0x2CD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD55Cu;
label_2cd55c:
    // 0x2cd55c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD55Cu;
    {
        const bool branch_taken_0x2cd55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD55Cu;
        // 0x2cd560: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd55c) {
            ctx->pc = 0x2CD568u;
            goto label_2cd568;
        }
    }
    ctx->pc = 0x2CD564u;
    // 0x2cd564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd568:
    // 0x2cd568: 0xc0b38e2  jal         func_2CE388
    ctx->pc = 0x2CD568u;
    SET_GPR_U32(ctx, 31, 0x2CD570u);
    ctx->pc = 0x2CD56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD568u;
    // 0x2cd56c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE388u, 0x2CD568u, 0x2CD570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD570u;
label_2cd570:
    // 0x2cd570: 0x8e44b4a8  lw          $a0, -0x4B58($s2)
    ctx->pc = 0x2cd570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd574: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2cd574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2cd578: 0x3610ff00  ori         $s0, $s0, 0xFF00
    ctx->pc = 0x2cd578u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65280);
    // 0x2cd57c: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x2cd57cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x2cd580: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2cd580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cd584: 0xc0b379a  jal         func_2CDE68
    ctx->pc = 0x2CD584u;
    SET_GPR_U32(ctx, 31, 0x2CD58Cu);
    ctx->pc = 0x2CD588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD584u;
    // 0x2cd588: 0x36312f80  ori         $s1, $s1, 0x2F80 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12160);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE68u, 0x2CD584u, 0x2CD58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD58Cu;
label_2cd58c:
    // 0x2cd58c: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x2cd58cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
    // 0x2cd590: 0x8e44b4a8  lw          $a0, -0x4B58($s2)
    ctx->pc = 0x2cd590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd594: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2cd594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2cd598: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x2cd598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x2cd59c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2cd59cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2cd5a0: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x2cd5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
    // 0x2cd5a4: 0x34a55500  ori         $a1, $a1, 0x5500
    ctx->pc = 0x2cd5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21760);
    // 0x2cd5a8: 0x34e7bf40  ori         $a3, $a3, 0xBF40
    ctx->pc = 0x2cd5a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)48960);
    // 0x2cd5ac: 0x350844c0  ori         $t0, $t0, 0x44C0
    ctx->pc = 0x2cd5acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)17600);
    // 0x2cd5b0: 0x354aff40  ori         $t2, $t2, 0xFF40
    ctx->pc = 0x2cd5b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65344);
    // 0x2cd5b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2cd5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cd5b8: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x2cd5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2cd5bc: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2cd5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2cd5c0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x2cd5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2cd5c4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x2cd5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x2cd5c8: 0x34c6a200  ori         $a2, $a2, 0xA200
    ctx->pc = 0x2cd5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)41472);
    // 0x2cd5cc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2cd5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2cd5d0: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2cd5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cd5d4: 0xc0b3ec4  jal         func_2CFB10
    ctx->pc = 0x2CD5D4u;
    SET_GPR_U32(ctx, 31, 0x2CD5DCu);
    ctx->pc = 0x2CD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5D4u;
    // 0x2cd5d8: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB10u, 0x2CD5D4u, 0x2CD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5DCu;
label_2cd5dc:
    // 0x2cd5dc: 0x8e46b4a8  lw          $a2, -0x4B58($s2)
    ctx->pc = 0x2cd5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd5e0: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x2cd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x2cd5e4: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cd5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cd5e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD5E8u;
    {
        const bool branch_taken_0x2cd5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5E8u;
        // 0x2cd5ec: 0x3c05005d  lui         $a1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5e8) {
            ctx->pc = 0x2CD610u;
            goto label_2cd610;
        }
    }
    ctx->pc = 0x2CD5F0u;
    // 0x2cd5f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd5f4: 0x34843038  ori         $a0, $a0, 0x3038
    ctx->pc = 0x2cd5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12344);
    // 0x2cd5f8: 0x34a5ff40  ori         $a1, $a1, 0xFF40
    ctx->pc = 0x2cd5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65344);
    // 0x2cd5fc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2cd5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2cd600: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2cd600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2cd604: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x2cd604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2cd608: 0xc0b2b28  jal         func_2CACA0
    ctx->pc = 0x2CD608u;
    SET_GPR_U32(ctx, 31, 0x2CD610u);
    ctx->pc = 0x2CD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD608u;
    // 0x2cd60c: 0x24076000  addiu       $a3, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACA0u, 0x2CD608u, 0x2CD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD610u;
label_2cd610:
    // 0x2cd610: 0x8e44b4a8  lw          $a0, -0x4B58($s2)
    ctx->pc = 0x2cd610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd614: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x2cd614u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x2cd618: 0x24e7db10  addiu       $a3, $a3, -0x24F0
    ctx->pc = 0x2cd618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957840));
    // 0x2cd61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd620: 0x904021  addu        $t0, $a0, $s0
    ctx->pc = 0x2cd620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cd624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd628: 0xc0b3f06  jal         func_2CFC18
    ctx->pc = 0x2CD628u;
    SET_GPR_U32(ctx, 31, 0x2CD630u);
    ctx->pc = 0x2CD62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD628u;
    // 0x2cd62c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC18u, 0x2CD628u, 0x2CD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD630u;
label_2cd630:
    // 0x2cd630: 0x8e44b4a8  lw          $a0, -0x4B58($s2)
    ctx->pc = 0x2cd630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd634: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2cd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2cd638: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cd638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cd63c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD63Cu;
    {
        const bool branch_taken_0x2cd63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD63Cu;
        // 0x2cd640: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd63c) {
            ctx->pc = 0x2CD65Cu;
            goto label_2cd65c;
        }
    }
    ctx->pc = 0x2CD644u;
    // 0x2cd644: 0x904021  addu        $t0, $a0, $s0
    ctx->pc = 0x2cd644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cd648: 0x24e7dc50  addiu       $a3, $a3, -0x23B0
    ctx->pc = 0x2cd648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958160));
    // 0x2cd64c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2cd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2cd650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cd650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd654: 0xc0b3f06  jal         func_2CFC18
    ctx->pc = 0x2CD654u;
    SET_GPR_U32(ctx, 31, 0x2CD65Cu);
    ctx->pc = 0x2CD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD654u;
    // 0x2cd658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC18u, 0x2CD654u, 0x2CD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD65Cu;
label_2cd65c:
    // 0x2cd65c: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd660: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cd660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cd664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd668: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd66c: 0x24650840  addiu       $a1, $v1, 0x840
    ctx->pc = 0x2cd66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x2cd670: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x2cd670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x2cd674: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2cd674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2cd678: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cd678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cd67c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2cd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2cd680: 0x34c6a840  ori         $a2, $a2, 0xA840
    ctx->pc = 0x2cd680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43072);
    // 0x2cd684: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2cd684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd688: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cd68c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cd690: 0xc0b40fa  jal         func_2D03E8
    ctx->pc = 0x2CD690u;
    SET_GPR_U32(ctx, 31, 0x2CD698u);
    ctx->pc = 0x2CD694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD690u;
    // 0x2cd694: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D03E8u, 0x2CD690u, 0x2CD698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD698u;
label_2cd698:
    // 0x2cd698: 0x8e44b4a8  lw          $a0, -0x4B58($s2)
    ctx->pc = 0x2cd698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd69c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cd6a0: 0x3442f700  ori         $v0, $v0, 0xF700
    ctx->pc = 0x2cd6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63232);
    // 0x2cd6a4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x2cd6a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd6ac: 0x2463d958  addiu       $v1, $v1, -0x26A8
    ctx->pc = 0x2cd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957400));
    // 0x2cd6b0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x2cd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2cd6b4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2cd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2cd6b8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2cd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2cd6bc: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x2CD6BCu;
    SET_GPR_U32(ctx, 31, 0x2CD6C4u);
    ctx->pc = 0x2CD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6BCu;
    // 0x2cd6c0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x2CD6BCu, 0x2CD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6C4u;
label_2cd6c4:
    // 0x2cd6c4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2cd6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2cd6c8: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x2CD6C8u;
    SET_GPR_U32(ctx, 31, 0x2CD6D0u);
    ctx->pc = 0x2CD6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6C8u;
    // 0x2cd6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x2CD6C8u, 0x2CD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6D0u;
label_2cd6d0:
    // 0x2cd6d0: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd6d4: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x2cd6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x2cd6d8: 0x2610aa70  addiu       $s0, $s0, -0x5590
    ctx->pc = 0x2cd6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945392));
    // 0x2cd6dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cd6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6e0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2cd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2cd6e4: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2cd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x2cd6e8: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x2CD6E8u;
    SET_GPR_U32(ctx, 31, 0x2CD6F0u);
    ctx->pc = 0x2CD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6E8u;
    // 0x2cd6ec: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x2CD6E8u, 0x2CD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6F0u;
label_2cd6f0:
    // 0x2cd6f0: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd6f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd6fc: 0xac622f44  sw          $v0, 0x2F44($v1)
    ctx->pc = 0x2cd6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12100), GPR_U32(ctx, 2));
    // 0x2cd700: 0x8e42b4a8  lw          $v0, -0x4B58($s2)
    ctx->pc = 0x2cd700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd704: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2cd704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cd708: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x2CD708u;
    SET_GPR_U32(ctx, 31, 0x2CD710u);
    ctx->pc = 0x2CD70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD708u;
    // 0x2cd70c: 0x8c442f44  lw          $a0, 0x2F44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x2CD708u, 0x2CD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD710u;
label_2cd710:
    // 0x2cd710: 0x8e44b4a8  lw          $a0, -0x4B58($s2)
    ctx->pc = 0x2cd710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd714: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2cd718: 0x3442bf40  ori         $v0, $v0, 0xBF40
    ctx->pc = 0x2cd718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48960);
    // 0x2cd71c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2cd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x2cd720: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cd720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd724: 0x2463fe68  addiu       $v1, $v1, -0x198
    ctx->pc = 0x2cd724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966888));
    // 0x2cd728: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2cd728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2cd72c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2cd72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2cd730: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2cd730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2cd734: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x2CD734u;
    SET_GPR_U32(ctx, 31, 0x2CD73Cu);
    ctx->pc = 0x2CD738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD734u;
    // 0x2cd738: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x2CD734u, 0x2CD73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD73Cu;
label_2cd73c:
    // 0x2cd73c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2cd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2cd740: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x2CD740u;
    SET_GPR_U32(ctx, 31, 0x2CD748u);
    ctx->pc = 0x2CD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD740u;
    // 0x2cd744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x2CD740u, 0x2CD748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD748u;
label_2cd748:
    // 0x2cd748: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2cd74c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cd74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd750: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2cd750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x2cd754: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2cd754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2cd758: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x2CD758u;
    SET_GPR_U32(ctx, 31, 0x2CD760u);
    ctx->pc = 0x2CD75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD758u;
    // 0x2cd75c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x2CD758u, 0x2CD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD760u;
label_2cd760:
    // 0x2cd760: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cd760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd764: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd768: 0xac622f40  sw          $v0, 0x2F40($v1)
    ctx->pc = 0x2cd768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12096), GPR_U32(ctx, 2));
    // 0x2cd76c: 0x8e45b4a8  lw          $a1, -0x4B58($s2)
    ctx->pc = 0x2cd76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd770: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2cd774: 0x8c442f40  lw          $a0, 0x2F40($v0)
    ctx->pc = 0x2cd774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12096)));
    // 0x2cd778: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x2CD778u;
    SET_GPR_U32(ctx, 31, 0x2CD780u);
    ctx->pc = 0x2CD77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD778u;
    // 0x2cd77c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x2CD778u, 0x2CD780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD780u;
label_2cd780:
    // 0x2cd780: 0xc0dcaf8  jal         func_372BE0
    ctx->pc = 0x2CD780u;
    SET_GPR_U32(ctx, 31, 0x2CD788u);
    ctx->pc = 0x372BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372BE0u, 0x2CD780u, 0x2CD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD788u;
label_2cd788:
    // 0x2cd788: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cd788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cd78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd790: 0x24a5bc68  addiu       $a1, $a1, -0x4398
    ctx->pc = 0x2cd790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949992));
    // 0x2cd794: 0xc0f25a0  jal         func_3C9680
    ctx->pc = 0x2CD794u;
    SET_GPR_U32(ctx, 31, 0x2CD79Cu);
    ctx->pc = 0x2CD798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD794u;
    // 0x2cd798: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9680u, 0x2CD794u, 0x2CD79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD79Cu;
label_2cd79c:
    // 0x2cd79c: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cd79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd7a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd7a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd7a8: 0xc0f2904  jal         func_3CA410
    ctx->pc = 0x2CD7A8u;
    SET_GPR_U32(ctx, 31, 0x2CD7B0u);
    ctx->pc = 0x2CD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7A8u;
    // 0x2cd7ac: 0xac623034  sw          $v0, 0x3034($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA410u, 0x2CD7A8u, 0x2CD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7B0u;
label_2cd7b0:
    // 0x2cd7b0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cd7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cd7b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd7b8: 0x24a5be90  addiu       $a1, $a1, -0x4170
    ctx->pc = 0x2cd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950544));
    // 0x2cd7bc: 0xc0f25ac  jal         func_3C96B0
    ctx->pc = 0x2CD7BCu;
    SET_GPR_U32(ctx, 31, 0x2CD7C4u);
    ctx->pc = 0x2CD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7BCu;
    // 0x2cd7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96B0u, 0x2CD7BCu, 0x2CD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7C4u;
label_2cd7c4:
    // 0x2cd7c4: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cd7c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd7cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd7d0: 0xc0f2938  jal         func_3CA4E0
    ctx->pc = 0x2CD7D0u;
    SET_GPR_U32(ctx, 31, 0x2CD7D8u);
    ctx->pc = 0x2CD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7D0u;
    // 0x2cd7d4: 0xac623030  sw          $v0, 0x3030($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA4E0u, 0x2CD7D0u, 0x2CD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7D8u;
label_2cd7d8:
    // 0x2cd7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd7dc:
    // 0x2cd7dc: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2cd7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2cd7e0: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2cd7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2cd7e4: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2cd7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2cd7e8: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x2cd7e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2cd7ec: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2cd7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2cd7f0: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2cd7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7F4u;
        // 0x2cd7f8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD7FCu;
    // 0x2cd7fc: 0x0  nop
    ctx->pc = 0x2cd7fcu;
    // NOP
    ctx->pc = 0x2cd800u;
}
