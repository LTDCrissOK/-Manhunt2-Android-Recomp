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

// Function: sub_00133040
// Address: 0x133040 - 0x133080
void sub_00133040_0x133040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133040_0x133040");
#endif

    switch (ctx->pc) {
        case 0x133058u: goto label_133058;
        case 0x133068u: goto label_133068;
        default: break;
    }

    ctx->pc = 0x133040u;

    // 0x133040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13304c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13304cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133050: 0xc042426  jal         func_109098
    ctx->pc = 0x133050u;
    SET_GPR_U32(ctx, 31, 0x133058u);
    ctx->pc = 0x133054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133050u;
    // 0x133054: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x133050u, 0x133058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133058u;
label_133058:
    // 0x133058: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x133058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13305c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13305cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x133060: 0xc041eca  jal         func_107B28
    ctx->pc = 0x133060u;
    SET_GPR_U32(ctx, 31, 0x133068u);
    ctx->pc = 0x133064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133060u;
    // 0x133064: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x133060u, 0x133068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133068u;
label_133068:
    // 0x133068: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x133068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13306c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13306cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133074: 0x3e00008  jr          $ra
    ctx->pc = 0x133074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133074u;
        // 0x133078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13307Cu;
    // 0x13307c: 0x0  nop
    ctx->pc = 0x13307cu;
    // NOP
    ctx->pc = 0x133080u;
}
