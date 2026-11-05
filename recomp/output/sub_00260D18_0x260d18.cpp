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

// Function: sub_00260D18
// Address: 0x260d18 - 0x260d78
void sub_00260D18_0x260d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260D18_0x260d18");
#endif

    switch (ctx->pc) {
        case 0x260d38u: goto label_260d38;
        case 0x260d58u: goto label_260d58;
        default: break;
    }

    ctx->pc = 0x260d18u;

    // 0x260d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x260d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x260d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x260d24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x260d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x260d30: 0xc0844c0  jal         func_211300
    ctx->pc = 0x260D30u;
    SET_GPR_U32(ctx, 31, 0x260D38u);
    ctx->pc = 0x260D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D30u;
    // 0x260d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x260D30u, 0x260D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D38u;
label_260d38:
    // 0x260d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d3c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x260d40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x260d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x260d44: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x260d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x260d48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x260D48u;
    {
        const bool branch_taken_0x260d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D48u;
        // 0x260d4c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d48) {
            ctx->pc = 0x260D58u;
            goto label_260d58;
        }
    }
    ctx->pc = 0x260D50u;
    // 0x260d50: 0xc084492  jal         func_211248
    ctx->pc = 0x260D50u;
    SET_GPR_U32(ctx, 31, 0x260D58u);
    ctx->pc = 0x260D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D50u;
    // 0x260d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x260D50u, 0x260D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D58u;
label_260d58:
    // 0x260d58: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x260d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x260d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260d60: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x260d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x260d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x260d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260d68: 0xae220230  sw          $v0, 0x230($s1)
    ctx->pc = 0x260d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 2));
    // 0x260d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x260d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260d70: 0x3e00008  jr          $ra
    ctx->pc = 0x260D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D70u;
        // 0x260d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260D78u;
}
