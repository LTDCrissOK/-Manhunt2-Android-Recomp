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

// Function: sub_00201C90
// Address: 0x201c90 - 0x201ce0
void sub_00201C90_0x201c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201C90_0x201c90");
#endif

    switch (ctx->pc) {
        case 0x201cd4u: goto label_201cd4;
        default: break;
    }

    ctx->pc = 0x201c90u;

    // 0x201c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x201c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c9c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x201c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x201ca0: 0x8c4701f4  lw          $a3, 0x1F4($v0)
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x201ca4: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x201CA4u;
    {
        const bool branch_taken_0x201ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CA4u;
        // 0x201ca8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ca4) {
            ctx->pc = 0x201CD4u;
            goto label_201cd4;
        }
    }
    ctx->pc = 0x201CACu;
    // 0x201cac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201cb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x201cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x201cb4: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x201cb8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x201cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x201cbc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201CBCu;
    {
        const bool branch_taken_0x201cbc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CBCu;
        // 0x201cc0: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cbc) {
            ctx->pc = 0x201CCCu;
            goto label_201ccc;
        }
    }
    ctx->pc = 0x201CC4u;
    // 0x201cc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x201cc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x201cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_201ccc:
    // 0x201ccc: 0xc0828dc  jal         func_20A370
    ctx->pc = 0x201CCCu;
    SET_GPR_U32(ctx, 31, 0x201CD4u);
    ctx->pc = 0x201CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CCCu;
    // 0x201cd0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A370u, 0x201CCCu, 0x201CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CD4u;
label_201cd4:
    // 0x201cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x201CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CD8u;
        // 0x201cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201CE0u;
}
