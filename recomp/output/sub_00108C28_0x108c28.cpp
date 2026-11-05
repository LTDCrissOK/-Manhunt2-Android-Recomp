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

// Function: sub_00108C28
// Address: 0x108c28 - 0x108c98
void sub_00108C28_0x108c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108C28_0x108c28");
#endif

    switch (ctx->pc) {
        case 0x108c54u: goto label_108c54;
        case 0x108c80u: goto label_108c80;
        default: break;
    }

    ctx->pc = 0x108c28u;

    // 0x108c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108c30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108c3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x108c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x108c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x108c48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x108c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c4c: 0xc045edc  jal         func_117B70
    ctx->pc = 0x108C4Cu;
    SET_GPR_U32(ctx, 31, 0x108C54u);
    ctx->pc = 0x108C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C4Cu;
    // 0x108c50: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x108C4Cu, 0x108C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C54u;
label_108c54:
    // 0x108c54: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x108c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x108c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108c5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x108c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108c60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x108c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x108c64: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x108c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x108c68: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x108C68u;
    {
        const bool branch_taken_0x108c68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x108c68) {
            ctx->pc = 0x108C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108C68u;
            // 0x108c6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108C84u;
            goto label_108c84;
        }
    }
    ctx->pc = 0x108C70u;
    // 0x108c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c78: 0xc04234e  jal         func_108D38
    ctx->pc = 0x108C78u;
    SET_GPR_U32(ctx, 31, 0x108C80u);
    ctx->pc = 0x108C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C78u;
    // 0x108c7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D38u, 0x108C78u, 0x108C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C80u;
label_108c80:
    // 0x108c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108c84:
    // 0x108c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108c88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108c8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108c90: 0x3e00008  jr          $ra
    ctx->pc = 0x108C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C90u;
        // 0x108c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C98u;
}
