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

// Function: sub_003AC1F8
// Address: 0x3ac1f8 - 0x3ac280
void sub_003AC1F8_0x3ac1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC1F8_0x3ac1f8");
#endif

    ctx->pc = 0x3ac1f8u;

    // 0x3ac1f8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3ac1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ac1fc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3ac1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ac200: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x3ac200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ac204: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x3ac204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ac208: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3ac208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ac20c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x3ac20cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x3ac210: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3ac210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ac214: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3ac214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ac218: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC218u;
    {
        const bool branch_taken_0x3ac218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac218) {
            ctx->pc = 0x3AC21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC218u;
            // 0x3ac21c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC22Cu;
            goto label_3ac22c;
        }
    }
    ctx->pc = 0x3AC220u;
    // 0x3ac220: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3ac220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3ac224: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ac224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac228: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3ac228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3ac22c:
    // 0x3ac22c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ac22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ac230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC230u;
    {
        const bool branch_taken_0x3ac230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC230u;
        // 0x3ac234: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac230) {
            ctx->pc = 0x3AC240u;
            goto label_3ac240;
        }
    }
    ctx->pc = 0x3AC238u;
    // 0x3ac238: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC238u;
        // 0x3ac23c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC240u;
label_3ac240:
    // 0x3ac240: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3ac240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ac244: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3ac244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ac248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ac248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ac24c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC24Cu;
        // 0x3ac250: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC254u;
    // 0x3ac254: 0x0  nop
    ctx->pc = 0x3ac254u;
    // NOP
    // 0x3ac258: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3ac258u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ac25c: 0x0  nop
    ctx->pc = 0x3ac25cu;
    // NOP
    // 0x3ac260: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ac264: 0x0  nop
    ctx->pc = 0x3ac264u;
    // NOP
    // 0x3ac268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ac268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ac26c: 0x0  nop
    ctx->pc = 0x3ac26cu;
    // NOP
    // 0x3ac270: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ac270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ac274: 0x0  nop
    ctx->pc = 0x3ac274u;
    // NOP
    // 0x3ac278: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ac278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ac27c: 0x0  nop
    ctx->pc = 0x3ac27cu;
    // NOP
    ctx->pc = 0x3ac280u;
}
