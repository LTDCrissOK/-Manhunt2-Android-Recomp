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

// Function: sub_00117C68
// Address: 0x117c68 - 0x117cc0
void sub_00117C68_0x117c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C68_0x117c68");
#endif

    switch (ctx->pc) {
        case 0x117c84u: goto label_117c84;
        case 0x117c90u: goto label_117c90;
        case 0x117c9cu: goto label_117c9c;
        case 0x117ca8u: goto label_117ca8;
        default: break;
    }

    ctx->pc = 0x117c68u;

    // 0x117c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117c7c: 0xc0464c0  jal         func_119300
    ctx->pc = 0x117C7Cu;
    SET_GPR_U32(ctx, 31, 0x117C84u);
    ctx->pc = 0x117C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C7Cu;
    // 0x117c80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119300u, 0x117C7Cu, 0x117C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C84u;
label_117c84:
    // 0x117c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c88: 0xc0464d6  jal         func_119358
    ctx->pc = 0x117C88u;
    SET_GPR_U32(ctx, 31, 0x117C90u);
    ctx->pc = 0x117C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C88u;
    // 0x117c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119358u, 0x117C88u, 0x117C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C90u;
label_117c90:
    // 0x117c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c94: 0xc0464ec  jal         func_1193B0
    ctx->pc = 0x117C94u;
    SET_GPR_U32(ctx, 31, 0x117C9Cu);
    ctx->pc = 0x117C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C94u;
    // 0x117c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1193B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1193B0u, 0x117C94u, 0x117C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C9Cu;
label_117c9c:
    // 0x117c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ca0: 0xc0464fa  jal         func_1193E8
    ctx->pc = 0x117CA0u;
    SET_GPR_U32(ctx, 31, 0x117CA8u);
    ctx->pc = 0x117CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CA0u;
    // 0x117ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1193E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1193E8u, 0x117CA0u, 0x117CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CA8u;
label_117ca8:
    // 0x117ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x117CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CB4u;
        // 0x117cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117CBCu;
    // 0x117cbc: 0x0  nop
    ctx->pc = 0x117cbcu;
    // NOP
    ctx->pc = 0x117cc0u;
}
