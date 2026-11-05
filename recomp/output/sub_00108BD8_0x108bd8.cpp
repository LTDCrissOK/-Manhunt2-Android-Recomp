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

// Function: sub_00108BD8
// Address: 0x108bd8 - 0x108c28
void sub_00108BD8_0x108bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108BD8_0x108bd8");
#endif

    switch (ctx->pc) {
        case 0x108c00u: goto label_108c00;
        default: break;
    }

    ctx->pc = 0x108bd8u;

    // 0x108bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108be0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x108be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x108be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108be8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bec: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x108becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x108bf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x108bf4: 0xa2020051  sb          $v0, 0x51($s0)
    ctx->pc = 0x108bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x108bf8: 0xc04565c  jal         func_115970
    ctx->pc = 0x108BF8u;
    SET_GPR_U32(ctx, 31, 0x108C00u);
    ctx->pc = 0x108BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BF8u;
    // 0x108bfc: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115970u, 0x108BF8u, 0x108C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C00u;
label_108c00:
    // 0x108c00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x108C00u;
    {
        const bool branch_taken_0x108c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108c00) {
            ctx->pc = 0x108C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108C00u;
            // 0x108c04: 0x92020050  lbu         $v0, 0x50($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108C10u;
            goto label_108c10;
        }
    }
    ctx->pc = 0x108C08u;
    // 0x108c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108C08u;
    {
        const bool branch_taken_0x108c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C08u;
        // 0x108c0c: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c08) {
            ctx->pc = 0x108C14u;
            goto label_108c14;
        }
    }
    ctx->pc = 0x108C10u;
label_108c10:
    // 0x108c10: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x108c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
label_108c14:
    // 0x108c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108c18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x108c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x108C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C1Cu;
        // 0x108c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C24u;
    // 0x108c24: 0x0  nop
    ctx->pc = 0x108c24u;
    // NOP
    ctx->pc = 0x108c28u;
}
