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

// Function: sub_00375A10
// Address: 0x375a10 - 0x375b38
void sub_00375A10_0x375a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375A10_0x375a10");
#endif

    switch (ctx->pc) {
        case 0x375a3cu: goto label_375a3c;
        case 0x375a64u: goto label_375a64;
        case 0x375ab0u: goto label_375ab0;
        default: break;
    }

    ctx->pc = 0x375a10u;

    // 0x375a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375a14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x375a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x375a18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x375a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x375a20: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x375a24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x375a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x375a28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x375a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x375a2c: 0x248453a0  addiu       $a0, $a0, 0x53A0
    ctx->pc = 0x375a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21408));
    // 0x375a30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x375a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x375a34: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x375A34u;
    SET_GPR_U32(ctx, 31, 0x375A3Cu);
    ctx->pc = 0x375A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A34u;
    // 0x375a38: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x375A34u, 0x375A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A3Cu;
label_375a3c:
    // 0x375a3c: 0x2612f910  addiu       $s2, $s0, -0x6F0
    ctx->pc = 0x375a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x375a40: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x375a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x375a44: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x375a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x375a48: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x375a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x375a4c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x375a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x375a50: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x375a50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x375a54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x375A54u;
    {
        const bool branch_taken_0x375a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x375A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A54u;
        // 0x375a58: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375a54) {
            ctx->pc = 0x375A64u;
            goto label_375a64;
        }
    }
    ctx->pc = 0x375A5Cu;
    // 0x375a5c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x375A5Cu;
    SET_GPR_U32(ctx, 31, 0x375A64u);
    ctx->pc = 0x375A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A5Cu;
    // 0x375a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x375A5Cu, 0x375A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375A64u;
label_375a64:
    // 0x375a64: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x375a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x375a68: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x375a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x375a6c: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x375a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x375a70: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x375a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x375a74: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x375a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x375a78: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x375a78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x375a7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x375a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x375a80: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x375a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x375a84: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x375a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x375a88: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x375a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x375a8c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x375a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x375a90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x375a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x375a94: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x375a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x375a98: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x375a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x375a9c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x375a9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x375aa0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375AA0u;
    {
        const bool branch_taken_0x375aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x375AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375AA0u;
        // 0x375aa4: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375aa0) {
            ctx->pc = 0x375AB4u;
            goto label_375ab4;
        }
    }
    ctx->pc = 0x375AA8u;
    // 0x375aa8: 0xc0dc442  jal         func_371108
    ctx->pc = 0x375AA8u;
    SET_GPR_U32(ctx, 31, 0x375AB0u);
    ctx->pc = 0x375AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375AA8u;
    // 0x375aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x375AA8u, 0x375AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AB0u;
label_375ab0:
    // 0x375ab0: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x375ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_375ab4:
    // 0x375ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375ab8: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x375ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x375abc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x375abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375ac0: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x375ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x375ac4: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x375ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x375ac8: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x375ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x375acc: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x375accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x375ad0: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x375ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x375ad4: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x375ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x375ad8: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x375ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x375adc: 0x6a66001f  ldl         $a2, 0x1F($s3)
    ctx->pc = 0x375adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x375ae0: 0x6e660018  ldr         $a2, 0x18($s3)
    ctx->pc = 0x375ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x375ae4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x375ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375ae8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x375ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375aec: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x375aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375af0: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x375af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375af4: 0xb0650017  sdl         $a1, 0x17($v1)
    ctx->pc = 0x375af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375af8: 0xb4650010  sdr         $a1, 0x10($v1)
    ctx->pc = 0x375af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375afc: 0xb066001f  sdl         $a2, 0x1F($v1)
    ctx->pc = 0x375afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375b00: 0xb4660018  sdr         $a2, 0x18($v1)
    ctx->pc = 0x375b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375b04: 0x6a620027  ldl         $v0, 0x27($s3)
    ctx->pc = 0x375b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x375b08: 0x6e620020  ldr         $v0, 0x20($s3)
    ctx->pc = 0x375b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x375b0c: 0x6a64002f  ldl         $a0, 0x2F($s3)
    ctx->pc = 0x375b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x375b10: 0x6e640028  ldr         $a0, 0x28($s3)
    ctx->pc = 0x375b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x375b14: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x375b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375b18: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x375b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375b1c: 0xb064002f  sdl         $a0, 0x2F($v1)
    ctx->pc = 0x375b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375b20: 0xb4640028  sdr         $a0, 0x28($v1)
    ctx->pc = 0x375b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375b28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x375b28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x375b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375b30: 0x3e00008  jr          $ra
    ctx->pc = 0x375B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B30u;
        // 0x375b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375B38u;
}
