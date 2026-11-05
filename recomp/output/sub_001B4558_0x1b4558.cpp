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

// Function: sub_001B4558
// Address: 0x1b4558 - 0x1b45a8
void sub_001B4558_0x1b4558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4558_0x1b4558");
#endif

    ctx->pc = 0x1b4558u;

    // 0x1b4558: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b4558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b455c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b455cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4560: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1b4560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4564: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b4564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4568: 0x0  nop
    ctx->pc = 0x1b4568u;
    // NOP
    // 0x1b456c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1B456Cu;
    {
        const bool branch_taken_0x1b456c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B456Cu;
        // 0x1b4570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b456c) {
            ctx->pc = 0x1B459Cu;
            goto label_1b459c;
        }
    }
    ctx->pc = 0x1B4574u;
    // 0x1b4574: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x1b4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1b4578: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1b4578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1b457c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b457cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4580: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b4584: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1b4584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4588: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b4588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b458c: 0x0  nop
    ctx->pc = 0x1b458cu;
    // NOP
    // 0x1b4590: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4590u;
    {
        const bool branch_taken_0x1b4590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4590u;
        // 0x1b4594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4590) {
            ctx->pc = 0x1B459Cu;
            goto label_1b459c;
        }
    }
    ctx->pc = 0x1B4598u;
    // 0x1b4598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b459c:
    // 0x1b459c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B459Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B459Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B45A4u;
    // 0x1b45a4: 0x0  nop
    ctx->pc = 0x1b45a4u;
    // NOP
    ctx->pc = 0x1b45a8u;
}
