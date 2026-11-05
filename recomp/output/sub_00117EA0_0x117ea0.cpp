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

// Function: sub_00117EA0
// Address: 0x117ea0 - 0x117ef0
void sub_00117EA0_0x117ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117EA0_0x117ea0");
#endif

    switch (ctx->pc) {
        case 0x117ec0u: goto label_117ec0;
        case 0x117eccu: goto label_117ecc;
        case 0x117ed8u: goto label_117ed8;
        default: break;
    }

    ctx->pc = 0x117ea0u;

    // 0x117ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117eb8: 0xc046356  jal         func_118D58
    ctx->pc = 0x117EB8u;
    SET_GPR_U32(ctx, 31, 0x117EC0u);
    ctx->pc = 0x117EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EB8u;
    // 0x117ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x117EB8u, 0x117EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EC0u;
label_117ec0:
    // 0x117ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ec4: 0xc04634e  jal         func_118D38
    ctx->pc = 0x117EC4u;
    SET_GPR_U32(ctx, 31, 0x117ECCu);
    ctx->pc = 0x117EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EC4u;
    // 0x117ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D38u, 0x117EC4u, 0x117ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117ECCu;
label_117ecc:
    // 0x117ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ed0: 0xc04634e  jal         func_118D38
    ctx->pc = 0x117ED0u;
    SET_GPR_U32(ctx, 31, 0x117ED8u);
    ctx->pc = 0x117ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117ED0u;
    // 0x117ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D38u, 0x117ED0u, 0x117ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117ED8u;
label_117ed8:
    // 0x117ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x117EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EE4u;
        // 0x117ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117EECu;
    // 0x117eec: 0x0  nop
    ctx->pc = 0x117eecu;
    // NOP
    ctx->pc = 0x117ef0u;
}
