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

// Function: sub_002758D8
// Address: 0x2758d8 - 0x275950
void sub_002758D8_0x2758d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002758D8_0x2758d8");
#endif

    switch (ctx->pc) {
        case 0x27590cu: goto label_27590c;
        case 0x275924u: goto label_275924;
        default: break;
    }

    ctx->pc = 0x2758d8u;

    // 0x2758d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2758d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2758dc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2758dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2758e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2758e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2758e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2758e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2758e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2758e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2758ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2758f0: 0x245381b0  addiu       $s3, $v0, -0x7E50
    ctx->pc = 0x2758f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x2758f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2758f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2758f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2758f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2758fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275900: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x275900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275904: 0xc09d9e0  jal         func_276780
    ctx->pc = 0x275904u;
    SET_GPR_U32(ctx, 31, 0x27590Cu);
    ctx->pc = 0x275908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275904u;
    // 0x275908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276780u, 0x275904u, 0x27590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27590Cu;
label_27590c:
    // 0x27590c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27590Cu;
    {
        const bool branch_taken_0x27590c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27590Cu;
        // 0x275910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27590c) {
            ctx->pc = 0x27592Cu;
            goto label_27592c;
        }
    }
    ctx->pc = 0x275914u;
    // 0x275914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275918: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x275918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27591c: 0xc09d602  jal         func_275808
    ctx->pc = 0x27591Cu;
    SET_GPR_U32(ctx, 31, 0x275924u);
    ctx->pc = 0x275920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27591Cu;
    // 0x275920: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275808u, 0x27591Cu, 0x275924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275924u;
label_275924:
    // 0x275924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275924u;
    {
        const bool branch_taken_0x275924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275924u;
        // 0x275928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275924) {
            ctx->pc = 0x275930u;
            goto label_275930;
        }
    }
    ctx->pc = 0x27592Cu;
label_27592c:
    // 0x27592c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27592cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275930:
    // 0x275930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275938: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x275938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27593c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27593cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275944: 0x3e00008  jr          $ra
    ctx->pc = 0x275944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275944u;
        // 0x275948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27594Cu;
    // 0x27594c: 0x0  nop
    ctx->pc = 0x27594cu;
    // NOP
    ctx->pc = 0x275950u;
}
