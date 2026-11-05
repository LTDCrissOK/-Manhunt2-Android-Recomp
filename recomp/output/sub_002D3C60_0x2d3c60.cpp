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

// Function: sub_002D3C60
// Address: 0x2d3c60 - 0x2d3dc0
void sub_002D3C60_0x2d3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3C60_0x2d3c60");
#endif

    switch (ctx->pc) {
        case 0x2d3cb8u: goto label_2d3cb8;
        case 0x2d3ce8u: goto label_2d3ce8;
        case 0x2d3cf8u: goto label_2d3cf8;
        case 0x2d3d4cu: goto label_2d3d4c;
        case 0x2d3d80u: goto label_2d3d80;
        default: break;
    }

    ctx->pc = 0x2d3c60u;

    // 0x2d3c60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3c64: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2d3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2d3c68: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d3c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d3c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c70: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2d3c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2d3c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c78: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2d3c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2d3c7c: 0x26330064  addiu       $s3, $s1, 0x64
    ctx->pc = 0x2d3c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x2d3c80: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2d3c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2d3c84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d3c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c88: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2d3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2d3c8c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d3c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c90: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2d3c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2d3c94: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2d3c94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c98: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2d3c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2d3c9c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2d3c9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ca0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2d3ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d3ca4: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2d3ca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ca8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2d3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2d3cac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d3cb0: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2d3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2d3cb4: 0x0  nop
    ctx->pc = 0x2d3cb4u;
    // NOP
label_2d3cb8:
    // 0x2d3cb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d3cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3cbc: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D3CBCu;
    {
        const bool branch_taken_0x2d3cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CBCu;
        // 0x2d3cc0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3cbc) {
            ctx->pc = 0x2D3D4Cu;
            goto label_2d3d4c;
        }
    }
    ctx->pc = 0x2D3CC4u;
    // 0x2d3cc4: 0x2441818  mult        $v1, $s2, $a0
    ctx->pc = 0x2d3cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d3cc8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2d3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d3ccc: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x2d3cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d3cd0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D3CD0u;
    {
        const bool branch_taken_0x2d3cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CD0u;
        // 0x2d3cd4: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3cd0) {
            ctx->pc = 0x2D3D4Cu;
            goto label_2d3d4c;
        }
    }
    ctx->pc = 0x2D3CD8u;
    // 0x2d3cd8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2d3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d3cdc: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2d3cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d3ce0: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x2D3CE0u;
    SET_GPR_U32(ctx, 31, 0x2D3CE8u);
    ctx->pc = 0x2D3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CE0u;
    // 0x2d3ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x2D3CE0u, 0x2D3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CE8u;
label_2d3ce8:
    // 0x2d3ce8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3CE8u;
    {
        const bool branch_taken_0x2d3ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ce8) {
            ctx->pc = 0x2D3CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3CE8u;
            // 0x2d3cec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3D50u;
            goto label_2d3d50;
        }
    }
    ctx->pc = 0x2D3CF0u;
    // 0x2d3cf0: 0xc0b4d2c  jal         func_2D34B0
    ctx->pc = 0x2D3CF0u;
    SET_GPR_U32(ctx, 31, 0x2D3CF8u);
    ctx->pc = 0x2D3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CF0u;
    // 0x2d3cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D34B0u, 0x2D3CF0u, 0x2D3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CF8u;
label_2d3cf8:
    // 0x2d3cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cfc: 0x6a26006f  ldl         $a2, 0x6F($s1)
    ctx->pc = 0x2d3cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d3d00: 0x6e260068  ldr         $a2, 0x68($s1)
    ctx->pc = 0x2d3d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d3d04: 0x6a270077  ldl         $a3, 0x77($s1)
    ctx->pc = 0x2d3d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d3d08: 0x6e270070  ldr         $a3, 0x70($s1)
    ctx->pc = 0x2d3d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d3d0c: 0x6a22007f  ldl         $v0, 0x7F($s1)
    ctx->pc = 0x2d3d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d3d10: 0x6e220078  ldr         $v0, 0x78($s1)
    ctx->pc = 0x2d3d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d3d14: 0x6a230087  ldl         $v1, 0x87($s1)
    ctx->pc = 0x2d3d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d3d18: 0x6e230080  ldr         $v1, 0x80($s1)
    ctx->pc = 0x2d3d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d3d1c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2d3d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d20: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2d3d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d24: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2d3d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d28: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2d3d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d2c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2d3d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d30: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2d3d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d34: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2d3d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d38: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2d3d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d3d3c: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x2d3d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2d3d40: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2d3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2d3d44: 0xc0fb5ea  jal         func_3ED7A8
    ctx->pc = 0x2D3D44u;
    SET_GPR_U32(ctx, 31, 0x2D3D4Cu);
    ctx->pc = 0x2D3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D44u;
    // 0x2d3d48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED7A8u, 0x2D3D44u, 0x2D3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D4Cu;
label_2d3d4c:
    // 0x2d3d4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d3d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d3d50:
    // 0x2d3d50: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2d3d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d3d54: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2D3D54u;
    {
        const bool branch_taken_0x2d3d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D54u;
        // 0x2d3d58: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d54) {
            ctx->pc = 0x2D3CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3cb8;
        }
    }
    ctx->pc = 0x2D3D5Cu;
    // 0x2d3d5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d3d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d3d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d68: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d3d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d6c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2d3d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d70: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2d3d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d74: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2d3d74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d78: 0xc0b4eb2  jal         func_2D3AC8
    ctx->pc = 0x2D3D78u;
    SET_GPR_U32(ctx, 31, 0x2D3D80u);
    ctx->pc = 0x2D3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D78u;
    // 0x2d3d7c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3AC8u, 0x2D3D78u, 0x2D3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D80u;
label_2d3d80:
    // 0x2d3d80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2d3d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3d84: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2d3d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d3d88: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d3d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3d8c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2d3d8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d3d90: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2d3d90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3d94: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2d3d94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d3d98: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2d3d98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3d9c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2d3d9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d3da0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2d3da0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d3da4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2d3da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d3da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DA8u;
        // 0x2d3dac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3DB0u;
    // 0x2d3db0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d3db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d3db4: 0x0  nop
    ctx->pc = 0x2d3db4u;
    // NOP
    // 0x2d3db8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d3db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d3dbc: 0x0  nop
    ctx->pc = 0x2d3dbcu;
    // NOP
    ctx->pc = 0x2d3dc0u;
}
