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

// Function: sub_003861F0
// Address: 0x3861f0 - 0x3862c0
void sub_003861F0_0x3861f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003861F0_0x3861f0");
#endif

    switch (ctx->pc) {
        case 0x38622cu: goto label_38622c;
        case 0x38628cu: goto label_38628c;
        case 0x386294u: goto label_386294;
        case 0x3862acu: goto label_3862ac;
        default: break;
    }

    ctx->pc = 0x3861f0u;

    // 0x3861f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3861f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3861f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3861f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3861f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3861f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3861fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3861fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x386200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x386200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386204: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x386204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x386208: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x386208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x38620c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38620Cu;
    {
        const bool branch_taken_0x38620c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38620Cu;
        // 0x386210: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38620c) {
            ctx->pc = 0x386238u;
            goto label_386238;
        }
    }
    ctx->pc = 0x386214u;
    // 0x386214: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x386214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x386218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x386218u;
    {
        const bool branch_taken_0x386218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386218u;
        // 0x38621c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386218) {
            ctx->pc = 0x386238u;
            goto label_386238;
        }
    }
    ctx->pc = 0x386220u;
    // 0x386220: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x386220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x386224: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x386224u;
    SET_GPR_U32(ctx, 31, 0x38622Cu);
    ctx->pc = 0x386228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386224u;
    // 0x386228: 0x24a59318  addiu       $a1, $a1, -0x6CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x386224u, 0x38622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38622Cu;
label_38622c:
    // 0x38622c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x38622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x386230: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x386230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x386234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_386238:
    // 0x386238: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x386238u;
    {
        const bool branch_taken_0x386238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386238u;
        // 0x38623c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386238) {
            ctx->pc = 0x386274u;
            goto label_386274;
        }
    }
    ctx->pc = 0x386240u;
    // 0x386240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386240u;
    {
        const bool branch_taken_0x386240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386240u;
        // 0x386244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386240) {
            ctx->pc = 0x386258u;
            goto label_386258;
        }
    }
    ctx->pc = 0x386248u;
    // 0x386248: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x386248u;
    {
        const bool branch_taken_0x386248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386248u;
        // 0x38624c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386248) {
            ctx->pc = 0x38626Cu;
            goto label_38626c;
        }
    }
    ctx->pc = 0x386250u;
    // 0x386250: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386250u;
    {
        const bool branch_taken_0x386250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386250u;
        // 0x386254: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386250) {
            ctx->pc = 0x386280u;
            goto label_386280;
        }
    }
    ctx->pc = 0x386258u;
label_386258:
    // 0x386258: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x386258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38625c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38625Cu;
    {
        const bool branch_taken_0x38625c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38625Cu;
        // 0x386260: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38625c) {
            ctx->pc = 0x38627Cu;
            goto label_38627c;
        }
    }
    ctx->pc = 0x386264u;
    // 0x386264: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x386264u;
    {
        const bool branch_taken_0x386264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386264u;
        // 0x386268: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386264) {
            ctx->pc = 0x38628Cu;
            goto label_38628c;
        }
    }
    ctx->pc = 0x38626Cu;
label_38626c:
    // 0x38626c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38626Cu;
    {
        const bool branch_taken_0x38626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38626Cu;
        // 0x386270: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38626c) {
            ctx->pc = 0x38628Cu;
            goto label_38628c;
        }
    }
    ctx->pc = 0x386274u;
label_386274:
    // 0x386274: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386274u;
    {
        const bool branch_taken_0x386274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386274u;
        // 0x386278: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386274) {
            ctx->pc = 0x38628Cu;
            goto label_38628c;
        }
    }
    ctx->pc = 0x38627Cu;
label_38627c:
    // 0x38627c: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x38627cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_386280:
    // 0x386280: 0x24a59338  addiu       $a1, $a1, -0x6CC8
    ctx->pc = 0x386280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939448));
    // 0x386284: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x386284u;
    SET_GPR_U32(ctx, 31, 0x38628Cu);
    ctx->pc = 0x386288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386284u;
    // 0x386288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x386284u, 0x38628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38628Cu;
label_38628c:
    // 0x38628c: 0xc0e2d82  jal         func_38B608
    ctx->pc = 0x38628Cu;
    SET_GPR_U32(ctx, 31, 0x386294u);
    ctx->pc = 0x386290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38628Cu;
    // 0x386290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B608u, 0x38628Cu, 0x386294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386294u;
label_386294:
    // 0x386294: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x386294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386298: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x386298u;
    {
        const bool branch_taken_0x386298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386298u;
        // 0x38629c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386298) {
            ctx->pc = 0x3862A4u;
            goto label_3862a4;
        }
    }
    ctx->pc = 0x3862A0u;
    // 0x3862a0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3862a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3862a4:
    // 0x3862a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3862a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3862a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3862a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3862ac:
    // 0x3862ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3862acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3862b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3862b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3862b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3862B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862B4u;
        // 0x3862b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3862B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3862BCu;
    // 0x3862bc: 0x0  nop
    ctx->pc = 0x3862bcu;
    // NOP
    ctx->pc = 0x3862c0u;
}
