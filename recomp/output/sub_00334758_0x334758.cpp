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

// Function: sub_00334758
// Address: 0x334758 - 0x334830
void sub_00334758_0x334758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334758_0x334758");
#endif

    switch (ctx->pc) {
        case 0x334798u: goto label_334798;
        case 0x3347c0u: goto label_3347c0;
        case 0x3347d4u: goto label_3347d4;
        case 0x3347e8u: goto label_3347e8;
        default: break;
    }

    ctx->pc = 0x334758u;

    // 0x334758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33475c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x334760: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x334760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x334764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334768: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x334768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33476c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334770: 0x24446e70  addiu       $a0, $v0, 0x6E70
    ctx->pc = 0x334770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x334774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33477c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x334780: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x334780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334784: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x334784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x334788: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x334788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6E74u));
    // 0x33478c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x33478cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5B6E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6E7Cu, _value); } while (0);
    // 0x334790: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x334790u;
    {
        const bool branch_taken_0x334790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334790u;
        // 0x334794: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334790) {
            ctx->pc = 0x3347E8u;
            goto label_3347e8;
        }
    }
    ctx->pc = 0x334798u;
label_334798:
    // 0x334798: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334798u;
    {
        const bool branch_taken_0x334798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334798u;
        // 0x33479c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334798) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x3347A0u;
    // 0x3347a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3347a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3347a4:
    // 0x3347a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3347A4u;
    {
        const bool branch_taken_0x3347a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3347a4) {
            ctx->pc = 0x3347A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3347A4u;
            // 0x3347a8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3347B8u;
            goto label_3347b8;
        }
    }
    ctx->pc = 0x3347ACu;
    // 0x3347ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3347b0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3347b4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3347b8:
    // 0x3347b8: 0xc0c9c58  jal         func_327160
    ctx->pc = 0x3347B8u;
    SET_GPR_U32(ctx, 31, 0x3347C0u);
    ctx->pc = 0x3347BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347B8u;
    // 0x3347bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327160u, 0x3347B8u, 0x3347C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347C0u;
label_3347c0:
    // 0x3347c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3347c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3347c4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3347C4u;
    {
        const bool branch_taken_0x3347c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3347C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347C4u;
        // 0x3347c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3347c4) {
            ctx->pc = 0x3347E8u;
            goto label_3347e8;
        }
    }
    ctx->pc = 0x3347CCu;
    // 0x3347cc: 0xc0fba6c  jal         func_3EE9B0
    ctx->pc = 0x3347CCu;
    SET_GPR_U32(ctx, 31, 0x3347D4u);
    ctx->pc = 0x3347D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347CCu;
    // 0x3347d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE9B0u, 0x3347CCu, 0x3347D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347D4u;
label_3347d4:
    // 0x3347d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3347d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3347d8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3347d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3347dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3347dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3347e0: 0xc0cd27a  jal         func_3349E8
    ctx->pc = 0x3347E0u;
    SET_GPR_U32(ctx, 31, 0x3347E8u);
    ctx->pc = 0x3347E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347E0u;
    // 0x3347e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3349E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3349E8u, 0x3347E0u, 0x3347E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347E8u;
label_3347e8:
    // 0x3347e8: 0x26656e70  addiu       $a1, $s3, 0x6E70
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 28272));
    // 0x3347ec: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3347ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3347f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3347F0u;
    {
        const bool branch_taken_0x3347f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347F0u;
        // 0x3347f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3347f0) {
            ctx->pc = 0x3347FCu;
            goto label_3347fc;
        }
    }
    ctx->pc = 0x3347F8u;
    // 0x3347f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3347f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3347fc:
    // 0x3347fc: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3347FCu;
    {
        const bool branch_taken_0x3347fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347FCu;
        // 0x334800: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3347fc) {
            ctx->pc = 0x334798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334798;
        }
    }
    ctx->pc = 0x334804u;
    // 0x334804: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x334804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33480c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33480cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334810: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x334810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334814: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x334814u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334818: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x334818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33481c: 0x3e00008  jr          $ra
    ctx->pc = 0x33481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33481Cu;
        // 0x334820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334824u;
    // 0x334824: 0x0  nop
    ctx->pc = 0x334824u;
    // NOP
    // 0x334828: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x334828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33482c: 0x0  nop
    ctx->pc = 0x33482cu;
    // NOP
    ctx->pc = 0x334830u;
}
