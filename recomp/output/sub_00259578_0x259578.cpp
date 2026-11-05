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

// Function: sub_00259578
// Address: 0x259578 - 0x2595d8
void sub_00259578_0x259578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259578_0x259578");
#endif

    switch (ctx->pc) {
        case 0x25958cu: goto label_25958c;
        case 0x2595bcu: goto label_2595bc;
        default: break;
    }

    ctx->pc = 0x259578u;

    // 0x259578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25957c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259580: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x259580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x259584: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x259584u;
    SET_GPR_U32(ctx, 31, 0x25958Cu);
    ctx->pc = 0x259588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259584u;
    // 0x259588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x259584u, 0x25958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25958Cu;
label_25958c:
    // 0x25958c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x25958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x259590: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x259590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x259594: 0x24632250  addiu       $v1, $v1, 0x2250
    ctx->pc = 0x259594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8784));
    // 0x259598: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x259598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x25959c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x25959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x2595a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2595a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2595a4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x2595a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x2595a8: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x2595a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x2595ac: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x2595acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x2595b0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2595b4: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x2595B4u;
    SET_GPR_U32(ctx, 31, 0x2595BCu);
    ctx->pc = 0x2595B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595B4u;
    // 0x2595b8: 0x8c450200  lw          $a1, 0x200($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x2595B4u, 0x2595BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595BCu;
label_2595bc:
    // 0x2595bc: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x2595bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x2595c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2595c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2595c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2595c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2595c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2595c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2595cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2595CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2595D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595CCu;
        // 0x2595d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2595CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2595D4u;
    // 0x2595d4: 0x0  nop
    ctx->pc = 0x2595d4u;
    // NOP
    ctx->pc = 0x2595d8u;
}
