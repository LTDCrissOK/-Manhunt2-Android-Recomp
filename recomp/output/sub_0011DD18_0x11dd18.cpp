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

// Function: sub_0011DD18
// Address: 0x11dd18 - 0x11dd78
void sub_0011DD18_0x11dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DD18_0x11dd18");
#endif

    switch (ctx->pc) {
        case 0x11dd44u: goto label_11dd44;
        default: break;
    }

    ctx->pc = 0x11dd18u;

    // 0x11dd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11dd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11dd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dd20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11dd24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11dd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11dd2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11dd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11dd30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11dd38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11dd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11dd3c: 0xc047f20  jal         func_11FC80
    ctx->pc = 0x11DD3Cu;
    SET_GPR_U32(ctx, 31, 0x11DD44u);
    ctx->pc = 0x11DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD3Cu;
    // 0x11dd40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC80u, 0x11DD3Cu, 0x11DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD44u;
label_11dd44:
    // 0x11dd44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11dd44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11dd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11dd4c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x11dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11dd50: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x11dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11dd54: 0xacb10108  sw          $s1, 0x108($a1)
    ctx->pc = 0x11dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 17));
    // 0x11dd58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11dd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd5c: 0xae12020c  sw          $s2, 0x20C($s0)
    ctx->pc = 0x11dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 18));
    // 0x11dd60: 0xae2301d4  sw          $v1, 0x1D4($s1)
    ctx->pc = 0x11dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 3));
    // 0x11dd64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11dd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11dd68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11dd6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11dd6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd70: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD70u;
        // 0x11dd74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DD78u;
}
