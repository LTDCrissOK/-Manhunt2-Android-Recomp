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

// Function: sub_0031E948
// Address: 0x31e948 - 0x31e9d8
void sub_0031E948_0x31e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E948_0x31e948");
#endif

    switch (ctx->pc) {
        case 0x31e948u: goto label_31e948;
        case 0x31e94cu: goto label_31e94c;
        case 0x31e950u: goto label_31e950;
        case 0x31e954u: goto label_31e954;
        case 0x31e958u: goto label_31e958;
        case 0x31e95cu: goto label_31e95c;
        case 0x31e960u: goto label_31e960;
        case 0x31e964u: goto label_31e964;
        case 0x31e968u: goto label_31e968;
        case 0x31e96cu: goto label_31e96c;
        case 0x31e970u: goto label_31e970;
        case 0x31e974u: goto label_31e974;
        case 0x31e978u: goto label_31e978;
        case 0x31e97cu: goto label_31e97c;
        case 0x31e980u: goto label_31e980;
        case 0x31e984u: goto label_31e984;
        case 0x31e988u: goto label_31e988;
        case 0x31e98cu: goto label_31e98c;
        case 0x31e990u: goto label_31e990;
        case 0x31e994u: goto label_31e994;
        case 0x31e998u: goto label_31e998;
        case 0x31e99cu: goto label_31e99c;
        case 0x31e9a0u: goto label_31e9a0;
        case 0x31e9a4u: goto label_31e9a4;
        case 0x31e9a8u: goto label_31e9a8;
        case 0x31e9acu: goto label_31e9ac;
        case 0x31e9b0u: goto label_31e9b0;
        case 0x31e9b4u: goto label_31e9b4;
        case 0x31e9b8u: goto label_31e9b8;
        case 0x31e9bcu: goto label_31e9bc;
        case 0x31e9c0u: goto label_31e9c0;
        case 0x31e9c4u: goto label_31e9c4;
        case 0x31e9c8u: goto label_31e9c8;
        case 0x31e9ccu: goto label_31e9cc;
        case 0x31e9d0u: goto label_31e9d0;
        case 0x31e9d4u: goto label_31e9d4;
        default: break;
    }

    ctx->pc = 0x31e948u;

label_31e948:
    // 0x31e948: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_31e94c:
    // 0x31e94c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x31e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_31e950:
    // 0x31e950: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x31e950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_31e954:
    // 0x31e954: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31e954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31e958:
    // 0x31e958: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_31e95c:
    // 0x31e95c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31e95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e960:
    // 0x31e960: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31e964:
    // 0x31e964: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31e964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_31e968:
    // 0x31e968: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x31e968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_31e96c:
    // 0x31e96c: 0x1000000d  b           . + 4 + (0xD << 2)
label_31e970:
    if (ctx->pc == 0x31E970u) {
        ctx->pc = 0x31E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E96Cu;
        // 0x31e970: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E974u;
        goto label_31e974;
    }
    ctx->pc = 0x31E96Cu;
    {
        const bool branch_taken_0x31e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E96Cu;
        // 0x31e970: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e96c) {
            ctx->pc = 0x31E9A4u;
            goto label_31e9a4;
        }
    }
    ctx->pc = 0x31E974u;
label_31e974:
    // 0x31e974: 0x0  nop
    ctx->pc = 0x31e974u;
    // NOP
label_31e978:
    // 0x31e978: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x31e978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31e97c:
    // 0x31e97c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x31e97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31e980:
    // 0x31e980: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x31e980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31e984:
    // 0x31e984: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x31e984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31e988:
    // 0x31e988: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31e98c:
    // 0x31e98c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31e990:
    // 0x31e990: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x31e990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_31e994:
    // 0x31e994: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x31e994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31e998:
    // 0x31e998: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x31e998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31e99c:
    // 0x31e99c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x31e99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31e9a0:
    // 0x31e9a0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x31e9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31e9a4:
    // 0x31e9a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31e9a8:
    // 0x31e9a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x31e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_31e9ac:
    // 0x31e9ac: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_31e9b0:
    if (ctx->pc == 0x31E9B0u) {
        ctx->pc = 0x31E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9ACu;
        // 0x31e9b0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9B4u;
        goto label_31e9b4;
    }
    ctx->pc = 0x31E9ACu;
    {
        const bool branch_taken_0x31e9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x31e9ac) {
            ctx->pc = 0x31E9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E9ACu;
            // 0x31e9b0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E9C8u;
            goto label_31e9c8;
        }
    }
    ctx->pc = 0x31E9B4u;
label_31e9b4:
    // 0x31e9b4: 0x220f809  jalr        $s1
label_31e9b8:
    if (ctx->pc == 0x31E9B8u) {
        ctx->pc = 0x31E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B4u;
        // 0x31e9b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9BCu;
        goto label_31e9bc;
    }
    ctx->pc = 0x31E9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x31E9BCu);
        ctx->pc = 0x31E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B4u;
        // 0x31e9b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E9B4u, 0x31E9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E9BCu;
label_31e9bc:
    // 0x31e9bc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_31e9c0:
    if (ctx->pc == 0x31E9C0u) {
        ctx->pc = 0x31E9C4u;
        goto label_31e9c4;
    }
    ctx->pc = 0x31E9BCu;
    {
        const bool branch_taken_0x31e9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e9bc) {
            ctx->pc = 0x31E978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e978;
        }
    }
    ctx->pc = 0x31E9C4u;
label_31e9c4:
    // 0x31e9c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x31e9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31e9c8:
    // 0x31e9c8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x31e9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_31e9cc:
    // 0x31e9cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31e9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31e9d0:
    // 0x31e9d0: 0x3e00008  jr          $ra
label_31e9d4:
    if (ctx->pc == 0x31E9D4u) {
        ctx->pc = 0x31E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9D0u;
        // 0x31e9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9D8u;
        goto label_fallthrough_0x31e9d0;
    }
    ctx->pc = 0x31E9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9D0u;
        // 0x31e9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e9d0:
    ctx->pc = 0x31E9D8u;
}
