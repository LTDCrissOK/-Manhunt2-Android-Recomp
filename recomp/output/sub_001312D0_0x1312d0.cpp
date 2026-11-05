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

// Function: sub_001312D0
// Address: 0x1312d0 - 0x131370
void sub_001312D0_0x1312d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001312D0_0x1312d0");
#endif

    switch (ctx->pc) {
        case 0x1312f8u: goto label_1312f8;
        case 0x131304u: goto label_131304;
        case 0x131318u: goto label_131318;
        case 0x131328u: goto label_131328;
        case 0x131330u: goto label_131330;
        default: break;
    }

    ctx->pc = 0x1312d0u;

    // 0x1312d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1312d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1312d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1312d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1312d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1312d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1312dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1312dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1312e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1312e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1312e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1312e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1312ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1312ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1312f0: 0xc04c4dc  jal         func_131370
    ctx->pc = 0x1312F0u;
    SET_GPR_U32(ctx, 31, 0x1312F8u);
    ctx->pc = 0x1312F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312F0u;
    // 0x1312f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131370u, 0x1312F0u, 0x1312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312F8u;
label_1312f8:
    // 0x1312f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1312fc: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1312FCu;
    SET_GPR_U32(ctx, 31, 0x131304u);
    ctx->pc = 0x131300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312FCu;
    // 0x131300: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073D8u, 0x1312FCu, 0x131304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131304u;
label_131304:
    // 0x131304: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x131304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x131308: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13130c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x13130cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131310u;
    {
        const bool branch_taken_0x131310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131310u;
        // 0x131314: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131310) {
            ctx->pc = 0x131330u;
            goto label_131330;
        }
    }
    ctx->pc = 0x131318u;
label_131318:
    // 0x131318: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x131318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13131c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131320: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x131320u;
    SET_GPR_U32(ctx, 31, 0x131328u);
    ctx->pc = 0x131324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131320u;
    // 0x131324: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x131320u, 0x131328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131328u;
label_131328:
    // 0x131328: 0xc041180  jal         func_104600
    ctx->pc = 0x131328u;
    SET_GPR_U32(ctx, 31, 0x131330u);
    ctx->pc = 0x13132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131328u;
    // 0x13132c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104600u, 0x131328u, 0x131330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131330u;
label_131330:
    // 0x131330: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x131330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x131334: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x131334u;
    {
        const bool branch_taken_0x131334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131334) {
            ctx->pc = 0x131338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131334u;
            // 0x131338: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131358u;
            goto label_131358;
        }
    }
    ctx->pc = 0x13133Cu;
    // 0x13133c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x131340: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x131340u;
    {
        const bool branch_taken_0x131340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131340u;
        // 0x131344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131340) {
            ctx->pc = 0x13134Cu;
            goto label_13134c;
        }
    }
    ctx->pc = 0x131348u;
    // 0x131348: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x131348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13134c:
    // 0x13134c: 0x54a0fff2  bnel        $a1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x13134Cu;
    {
        const bool branch_taken_0x13134c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13134c) {
            ctx->pc = 0x131350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13134Cu;
            // 0x131350: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131318;
        }
    }
    ctx->pc = 0x131354u;
    // 0x131354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131358:
    // 0x131358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13135c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13135cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x131360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131368: 0x3e00008  jr          $ra
    ctx->pc = 0x131368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131368u;
        // 0x13136c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131370u;
}
