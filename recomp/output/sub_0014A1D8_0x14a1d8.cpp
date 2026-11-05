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

// Function: sub_0014A1D8
// Address: 0x14a1d8 - 0x14a228
void sub_0014A1D8_0x14a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A1D8_0x14a1d8");
#endif

    switch (ctx->pc) {
        case 0x14a1f4u: goto label_14a1f4;
        case 0x14a1fcu: goto label_14a1fc;
        case 0x14a210u: goto label_14a210;
        default: break;
    }

    ctx->pc = 0x14a1d8u;

    // 0x14a1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a1ec: 0xc05290c  jal         func_14A430
    ctx->pc = 0x14A1ECu;
    SET_GPR_U32(ctx, 31, 0x14A1F4u);
    ctx->pc = 0x14A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1ECu;
    // 0x14a1f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A430u, 0x14A1ECu, 0x14A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1F4u;
label_14a1f4:
    // 0x14a1f4: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x14A1F4u;
    SET_GPR_U32(ctx, 31, 0x14A1FCu);
    ctx->pc = 0x14A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1F4u;
    // 0x14a1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x14A1F4u, 0x14A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1FCu;
label_14a1fc:
    // 0x14a1fc: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x14a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x14a200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a204: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14a204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x14a208: 0xc04d89a  jal         func_136268
    ctx->pc = 0x14A208u;
    SET_GPR_U32(ctx, 31, 0x14A210u);
    ctx->pc = 0x14A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A208u;
    // 0x14a20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x14A208u, 0x14A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A210u;
label_14a210:
    // 0x14a210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a21c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A21Cu;
        // 0x14a220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A224u;
    // 0x14a224: 0x0  nop
    ctx->pc = 0x14a224u;
    // NOP
    ctx->pc = 0x14a228u;
}
