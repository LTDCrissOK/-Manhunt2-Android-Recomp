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

// Function: sub_00158E80
// Address: 0x158e80 - 0x158ed8
void sub_00158E80_0x158e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158E80_0x158e80");
#endif

    switch (ctx->pc) {
        case 0x158e9cu: goto label_158e9c;
        case 0x158ea4u: goto label_158ea4;
        case 0x158eb0u: goto label_158eb0;
        case 0x158ec0u: goto label_158ec0;
        default: break;
    }

    ctx->pc = 0x158e80u;

    // 0x158e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158e94: 0xc056474  jal         func_1591D0
    ctx->pc = 0x158E94u;
    SET_GPR_U32(ctx, 31, 0x158E9Cu);
    ctx->pc = 0x158E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E94u;
    // 0x158e98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1591D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1591D0u, 0x158E94u, 0x158E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E9Cu;
label_158e9c:
    // 0x158e9c: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x158E9Cu;
    SET_GPR_U32(ctx, 31, 0x158EA4u);
    ctx->pc = 0x158EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E9Cu;
    // 0x158ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x158E9Cu, 0x158EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EA4u;
label_158ea4:
    // 0x158ea4: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x158ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x158ea8: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x158EA8u;
    SET_GPR_U32(ctx, 31, 0x158EB0u);
    ctx->pc = 0x158EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EA8u;
    // 0x158eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x158EA8u, 0x158EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EB0u;
label_158eb0:
    // 0x158eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158eb8: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x158EB8u;
    SET_GPR_U32(ctx, 31, 0x158EC0u);
    ctx->pc = 0x158EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EB8u;
    // 0x158ebc: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x158EB8u, 0x158EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EC0u;
label_158ec0:
    // 0x158ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x158ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ECCu;
        // 0x158ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158ED4u;
    // 0x158ed4: 0x0  nop
    ctx->pc = 0x158ed4u;
    // NOP
    ctx->pc = 0x158ed8u;
}
