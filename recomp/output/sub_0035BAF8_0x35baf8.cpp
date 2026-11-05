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

// Function: sub_0035BAF8
// Address: 0x35baf8 - 0x35bdb8
void sub_0035BAF8_0x35baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BAF8_0x35baf8");
#endif

    switch (ctx->pc) {
        case 0x35bb48u: goto label_35bb48;
        case 0x35bbe0u: goto label_35bbe0;
        case 0x35bc00u: goto label_35bc00;
        case 0x35bc10u: goto label_35bc10;
        case 0x35bc7cu: goto label_35bc7c;
        case 0x35bcd0u: goto label_35bcd0;
        case 0x35bce0u: goto label_35bce0;
        case 0x35bd48u: goto label_35bd48;
        case 0x35bd50u: goto label_35bd50;
        case 0x35bd74u: goto label_35bd74;
        default: break;
    }

    ctx->pc = 0x35baf8u;

    // 0x35baf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35bafc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x35bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x35bb00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35bb04: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x35bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x35bb08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35bb0c: 0x2475d5c0  addiu       $s5, $v1, -0x2A40
    ctx->pc = 0x35bb0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x35bb10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35bb14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35bb18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35bb1c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x35bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x35bb20: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x35bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x35bb24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35bb28: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x35bb28u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5BD5C4u));
    // 0x35bb2c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x35bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BD5CCu));
    // 0x35bb30: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x35BB30u;
    {
        const bool branch_taken_0x35bb30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB30u;
        // 0x35bb34: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb30) {
            ctx->pc = 0x35BB98u;
            goto label_35bb98;
        }
    }
    ctx->pc = 0x35BB38u;
    // 0x35bb38: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35BB38u;
    {
        const bool branch_taken_0x35bb38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB38u;
        // 0x35bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb38) {
            ctx->pc = 0x35BB88u;
            goto label_35bb88;
        }
    }
    ctx->pc = 0x35BB40u;
    // 0x35bb40: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35BB40u;
    SET_GPR_U32(ctx, 31, 0x35BB48u);
    ctx->pc = 0x35BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB40u;
    // 0x35bb44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35BB40u, 0x35BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB48u;
label_35bb48:
    // 0x35bb48: 0x6a62000f  ldl         $v0, 0xF($s3)
    ctx->pc = 0x35bb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35bb4c: 0x6e620008  ldr         $v0, 0x8($s3)
    ctx->pc = 0x35bb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35bb50: 0x6a630017  ldl         $v1, 0x17($s3)
    ctx->pc = 0x35bb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35bb54: 0x6e630010  ldr         $v1, 0x10($s3)
    ctx->pc = 0x35bb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35bb58: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x35bb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bb5c: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x35bb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bb60: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x35bb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bb64: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x35bb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bb68: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x35bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bb6c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x35bb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x35bb70: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x35bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bb74: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x35bb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x35bb78: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x35bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bb7c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x35bb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x35bb80: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x35bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bb84: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x35bb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_35bb88:
    // 0x35bb88: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x35bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x35bb8c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x35bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x35bb90: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x35BB90u;
    {
        const bool branch_taken_0x35bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB90u;
        // 0x35bb94: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb90) {
            ctx->pc = 0x35BD8Cu;
            goto label_35bd8c;
        }
    }
    ctx->pc = 0x35BB98u;
label_35bb98:
    // 0x35bb98: 0x8c62d5c0  lw          $v0, -0x2A40($v1)
    ctx->pc = 0x35bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956480)));
    // 0x35bb9c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x35bb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bba0: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x35bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x35bba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bba8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35bba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35bbac: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x35bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x35bbb0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x35bbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35bbb4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x35bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x35bbb8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x35bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x35bbbc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x35bbbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x35bbc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35bbc4: 0x3a2180b  movn        $v1, $sp, $v0
    ctx->pc = 0x35bbc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 29));
    // 0x35bbc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35bbcc: 0x44b821  addu        $s7, $v0, $a0
    ctx->pc = 0x35bbccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35bbd0: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BBD0u;
    {
        const bool branch_taken_0x35bbd0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BBD0u;
        // 0x35bbd4: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bbd0) {
            ctx->pc = 0x35BBE8u;
            goto label_35bbe8;
        }
    }
    ctx->pc = 0x35BBD8u;
    // 0x35bbd8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x35BBD8u;
    SET_GPR_U32(ctx, 31, 0x35BBE0u);
    ctx->pc = 0x35BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BBD8u;
    // 0x35bbdc: 0x2e42018  mult        $a0, $s7, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x35BBD8u, 0x35BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BBE0u;
label_35bbe0:
    // 0x35bbe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35BBE0u;
    {
        const bool branch_taken_0x35bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BBE0u;
        // 0x35bbe4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bbe0) {
            ctx->pc = 0x35BBF0u;
            goto label_35bbf0;
        }
    }
    ctx->pc = 0x35BBE8u;
label_35bbe8:
    // 0x35bbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35bbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35bbf0:
    // 0x35bbf0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x35bbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35bbf4: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x35bbf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbf8: 0x12140018  beq         $s0, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x35BBF8u;
    {
        const bool branch_taken_0x35bbf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x35BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BBF8u;
        // 0x35bbfc: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bbf8) {
            ctx->pc = 0x35BC5Cu;
            goto label_35bc5c;
        }
    }
    ctx->pc = 0x35BC00u;
label_35bc00:
    // 0x35bc00: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x35BC00u;
    {
        const bool branch_taken_0x35bc00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC00u;
        // 0x35bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc00) {
            ctx->pc = 0x35BC50u;
            goto label_35bc50;
        }
    }
    ctx->pc = 0x35BC08u;
    // 0x35bc08: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35BC08u;
    SET_GPR_U32(ctx, 31, 0x35BC10u);
    ctx->pc = 0x35BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC08u;
    // 0x35bc0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35BC08u, 0x35BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC10u;
label_35bc10:
    // 0x35bc10: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x35bc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35bc14: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x35bc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35bc18: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x35bc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35bc1c: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x35bc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35bc20: 0xb222000f  sdl         $v0, 0xF($s1)
    ctx->pc = 0x35bc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc24: 0xb6220008  sdr         $v0, 0x8($s1)
    ctx->pc = 0x35bc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc28: 0xb2230017  sdl         $v1, 0x17($s1)
    ctx->pc = 0x35bc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc2c: 0xb6230010  sdr         $v1, 0x10($s1)
    ctx->pc = 0x35bc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc30: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x35bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bc34: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x35bc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x35bc38: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x35bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bc3c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x35bc3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x35bc40: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x35bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bc44: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x35bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x35bc48: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x35bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bc4c: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x35bc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_35bc50:
    // 0x35bc50: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x35bc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x35bc54: 0x1614ffea  bne         $s0, $s4, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35BC54u;
    {
        const bool branch_taken_0x35bc54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x35BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC54u;
        // 0x35bc58: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc54) {
            ctx->pc = 0x35BC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bc00;
        }
    }
    ctx->pc = 0x35BC5Cu;
label_35bc5c:
    // 0x35bc5c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35bc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bc64: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35BC64u;
    {
        const bool branch_taken_0x35bc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC64u;
        // 0x35bc68: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc64) {
            ctx->pc = 0x35BCC4u;
            goto label_35bcc4;
        }
    }
    ctx->pc = 0x35BC6Cu;
    // 0x35bc6c: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x35BC6Cu;
    {
        const bool branch_taken_0x35bc6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC6Cu;
        // 0x35bc70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc6c) {
            ctx->pc = 0x35BCBCu;
            goto label_35bcbc;
        }
    }
    ctx->pc = 0x35BC74u;
    // 0x35bc74: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35BC74u;
    SET_GPR_U32(ctx, 31, 0x35BC7Cu);
    ctx->pc = 0x35BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC74u;
    // 0x35bc78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35BC74u, 0x35BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC7Cu;
label_35bc7c:
    // 0x35bc7c: 0x6a62000f  ldl         $v0, 0xF($s3)
    ctx->pc = 0x35bc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35bc80: 0x6e620008  ldr         $v0, 0x8($s3)
    ctx->pc = 0x35bc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35bc84: 0x6a630017  ldl         $v1, 0x17($s3)
    ctx->pc = 0x35bc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35bc88: 0x6e630010  ldr         $v1, 0x10($s3)
    ctx->pc = 0x35bc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35bc8c: 0xb242000f  sdl         $v0, 0xF($s2)
    ctx->pc = 0x35bc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc90: 0xb6420008  sdr         $v0, 0x8($s2)
    ctx->pc = 0x35bc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc94: 0xb2430017  sdl         $v1, 0x17($s2)
    ctx->pc = 0x35bc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc98: 0xb6430010  sdr         $v1, 0x10($s2)
    ctx->pc = 0x35bc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc9c: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x35bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bca0: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x35bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x35bca4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x35bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bca8: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x35bca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x35bcac: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x35bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bcb0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x35bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x35bcb4: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x35bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bcb8: 0xe6410024  swc1        $f1, 0x24($s2)
    ctx->pc = 0x35bcb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_35bcbc:
    // 0x35bcbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x35BCBCu;
    {
        const bool branch_taken_0x35bcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCBCu;
        // 0x35bcc0: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcbc) {
            ctx->pc = 0x35BD30u;
            goto label_35bd30;
        }
    }
    ctx->pc = 0x35BCC4u;
label_35bcc4:
    // 0x35bcc4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x35bcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bcc8: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35BCC8u;
    {
        const bool branch_taken_0x35bcc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCC8u;
        // 0x35bccc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcc8) {
            ctx->pc = 0x35BD2Cu;
            goto label_35bd2c;
        }
    }
    ctx->pc = 0x35BCD0u;
label_35bcd0:
    // 0x35bcd0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35BCD0u;
    {
        const bool branch_taken_0x35bcd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCD0u;
        // 0x35bcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcd0) {
            ctx->pc = 0x35BD20u;
            goto label_35bd20;
        }
    }
    ctx->pc = 0x35BCD8u;
    // 0x35bcd8: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35BCD8u;
    SET_GPR_U32(ctx, 31, 0x35BCE0u);
    ctx->pc = 0x35BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BCD8u;
    // 0x35bcdc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35BCD8u, 0x35BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BCE0u;
label_35bce0:
    // 0x35bce0: 0x6a62000f  ldl         $v0, 0xF($s3)
    ctx->pc = 0x35bce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35bce4: 0x6e620008  ldr         $v0, 0x8($s3)
    ctx->pc = 0x35bce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35bce8: 0x6a630017  ldl         $v1, 0x17($s3)
    ctx->pc = 0x35bce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35bcec: 0x6e630010  ldr         $v1, 0x10($s3)
    ctx->pc = 0x35bcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35bcf0: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x35bcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bcf4: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x35bcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bcf8: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x35bcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bcfc: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x35bcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bd00: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x35bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bd04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x35bd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x35bd08: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x35bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bd0c: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x35bd0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x35bd10: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x35bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bd14: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x35bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x35bd18: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x35bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bd1c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x35bd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_35bd20:
    // 0x35bd20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x35bd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x35bd24: 0x1620ffea  bnez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35BD24u;
    {
        const bool branch_taken_0x35bd24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD24u;
        // 0x35bd28: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd24) {
            ctx->pc = 0x35BCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bcd0;
        }
    }
    ctx->pc = 0x35BD2Cu;
label_35bd2c:
    // 0x35bd2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x35bd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35bd30:
    // 0x35bd30: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x35bd30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x35bd34: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x35bd34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35bd38: 0x5211000a  beql        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x35BD38u;
    {
        const bool branch_taken_0x35bd38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x35bd38) {
            ctx->pc = 0x35BD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BD38u;
            // 0x35bd3c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BD64u;
            goto label_35bd64;
        }
    }
    ctx->pc = 0x35BD40u;
    // 0x35bd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35bd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd44: 0x0  nop
    ctx->pc = 0x35bd44u;
    // NOP
label_35bd48:
    // 0x35bd48: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35BD48u;
    SET_GPR_U32(ctx, 31, 0x35BD50u);
    ctx->pc = 0x35BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD48u;
    // 0x35bd4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35BD48u, 0x35BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD50u;
label_35bd50:
    // 0x35bd50: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x35bd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x35bd54: 0x0  nop
    ctx->pc = 0x35bd54u;
    // NOP
    // 0x35bd58: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35BD58u;
    {
        const bool branch_taken_0x35bd58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x35BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD58u;
        // 0x35bd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd58) {
            ctx->pc = 0x35BD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bd48;
        }
    }
    ctx->pc = 0x35BD60u;
    // 0x35bd60: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x35bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_35bd64:
    // 0x35bd64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BD64u;
    {
        const bool branch_taken_0x35bd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD64u;
        // 0x35bd68: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd64) {
            ctx->pc = 0x35BD78u;
            goto label_35bd78;
        }
    }
    ctx->pc = 0x35BD6Cu;
    // 0x35bd6c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35BD6Cu;
    SET_GPR_U32(ctx, 31, 0x35BD74u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35BD6Cu, 0x35BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD74u;
label_35bd74:
    // 0x35bd74: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x35bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_35bd78:
    // 0x35bd78: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x35bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
    // 0x35bd7c: 0x2e21818  mult        $v1, $s7, $v0
    ctx->pc = 0x35bd7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35bd80: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x35bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x35bd84: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x35bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x35bd88: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x35bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_35bd8c:
    // 0x35bd8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35bd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bd90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35bd90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bd94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35bd94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bd98: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35bd98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35bd9c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35bd9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35bda0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x35bda0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35bda4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x35bda4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35bda8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x35bda8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35bdac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x35BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BDB0u;
        // 0x35bdb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BDB8u;
}
