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

// Function: sub_002E9540
// Address: 0x2e9540 - 0x2e9590
void sub_002E9540_0x2e9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9540_0x2e9540");
#endif

    ctx->pc = 0x2e9540u;

    // 0x2e9540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9544: 0x0  nop
    ctx->pc = 0x2e9544u;
    // NOP
    // 0x2e9548: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e9548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e954c: 0x0  nop
    ctx->pc = 0x2e954cu;
    // NOP
    // 0x2e9550: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E9550u;
    {
        const bool branch_taken_0x2e9550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9550u;
        // 0x2e9554: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9550) {
            ctx->pc = 0x2E9584u;
            goto label_2e9584;
        }
    }
    ctx->pc = 0x2E9558u;
    // 0x2e9558: 0xc48010e0  lwc1        $f0, 0x10E0($a0)
    ctx->pc = 0x2e9558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e955c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x2e955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2e9560: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e9560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e9564: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2e9564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2e9568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e956c: 0xe48010e0  swc1        $f0, 0x10E0($a0)
    ctx->pc = 0x2e956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4320), bits); }
    // 0x2e9570: 0xc4411634  lwc1        $f1, 0x1634($v0)
    ctx->pc = 0x2e9570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e9574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9578: 0x0  nop
    ctx->pc = 0x2e9578u;
    // NOP
    // 0x2e957c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E957Cu;
    {
        const bool branch_taken_0x2e957c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e957c) {
            ctx->pc = 0x2E9580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E957Cu;
            // 0x2e9580: 0xe48110e0  swc1        $f1, 0x10E0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4320), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9584u;
            goto label_2e9584;
        }
    }
    ctx->pc = 0x2E9584u;
label_2e9584:
    // 0x2e9584: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E958Cu;
    // 0x2e958c: 0x0  nop
    ctx->pc = 0x2e958cu;
    // NOP
    ctx->pc = 0x2e9590u;
}
