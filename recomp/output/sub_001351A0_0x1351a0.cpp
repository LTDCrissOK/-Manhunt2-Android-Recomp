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

// Function: sub_001351A0
// Address: 0x1351a0 - 0x135288
void sub_001351A0_0x1351a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001351A0_0x1351a0");
#endif

    switch (ctx->pc) {
        case 0x1351ccu: goto label_1351cc;
        case 0x1351f8u: goto label_1351f8;
        default: break;
    }

    ctx->pc = 0x1351a0u;

    // 0x1351a0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1351A0u;
    {
        const bool branch_taken_0x1351a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351A0u;
        // 0x1351a4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351a0) {
            ctx->pc = 0x1351C4u;
            goto label_1351c4;
        }
    }
    ctx->pc = 0x1351A8u;
    // 0x1351a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1351a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1351ac: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1351b0: 0x24440108  addiu       $a0, $v0, 0x108
    ctx->pc = 0x1351b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x1351b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1351b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1351b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1351b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1351bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1351BCu;
    {
        const bool branch_taken_0x1351bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1351C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351BCu;
        // 0x1351c0: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351bc) {
            ctx->pc = 0x1351D4u;
            goto label_1351d4;
        }
    }
    ctx->pc = 0x1351C4u;
label_1351c4:
    // 0x1351c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1351C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1351C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C4u;
        // 0x1351c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1351CCu;
label_1351cc:
    // 0x1351cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1351CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1351D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351CCu;
        // 0x1351d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1351D4u;
label_1351d4:
    // 0x1351d4: 0x906502e0  lbu         $a1, 0x2E0($v1)
    ctx->pc = 0x1351d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 736)));
    // 0x1351d8: 0x244b8ed0  addiu       $t3, $v0, -0x7130
    ctx->pc = 0x1351d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x1351dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1351dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1351e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1351e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351e8: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x1351e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1351ec: 0x24080035  addiu       $t0, $zero, 0x35
    ctx->pc = 0x1351ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1351f0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1351f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1351f4: 0x0  nop
    ctx->pc = 0x1351f4u;
    // NOP
label_1351f8:
    // 0x1351f8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1351f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1351fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1351fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135200: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x135200u;
    {
        const bool branch_taken_0x135200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135200) {
            ctx->pc = 0x135204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135200u;
            // 0x135204: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13526Cu;
            goto label_13526c;
        }
    }
    ctx->pc = 0x135208u;
    // 0x135208: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x135208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13520c: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x13520cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x135210: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135210u;
    {
        const bool branch_taken_0x135210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135210u;
        // 0x135214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135210) {
            ctx->pc = 0x135238u;
            goto label_135238;
        }
    }
    ctx->pc = 0x135218u;
    // 0x135218: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x135218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x13521c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13521Cu;
    {
        const bool branch_taken_0x13521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13521Cu;
        // 0x135220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13521c) {
            ctx->pc = 0x135238u;
            goto label_135238;
        }
    }
    ctx->pc = 0x135224u;
    // 0x135224: 0x10690004  beq         $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x135224u;
    {
        const bool branch_taken_0x135224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x135224) {
            ctx->pc = 0x135238u;
            goto label_135238;
        }
    }
    ctx->pc = 0x13522Cu;
    // 0x13522c: 0x14680002  bne         $v1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13522Cu;
    {
        const bool branch_taken_0x13522c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x135230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13522Cu;
        // 0x135230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13522c) {
            ctx->pc = 0x135238u;
            goto label_135238;
        }
    }
    ctx->pc = 0x135234u;
    // 0x135234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135238:
    // 0x135238: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x135238u;
    {
        const bool branch_taken_0x135238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135238u;
        // 0x13523c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135238) {
            ctx->pc = 0x135268u;
            goto label_135268;
        }
    }
    ctx->pc = 0x135240u;
    // 0x135240: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x135240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135244: 0x14e0ffe1  bnez        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x135244u;
    {
        const bool branch_taken_0x135244 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x135248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135244u;
        // 0x135248: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135244) {
            ctx->pc = 0x1351CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1351cc;
        }
    }
    ctx->pc = 0x13524Cu;
    // 0x13524c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x135250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135254: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x135254u;
    {
        const bool branch_taken_0x135254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135254) {
            ctx->pc = 0x135258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135254u;
            // 0x135258: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13526Cu;
            goto label_13526c;
        }
    }
    ctx->pc = 0x13525Cu;
    // 0x13525c: 0x904202e0  lbu         $v0, 0x2E0($v0)
    ctx->pc = 0x13525cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x135260: 0x10a2ffda  beq         $a1, $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x135260u;
    {
        const bool branch_taken_0x135260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x135260) {
            ctx->pc = 0x1351CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1351cc;
        }
    }
    ctx->pc = 0x135268u;
label_135268:
    // 0x135268: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x135268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_13526c:
    // 0x13526c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x13526cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135270: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x135270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x135274: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x135274u;
    {
        const bool branch_taken_0x135274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135274u;
        // 0x135278: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135274) {
            ctx->pc = 0x1351F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1351f8;
        }
    }
    ctx->pc = 0x13527Cu;
    // 0x13527c: 0x3e00008  jr          $ra
    ctx->pc = 0x13527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13527Cu;
        // 0x135280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13527Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135284u;
    // 0x135284: 0x0  nop
    ctx->pc = 0x135284u;
    // NOP
    ctx->pc = 0x135288u;
}
