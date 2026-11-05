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

// Function: sub_002029D8
// Address: 0x2029d8 - 0x202a40
void sub_002029D8_0x2029d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002029D8_0x2029d8");
#endif

    switch (ctx->pc) {
        case 0x202a10u: goto label_202a10;
        case 0x202a20u: goto label_202a20;
        default: break;
    }

    ctx->pc = 0x2029d8u;

    // 0x2029d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2029d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2029dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2029dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2029e0: 0x8c6293a4  lw          $v0, -0x6C5C($v1)
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F93A4u));
    // 0x2029e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2029e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2029e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2029e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2029ec: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2029ECu;
    {
        const bool branch_taken_0x2029ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2029F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029ECu;
        // 0x2029f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029ec) {
            ctx->pc = 0x202A28u;
            goto label_202a28;
        }
    }
    ctx->pc = 0x2029F4u;
    // 0x2029f4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2029f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2029f8: 0xac6593a4  sw          $a1, -0x6C5C($v1)
    ctx->pc = 0x2029f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939556), GPR_U32(ctx, 5));
    // 0x2029fc: 0x920293b4  lbu         $v0, -0x6C4C($s0)
    ctx->pc = 0x2029fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F93B4u));
    // 0x202a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202A00u;
    {
        const bool branch_taken_0x202a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a00) {
            ctx->pc = 0x202A18u;
            goto label_202a18;
        }
    }
    ctx->pc = 0x202A08u;
    // 0x202a08: 0xc080a90  jal         func_202A40
    ctx->pc = 0x202A08u;
    SET_GPR_U32(ctx, 31, 0x202A10u);
    ctx->pc = 0x202A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A40u, 0x202A08u, 0x202A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A10u;
label_202a10:
    // 0x202a10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202A10u;
    {
        const bool branch_taken_0x202a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A10u;
        // 0x202a14: 0xa20093b4  sb          $zero, -0x6C4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294939572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a10) {
            ctx->pc = 0x202A20u;
            goto label_202a20;
        }
    }
    ctx->pc = 0x202A18u;
label_202a18:
    // 0x202a18: 0xc080aaa  jal         func_202AA8
    ctx->pc = 0x202A18u;
    SET_GPR_U32(ctx, 31, 0x202A20u);
    ctx->pc = 0x202AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202AA8u, 0x202A18u, 0x202A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A20u;
label_202a20:
    // 0x202a20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202A20u;
    {
        const bool branch_taken_0x202a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A20u;
        // 0x202a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a20) {
            ctx->pc = 0x202A2Cu;
            goto label_202a2c;
        }
    }
    ctx->pc = 0x202A28u;
label_202a28:
    // 0x202a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202a2c:
    // 0x202a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x202a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202a34: 0x3e00008  jr          $ra
    ctx->pc = 0x202A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A34u;
        // 0x202a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202A3Cu;
    // 0x202a3c: 0x0  nop
    ctx->pc = 0x202a3cu;
    // NOP
    ctx->pc = 0x202a40u;
}
