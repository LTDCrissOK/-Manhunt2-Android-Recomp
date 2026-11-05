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

// Function: sub_00290858
// Address: 0x290858 - 0x2908d8
void sub_00290858_0x290858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290858_0x290858");
#endif

    switch (ctx->pc) {
        case 0x290858u: goto label_290858;
        case 0x29085cu: goto label_29085c;
        case 0x290860u: goto label_290860;
        case 0x290864u: goto label_290864;
        case 0x290868u: goto label_290868;
        case 0x29086cu: goto label_29086c;
        case 0x290870u: goto label_290870;
        case 0x290874u: goto label_290874;
        case 0x290878u: goto label_290878;
        case 0x29087cu: goto label_29087c;
        case 0x290880u: goto label_290880;
        case 0x290884u: goto label_290884;
        case 0x290888u: goto label_290888;
        case 0x29088cu: goto label_29088c;
        case 0x290890u: goto label_290890;
        case 0x290894u: goto label_290894;
        case 0x290898u: goto label_290898;
        case 0x29089cu: goto label_29089c;
        case 0x2908a0u: goto label_2908a0;
        case 0x2908a4u: goto label_2908a4;
        case 0x2908a8u: goto label_2908a8;
        case 0x2908acu: goto label_2908ac;
        case 0x2908b0u: goto label_2908b0;
        case 0x2908b4u: goto label_2908b4;
        case 0x2908b8u: goto label_2908b8;
        case 0x2908bcu: goto label_2908bc;
        case 0x2908c0u: goto label_2908c0;
        case 0x2908c4u: goto label_2908c4;
        case 0x2908c8u: goto label_2908c8;
        case 0x2908ccu: goto label_2908cc;
        case 0x2908d0u: goto label_2908d0;
        case 0x2908d4u: goto label_2908d4;
        default: break;
    }

    ctx->pc = 0x290858u;

label_290858:
    // 0x290858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29085c:
    // 0x29085c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_290860:
    // 0x290860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x290860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_290864:
    // 0x290864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x290864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290868:
    // 0x290868: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x290868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29086c:
    // 0x29086c: 0x10000009  b           . + 4 + (0x9 << 2)
label_290870:
    if (ctx->pc == 0x290870u) {
        ctx->pc = 0x290870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29086Cu;
        // 0x290870: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290874u;
        goto label_290874;
    }
    ctx->pc = 0x29086Cu;
    {
        const bool branch_taken_0x29086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29086Cu;
        // 0x290870: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29086c) {
            ctx->pc = 0x290894u;
            goto label_290894;
        }
    }
    ctx->pc = 0x290874u;
label_290874:
    // 0x290874: 0x0  nop
    ctx->pc = 0x290874u;
    // NOP
label_290878:
    // 0x290878: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x290878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_29087c:
    // 0x29087c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_290880:
    // 0x290880: 0x60f809  jalr        $v1
label_290884:
    if (ctx->pc == 0x290884u) {
        ctx->pc = 0x290888u;
        goto label_290888;
    }
    ctx->pc = 0x290880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x290888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290880u, 0x290888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290888u;
label_290888:
    // 0x290888: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x290888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29088c:
    // 0x29088c: 0xc0f860a  jal         func_3E1828
label_290890:
    if (ctx->pc == 0x290890u) {
        ctx->pc = 0x290890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29088Cu;
        // 0x290890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290894u;
        goto label_290894;
    }
    ctx->pc = 0x29088Cu;
    SET_GPR_U32(ctx, 31, 0x290894u);
    ctx->pc = 0x290890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29088Cu;
    // 0x290890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1828u, 0x29088Cu, 0x290894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290894u;
label_290894:
    // 0x290894: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x290894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_290898:
    // 0x290898: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29089c:
    // 0x29089c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2908a0:
    // 0x2908a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2908a4:
    if (ctx->pc == 0x2908A4u) {
        ctx->pc = 0x2908A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908A0u;
        // 0x2908a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908A8u;
        goto label_2908a8;
    }
    ctx->pc = 0x2908A0u;
    {
        const bool branch_taken_0x2908a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908A0u;
        // 0x2908a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908a0) {
            ctx->pc = 0x2908ACu;
            goto label_2908ac;
        }
    }
    ctx->pc = 0x2908A8u;
label_2908a8:
    // 0x2908a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2908a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2908ac:
    // 0x2908ac: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2908b0:
    if (ctx->pc == 0x2908B0u) {
        ctx->pc = 0x2908B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908ACu;
        // 0x2908b0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908B4u;
        goto label_2908b4;
    }
    ctx->pc = 0x2908ACu;
    {
        const bool branch_taken_0x2908ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908ACu;
        // 0x2908b0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908ac) {
            ctx->pc = 0x2908BCu;
            goto label_2908bc;
        }
    }
    ctx->pc = 0x2908B4u;
label_2908b4:
    // 0x2908b4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2908b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2908b8:
    // 0x2908b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2908b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2908bc:
    // 0x2908bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_2908c0:
    if (ctx->pc == 0x2908C0u) {
        ctx->pc = 0x2908C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908BCu;
        // 0x2908c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908C4u;
        goto label_2908c4;
    }
    ctx->pc = 0x2908BCu;
    {
        const bool branch_taken_0x2908bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2908C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908BCu;
        // 0x2908c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908bc) {
            ctx->pc = 0x290878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290878;
        }
    }
    ctx->pc = 0x2908C4u;
label_2908c4:
    // 0x2908c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2908c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2908c8:
    // 0x2908c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2908c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2908cc:
    // 0x2908cc: 0x3e00008  jr          $ra
label_2908d0:
    if (ctx->pc == 0x2908D0u) {
        ctx->pc = 0x2908D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908CCu;
        // 0x2908d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2908D4u;
        goto label_2908d4;
    }
    ctx->pc = 0x2908CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2908D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908CCu;
        // 0x2908d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2908CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2908D4u;
label_2908d4:
    // 0x2908d4: 0x0  nop
    ctx->pc = 0x2908d4u;
    // NOP
    ctx->pc = 0x2908d8u;
}
