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

// Function: sub_00178A08
// Address: 0x178a08 - 0x178a78
void sub_00178A08_0x178a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178A08_0x178a08");
#endif

    switch (ctx->pc) {
        case 0x178a2cu: goto label_178a2c;
        case 0x178a38u: goto label_178a38;
        case 0x178a50u: goto label_178a50;
        case 0x178a58u: goto label_178a58;
        case 0x178a60u: goto label_178a60;
        default: break;
    }

    ctx->pc = 0x178a08u;

    // 0x178a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178a18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178a1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x178a24: 0xc05e5ea  jal         func_1797A8
    ctx->pc = 0x178A24u;
    SET_GPR_U32(ctx, 31, 0x178A2Cu);
    ctx->pc = 0x178A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A24u;
    // 0x178a28: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1797A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1797A8u, 0x178A24u, 0x178A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A2Cu;
label_178a2c:
    // 0x178a2c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x178a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x178a30: 0xc04f72c  jal         func_13DCB0
    ctx->pc = 0x178A30u;
    SET_GPR_U32(ctx, 31, 0x178A38u);
    ctx->pc = 0x178A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A30u;
    // 0x178a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCB0u, 0x178A30u, 0x178A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A38u;
label_178a38:
    // 0x178a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178a3c: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x178a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x178a40: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x178a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x178a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a48: 0xc05eabe  jal         func_17AAF8
    ctx->pc = 0x178A48u;
    SET_GPR_U32(ctx, 31, 0x178A50u);
    ctx->pc = 0x178A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A48u;
    // 0x178a4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AAF8u, 0x178A48u, 0x178A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A50u;
label_178a50:
    // 0x178a50: 0xc05eb82  jal         func_17AE08
    ctx->pc = 0x178A50u;
    SET_GPR_U32(ctx, 31, 0x178A58u);
    ctx->pc = 0x178A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A50u;
    // 0x178a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE08u, 0x178A50u, 0x178A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A58u;
label_178a58:
    // 0x178a58: 0xc05ed7e  jal         func_17B5F8
    ctx->pc = 0x178A58u;
    SET_GPR_U32(ctx, 31, 0x178A60u);
    ctx->pc = 0x178A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A58u;
    // 0x178a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B5F8u, 0x178A58u, 0x178A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A60u;
label_178a60:
    // 0x178a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178a70: 0x3e00008  jr          $ra
    ctx->pc = 0x178A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A70u;
        // 0x178a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A78u;
}
