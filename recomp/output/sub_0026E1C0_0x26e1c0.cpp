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

// Function: sub_0026E1C0
// Address: 0x26e1c0 - 0x26e2d0
void sub_0026E1C0_0x26e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E1C0_0x26e1c0");
#endif

    switch (ctx->pc) {
        case 0x26e1f8u: goto label_26e1f8;
        case 0x26e200u: goto label_26e200;
        case 0x26e258u: goto label_26e258;
        case 0x26e260u: goto label_26e260;
        default: break;
    }

    ctx->pc = 0x26e1c0u;

    // 0x26e1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26e1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26e1cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26e1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26e1d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26e1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26e1dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26e1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26e1e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26e1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x26e1ec: 0x8e230268  lw          $v1, 0x268($s1)
    ctx->pc = 0x26e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x26e1f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26E1F0u;
    {
        const bool branch_taken_0x26e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E1F0u;
        // 0x26e1f4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1f0) {
            ctx->pc = 0x26E228u;
            goto label_26e228;
        }
    }
    ctx->pc = 0x26E1F8u;
label_26e1f8:
    // 0x26e1f8: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26E1F8u;
    SET_GPR_U32(ctx, 31, 0x26E200u);
    ctx->pc = 0x26E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1F8u;
    // 0x26e1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26E1F8u, 0x26E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E200u;
label_26e200:
    // 0x26e200: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E200u;
    {
        const bool branch_taken_0x26e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x26e200) {
            ctx->pc = 0x26E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E200u;
            // 0x26e204: 0x8e230268  lw          $v1, 0x268($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E218u;
            goto label_26e218;
        }
    }
    ctx->pc = 0x26E208u;
    // 0x26e208: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26e208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26e20c: 0x52530027  beql        $s2, $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x26E20Cu;
    {
        const bool branch_taken_0x26e20c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x26e20c) {
            ctx->pc = 0x26E210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E20Cu;
            // 0x26e210: 0x8e0200f8  lw          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E2ACu;
            goto label_26e2ac;
        }
    }
    ctx->pc = 0x26E214u;
    // 0x26e214: 0x8e230268  lw          $v1, 0x268($s1)
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_26e218:
    // 0x26e218: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26e21c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E21Cu;
    {
        const bool branch_taken_0x26e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e21c) {
            ctx->pc = 0x26E220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E21Cu;
            // 0x26e220: 0x8e220268  lw          $v0, 0x268($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E230u;
            goto label_26e230;
        }
    }
    ctx->pc = 0x26E224u;
    // 0x26e224: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26e228:
    // 0x26e228: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26e228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26e22c: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x26e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_26e230:
    // 0x26e230: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26e234: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E234u;
    {
        const bool branch_taken_0x26e234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E234u;
        // 0x26e238: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e234) {
            ctx->pc = 0x26E240u;
            goto label_26e240;
        }
    }
    ctx->pc = 0x26E23Cu;
    // 0x26e23c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26e23cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e240:
    // 0x26e240: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x26E240u;
    {
        const bool branch_taken_0x26e240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e240) {
            ctx->pc = 0x26E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e1f8;
        }
    }
    ctx->pc = 0x26E248u;
    // 0x26e248: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x26e24c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E24Cu;
    {
        const bool branch_taken_0x26e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E24Cu;
        // 0x26e250: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e24c) {
            ctx->pc = 0x26E28Cu;
            goto label_26e28c;
        }
    }
    ctx->pc = 0x26E254u;
    // 0x26e254: 0x0  nop
    ctx->pc = 0x26e254u;
    // NOP
label_26e258:
    // 0x26e258: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x26E258u;
    SET_GPR_U32(ctx, 31, 0x26E260u);
    ctx->pc = 0x26E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E258u;
    // 0x26e25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x26E258u, 0x26E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E260u;
label_26e260:
    // 0x26e260: 0x54540006  bnel        $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E260u;
    {
        const bool branch_taken_0x26e260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x26e260) {
            ctx->pc = 0x26E264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E260u;
            // 0x26e264: 0x8e230264  lw          $v1, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E27Cu;
            goto label_26e27c;
        }
    }
    ctx->pc = 0x26E268u;
    // 0x26e268: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26e268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26e26c: 0x56530003  bnel        $s2, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E26Cu;
    {
        const bool branch_taken_0x26e26c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x26e26c) {
            ctx->pc = 0x26E270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E26Cu;
            // 0x26e270: 0x8e230264  lw          $v1, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E27Cu;
            goto label_26e27c;
        }
    }
    ctx->pc = 0x26E274u;
    // 0x26e274: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26E274u;
    {
        const bool branch_taken_0x26e274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E274u;
        // 0x26e278: 0x8e0200f8  lw          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e274) {
            ctx->pc = 0x26E2ACu;
            goto label_26e2ac;
        }
    }
    ctx->pc = 0x26E27Cu;
label_26e27c:
    // 0x26e27c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26e280: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E280u;
    {
        const bool branch_taken_0x26e280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e280) {
            ctx->pc = 0x26E284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E280u;
            // 0x26e284: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E294u;
            goto label_26e294;
        }
    }
    ctx->pc = 0x26E288u;
    // 0x26e288: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26e28c:
    // 0x26e28c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26e290: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x26e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_26e294:
    // 0x26e294: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26e298: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E298u;
    {
        const bool branch_taken_0x26e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E298u;
        // 0x26e29c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e298) {
            ctx->pc = 0x26E2A4u;
            goto label_26e2a4;
        }
    }
    ctx->pc = 0x26E2A0u;
    // 0x26e2a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26e2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e2a4:
    // 0x26e2a4: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x26E2A4u;
    {
        const bool branch_taken_0x26e2a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2A4u;
        // 0x26e2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2a4) {
            ctx->pc = 0x26E258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e258;
        }
    }
    ctx->pc = 0x26E2ACu;
label_26e2ac:
    // 0x26e2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26e2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e2b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26e2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e2b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26e2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e2b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26e2b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26e2bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26e2bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e2c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26e2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x26E2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2C4u;
        // 0x26e2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E2CCu;
    // 0x26e2cc: 0x0  nop
    ctx->pc = 0x26e2ccu;
    // NOP
    ctx->pc = 0x26e2d0u;
}
