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

// Function: sub_00134AE0
// Address: 0x134ae0 - 0x134b30
void sub_00134AE0_0x134ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134AE0_0x134ae0");
#endif

    switch (ctx->pc) {
        case 0x134b04u: goto label_134b04;
        case 0x134b14u: goto label_134b14;
        case 0x134b1cu: goto label_134b1c;
        default: break;
    }

    ctx->pc = 0x134ae0u;

    // 0x134ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134af0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x134af4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x134AF4u;
    {
        const bool branch_taken_0x134af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134af4) {
            ctx->pc = 0x134AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134AF4u;
            // 0x134af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B20u;
            goto label_134b20;
        }
    }
    ctx->pc = 0x134AFCu;
    // 0x134afc: 0xc04d5d4  jal         func_135750
    ctx->pc = 0x134AFCu;
    SET_GPR_U32(ctx, 31, 0x134B04u);
    ctx->pc = 0x135750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135750u, 0x134AFCu, 0x134B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B04u;
label_134b04:
    // 0x134b04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x134b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b0c: 0xc04d348  jal         func_134D20
    ctx->pc = 0x134B0Cu;
    SET_GPR_U32(ctx, 31, 0x134B14u);
    ctx->pc = 0x134B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B0Cu;
    // 0x134b10: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D20u, 0x134B0Cu, 0x134B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B14u;
label_134b14:
    // 0x134b14: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x134B14u;
    SET_GPR_U32(ctx, 31, 0x134B1Cu);
    ctx->pc = 0x134B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B14u;
    // 0x134b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x134B14u, 0x134B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B1Cu;
label_134b1c:
    // 0x134b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134b20:
    // 0x134b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134b24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134b28: 0x3e00008  jr          $ra
    ctx->pc = 0x134B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B28u;
        // 0x134b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B30u;
}
