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

// Function: sub_00157100
// Address: 0x157100 - 0x157158
void sub_00157100_0x157100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157100_0x157100");
#endif

    switch (ctx->pc) {
        case 0x157124u: goto label_157124;
        case 0x157130u: goto label_157130;
        case 0x157140u: goto label_157140;
        default: break;
    }

    ctx->pc = 0x157100u;

    // 0x157100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15710c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15710cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157118: 0xae260218  sw          $a2, 0x218($s1)
    ctx->pc = 0x157118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 6));
    // 0x15711c: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x15711Cu;
    SET_GPR_U32(ctx, 31, 0x157124u);
    ctx->pc = 0x157120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15711Cu;
    // 0x157120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x15711Cu, 0x157124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157124u;
label_157124:
    // 0x157124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157128: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x157128u;
    SET_GPR_U32(ctx, 31, 0x157130u);
    ctx->pc = 0x15712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157128u;
    // 0x15712c: 0xae2202e0  sw          $v0, 0x2E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x157128u, 0x157130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157130u;
label_157130:
    // 0x157130: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x157130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x157134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157138: 0xc042136  jal         func_1084D8
    ctx->pc = 0x157138u;
    SET_GPR_U32(ctx, 31, 0x157140u);
    ctx->pc = 0x15713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157138u;
    // 0x15713c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x157138u, 0x157140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157140u;
label_157140:
    // 0x157140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15714c: 0x3e00008  jr          $ra
    ctx->pc = 0x15714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15714Cu;
        // 0x157150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157154u;
    // 0x157154: 0x0  nop
    ctx->pc = 0x157154u;
    // NOP
    ctx->pc = 0x157158u;
}
