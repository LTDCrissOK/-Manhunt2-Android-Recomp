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

// Function: sub_003B1D30
// Address: 0x3b1d30 - 0x3b1ed8
void sub_003B1D30_0x3b1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1D30_0x3b1d30");
#endif

    switch (ctx->pc) {
        case 0x3b1d78u: goto label_3b1d78;
        case 0x3b1d88u: goto label_3b1d88;
        case 0x3b1d90u: goto label_3b1d90;
        case 0x3b1db4u: goto label_3b1db4;
        case 0x3b1dc8u: goto label_3b1dc8;
        case 0x3b1dd0u: goto label_3b1dd0;
        case 0x3b1df4u: goto label_3b1df4;
        case 0x3b1e78u: goto label_3b1e78;
        case 0x3b1eb4u: goto label_3b1eb4;
        default: break;
    }

    ctx->pc = 0x3b1d30u;

    // 0x3b1d30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b1d34: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3b1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3b1d38: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3b1d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x3b1d3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b1d3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d40: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3b1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3b1d44: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b1d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b1d48: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3b1d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3b1d4c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x3b1d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x3b1d50: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b1d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b1d54: 0x8e9301ac  lw          $s3, 0x1AC($s4)
    ctx->pc = 0x3b1d54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
    // 0x3b1d58: 0x12600056  beqz        $s3, . + 4 + (0x56 << 2)
    ctx->pc = 0x3B1D58u;
    {
        const bool branch_taken_0x3b1d58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D58u;
        // 0x3b1d5c: 0x269101e4  addiu       $s1, $s4, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d58) {
            ctx->pc = 0x3B1EB4u;
            goto label_3b1eb4;
        }
    }
    ctx->pc = 0x3B1D60u;
    // 0x3b1d60: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3b1d60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3b1d64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d6c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b1d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b1d70: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1D70u;
    SET_GPR_U32(ctx, 31, 0x3B1D78u);
    ctx->pc = 0x3B1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D70u;
    // 0x3b1d74: 0x26b091f0  addiu       $s0, $s5, -0x6E10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1D70u, 0x3B1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D78u;
label_3b1d78:
    // 0x3b1d78: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x3b1d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3b1d7c: 0x12120008  beq         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1D7Cu;
    {
        const bool branch_taken_0x3b1d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3B1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D7Cu;
        // 0x3b1d80: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d7c) {
            ctx->pc = 0x3B1DA0u;
            goto label_3b1da0;
        }
    }
    ctx->pc = 0x3B1D84u;
    // 0x3b1d84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b1d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1d88:
    // 0x3b1d88: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B1D88u;
    SET_GPR_U32(ctx, 31, 0x3B1D90u);
    ctx->pc = 0x3B1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D88u;
    // 0x3b1d8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B1D88u, 0x3B1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D90u;
label_3b1d90:
    // 0x3b1d90: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3b1d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b1d94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b1d98: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B1D98u;
    {
        const bool branch_taken_0x3b1d98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3B1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D98u;
        // 0x3b1d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d98) {
            ctx->pc = 0x3B1D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1d88;
        }
    }
    ctx->pc = 0x3B1DA0u;
label_3b1da0:
    // 0x3b1da0: 0x26a491f0  addiu       $a0, $s5, -0x6E10
    ctx->pc = 0x3b1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939120));
    // 0x3b1da4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b1da8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b1da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b1dac: 0xc0ec252  jal         func_3B0948
    ctx->pc = 0x3B1DACu;
    SET_GPR_U32(ctx, 31, 0x3B1DB4u);
    ctx->pc = 0x3B1DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DACu;
    // 0x3b1db0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0948u, 0x3B1DACu, 0x3B1DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DB4u;
label_3b1db4:
    // 0x3b1db4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3b1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b1db8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x3b1db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3b1dbc: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B1DBCu;
    {
        const bool branch_taken_0x3b1dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3B1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DBCu;
        // 0x3b1dc0: 0x26a491f0  addiu       $a0, $s5, -0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1dbc) {
            ctx->pc = 0x3B1DE4u;
            goto label_3b1de4;
        }
    }
    ctx->pc = 0x3B1DC4u;
    // 0x3b1dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1dc8:
    // 0x3b1dc8: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B1DC8u;
    SET_GPR_U32(ctx, 31, 0x3B1DD0u);
    ctx->pc = 0x3B1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DC8u;
    // 0x3b1dcc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B1DC8u, 0x3B1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DD0u;
label_3b1dd0:
    // 0x3b1dd0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3b1dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b1dd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b1dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3b1dd8: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B1DD8u;
    {
        const bool branch_taken_0x3b1dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3B1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DD8u;
        // 0x3b1ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1dd8) {
            ctx->pc = 0x3B1DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1dc8;
        }
    }
    ctx->pc = 0x3B1DE0u;
    // 0x3b1de0: 0x26a491f0  addiu       $a0, $s5, -0x6E10
    ctx->pc = 0x3b1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939120));
label_3b1de4:
    // 0x3b1de4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x3b1de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3b1de8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b1de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b1dec: 0xc0ec252  jal         func_3B0948
    ctx->pc = 0x3B1DECu;
    SET_GPR_U32(ctx, 31, 0x3B1DF4u);
    ctx->pc = 0x3B1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1DECu;
    // 0x3b1df0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0948u, 0x3B1DECu, 0x3B1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1DF4u;
label_3b1df4:
    // 0x3b1df4: 0x440002f  bltz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B1DF4u;
    {
        const bool branch_taken_0x3b1df4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DF4u;
        // 0x3b1df8: 0x83a7003d  lb          $a3, 0x3D($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1df4) {
            ctx->pc = 0x3B1EB4u;
            goto label_3b1eb4;
        }
    }
    ctx->pc = 0x3B1DFCu;
    // 0x3b1dfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b1dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1e00: 0x83a30003  lb          $v1, 0x3($sp)
    ctx->pc = 0x3b1e00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3b1e04: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3b1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b1e08: 0x28e50010  slti        $a1, $a3, 0x10
    ctx->pc = 0x3b1e08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3b1e0c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3b1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1e10: 0x6ba8002b  ldl         $t0, 0x2B($sp)
    ctx->pc = 0x3b1e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b1e14: 0x6fa80024  ldr         $t0, 0x24($sp)
    ctx->pc = 0x3b1e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b1e18: 0x8ba9002f  lwl         $t1, 0x2F($sp)
    ctx->pc = 0x3b1e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x3b1e1c: 0x9ba9002c  lwr         $t1, 0x2C($sp)
    ctx->pc = 0x3b1e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x3b1e20: 0xb2280023  sdl         $t0, 0x23($s1)
    ctx->pc = 0x3b1e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1e24: 0xb628001c  sdr         $t0, 0x1C($s1)
    ctx->pc = 0x3b1e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1e28: 0xaa290027  swl         $t1, 0x27($s1)
    ctx->pc = 0x3b1e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b1e2c: 0xba290024  swr         $t1, 0x24($s1)
    ctx->pc = 0x3b1e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b1e30: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3b1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3b1e34: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x3b1e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b1e38: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x3b1e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b1e3c: 0x8ba9003b  lwl         $t1, 0x3B($sp)
    ctx->pc = 0x3b1e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x3b1e40: 0x9ba90038  lwr         $t1, 0x38($sp)
    ctx->pc = 0x3b1e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x3b1e44: 0xb228002f  sdl         $t0, 0x2F($s1)
    ctx->pc = 0x3b1e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1e48: 0xb6280028  sdr         $t0, 0x28($s1)
    ctx->pc = 0x3b1e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1e4c: 0xaa290033  swl         $t1, 0x33($s1)
    ctx->pc = 0x3b1e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b1e50: 0xba290030  swr         $t1, 0x30($s1)
    ctx->pc = 0x3b1e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b1e54: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3b1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3b1e58: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3b1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3b1e5c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1E5Cu;
    {
        const bool branch_taken_0x3b1e5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E5Cu;
        // 0x3b1e60: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e5c) {
            ctx->pc = 0x3B1E80u;
            goto label_3b1e80;
        }
    }
    ctx->pc = 0x3B1E64u;
    // 0x3b1e64: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x3b1e64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b1e68: 0x2626003a  addiu       $a2, $s1, 0x3A
    ctx->pc = 0x3b1e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 58));
    // 0x3b1e6c: 0x26240036  addiu       $a0, $s1, 0x36
    ctx->pc = 0x3b1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
    // 0x3b1e70: 0xc0ec692  jal         func_3B1A48
    ctx->pc = 0x3B1E70u;
    SET_GPR_U32(ctx, 31, 0x3B1E78u);
    ctx->pc = 0x3B1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1E70u;
    // 0x3b1e74: 0x26250038  addiu       $a1, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A48u, 0x3B1E70u, 0x3B1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1E78u;
label_3b1e78:
    // 0x3b1e78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B1E78u;
    {
        const bool branch_taken_0x3b1e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E78u;
        // 0x3b1e7c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e78) {
            ctx->pc = 0x3B1EB8u;
            goto label_3b1eb8;
        }
    }
    ctx->pc = 0x3B1E80u;
label_3b1e80:
    // 0x3b1e80: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x3b1e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b1e84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B1E84u;
    {
        const bool branch_taken_0x3b1e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E84u;
        // 0x3b1e88: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e84) {
            ctx->pc = 0x3B1EA8u;
            goto label_3b1ea8;
        }
    }
    ctx->pc = 0x3B1E8Cu;
    // 0x3b1e8c: 0x6a820a27  ldl         $v0, 0xA27($s4)
    ctx->pc = 0x3b1e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 2599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b1e90: 0x6e820a20  ldr         $v0, 0xA20($s4)
    ctx->pc = 0x3b1e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 2592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b1e94: 0xb222003b  sdl         $v0, 0x3B($s1)
    ctx->pc = 0x3b1e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1e98: 0xb6220034  sdr         $v0, 0x34($s1)
    ctx->pc = 0x3b1e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1e9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B1E9Cu;
    {
        const bool branch_taken_0x3b1e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E9Cu;
        // 0x3b1ea0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e9c) {
            ctx->pc = 0x3B1EB8u;
            goto label_3b1eb8;
        }
    }
    ctx->pc = 0x3B1EA4u;
    // 0x3b1ea4: 0x0  nop
    ctx->pc = 0x3b1ea4u;
    // NOP
label_3b1ea8:
    // 0x3b1ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1eac: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1EACu;
    SET_GPR_U32(ctx, 31, 0x3B1EB4u);
    ctx->pc = 0x3B1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1EACu;
    // 0x3b1eb0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1EACu, 0x3B1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1EB4u;
label_3b1eb4:
    // 0x3b1eb4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3b1eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1eb8:
    // 0x3b1eb8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x3b1eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b1ebc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b1ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b1ec0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x3b1ec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3b1ec4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x3b1ec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b1ec8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x3b1ec8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3b1ecc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b1ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1ED0u;
        // 0x3b1ed4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1ED8u;
}
