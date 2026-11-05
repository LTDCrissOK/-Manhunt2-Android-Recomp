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

// Function: sub_003AC128
// Address: 0x3ac128 - 0x3ac1f8
void sub_003AC128_0x3ac128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC128_0x3ac128");
#endif

    switch (ctx->pc) {
        case 0x3ac128u: goto label_3ac128;
        case 0x3ac12cu: goto label_3ac12c;
        case 0x3ac130u: goto label_3ac130;
        case 0x3ac134u: goto label_3ac134;
        case 0x3ac138u: goto label_3ac138;
        case 0x3ac13cu: goto label_3ac13c;
        case 0x3ac140u: goto label_3ac140;
        case 0x3ac144u: goto label_3ac144;
        case 0x3ac148u: goto label_3ac148;
        case 0x3ac14cu: goto label_3ac14c;
        case 0x3ac150u: goto label_3ac150;
        case 0x3ac154u: goto label_3ac154;
        case 0x3ac158u: goto label_3ac158;
        case 0x3ac15cu: goto label_3ac15c;
        case 0x3ac160u: goto label_3ac160;
        case 0x3ac164u: goto label_3ac164;
        case 0x3ac168u: goto label_3ac168;
        case 0x3ac16cu: goto label_3ac16c;
        case 0x3ac170u: goto label_3ac170;
        case 0x3ac174u: goto label_3ac174;
        case 0x3ac178u: goto label_3ac178;
        case 0x3ac17cu: goto label_3ac17c;
        case 0x3ac180u: goto label_3ac180;
        case 0x3ac184u: goto label_3ac184;
        case 0x3ac188u: goto label_3ac188;
        case 0x3ac18cu: goto label_3ac18c;
        case 0x3ac190u: goto label_3ac190;
        case 0x3ac194u: goto label_3ac194;
        case 0x3ac198u: goto label_3ac198;
        case 0x3ac19cu: goto label_3ac19c;
        case 0x3ac1a0u: goto label_3ac1a0;
        case 0x3ac1a4u: goto label_3ac1a4;
        case 0x3ac1a8u: goto label_3ac1a8;
        case 0x3ac1acu: goto label_3ac1ac;
        case 0x3ac1b0u: goto label_3ac1b0;
        case 0x3ac1b4u: goto label_3ac1b4;
        case 0x3ac1b8u: goto label_3ac1b8;
        case 0x3ac1bcu: goto label_3ac1bc;
        case 0x3ac1c0u: goto label_3ac1c0;
        case 0x3ac1c4u: goto label_3ac1c4;
        case 0x3ac1c8u: goto label_3ac1c8;
        case 0x3ac1ccu: goto label_3ac1cc;
        case 0x3ac1d0u: goto label_3ac1d0;
        case 0x3ac1d4u: goto label_3ac1d4;
        case 0x3ac1d8u: goto label_3ac1d8;
        case 0x3ac1dcu: goto label_3ac1dc;
        case 0x3ac1e0u: goto label_3ac1e0;
        case 0x3ac1e4u: goto label_3ac1e4;
        case 0x3ac1e8u: goto label_3ac1e8;
        case 0x3ac1ecu: goto label_3ac1ec;
        case 0x3ac1f0u: goto label_3ac1f0;
        case 0x3ac1f4u: goto label_3ac1f4;
        default: break;
    }

    ctx->pc = 0x3ac128u;

label_3ac128:
    // 0x3ac128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ac12c:
    // 0x3ac12c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3ac130:
    if (ctx->pc == 0x3AC130u) {
        ctx->pc = 0x3AC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC12Cu;
        // 0x3ac130: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC134u;
        goto label_3ac134;
    }
    ctx->pc = 0x3AC12Cu;
    {
        const bool branch_taken_0x3ac12c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC12Cu;
        // 0x3ac130: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac12c) {
            ctx->pc = 0x3AC148u;
            goto label_3ac148;
        }
    }
    ctx->pc = 0x3AC134u;
label_3ac134:
    // 0x3ac134: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ac134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ac138:
    // 0x3ac138: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ac138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ac13c:
    // 0x3ac13c: 0x2484f1c8  addiu       $a0, $a0, -0xE38
    ctx->pc = 0x3ac13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963656));
label_3ac140:
    // 0x3ac140: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ac144:
    if (ctx->pc == 0x3AC144u) {
        ctx->pc = 0x3AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC140u;
        // 0x3ac144: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC148u;
        goto label_3ac148;
    }
    ctx->pc = 0x3AC140u;
    {
        const bool branch_taken_0x3ac140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC140u;
        // 0x3ac144: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac140) {
            ctx->pc = 0x3AC164u;
            goto label_3ac164;
        }
    }
    ctx->pc = 0x3AC148u;
label_3ac148:
    // 0x3ac148: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3ac148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_3ac14c:
    // 0x3ac14c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3ac150:
    if (ctx->pc == 0x3AC150u) {
        ctx->pc = 0x3AC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC14Cu;
        // 0x3ac150: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC154u;
        goto label_3ac154;
    }
    ctx->pc = 0x3AC14Cu;
    {
        const bool branch_taken_0x3ac14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac14c) {
            ctx->pc = 0x3AC150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC14Cu;
            // 0x3ac150: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC178u;
            goto label_3ac178;
        }
    }
    ctx->pc = 0x3AC154u;
label_3ac154:
    // 0x3ac154: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ac154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ac158:
    // 0x3ac158: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ac158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ac15c:
    // 0x3ac15c: 0x2484f1d8  addiu       $a0, $a0, -0xE28
    ctx->pc = 0x3ac15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963672));
label_3ac160:
    // 0x3ac160: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3ac160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
label_3ac164:
    // 0x3ac164: 0xc0ead68  jal         func_3AB5A0
label_3ac168:
    if (ctx->pc == 0x3AC168u) {
        ctx->pc = 0x3AC16Cu;
        goto label_3ac16c;
    }
    ctx->pc = 0x3AC164u;
    SET_GPR_U32(ctx, 31, 0x3AC16Cu);
    ctx->pc = 0x3AB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB5A0u, 0x3AC164u, 0x3AC16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC16Cu;
label_3ac16c:
    // 0x3ac16c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3ac170:
    if (ctx->pc == 0x3AC170u) {
        ctx->pc = 0x3AC170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC16Cu;
        // 0x3ac170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC174u;
        goto label_3ac174;
    }
    ctx->pc = 0x3AC16Cu;
    {
        const bool branch_taken_0x3ac16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC16Cu;
        // 0x3ac170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac16c) {
            ctx->pc = 0x3AC1E4u;
            goto label_3ac1e4;
        }
    }
    ctx->pc = 0x3AC174u;
label_3ac174:
    // 0x3ac174: 0x0  nop
    ctx->pc = 0x3ac174u;
    // NOP
label_3ac178:
    // 0x3ac178: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ac17c:
    if (ctx->pc == 0x3AC17Cu) {
        ctx->pc = 0x3AC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC178u;
        // 0x3ac17c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC180u;
        goto label_3ac180;
    }
    ctx->pc = 0x3AC178u;
    {
        const bool branch_taken_0x3ac178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC178u;
        // 0x3ac17c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac178) {
            ctx->pc = 0x3AC1A0u;
            goto label_3ac1a0;
        }
    }
    ctx->pc = 0x3AC180u;
label_3ac180:
    // 0x3ac180: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3ac184:
    // 0x3ac184: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_3ac188:
    if (ctx->pc == 0x3AC188u) {
        ctx->pc = 0x3AC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC184u;
        // 0x3ac188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC18Cu;
        goto label_3ac18c;
    }
    ctx->pc = 0x3AC184u;
    {
        const bool branch_taken_0x3ac184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac184) {
            ctx->pc = 0x3AC188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC184u;
            // 0x3ac188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC1E4u;
            goto label_3ac1e4;
        }
    }
    ctx->pc = 0x3AC18Cu;
label_3ac18c:
    // 0x3ac18c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x3ac18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3ac190:
    // 0x3ac190: 0x40f809  jalr        $v0
label_3ac194:
    if (ctx->pc == 0x3AC194u) {
        ctx->pc = 0x3AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC190u;
        // 0x3ac194: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC198u;
        goto label_3ac198;
    }
    ctx->pc = 0x3AC190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC198u);
        ctx->pc = 0x3AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC190u;
        // 0x3ac194: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC190u, 0x3AC198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC198u;
label_3ac198:
    // 0x3ac198: 0x10000012  b           . + 4 + (0x12 << 2)
label_3ac19c:
    if (ctx->pc == 0x3AC19Cu) {
        ctx->pc = 0x3AC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC198u;
        // 0x3ac19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1A0u;
        goto label_3ac1a0;
    }
    ctx->pc = 0x3AC198u;
    {
        const bool branch_taken_0x3ac198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC198u;
        // 0x3ac19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac198) {
            ctx->pc = 0x3AC1E4u;
            goto label_3ac1e4;
        }
    }
    ctx->pc = 0x3AC1A0u;
label_3ac1a0:
    // 0x3ac1a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3ac1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3ac1a4:
    // 0x3ac1a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ac1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ac1a8:
    // 0x3ac1a8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x3ac1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ac1ac:
    // 0x3ac1ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3ac1b0:
    if (ctx->pc == 0x3AC1B0u) {
        ctx->pc = 0x3AC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1ACu;
        // 0x3ac1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1B4u;
        goto label_3ac1b4;
    }
    ctx->pc = 0x3AC1ACu;
    {
        const bool branch_taken_0x3ac1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1ACu;
        // 0x3ac1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac1ac) {
            ctx->pc = 0x3AC1E4u;
            goto label_3ac1e4;
        }
    }
    ctx->pc = 0x3AC1B4u;
label_3ac1b4:
    // 0x3ac1b4: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x3ac1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3ac1b8:
    // 0x3ac1b8: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x3ac1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3ac1bc:
    // 0x3ac1bc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3ac1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ac1c0:
    // 0x3ac1c0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3ac1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ac1c4:
    // 0x3ac1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ac1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac1c8:
    // 0x3ac1c8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3ac1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ac1cc:
    // 0x3ac1cc: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3ac1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_3ac1d0:
    // 0x3ac1d0: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x3ac1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_3ac1d4:
    // 0x3ac1d4: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_3ac1d8:
    if (ctx->pc == 0x3AC1D8u) {
        ctx->pc = 0x3AC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1D4u;
        // 0x3ac1d8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1DCu;
        goto label_3ac1dc;
    }
    ctx->pc = 0x3AC1D4u;
    {
        const bool branch_taken_0x3ac1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ac1d4) {
            ctx->pc = 0x3AC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC1D4u;
            // 0x3ac1d8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC1E0u;
            goto label_3ac1e0;
        }
    }
    ctx->pc = 0x3AC1DCu;
label_3ac1dc:
    // 0x3ac1dc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3ac1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3ac1e0:
    // 0x3ac1e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ac1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3ac1e4:
    // 0x3ac1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ac1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac1e8:
    // 0x3ac1e8: 0x3e00008  jr          $ra
label_3ac1ec:
    if (ctx->pc == 0x3AC1ECu) {
        ctx->pc = 0x3AC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1E8u;
        // 0x3ac1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1F0u;
        goto label_3ac1f0;
    }
    ctx->pc = 0x3AC1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1E8u;
        // 0x3ac1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC1F0u;
label_3ac1f0:
    // 0x3ac1f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ac1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ac1f4:
    // 0x3ac1f4: 0x0  nop
    ctx->pc = 0x3ac1f4u;
    // NOP
    ctx->pc = 0x3ac1f8u;
}
