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

// Function: sub_001909C0
// Address: 0x1909c0 - 0x190a10
void sub_001909C0_0x1909c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001909C0_0x1909c0");
#endif

    switch (ctx->pc) {
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        case 0x1909d4u: goto label_1909d4;
        case 0x1909d8u: goto label_1909d8;
        case 0x1909dcu: goto label_1909dc;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909e4u: goto label_1909e4;
        case 0x1909e8u: goto label_1909e8;
        case 0x1909ecu: goto label_1909ec;
        case 0x1909f0u: goto label_1909f0;
        case 0x1909f4u: goto label_1909f4;
        case 0x1909f8u: goto label_1909f8;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a00u: goto label_190a00;
        case 0x190a04u: goto label_190a04;
        case 0x190a08u: goto label_190a08;
        case 0x190a0cu: goto label_190a0c;
        default: break;
    }

    ctx->pc = 0x1909c0u;

label_1909c0:
    // 0x1909c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1909c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1909c4:
    // 0x1909c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1909c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1909c8:
    // 0x1909c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1909c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1909cc:
    // 0x1909cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1909ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1909d0:
    // 0x1909d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1909d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1909d4:
    // 0x1909d4: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x1909d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
label_1909d8:
    // 0x1909d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1909d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1909dc:
    // 0x1909dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1909dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1909e0:
    // 0x1909e0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1909e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1909e4:
    // 0x1909e4: 0x60f809  jalr        $v1
label_1909e8:
    if (ctx->pc == 0x1909E8u) {
        ctx->pc = 0x1909E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909E4u;
        // 0x1909e8: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909ECu;
        goto label_1909ec;
    }
    ctx->pc = 0x1909E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1909ECu);
        ctx->pc = 0x1909E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909E4u;
        // 0x1909e8: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909E4u, 0x1909ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1909ECu;
label_1909ec:
    // 0x1909ec: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1909f0:
    // 0x1909f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1909f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1909f4:
    // 0x1909f4: 0x40f809  jalr        $v0
label_1909f8:
    if (ctx->pc == 0x1909F8u) {
        ctx->pc = 0x1909F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F4u;
        // 0x1909f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909FCu;
        goto label_1909fc;
    }
    ctx->pc = 0x1909F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1909FCu);
        ctx->pc = 0x1909F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F4u;
        // 0x1909f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909F4u, 0x1909FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1909FCu;
label_1909fc:
    // 0x1909fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1909fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190a00:
    // 0x190a00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x190a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_190a04:
    // 0x190a04: 0x3e00008  jr          $ra
label_190a08:
    if (ctx->pc == 0x190A08u) {
        ctx->pc = 0x190A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A04u;
        // 0x190a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A0Cu;
        goto label_190a0c;
    }
    ctx->pc = 0x190A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A04u;
        // 0x190a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190A0Cu;
label_190a0c:
    // 0x190a0c: 0x0  nop
    ctx->pc = 0x190a0cu;
    // NOP
    ctx->pc = 0x190a10u;
}
