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

// Function: sub_00166920
// Address: 0x166920 - 0x166988
void sub_00166920_0x166920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166920_0x166920");
#endif

    switch (ctx->pc) {
        case 0x166974u: goto label_166974;
        default: break;
    }

    ctx->pc = 0x166920u;

    // 0x166920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166928: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x166928u;
    {
        const bool branch_taken_0x166928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166928u;
        // 0x16692c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166928) {
            ctx->pc = 0x166978u;
            goto label_166978;
        }
    }
    ctx->pc = 0x166930u;
    // 0x166930: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x166930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x166934: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x166934u;
    {
        const bool branch_taken_0x166934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166934u;
        // 0x166938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166934) {
            ctx->pc = 0x166978u;
            goto label_166978;
        }
    }
    ctx->pc = 0x16693Cu;
    // 0x16693c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x166940: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x166944: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x166944u;
    {
        const bool branch_taken_0x166944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x166948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166944u;
        // 0x166948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166944) {
            ctx->pc = 0x166978u;
            goto label_166978;
        }
    }
    ctx->pc = 0x16694Cu;
    // 0x16694c: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x16694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x166950: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x166950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x166954: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x166954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x166958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16695c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166960: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x166960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x166964: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x166964u;
    {
        const bool branch_taken_0x166964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166964) {
            ctx->pc = 0x166968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166964u;
            // 0x166968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166978u;
            goto label_166978;
        }
    }
    ctx->pc = 0x16696Cu;
    // 0x16696c: 0xc043958  jal         func_10E560
    ctx->pc = 0x16696Cu;
    SET_GPR_U32(ctx, 31, 0x166974u);
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16696Cu, 0x166974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166974u;
label_166974:
    // 0x166974: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x166974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_166978:
    // 0x166978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16697c: 0x3e00008  jr          $ra
    ctx->pc = 0x16697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16697Cu;
        // 0x166980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166984u;
    // 0x166984: 0x0  nop
    ctx->pc = 0x166984u;
    // NOP
    ctx->pc = 0x166988u;
}
