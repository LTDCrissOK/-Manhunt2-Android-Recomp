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

// Function: sub_002F2900
// Address: 0x2f2900 - 0x2f2970
void sub_002F2900_0x2f2900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2900_0x2f2900");
#endif

    switch (ctx->pc) {
        case 0x2f2948u: goto label_2f2948;
        case 0x2f2950u: goto label_2f2950;
        default: break;
    }

    ctx->pc = 0x2f2900u;

    // 0x2f2900: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f2900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f2904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f2904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f2908: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x2f2908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x2f290c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f290cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f2910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2910u;
    {
        const bool branch_taken_0x2f2910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2910u;
        // 0x2f2914: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2910) {
            ctx->pc = 0x2F2920u;
            goto label_2f2920;
        }
    }
    ctx->pc = 0x2F2918u;
    // 0x2f2918: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F2918u;
    {
        const bool branch_taken_0x2f2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2918u;
        // 0x2f291c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2918) {
            ctx->pc = 0x2F2960u;
            goto label_2f2960;
        }
    }
    ctx->pc = 0x2F2920u;
label_2f2920:
    // 0x2f2920: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x2f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x2f2924: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2f2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2f2928: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F2928u;
    {
        const bool branch_taken_0x2f2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2928u;
        // 0x2f292c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2928) {
            ctx->pc = 0x2F295Cu;
            goto label_2f295c;
        }
    }
    ctx->pc = 0x2F2930u;
    // 0x2f2930: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f2930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2934: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x2f2934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x2f2938: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2938u;
    {
        const bool branch_taken_0x2f2938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2938u;
        // 0x2f293c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2938) {
            ctx->pc = 0x2F2960u;
            goto label_2f2960;
        }
    }
    ctx->pc = 0x2F2940u;
    // 0x2f2940: 0xc0899c8  jal         func_226720
    ctx->pc = 0x2F2940u;
    SET_GPR_U32(ctx, 31, 0x2F2948u);
    ctx->pc = 0x226720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226720u, 0x2F2940u, 0x2F2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2948u;
label_2f2948:
    // 0x2f2948: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2F2948u;
    SET_GPR_U32(ctx, 31, 0x2F2950u);
    ctx->pc = 0x2F294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2948u;
    // 0x2f294c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F2948u, 0x2F2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2950u;
label_2f2950:
    // 0x2f2950: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x2f2950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
    // 0x2f2954: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f2954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f2958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f295c:
    // 0x2f295c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f295cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f2960:
    // 0x2f2960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f2960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2964: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2964u;
        // 0x2f2968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F296Cu;
    // 0x2f296c: 0x0  nop
    ctx->pc = 0x2f296cu;
    // NOP
    ctx->pc = 0x2f2970u;
}
