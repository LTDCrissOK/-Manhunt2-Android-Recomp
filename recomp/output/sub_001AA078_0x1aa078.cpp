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

// Function: sub_001AA078
// Address: 0x1aa078 - 0x1aa110
void sub_001AA078_0x1aa078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA078_0x1aa078");
#endif

    switch (ctx->pc) {
        case 0x1aa0c8u: goto label_1aa0c8;
        default: break;
    }

    ctx->pc = 0x1aa078u;

    // 0x1aa078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa07c: 0x24a3fd9f  addiu       $v1, $a1, -0x261
    ctx->pc = 0x1aa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966687));
    // 0x1aa080: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aa080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aa084: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x1aa084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1aa088: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1aa088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1aa08c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA08Cu;
    {
        const bool branch_taken_0x1aa08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA08Cu;
        // 0x1aa090: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa08c) {
            ctx->pc = 0x1AA0A8u;
            goto label_1aa0a8;
        }
    }
    ctx->pc = 0x1AA094u;
    // 0x1aa094: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1aa094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1aa098: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1aa09c: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x1aa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x1aa0a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AA0A0u;
    {
        const bool branch_taken_0x1aa0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0A0u;
        // 0x1aa0a4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0a0) {
            ctx->pc = 0x1AA0FCu;
            goto label_1aa0fc;
        }
    }
    ctx->pc = 0x1AA0A8u;
label_1aa0a8:
    // 0x1aa0a8: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1aa0ac: 0x8e22f058  lw          $v0, -0xFA8($s1)
    ctx->pc = 0x1aa0acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48F058u));
    // 0x1aa0b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AA0B0u;
    {
        const bool branch_taken_0x1aa0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0B0u;
        // 0x1aa0b4: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0b0) {
            ctx->pc = 0x1AA0F8u;
            goto label_1aa0f8;
        }
    }
    ctx->pc = 0x1AA0B8u;
    // 0x1aa0b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aa0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0c0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1AA0C0u;
    SET_GPR_U32(ctx, 31, 0x1AA0C8u);
    ctx->pc = 0x1AA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0C0u;
    // 0x1aa0c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1AA0C0u, 0x1AA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0C8u;
label_1aa0c8:
    // 0x1aa0c8: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1aa0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1aa0cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa0d0: 0xc46012b0  lwc1        $f0, 0x12B0($v1)
    ctx->pc = 0x1aa0d0u;
    { uint32_t bits = FAST_READ32(0x4512B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa0d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa0d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1aa0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1aa0dc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1aa0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1aa0e0: 0xae24f058  sw          $a0, -0xFA8($s1)
    ctx->pc = 0x1aa0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963288), GPR_U32(ctx, 4));
    // 0x1aa0e4: 0x2605f050  addiu       $a1, $s0, -0xFB0
    ctx->pc = 0x1aa0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963280));
    // 0x1aa0e8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1aa0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aa0ec: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1aa0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aa0f0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1aa0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aa0f4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1aa0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa0f8:
    // 0x1aa0f8: 0x2602f050  addiu       $v0, $s0, -0xFB0
    ctx->pc = 0x1aa0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963280));
label_1aa0fc:
    // 0x1aa0fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa100: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1aa100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa108: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA108u;
        // 0x1aa10c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA110u;
}
