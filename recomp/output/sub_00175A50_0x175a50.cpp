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

// Function: sub_00175A50
// Address: 0x175a50 - 0x175ab8
void sub_00175A50_0x175a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A50_0x175a50");
#endif

    switch (ctx->pc) {
        case 0x175a74u: goto label_175a74;
        case 0x175a7cu: goto label_175a7c;
        case 0x175a8cu: goto label_175a8c;
        case 0x175a9cu: goto label_175a9c;
        default: break;
    }

    ctx->pc = 0x175a50u;

    // 0x175a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175a60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175a6c: 0xc05d81a  jal         func_176068
    ctx->pc = 0x175A6Cu;
    SET_GPR_U32(ctx, 31, 0x175A74u);
    ctx->pc = 0x175A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A6Cu;
    // 0x175a70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176068u, 0x175A6Cu, 0x175A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A74u;
label_175a74:
    // 0x175a74: 0xc04f8a2  jal         func_13E288
    ctx->pc = 0x175A74u;
    SET_GPR_U32(ctx, 31, 0x175A7Cu);
    ctx->pc = 0x175A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A74u;
    // 0x175a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E288u, 0x175A74u, 0x175A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A7Cu;
label_175a7c:
    // 0x175a7c: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x175a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x175a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a84: 0xc05d906  jal         func_176418
    ctx->pc = 0x175A84u;
    SET_GPR_U32(ctx, 31, 0x175A8Cu);
    ctx->pc = 0x175A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A84u;
    // 0x175a88: 0xae120058  sw          $s2, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176418u, 0x175A84u, 0x175A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A8Cu;
label_175a8c:
    // 0x175a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a94: 0xc04f8c0  jal         func_13E300
    ctx->pc = 0x175A94u;
    SET_GPR_U32(ctx, 31, 0x175A9Cu);
    ctx->pc = 0x175A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A94u;
    // 0x175a98: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E300u, 0x175A94u, 0x175A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A9Cu;
label_175a9c:
    // 0x175a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175aa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175aac: 0x3e00008  jr          $ra
    ctx->pc = 0x175AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AACu;
        // 0x175ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175AB4u;
    // 0x175ab4: 0x0  nop
    ctx->pc = 0x175ab4u;
    // NOP
    ctx->pc = 0x175ab8u;
}
