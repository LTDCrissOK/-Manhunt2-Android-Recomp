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

// Function: sub_0014E070
// Address: 0x14e070 - 0x14e0c8
void sub_0014E070_0x14e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E070_0x14e070");
#endif

    switch (ctx->pc) {
        case 0x14e094u: goto label_14e094;
        case 0x14e0a0u: goto label_14e0a0;
        case 0x14e0b0u: goto label_14e0b0;
        default: break;
    }

    ctx->pc = 0x14e070u;

    // 0x14e070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e074: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14e078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e07c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14e080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e084: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14e084u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e08c: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14E08Cu;
    SET_GPR_U32(ctx, 31, 0x14E094u);
    ctx->pc = 0x14E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E08Cu;
    // 0x14e090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14E08Cu, 0x14E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E094u;
label_14e094:
    // 0x14e094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e098: 0xc053b3e  jal         func_14ECF8
    ctx->pc = 0x14E098u;
    SET_GPR_U32(ctx, 31, 0x14E0A0u);
    ctx->pc = 0x14E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E098u;
    // 0x14e09c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECF8u, 0x14E098u, 0x14E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0A0u;
label_14e0a0:
    // 0x14e0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0a8: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14E0A8u;
    SET_GPR_U32(ctx, 31, 0x14E0B0u);
    ctx->pc = 0x14E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0A8u;
    // 0x14e0ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14E0A8u, 0x14E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0B0u;
label_14e0b0:
    // 0x14e0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14E0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0BCu;
        // 0x14e0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E0C4u;
    // 0x14e0c4: 0x0  nop
    ctx->pc = 0x14e0c4u;
    // NOP
    ctx->pc = 0x14e0c8u;
}
