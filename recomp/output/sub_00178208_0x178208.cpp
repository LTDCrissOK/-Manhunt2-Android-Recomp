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

// Function: sub_00178208
// Address: 0x178208 - 0x178260
void sub_00178208_0x178208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178208_0x178208");
#endif

    switch (ctx->pc) {
        case 0x178228u: goto label_178228;
        case 0x178230u: goto label_178230;
        default: break;
    }

    ctx->pc = 0x178208u;

    // 0x178208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17820c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17821c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17821cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178224: 0x0  nop
    ctx->pc = 0x178224u;
    // NOP
label_178228:
    // 0x178228: 0xc05e098  jal         func_178260
    ctx->pc = 0x178228u;
    SET_GPR_U32(ctx, 31, 0x178230u);
    ctx->pc = 0x17822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178228u;
    // 0x17822c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178260u, 0x178228u, 0x178230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178230u;
label_178230:
    // 0x178230: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x178230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178234: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x178234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178238: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x178238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17823c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17823Cu;
    {
        const bool branch_taken_0x17823c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17823Cu;
        // 0x178240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17823c) {
            ctx->pc = 0x178228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178228;
        }
    }
    ctx->pc = 0x178244u;
    // 0x178244: 0xa2200158  sb          $zero, 0x158($s1)
    ctx->pc = 0x178244u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 344), (uint8_t)GPR_U32(ctx, 0));
    // 0x178248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17824c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17824cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178254: 0x3e00008  jr          $ra
    ctx->pc = 0x178254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178254u;
        // 0x178258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17825Cu;
    // 0x17825c: 0x0  nop
    ctx->pc = 0x17825cu;
    // NOP
    ctx->pc = 0x178260u;
}
