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

// Function: sub_0038A3E0
// Address: 0x38a3e0 - 0x38a438
void sub_0038A3E0_0x38a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A3E0_0x38a3e0");
#endif

    switch (ctx->pc) {
        case 0x38a418u: goto label_38a418;
        case 0x38a428u: goto label_38a428;
        default: break;
    }

    ctx->pc = 0x38a3e0u;

    // 0x38a3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a3e8: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x38a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x38a3ec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x38A3ECu;
    {
        const bool branch_taken_0x38a3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a3ec) {
            ctx->pc = 0x38A420u;
            goto label_38a420;
        }
    }
    ctx->pc = 0x38A3F4u;
    // 0x38a3f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x38A3F4u;
    {
        const bool branch_taken_0x38a3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a3f4) {
            ctx->pc = 0x38A420u;
            goto label_38a420;
        }
    }
    ctx->pc = 0x38A3FCu;
    // 0x38a3fc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x38a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38a400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A400u;
    {
        const bool branch_taken_0x38a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A400u;
        // 0x38a404: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a400) {
            ctx->pc = 0x38A420u;
            goto label_38a420;
        }
    }
    ctx->pc = 0x38A408u;
    // 0x38a408: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x38a408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x38a40c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x38a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x38a410: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38A410u;
    SET_GPR_U32(ctx, 31, 0x38A418u);
    ctx->pc = 0x38A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A410u;
    // 0x38a414: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38A410u, 0x38A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A418u;
label_38a418:
    // 0x38a418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38A418u;
    {
        const bool branch_taken_0x38a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A418u;
        // 0x38a41c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a418) {
            ctx->pc = 0x38A42Cu;
            goto label_38a42c;
        }
    }
    ctx->pc = 0x38A420u;
label_38a420:
    // 0x38a420: 0xc0e289a  jal         func_38A268
    ctx->pc = 0x38A420u;
    SET_GPR_U32(ctx, 31, 0x38A428u);
    ctx->pc = 0x38A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A420u;
    // 0x38a424: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A268u, 0x38A420u, 0x38A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A428u;
label_38a428:
    // 0x38a428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38a42c:
    // 0x38a42c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A42Cu;
        // 0x38a430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A434u;
    // 0x38a434: 0x0  nop
    ctx->pc = 0x38a434u;
    // NOP
    ctx->pc = 0x38a438u;
}
