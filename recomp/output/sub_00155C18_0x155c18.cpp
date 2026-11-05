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

// Function: sub_00155C18
// Address: 0x155c18 - 0x155c68
void sub_00155C18_0x155c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155C18_0x155c18");
#endif

    switch (ctx->pc) {
        case 0x155c34u: goto label_155c34;
        case 0x155c3cu: goto label_155c3c;
        case 0x155c50u: goto label_155c50;
        default: break;
    }

    ctx->pc = 0x155c18u;

    // 0x155c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155c2c: 0xc0557ca  jal         func_155F28
    ctx->pc = 0x155C2Cu;
    SET_GPR_U32(ctx, 31, 0x155C34u);
    ctx->pc = 0x155C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C2Cu;
    // 0x155c30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F28u, 0x155C2Cu, 0x155C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C34u;
label_155c34:
    // 0x155c34: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x155C34u;
    SET_GPR_U32(ctx, 31, 0x155C3Cu);
    ctx->pc = 0x155C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C34u;
    // 0x155c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x155C34u, 0x155C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C3Cu;
label_155c3c:
    // 0x155c3c: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x155c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x155c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c44: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x155c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x155c48: 0xc04d89a  jal         func_136268
    ctx->pc = 0x155C48u;
    SET_GPR_U32(ctx, 31, 0x155C50u);
    ctx->pc = 0x155C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C48u;
    // 0x155c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x155C48u, 0x155C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C50u;
label_155c50:
    // 0x155c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x155C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C5Cu;
        // 0x155c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C64u;
    // 0x155c64: 0x0  nop
    ctx->pc = 0x155c64u;
    // NOP
    ctx->pc = 0x155c68u;
}
