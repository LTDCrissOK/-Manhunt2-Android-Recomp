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

// Function: sub_00399250
// Address: 0x399250 - 0x3992a8
void sub_00399250_0x399250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399250_0x399250");
#endif

    switch (ctx->pc) {
        case 0x399268u: goto label_399268;
        case 0x39928cu: goto label_39928c;
        default: break;
    }

    ctx->pc = 0x399250u;

    // 0x399250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39925c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399260: 0xc0eb89e  jal         func_3AE278
    ctx->pc = 0x399260u;
    SET_GPR_U32(ctx, 31, 0x399268u);
    ctx->pc = 0x399264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399260u;
    // 0x399264: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE278u, 0x399260u, 0x399268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399268u;
label_399268:
    // 0x399268: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x399268u;
    {
        const bool branch_taken_0x399268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399268u;
        // 0x39926c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399268) {
            ctx->pc = 0x399298u;
            goto label_399298;
        }
    }
    ctx->pc = 0x399270u;
    // 0x399270: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x399270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x399274: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x399274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x399278: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x399278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x39927c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x39927Cu;
    {
        const bool branch_taken_0x39927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39927c) {
            ctx->pc = 0x399280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39927Cu;
            // 0x399280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399298u;
            goto label_399298;
        }
    }
    ctx->pc = 0x399284u;
    // 0x399284: 0xc0eb8a0  jal         func_3AE280
    ctx->pc = 0x399284u;
    SET_GPR_U32(ctx, 31, 0x39928Cu);
    ctx->pc = 0x399288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399284u;
    // 0x399288: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE280u, 0x399284u, 0x39928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39928Cu;
label_39928c:
    // 0x39928c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39928Cu;
    {
        const bool branch_taken_0x39928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39928Cu;
        // 0x399290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39928c) {
            ctx->pc = 0x39929Cu;
            goto label_39929c;
        }
    }
    ctx->pc = 0x399294u;
    // 0x399294: 0x0  nop
    ctx->pc = 0x399294u;
    // NOP
label_399298:
    // 0x399298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39929c:
    // 0x39929c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39929cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3992a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3992A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3992A0u;
        // 0x3992a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3992A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3992A8u;
}
