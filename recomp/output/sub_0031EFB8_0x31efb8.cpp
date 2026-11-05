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

// Function: sub_0031EFB8
// Address: 0x31efb8 - 0x31f000
void sub_0031EFB8_0x31efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EFB8_0x31efb8");
#endif

    switch (ctx->pc) {
        case 0x31efd8u: goto label_31efd8;
        case 0x31efe8u: goto label_31efe8;
        default: break;
    }

    ctx->pc = 0x31efb8u;

    // 0x31efb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31efbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31efbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31efc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31efc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31efc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31efccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31efd0: 0xc0c7c00  jal         func_31F000
    ctx->pc = 0x31EFD0u;
    SET_GPR_U32(ctx, 31, 0x31EFD8u);
    ctx->pc = 0x31EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFD0u;
    // 0x31efd4: 0x8c500064  lw          $s0, 0x64($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F000u, 0x31EFD0u, 0x31EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFD8u;
label_31efd8:
    // 0x31efd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31efd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31efdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efe0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x31EFE0u;
    SET_GPR_U32(ctx, 31, 0x31EFE8u);
    ctx->pc = 0x31EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFE0u;
    // 0x31efe4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x31EFE0u, 0x31EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFE8u;
label_31efe8:
    // 0x31efe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31efe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31efec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31eff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31eff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31eff4: 0x3e00008  jr          $ra
    ctx->pc = 0x31EFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFF4u;
        // 0x31eff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EFFCu;
    // 0x31effc: 0x0  nop
    ctx->pc = 0x31effcu;
    // NOP
    ctx->pc = 0x31f000u;
}
