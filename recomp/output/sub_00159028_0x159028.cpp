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

// Function: sub_00159028
// Address: 0x159028 - 0x159090
void sub_00159028_0x159028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159028_0x159028");
#endif

    switch (ctx->pc) {
        case 0x15903cu: goto label_15903c;
        case 0x159044u: goto label_159044;
        case 0x15904cu: goto label_15904c;
        case 0x159054u: goto label_159054;
        case 0x15905cu: goto label_15905c;
        case 0x159064u: goto label_159064;
        default: break;
    }

    ctx->pc = 0x159028u;

    // 0x159028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15902c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x159030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x159034: 0xc056488  jal         func_159220
    ctx->pc = 0x159034u;
    SET_GPR_U32(ctx, 31, 0x15903Cu);
    ctx->pc = 0x159038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159034u;
    // 0x159038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159220u, 0x159034u, 0x15903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15903Cu;
label_15903c:
    // 0x15903c: 0xc0564a6  jal         func_159298
    ctx->pc = 0x15903Cu;
    SET_GPR_U32(ctx, 31, 0x159044u);
    ctx->pc = 0x159040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15903Cu;
    // 0x159040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159298u, 0x15903Cu, 0x159044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159044u;
label_159044:
    // 0x159044: 0xc0564ce  jal         func_159338
    ctx->pc = 0x159044u;
    SET_GPR_U32(ctx, 31, 0x15904Cu);
    ctx->pc = 0x159048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159044u;
    // 0x159048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159338u, 0x159044u, 0x15904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15904Cu;
label_15904c:
    // 0x15904c: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x15904Cu;
    SET_GPR_U32(ctx, 31, 0x159054u);
    ctx->pc = 0x159050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15904Cu;
    // 0x159050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x15904Cu, 0x159054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159054u;
label_159054:
    // 0x159054: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x159054u;
    SET_GPR_U32(ctx, 31, 0x15905Cu);
    ctx->pc = 0x159058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159054u;
    // 0x159058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x159054u, 0x15905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15905Cu;
label_15905c:
    // 0x15905c: 0xc0566c2  jal         func_159B08
    ctx->pc = 0x15905Cu;
    SET_GPR_U32(ctx, 31, 0x159064u);
    ctx->pc = 0x159060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15905Cu;
    // 0x159060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B08u, 0x15905Cu, 0x159064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159064u;
label_159064:
    // 0x159064: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x159064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x159068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159068u;
    {
        const bool branch_taken_0x159068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159068u;
        // 0x15906c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159068) {
            ctx->pc = 0x15907Cu;
            goto label_15907c;
        }
    }
    ctx->pc = 0x159070u;
    // 0x159070: 0x8e0302e4  lw          $v1, 0x2E4($s0)
    ctx->pc = 0x159070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x159074: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x159074u;
    {
        const bool branch_taken_0x159074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159074) {
            ctx->pc = 0x159078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159074u;
            // 0x159078: 0x8e0202e0  lw          $v0, 0x2E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15907Cu;
            goto label_15907c;
        }
    }
    ctx->pc = 0x15907Cu;
label_15907c:
    // 0x15907c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15907cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159084: 0x3e00008  jr          $ra
    ctx->pc = 0x159084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159084u;
        // 0x159088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15908Cu;
    // 0x15908c: 0x0  nop
    ctx->pc = 0x15908cu;
    // NOP
    ctx->pc = 0x159090u;
}
