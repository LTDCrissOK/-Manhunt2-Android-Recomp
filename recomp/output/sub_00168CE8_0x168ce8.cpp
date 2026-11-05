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

// Function: sub_00168CE8
// Address: 0x168ce8 - 0x168d28
void sub_00168CE8_0x168ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168CE8_0x168ce8");
#endif

    switch (ctx->pc) {
        case 0x168d04u: goto label_168d04;
        case 0x168d14u: goto label_168d14;
        default: break;
    }

    ctx->pc = 0x168ce8u;

    // 0x168ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168cf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x168cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cf4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CF4u;
        // 0x168cf8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168D14u;
            goto label_168d14;
        }
    }
    ctx->pc = 0x168CFCu;
    // 0x168cfc: 0xc040088  jal         func_100220
    ctx->pc = 0x168CFCu;
    SET_GPR_U32(ctx, 31, 0x168D04u);
    ctx->pc = 0x168D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CFCu;
    // 0x168d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x168CFCu, 0x168D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D04u;
label_168d04:
    // 0x168d04: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x168d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x168d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d0c: 0xc041ec0  jal         func_107B00
    ctx->pc = 0x168D0Cu;
    SET_GPR_U32(ctx, 31, 0x168D14u);
    ctx->pc = 0x168D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D0Cu;
    // 0x168d10: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B00u, 0x168D0Cu, 0x168D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D14u;
label_168d14:
    // 0x168d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x168d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x168D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D1Cu;
        // 0x168d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D24u;
    // 0x168d24: 0x0  nop
    ctx->pc = 0x168d24u;
    // NOP
    ctx->pc = 0x168d28u;
}
