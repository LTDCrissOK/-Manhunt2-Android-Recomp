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

// Function: sub_002B5F48
// Address: 0x2b5f48 - 0x2b6088
void sub_002B5F48_0x2b5f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5F48_0x2b5f48");
#endif

    switch (ctx->pc) {
        case 0x2b6014u: goto label_2b6014;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6034u: goto label_2b6034;
        default: break;
    }

    ctx->pc = 0x2b5f48u;

    // 0x2b5f48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5f4c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2b5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2b5f50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5f54: 0x24462508  addiu       $a2, $v0, 0x2508
    ctx->pc = 0x2b5f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2b5f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b5f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5f64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b5f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b5f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b5f6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5f70: 0x8cd30094  lw          $s3, 0x94($a2)
    ctx->pc = 0x2b5f70u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x4C259Cu));
    // 0x2b5f74: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5F74u;
    {
        const bool branch_taken_0x2b5f74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2B5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F74u;
        // 0x2b5f78: 0x8cd20090  lw          $s2, 0x90($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f74) {
            ctx->pc = 0x2B5FA0u;
            goto label_2b5fa0;
        }
    }
    ctx->pc = 0x2B5F7Cu;
    // 0x2b5f7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5f80: 0x90c358ec  lbu         $v1, 0x58EC($a2)
    ctx->pc = 0x2b5f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22764)));
    // 0x2b5f84: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x2b5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2b5f88: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B5F88u;
    {
        const bool branch_taken_0x2b5f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F88u;
        // 0x2b5f8c: 0xacc40094  sw          $a0, 0x94($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f88) {
            ctx->pc = 0x2B5FD8u;
            goto label_2b5fd8;
        }
    }
    ctx->pc = 0x2B5F90u;
    // 0x2b5f90: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b5f94: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x2b5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
    // 0x2b5f98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5F98u;
    {
        const bool branch_taken_0x2b5f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F98u;
        // 0x2b5f9c: 0xacc2008c  sw          $v0, 0x8C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f98) {
            ctx->pc = 0x2B5FD8u;
            goto label_2b5fd8;
        }
    }
    ctx->pc = 0x2B5FA0u;
label_2b5fa0:
    // 0x2b5fa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5fa4: 0x54a2000b  bnel        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5FA4u;
    {
        const bool branch_taken_0x2b5fa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b5fa4) {
            ctx->pc = 0x2B5FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5FA4u;
            // 0x2b5fa8: 0xacc00090  sw          $zero, 0x90($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5FD4u;
            goto label_2b5fd4;
        }
    }
    ctx->pc = 0x2B5FACu;
    // 0x2b5fac: 0x90c258ec  lbu         $v0, 0x58EC($a2)
    ctx->pc = 0x2b5facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22764)));
    // 0x2b5fb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5FB0u;
    {
        const bool branch_taken_0x2b5fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB0u;
        // 0x2b5fb4: 0xacc50094  sw          $a1, 0x94($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fb0) {
            ctx->pc = 0x2B5FD8u;
            goto label_2b5fd8;
        }
    }
    ctx->pc = 0x2B5FB8u;
    // 0x2b5fb8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5fbc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b5fc0: 0x8c449164  lw          $a0, -0x6E9C($v0)
    ctx->pc = 0x2b5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9164u));
    // 0x2b5fc4: 0x8c659160  lw          $a1, -0x6EA0($v1)
    ctx->pc = 0x2b5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2b5fc8: 0xacc4008c  sw          $a0, 0x8C($a2)
    ctx->pc = 0x2b5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 4));
    // 0x2b5fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5FCCu;
    {
        const bool branch_taken_0x2b5fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FCCu;
        // 0x2b5fd0: 0xacc50090  sw          $a1, 0x90($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fcc) {
            ctx->pc = 0x2B5FD8u;
            goto label_2b5fd8;
        }
    }
    ctx->pc = 0x2B5FD4u;
label_2b5fd4:
    // 0x2b5fd4: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x2b5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
label_2b5fd8:
    // 0x2b5fd8: 0x24f02508  addiu       $s0, $a3, 0x2508
    ctx->pc = 0x2b5fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 9480));
    // 0x2b5fdc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5fe0: 0x24498f10  addiu       $t1, $v0, -0x70F0
    ctx->pc = 0x2b5fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
    // 0x2b5fe4: 0x24e82508  addiu       $t0, $a3, 0x2508
    ctx->pc = 0x2b5fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 9480));
    // 0x2b5fe8: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x2b5fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5fec: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x2b5fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5ff0: 0x8926000b  lwl         $a2, 0xB($t1)
    ctx->pc = 0x2b5ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2b5ff4: 0x99260008  lwr         $a2, 0x8($t1)
    ctx->pc = 0x2b5ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2b5ff8: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x2b5ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5ffc: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x2b5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b6000: 0xa906000b  swl         $a2, 0xB($t0)
    ctx->pc = 0x2b6000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b6004: 0xb9060008  swr         $a2, 0x8($t0)
    ctx->pc = 0x2b6004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b6008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b6008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b600c: 0xc0ad822  jal         func_2B6088
    ctx->pc = 0x2B600Cu;
    SET_GPR_U32(ctx, 31, 0x2B6014u);
    ctx->pc = 0x2B6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B600Cu;
    // 0x2b6010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6088u, 0x2B600Cu, 0x2B6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6014u;
label_2b6014:
    // 0x2b6014: 0xc0acde0  jal         func_2B3780
    ctx->pc = 0x2B6014u;
    SET_GPR_U32(ctx, 31, 0x2B601Cu);
    ctx->pc = 0x2B6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6014u;
    // 0x2b6018: 0x260445b4  addiu       $a0, $s0, 0x45B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3780u, 0x2B6014u, 0x2B601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B601Cu;
label_2b601c:
    // 0x2b601c: 0x8e255908  lw          $a1, 0x5908($s1)
    ctx->pc = 0x2b601cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22792)));
    // 0x2b6020: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x2b6020u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
    // 0x2b6024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b602c: 0xc0addbe  jal         func_2B76F8
    ctx->pc = 0x2B602Cu;
    SET_GPR_U32(ctx, 31, 0x2B6034u);
    ctx->pc = 0x2B6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B602Cu;
    // 0x2b6030: 0x34e72e3c  ori         $a3, $a3, 0x2E3C (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)11836);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B76F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B76F8u, 0x2B602Cu, 0x2B6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6034u;
label_2b6034:
    // 0x2b6034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6038: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6038u;
    {
        const bool branch_taken_0x2b6038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6038u;
        // 0x2b603c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6038) {
            ctx->pc = 0x2B6054u;
            goto label_2b6054;
        }
    }
    ctx->pc = 0x2B6040u;
    // 0x2b6040: 0xae120090  sw          $s2, 0x90($s0)
    ctx->pc = 0x2b6040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 18));
    // 0x2b6044: 0xae130094  sw          $s3, 0x94($s0)
    ctx->pc = 0x2b6044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 19));
    // 0x2b6048: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b604c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B604Cu;
    {
        const bool branch_taken_0x2b604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B604Cu;
        // 0x2b6050: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b604c) {
            ctx->pc = 0x2B6068u;
            goto label_2b6068;
        }
    }
    ctx->pc = 0x2B6054u;
label_2b6054:
    // 0x2b6054: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2b6054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2b6058: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b605c: 0xa0402c0c  sb          $zero, 0x2C0C($v0)
    ctx->pc = 0x2b605cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C0Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482C0Cu, _value); } while (0);
    // 0x2b6060: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b6060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b6064: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2b6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2b6068:
    // 0x2b6068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b606c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b606cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b6070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6074: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b6074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b607c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B607Cu;
        // 0x2b6080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6084u;
    // 0x2b6084: 0x0  nop
    ctx->pc = 0x2b6084u;
    // NOP
    ctx->pc = 0x2b6088u;
}
