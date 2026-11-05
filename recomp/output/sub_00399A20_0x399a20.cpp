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

// Function: sub_00399A20
// Address: 0x399a20 - 0x399a90
void sub_00399A20_0x399a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399A20_0x399a20");
#endif

    switch (ctx->pc) {
        case 0x399a34u: goto label_399a34;
        case 0x399a3cu: goto label_399a3c;
        case 0x399a48u: goto label_399a48;
        case 0x399a50u: goto label_399a50;
        case 0x399a70u: goto label_399a70;
        default: break;
    }

    ctx->pc = 0x399a20u;

    // 0x399a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399a28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399a2c: 0xc0e6760  jal         func_399D80
    ctx->pc = 0x399A2Cu;
    SET_GPR_U32(ctx, 31, 0x399A34u);
    ctx->pc = 0x399A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A2Cu;
    // 0x399a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D80u, 0x399A2Cu, 0x399A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A34u;
label_399a34:
    // 0x399a34: 0xc0e6660  jal         func_399980
    ctx->pc = 0x399A34u;
    SET_GPR_U32(ctx, 31, 0x399A3Cu);
    ctx->pc = 0x399A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A34u;
    // 0x399a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399980u, 0x399A34u, 0x399A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A3Cu;
label_399a3c:
    // 0x399a3c: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x399a3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x399a40: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x399A40u;
    {
        const bool branch_taken_0x399a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x399a40) {
            ctx->pc = 0x399A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399A40u;
            // 0x399a44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A60u;
            goto label_399a60;
        }
    }
    ctx->pc = 0x399A48u;
label_399a48:
    // 0x399a48: 0xc0e57a4  jal         func_395E90
    ctx->pc = 0x399A48u;
    SET_GPR_U32(ctx, 31, 0x399A50u);
    ctx->pc = 0x395E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E90u, 0x399A48u, 0x399A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A50u;
label_399a50:
    // 0x399a50: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x399a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x399a54: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x399A54u;
    {
        const bool branch_taken_0x399a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399a54) {
            ctx->pc = 0x399A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399a48;
        }
    }
    ctx->pc = 0x399A5Cu;
    // 0x399a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_399a60:
    // 0x399a60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399a64: 0x3e00008  jr          $ra
    ctx->pc = 0x399A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A64u;
        // 0x399a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399A6Cu;
    // 0x399a6c: 0x0  nop
    ctx->pc = 0x399a6cu;
    // NOP
label_399a70:
    // 0x399a70: 0x80830049  lb          $v1, 0x49($a0)
    ctx->pc = 0x399a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x399a74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x399A74u;
    {
        const bool branch_taken_0x399a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A74u;
        // 0x399a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a74) {
            ctx->pc = 0x399A84u;
            goto label_399a84;
        }
    }
    ctx->pc = 0x399A7Cu;
    // 0x399a7c: 0x8082004d  lb          $v0, 0x4D($a0)
    ctx->pc = 0x399a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x399a80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x399a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_399a84:
    // 0x399a84: 0x3e00008  jr          $ra
    ctx->pc = 0x399A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399A8Cu;
    // 0x399a8c: 0x0  nop
    ctx->pc = 0x399a8cu;
    // NOP
    ctx->pc = 0x399a90u;
}
