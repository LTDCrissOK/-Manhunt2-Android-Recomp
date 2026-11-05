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

// Function: sub_0014E220
// Address: 0x14e220 - 0x14e300
void sub_0014E220_0x14e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E220_0x14e220");
#endif

    switch (ctx->pc) {
        case 0x14e234u: goto label_14e234;
        case 0x14e244u: goto label_14e244;
        case 0x14e250u: goto label_14e250;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e26cu: goto label_14e26c;
        case 0x14e2bcu: goto label_14e2bc;
        case 0x14e2ccu: goto label_14e2cc;
        case 0x14e2dcu: goto label_14e2dc;
        case 0x14e2ecu: goto label_14e2ec;
        default: break;
    }

    ctx->pc = 0x14e220u;

    // 0x14e220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14e22c: 0xc0538c0  jal         func_14E300
    ctx->pc = 0x14E22Cu;
    SET_GPR_U32(ctx, 31, 0x14E234u);
    ctx->pc = 0x14E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E22Cu;
    // 0x14e230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E300u, 0x14E22Cu, 0x14E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E234u;
label_14e234:
    // 0x14e234: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14E234u;
    {
        const bool branch_taken_0x14e234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e234) {
            ctx->pc = 0x14E238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E234u;
            // 0x14e238: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E264u;
            goto label_14e264;
        }
    }
    ctx->pc = 0x14E23Cu;
    // 0x14e23c: 0xc053aaa  jal         func_14EAA8
    ctx->pc = 0x14E23Cu;
    SET_GPR_U32(ctx, 31, 0x14E244u);
    ctx->pc = 0x14E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E23Cu;
    // 0x14e240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EAA8u, 0x14E23Cu, 0x14E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E244u;
label_14e244:
    // 0x14e244: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14e248: 0xc053b3e  jal         func_14ECF8
    ctx->pc = 0x14E248u;
    SET_GPR_U32(ctx, 31, 0x14E250u);
    ctx->pc = 0x14E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E248u;
    // 0x14e24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECF8u, 0x14E248u, 0x14E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E250u;
label_14e250:
    // 0x14e250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e254: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14E254u;
    SET_GPR_U32(ctx, 31, 0x14E25Cu);
    ctx->pc = 0x14E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E254u;
    // 0x14e258: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14E254u, 0x14E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E25Cu;
label_14e25c:
    // 0x14e25c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x14E25Cu;
    {
        const bool branch_taken_0x14e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E25Cu;
        // 0x14e260: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e25c) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E264u;
label_14e264:
    // 0x14e264: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14E264u;
    SET_GPR_U32(ctx, 31, 0x14E26Cu);
    ctx->pc = 0x14E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E264u;
    // 0x14e268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14E264u, 0x14E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E26Cu;
label_14e26c:
    // 0x14e26c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14e26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e270: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14E270u;
    {
        const bool branch_taken_0x14e270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E270u;
        // 0x14e274: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e270) {
            ctx->pc = 0x14E2ECu;
            goto label_14e2ec;
        }
    }
    ctx->pc = 0x14E278u;
    // 0x14e278: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14E278u;
    {
        const bool branch_taken_0x14e278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E278u;
        // 0x14e27c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e278) {
            ctx->pc = 0x14E2E4u;
            goto label_14e2e4;
        }
    }
    ctx->pc = 0x14E280u;
    // 0x14e280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E280u;
    {
        const bool branch_taken_0x14e280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E280u;
        // 0x14e284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e280) {
            ctx->pc = 0x14E298u;
            goto label_14e298;
        }
    }
    ctx->pc = 0x14E288u;
    // 0x14e288: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14E288u;
    {
        const bool branch_taken_0x14e288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e288) {
            ctx->pc = 0x14E2B4u;
            goto label_14e2b4;
        }
    }
    ctx->pc = 0x14E290u;
    // 0x14e290: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14E290u;
    {
        const bool branch_taken_0x14e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E290u;
        // 0x14e294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e290) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E298u;
label_14e298:
    // 0x14e298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e29c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14E29Cu;
    {
        const bool branch_taken_0x14e29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E29Cu;
        // 0x14e2a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e29c) {
            ctx->pc = 0x14E2D4u;
            goto label_14e2d4;
        }
    }
    ctx->pc = 0x14E2A4u;
    // 0x14e2a4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E2A4u;
    {
        const bool branch_taken_0x14e2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e2a4) {
            ctx->pc = 0x14E2C4u;
            goto label_14e2c4;
        }
    }
    ctx->pc = 0x14E2ACu;
    // 0x14e2ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14E2ACu;
    {
        const bool branch_taken_0x14e2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2ACu;
        // 0x14e2b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2ac) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E2B4u;
label_14e2b4:
    // 0x14e2b4: 0xc053de0  jal         func_14F780
    ctx->pc = 0x14E2B4u;
    SET_GPR_U32(ctx, 31, 0x14E2BCu);
    ctx->pc = 0x14E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2B4u;
    // 0x14e2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F780u, 0x14E2B4u, 0x14E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2BCu;
label_14e2bc:
    // 0x14e2bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E2BCu;
    {
        const bool branch_taken_0x14e2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2BCu;
        // 0x14e2c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2bc) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E2C4u;
label_14e2c4:
    // 0x14e2c4: 0xc0538de  jal         func_14E378
    ctx->pc = 0x14E2C4u;
    SET_GPR_U32(ctx, 31, 0x14E2CCu);
    ctx->pc = 0x14E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2C4u;
    // 0x14e2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E378u, 0x14E2C4u, 0x14E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2CCu;
label_14e2cc:
    // 0x14e2cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14E2CCu;
    {
        const bool branch_taken_0x14e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2CCu;
        // 0x14e2d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2cc) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E2D4u;
label_14e2d4:
    // 0x14e2d4: 0xc053960  jal         func_14E580
    ctx->pc = 0x14E2D4u;
    SET_GPR_U32(ctx, 31, 0x14E2DCu);
    ctx->pc = 0x14E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2D4u;
    // 0x14e2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E580u, 0x14E2D4u, 0x14E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2DCu;
label_14e2dc:
    // 0x14e2dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E2DCu;
    {
        const bool branch_taken_0x14e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2DCu;
        // 0x14e2e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2dc) {
            ctx->pc = 0x14E2F0u;
            goto label_14e2f0;
        }
    }
    ctx->pc = 0x14E2E4u;
label_14e2e4:
    // 0x14e2e4: 0xc05398c  jal         func_14E630
    ctx->pc = 0x14E2E4u;
    SET_GPR_U32(ctx, 31, 0x14E2ECu);
    ctx->pc = 0x14E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2E4u;
    // 0x14e2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E630u, 0x14E2E4u, 0x14E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2ECu;
label_14e2ec:
    // 0x14e2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14e2f0:
    // 0x14e2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14e2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2F4u;
        // 0x14e2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E2FCu;
    // 0x14e2fc: 0x0  nop
    ctx->pc = 0x14e2fcu;
    // NOP
    ctx->pc = 0x14e300u;
}
