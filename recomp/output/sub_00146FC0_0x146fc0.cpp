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

// Function: sub_00146FC0
// Address: 0x146fc0 - 0x147080
void sub_00146FC0_0x146fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146FC0_0x146fc0");
#endif

    switch (ctx->pc) {
        case 0x147000u: goto label_147000;
        case 0x147014u: goto label_147014;
        case 0x147020u: goto label_147020;
        case 0x147030u: goto label_147030;
        default: break;
    }

    ctx->pc = 0x146fc0u;

    // 0x146fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146fc4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x146fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x146fc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x146fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x146fcc: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x146fccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48BD48u));
    // 0x146fd0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x146fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146fdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x146fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x146fe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146FE0u;
    {
        const bool branch_taken_0x146fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FE0u;
        // 0x146fe4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fe0) {
            ctx->pc = 0x146FF0u;
            goto label_146ff0;
        }
    }
    ctx->pc = 0x146FE8u;
    // 0x146fe8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x146FE8u;
    {
        const bool branch_taken_0x146fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FE8u;
        // 0x146fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fe8) {
            ctx->pc = 0x147060u;
            goto label_147060;
        }
    }
    ctx->pc = 0x146FF0u;
label_146ff0:
    // 0x146ff0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146ff4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146FF4u;
    {
        const bool branch_taken_0x146ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FF4u;
        // 0x146ff8: 0x2672bd48  addiu       $s2, $s3, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ff4) {
            ctx->pc = 0x147028u;
            goto label_147028;
        }
    }
    ctx->pc = 0x146FFCu;
    // 0x146ffc: 0x0  nop
    ctx->pc = 0x146ffcu;
    // NOP
label_147000:
    // 0x147000: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x147000u;
    {
        const bool branch_taken_0x147000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147000u;
        // 0x147004: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147000) {
            ctx->pc = 0x14700Cu;
            goto label_14700c;
        }
    }
    ctx->pc = 0x147008u;
    // 0x147008: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x147008u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14700c:
    // 0x14700c: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x14700Cu;
    SET_GPR_U32(ctx, 31, 0x147014u);
    ctx->pc = 0x147010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14700Cu;
    // 0x147010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x14700Cu, 0x147014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147014u;
label_147014:
    // 0x147014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147018: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x147018u;
    SET_GPR_U32(ctx, 31, 0x147020u);
    ctx->pc = 0x14701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147018u;
    // 0x14701c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x147018u, 0x147020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147020u;
label_147020:
    // 0x147020: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x147020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x147024: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x147024u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_147028:
    // 0x147028: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x147028u;
    SET_GPR_U32(ctx, 31, 0x147030u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x147028u, 0x147030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147030u;
label_147030:
    // 0x147030: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x147030u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x147034: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x147034u;
    {
        const bool branch_taken_0x147034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x147034) {
            ctx->pc = 0x147038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147034u;
            // 0x147038: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14703Cu;
            goto label_14703c;
        }
    }
    ctx->pc = 0x14703Cu;
label_14703c:
    // 0x14703c: 0x1810  mfhi        $v1
    ctx->pc = 0x14703cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x147040: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x147040u;
    {
        const bool branch_taken_0x147040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147040) {
            ctx->pc = 0x147044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147040u;
            // 0x147044: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147000;
        }
    }
    ctx->pc = 0x147048u;
    // 0x147048: 0x2662bd48  addiu       $v0, $s3, -0x42B8
    ctx->pc = 0x147048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950216));
    // 0x14704c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x147050: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x147050u;
    {
        const bool branch_taken_0x147050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147050u;
        // 0x147054: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147050) {
            ctx->pc = 0x14705Cu;
            goto label_14705c;
        }
    }
    ctx->pc = 0x147058u;
    // 0x147058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14705c:
    // 0x14705c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14705cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_147060:
    // 0x147060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x147068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14706c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14706cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x147070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x147070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147074: 0x3e00008  jr          $ra
    ctx->pc = 0x147074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147074u;
        // 0x147078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14707Cu;
    // 0x14707c: 0x0  nop
    ctx->pc = 0x14707cu;
    // NOP
    ctx->pc = 0x147080u;
}
