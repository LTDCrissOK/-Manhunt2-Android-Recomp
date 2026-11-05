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

// Function: sub_001343F0
// Address: 0x1343f0 - 0x134440
void sub_001343F0_0x1343f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001343F0_0x1343f0");
#endif

    switch (ctx->pc) {
        case 0x134418u: goto label_134418;
        case 0x13442cu: goto label_13442c;
        default: break;
    }

    ctx->pc = 0x1343f0u;

    // 0x1343f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1343f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1343f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1343f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1343f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1343fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1343fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134408u;
    {
        const bool branch_taken_0x134408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134408u;
        // 0x13440c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134408) {
            ctx->pc = 0x134418u;
            goto label_134418;
        }
    }
    ctx->pc = 0x134410u;
    // 0x134410: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x134410u;
    SET_GPR_U32(ctx, 31, 0x134418u);
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x134410u, 0x134418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134418u;
label_134418:
    // 0x134418: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x134418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x13441c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13441Cu;
    {
        const bool branch_taken_0x13441c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13441c) {
            ctx->pc = 0x134420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13441Cu;
            // 0x134420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134430u;
            goto label_134430;
        }
    }
    ctx->pc = 0x134424u;
    // 0x134424: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x134424u;
    SET_GPR_U32(ctx, 31, 0x13442Cu);
    ctx->pc = 0x134428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134424u;
    // 0x134428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x134424u, 0x13442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13442Cu;
label_13442c:
    // 0x13442c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13442cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134430:
    // 0x134430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134438: 0x3e00008  jr          $ra
    ctx->pc = 0x134438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134438u;
        // 0x13443c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134440u;
}
