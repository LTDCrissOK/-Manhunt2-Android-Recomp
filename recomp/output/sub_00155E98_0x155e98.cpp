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

// Function: sub_00155E98
// Address: 0x155e98 - 0x155ee0
void sub_00155E98_0x155e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155E98_0x155e98");
#endif

    switch (ctx->pc) {
        case 0x155ebcu: goto label_155ebc;
        case 0x155eccu: goto label_155ecc;
        default: break;
    }

    ctx->pc = 0x155e98u;

    // 0x155e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155e9c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x155ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155eac: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x155eacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x155eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155eb4: 0xc055950  jal         func_156540
    ctx->pc = 0x155EB4u;
    SET_GPR_U32(ctx, 31, 0x155EBCu);
    ctx->pc = 0x155EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EB4u;
    // 0x155eb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x155EB4u, 0x155EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155EBCu;
label_155ebc:
    // 0x155ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ec4: 0xc04d88a  jal         func_136228
    ctx->pc = 0x155EC4u;
    SET_GPR_U32(ctx, 31, 0x155ECCu);
    ctx->pc = 0x155EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EC4u;
    // 0x155ec8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x155EC4u, 0x155ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155ECCu;
label_155ecc:
    // 0x155ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155ed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x155ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ED8u;
        // 0x155edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155EE0u;
}
