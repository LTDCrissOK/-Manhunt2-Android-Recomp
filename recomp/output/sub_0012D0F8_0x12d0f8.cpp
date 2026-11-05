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

// Function: sub_0012D0F8
// Address: 0x12d0f8 - 0x12d180
void sub_0012D0F8_0x12d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D0F8_0x12d0f8");
#endif

    switch (ctx->pc) {
        case 0x12d134u: goto label_12d134;
        case 0x12d150u: goto label_12d150;
        default: break;
    }

    ctx->pc = 0x12d0f8u;

    // 0x12d0f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12d0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12d0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d108: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d10c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12d10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d110: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12d114: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12d114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d118: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12d11c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x12d11cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d120: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12d124: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x12d124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d128: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12d12c: 0xc04b4e4  jal         func_12D390
    ctx->pc = 0x12D12Cu;
    SET_GPR_U32(ctx, 31, 0x12D134u);
    ctx->pc = 0x12D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D12Cu;
    // 0x12d130: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D390u, 0x12D12Cu, 0x12D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D134u;
label_12d134:
    // 0x12d134: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x12d134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x12d138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d13c: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x12d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x12d140: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12d140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d144: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12d144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d148: 0xc04b4ee  jal         func_12D3B8
    ctx->pc = 0x12D148u;
    SET_GPR_U32(ctx, 31, 0x12D150u);
    ctx->pc = 0x12D14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D148u;
    // 0x12d14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D3B8u, 0x12D148u, 0x12D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D150u;
label_12d150:
    // 0x12d150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d158: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12d158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12d15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d160: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d164: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12d164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d168: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12d168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d16c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12d16cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d170: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12d170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d174: 0x3e00008  jr          $ra
    ctx->pc = 0x12D174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D174u;
        // 0x12d178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D17Cu;
    // 0x12d17c: 0x0  nop
    ctx->pc = 0x12d17cu;
    // NOP
    ctx->pc = 0x12d180u;
}
