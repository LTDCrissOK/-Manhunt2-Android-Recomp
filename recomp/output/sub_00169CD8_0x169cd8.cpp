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

// Function: sub_00169CD8
// Address: 0x169cd8 - 0x169d28
void sub_00169CD8_0x169cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169CD8_0x169cd8");
#endif

    switch (ctx->pc) {
        case 0x169d00u: goto label_169d00;
        case 0x169d10u: goto label_169d10;
        default: break;
    }

    ctx->pc = 0x169cd8u;

    // 0x169cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169ce0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169cec: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169cf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169CF0u;
    {
        const bool branch_taken_0x169cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF0u;
        // 0x169cf4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cf0) {
            ctx->pc = 0x169D04u;
            goto label_169d04;
        }
    }
    ctx->pc = 0x169CF8u;
    // 0x169cf8: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169CF8u;
    SET_GPR_U32(ctx, 31, 0x169D00u);
    ctx->pc = 0x169CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CF8u;
    // 0x169cfc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169CF8u, 0x169D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D00u;
label_169d00:
    // 0x169d00: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169d04:
    // 0x169d04: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169d08: 0xc046256  jal         func_118958
    ctx->pc = 0x169D08u;
    SET_GPR_U32(ctx, 31, 0x169D10u);
    ctx->pc = 0x169D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D08u;
    // 0x169d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x169D08u, 0x169D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D10u;
label_169d10:
    // 0x169d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x169D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D1Cu;
        // 0x169d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169D24u;
    // 0x169d24: 0x0  nop
    ctx->pc = 0x169d24u;
    // NOP
    ctx->pc = 0x169d28u;
}
