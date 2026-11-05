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

// Function: sub_002A9578
// Address: 0x2a9578 - 0x2a95c0
void sub_002A9578_0x2a9578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9578_0x2a9578");
#endif

    switch (ctx->pc) {
        case 0x2a959cu: goto label_2a959c;
        default: break;
    }

    ctx->pc = 0x2a9578u;

    // 0x2a9578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a957c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9584: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a9588: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x2a9588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2a958c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A958Cu;
    {
        const bool branch_taken_0x2a958c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A958Cu;
        // 0x2a9590: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a958c) {
            ctx->pc = 0x2A95ACu;
            goto label_2a95ac;
        }
    }
    ctx->pc = 0x2A9594u;
    // 0x2a9594: 0xc0aadb0  jal         func_2AB6C0
    ctx->pc = 0x2A9594u;
    SET_GPR_U32(ctx, 31, 0x2A959Cu);
    ctx->pc = 0x2A9598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9594u;
    // 0x2a9598: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6C0u, 0x2A9594u, 0x2A959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A959Cu;
label_2a959c:
    // 0x2a959c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a95a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a95a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a95a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a95a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a95a8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a95a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a95ac:
    // 0x2a95ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a95acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a95b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a95b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a95b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A95B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95B4u;
        // 0x2a95b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A95B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A95BCu;
    // 0x2a95bc: 0x0  nop
    ctx->pc = 0x2a95bcu;
    // NOP
    ctx->pc = 0x2a95c0u;
}
