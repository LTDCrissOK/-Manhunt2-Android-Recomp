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

// Function: sub_0039E300
// Address: 0x39e300 - 0x39e398
void sub_0039E300_0x39e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E300_0x39e300");
#endif

    switch (ctx->pc) {
        case 0x39e340u: goto label_39e340;
        case 0x39e35cu: goto label_39e35c;
        case 0x39e364u: goto label_39e364;
        case 0x39e36cu: goto label_39e36c;
        case 0x39e374u: goto label_39e374;
        default: break;
    }

    ctx->pc = 0x39e300u;

    // 0x39e300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e30c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39e30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39e310: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39E310u;
    {
        const bool branch_taken_0x39e310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E310u;
        // 0x39e314: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e310) {
            ctx->pc = 0x39E338u;
            goto label_39e338;
        }
    }
    ctx->pc = 0x39E318u;
    // 0x39e318: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39e318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39e31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e324: 0x2484bcf0  addiu       $a0, $a0, -0x4310
    ctx->pc = 0x39e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    // 0x39e328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e32c: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39E32Cu;
    ctx->pc = 0x39E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E32Cu;
    // 0x39e330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39E334u;
    // 0x39e334: 0x0  nop
    ctx->pc = 0x39e334u;
    // NOP
label_39e338:
    // 0x39e338: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x39E338u;
    SET_GPR_U32(ctx, 31, 0x39E340u);
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39E338u, 0x39E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E340u;
label_39e340:
    // 0x39e340: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39e344: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x39e344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39e348: 0x8e3000b4  lw          $s0, 0xB4($s1)
    ctx->pc = 0x39e348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x39e34c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x39E34Cu;
    {
        const bool branch_taken_0x39e34c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e34c) {
            ctx->pc = 0x39E350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E34Cu;
            // 0x39e350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E388u;
            goto label_39e388;
        }
    }
    ctx->pc = 0x39E354u;
    // 0x39e354: 0xc0e5de6  jal         func_397798
    ctx->pc = 0x39E354u;
    SET_GPR_U32(ctx, 31, 0x39E35Cu);
    ctx->pc = 0x397798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397798u, 0x39E354u, 0x39E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E35Cu;
label_39e35c:
    // 0x39e35c: 0xc0e79ee  jal         func_39E7B8
    ctx->pc = 0x39E35Cu;
    SET_GPR_U32(ctx, 31, 0x39E364u);
    ctx->pc = 0x39E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E35Cu;
    // 0x39e360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E7B8u, 0x39E35Cu, 0x39E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E364u;
label_39e364:
    // 0x39e364: 0xc0e79be  jal         func_39E6F8
    ctx->pc = 0x39E364u;
    SET_GPR_U32(ctx, 31, 0x39E36Cu);
    ctx->pc = 0x39E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E364u;
    // 0x39e368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E6F8u, 0x39E364u, 0x39E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E36Cu;
label_39e36c:
    // 0x39e36c: 0xc0e5dec  jal         func_3977B0
    ctx->pc = 0x39E36Cu;
    SET_GPR_U32(ctx, 31, 0x39E374u);
    ctx->pc = 0x39E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E36Cu;
    // 0x39e370: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3977B0u, 0x39E36Cu, 0x39E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E374u;
label_39e374:
    // 0x39e374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e380: 0x80e7946  j           func_39E518
    ctx->pc = 0x39E380u;
    ctx->pc = 0x39E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E380u;
    // 0x39e384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E518u, 0x39E380u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39E388u;
label_39e388:
    // 0x39e388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e390: 0x3e00008  jr          $ra
    ctx->pc = 0x39E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E390u;
        // 0x39e394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E398u;
}
