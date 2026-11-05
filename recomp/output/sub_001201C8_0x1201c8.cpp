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

// Function: sub_001201C8
// Address: 0x1201c8 - 0x120220
void sub_001201C8_0x1201c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001201C8_0x1201c8");
#endif

    switch (ctx->pc) {
        case 0x1201e8u: goto label_1201e8;
        case 0x1201f0u: goto label_1201f0;
        default: break;
    }

    ctx->pc = 0x1201c8u;

    // 0x1201c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1201c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1201cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1201ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1201d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1201d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1201d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1201d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1201d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1201dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1201dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1201e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201e4: 0x0  nop
    ctx->pc = 0x1201e4u;
    // NOP
label_1201e8:
    // 0x1201e8: 0xc048088  jal         func_120220
    ctx->pc = 0x1201E8u;
    SET_GPR_U32(ctx, 31, 0x1201F0u);
    ctx->pc = 0x1201ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201E8u;
    // 0x1201ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120220u, 0x1201E8u, 0x1201F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1201F0u;
label_1201f0:
    // 0x1201f0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1201f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1201f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1201f8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1201f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1201fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1201FCu;
    {
        const bool branch_taken_0x1201fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201FCu;
        // 0x120200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201fc) {
            ctx->pc = 0x1201E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1201e8;
        }
    }
    ctx->pc = 0x120204u;
    // 0x120204: 0xa2200110  sb          $zero, 0x110($s1)
    ctx->pc = 0x120204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x120208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12020c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12020cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120214: 0x3e00008  jr          $ra
    ctx->pc = 0x120214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120214u;
        // 0x120218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12021Cu;
    // 0x12021c: 0x0  nop
    ctx->pc = 0x12021cu;
    // NOP
    ctx->pc = 0x120220u;
}
