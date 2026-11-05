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

// Function: sub_001331B0
// Address: 0x1331b0 - 0x133210
void sub_001331B0_0x1331b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001331B0_0x1331b0");
#endif

    switch (ctx->pc) {
        case 0x1331d8u: goto label_1331d8;
        case 0x1331e8u: goto label_1331e8;
        case 0x1331f0u: goto label_1331f0;
        default: break;
    }

    ctx->pc = 0x1331b0u;

    // 0x1331b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1331b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1331b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1331b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1331b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1331b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1331bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1331bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1331c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1331c4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1331c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1331c8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1331C8u;
    {
        const bool branch_taken_0x1331c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331C8u;
        // 0x1331cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331c8) {
            ctx->pc = 0x1331F8u;
            goto label_1331f8;
        }
    }
    ctx->pc = 0x1331D0u;
    // 0x1331d0: 0xc042448  jal         func_109120
    ctx->pc = 0x1331D0u;
    SET_GPR_U32(ctx, 31, 0x1331D8u);
    ctx->pc = 0x109120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109120u, 0x1331D0u, 0x1331D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331D8u;
label_1331d8:
    // 0x1331d8: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1331D8u;
    {
        const bool branch_taken_0x1331d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1331DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331D8u;
        // 0x1331dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331d8) {
            ctx->pc = 0x1331FCu;
            goto label_1331fc;
        }
    }
    ctx->pc = 0x1331E0u;
    // 0x1331e0: 0xc04ccda  jal         func_133368
    ctx->pc = 0x1331E0u;
    SET_GPR_U32(ctx, 31, 0x1331E8u);
    ctx->pc = 0x1331E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331E0u;
    // 0x1331e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133368u, 0x1331E0u, 0x1331E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331E8u;
label_1331e8:
    // 0x1331e8: 0xc04cc10  jal         func_133040
    ctx->pc = 0x1331E8u;
    SET_GPR_U32(ctx, 31, 0x1331F0u);
    ctx->pc = 0x1331ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331E8u;
    // 0x1331ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x1331E8u, 0x1331F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331F0u;
label_1331f0:
    // 0x1331f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1331F0u;
    {
        const bool branch_taken_0x1331f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331F0u;
        // 0x1331f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331f0) {
            ctx->pc = 0x1331FCu;
            goto label_1331fc;
        }
    }
    ctx->pc = 0x1331F8u;
label_1331f8:
    // 0x1331f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1331f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1331fc:
    // 0x1331fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1331fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133208: 0x3e00008  jr          $ra
    ctx->pc = 0x133208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133208u;
        // 0x13320c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133210u;
}
