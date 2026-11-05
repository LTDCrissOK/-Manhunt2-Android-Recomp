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

// Function: sub_001A6F20
// Address: 0x1a6f20 - 0x1a6f70
void sub_001A6F20_0x1a6f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6F20_0x1a6f20");
#endif

    switch (ctx->pc) {
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f54u: goto label_1a6f54;
        default: break;
    }

    ctx->pc = 0x1a6f20u;

    // 0x1a6f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6f24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6f2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a6f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6f3c: 0xc069664  jal         func_1A5990
    ctx->pc = 0x1A6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F44u);
    ctx->pc = 0x1A6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F3Cu;
    // 0x1a6f40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5990u, 0x1A6F3Cu, 0x1A6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F44u;
label_1a6f44:
    // 0x1a6f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f48: 0x244606b8  addiu       $a2, $v0, 0x6B8
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1720));
    // 0x1a6f4c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F54u);
    ctx->pc = 0x1A6F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F4Cu;
    // 0x1a6f50: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6F4Cu, 0x1A6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F54u;
label_1a6f54:
    // 0x1a6f54: 0xae3001cc  sw          $s0, 0x1CC($s1)
    ctx->pc = 0x1a6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 16));
    // 0x1a6f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6f5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F64u;
        // 0x1a6f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6F6Cu;
    // 0x1a6f6c: 0x0  nop
    ctx->pc = 0x1a6f6cu;
    // NOP
    ctx->pc = 0x1a6f70u;
}
