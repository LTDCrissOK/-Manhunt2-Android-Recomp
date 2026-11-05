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

// Function: sub_001112B8
// Address: 0x1112b8 - 0x111348
void sub_001112B8_0x1112b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001112B8_0x1112b8");
#endif

    switch (ctx->pc) {
        case 0x1112dcu: goto label_1112dc;
        case 0x111304u: goto label_111304;
        case 0x111318u: goto label_111318;
        case 0x111324u: goto label_111324;
        case 0x111334u: goto label_111334;
        default: break;
    }

    ctx->pc = 0x1112b8u;

    // 0x1112b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1112b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1112bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1112bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1112c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1112c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1112c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1112c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1112c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112cc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1112CCu;
    {
        const bool branch_taken_0x1112cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1112D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112CCu;
        // 0x1112d0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112cc) {
            ctx->pc = 0x1112E4u;
            goto label_1112e4;
        }
    }
    ctx->pc = 0x1112D4u;
    // 0x1112d4: 0xc045338  jal         func_114CE0
    ctx->pc = 0x1112D4u;
    SET_GPR_U32(ctx, 31, 0x1112DCu);
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x1112D4u, 0x1112DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112DCu;
label_1112dc:
    // 0x1112dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1112DCu;
    {
        const bool branch_taken_0x1112dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112DCu;
        // 0x1112e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112dc) {
            ctx->pc = 0x111338u;
            goto label_111338;
        }
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x1112e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x1112e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1112E8u;
    {
        const bool branch_taken_0x1112e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E8u;
        // 0x1112ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112e8) {
            ctx->pc = 0x111308u;
            goto label_111308;
        }
    }
    ctx->pc = 0x1112F0u;
    // 0x1112f0: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x1112f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x1112f4: 0x50510010  beql        $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1112F4u;
    {
        const bool branch_taken_0x1112f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1112f4) {
            ctx->pc = 0x1112F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112F4u;
            // 0x1112f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111338u;
            goto label_111338;
        }
    }
    ctx->pc = 0x1112FCu;
    // 0x1112fc: 0xc045338  jal         func_114CE0
    ctx->pc = 0x1112FCu;
    SET_GPR_U32(ctx, 31, 0x111304u);
    ctx->pc = 0x111300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112FCu;
    // 0x111300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CE0u, 0x1112FCu, 0x111304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111304u;
label_111304:
    // 0x111304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111308:
    // 0x111308: 0xae110288  sw          $s1, 0x288($s0)
    ctx->pc = 0x111308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 17));
    // 0x11130c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111310: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x111310u;
    SET_GPR_U32(ctx, 31, 0x111318u);
    ctx->pc = 0x111314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111310u;
    // 0x111314: 0xae020284  sw          $v0, 0x284($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x111310u, 0x111318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111318u;
label_111318:
    // 0x111318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11131c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x11131Cu;
    SET_GPR_U32(ctx, 31, 0x111324u);
    ctx->pc = 0x111320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11131Cu;
    // 0x111320: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x11131Cu, 0x111324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111324u;
label_111324:
    // 0x111324: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x111324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x111328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11132c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x11132Cu;
    SET_GPR_U32(ctx, 31, 0x111334u);
    ctx->pc = 0x111330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11132Cu;
    // 0x111330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x11132Cu, 0x111334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111334u;
label_111334:
    // 0x111334: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111338:
    // 0x111338: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x111338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11133c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11133cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111340: 0x3e00008  jr          $ra
    ctx->pc = 0x111340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111340u;
        // 0x111344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111348u;
}
