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

// Function: sub_00299CC0
// Address: 0x299cc0 - 0x299d10
void sub_00299CC0_0x299cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299CC0_0x299cc0");
#endif

    switch (ctx->pc) {
        case 0x299cd4u: goto label_299cd4;
        default: break;
    }

    ctx->pc = 0x299cc0u;

    // 0x299cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x299cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x299ccc: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x299CCCu;
    SET_GPR_U32(ctx, 31, 0x299CD4u);
    ctx->pc = 0x299CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CCCu;
    // 0x299cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x299CCCu, 0x299CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CD4u;
label_299cd4:
    // 0x299cd4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x299cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x299cd8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x299cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x299cdc: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x299cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x299ce0: 0x24633028  addiu       $v1, $v1, 0x3028
    ctx->pc = 0x299ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12328));
    // 0x299ce4: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x299ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x299ce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299cec: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x299cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x299cf0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x299cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x299cf4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x299cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x299cf8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x299cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x299cfc: 0xa2000088  sb          $zero, 0x88($s0)
    ctx->pc = 0x299cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x299d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299d08: 0x3e00008  jr          $ra
    ctx->pc = 0x299D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D08u;
        // 0x299d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D10u;
}
