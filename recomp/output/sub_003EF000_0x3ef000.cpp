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

// Function: sub_003EF000
// Address: 0x3ef000 - 0x3ef050
void sub_003EF000_0x3ef000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF000_0x3ef000");
#endif

    ctx->pc = 0x3ef000u;

    // 0x3ef000: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF000u;
        // 0x3ef004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF008u;
    // 0x3ef008: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ef008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ef00c: 0x0  nop
    ctx->pc = 0x3ef00cu;
    // NOP
    // 0x3ef010: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3ef010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3ef014: 0x0  nop
    ctx->pc = 0x3ef014u;
    // NOP
    // 0x3ef018: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ef018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ef01c: 0x0  nop
    ctx->pc = 0x3ef01cu;
    // NOP
    // 0x3ef020: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3ef020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3ef024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ef024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ef028: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3ef028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ef02c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef02cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ef030: 0x0  nop
    ctx->pc = 0x3ef030u;
    // NOP
    // 0x3ef034: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF034u;
    {
        const bool branch_taken_0x3ef034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF034u;
        // 0x3ef038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef034) {
            ctx->pc = 0x3EF048u;
            goto label_3ef048;
        }
    }
    ctx->pc = 0x3EF03Cu;
    // 0x3ef03c: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x3ef03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x3ef040: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ef040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3ef044: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ef044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3ef048:
    // 0x3ef048: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF050u;
}
