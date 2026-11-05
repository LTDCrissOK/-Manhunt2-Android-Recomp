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

// Function: sub_003A61B0
// Address: 0x3a61b0 - 0x3a62a8
void sub_003A61B0_0x3a61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A61B0_0x3a61b0");
#endif

    switch (ctx->pc) {
        case 0x3a6224u: goto label_3a6224;
        case 0x3a6238u: goto label_3a6238;
        case 0x3a6240u: goto label_3a6240;
        case 0x3a6248u: goto label_3a6248;
        case 0x3a6250u: goto label_3a6250;
        case 0x3a6258u: goto label_3a6258;
        case 0x3a627cu: goto label_3a627c;
        default: break;
    }

    ctx->pc = 0x3a61b0u;

    // 0x3a61b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a61b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a61b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a61b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a61bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a61c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a61c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a61c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a61c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a61c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a61cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a61ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a61d0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A61D0u;
    {
        const bool branch_taken_0x3a61d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A61D0u;
        // 0x3a61d4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a61d0) {
            ctx->pc = 0x3A6200u;
            goto label_3a6200;
        }
    }
    ctx->pc = 0x3A61D8u;
    // 0x3a61d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a61dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a61dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a61e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a61e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a61e4: 0x24a5de30  addiu       $a1, $a1, -0x21D0
    ctx->pc = 0x3a61e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958640));
    // 0x3a61e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a61e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a61ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a61ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a61f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a61f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a61f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a61f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a61f8: 0x80e960a  j           func_3A5828
    ctx->pc = 0x3A61F8u;
    ctx->pc = 0x3A61FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A61F8u;
    // 0x3a61fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5828u;
    sub_003A5828_0x3a5828(rdram, ctx, runtime); return;
    ctx->pc = 0x3A6200u;
label_3a6200:
    // 0x3a6200: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a6200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a6204: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a6204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a6208: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A6208u;
    {
        const bool branch_taken_0x3a6208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6208) {
            ctx->pc = 0x3A620Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6208u;
            // 0x3a620c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6288u;
            goto label_3a6288;
        }
    }
    ctx->pc = 0x3A6210u;
    // 0x3a6210: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3a6210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a6214: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6214u;
    {
        const bool branch_taken_0x3a6214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6214u;
        // 0x3a6218: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6214) {
            ctx->pc = 0x3A6224u;
            goto label_3a6224;
        }
    }
    ctx->pc = 0x3A621Cu;
    // 0x3a621c: 0xc0e8b4a  jal         func_3A2D28
    ctx->pc = 0x3A621Cu;
    SET_GPR_U32(ctx, 31, 0x3A6224u);
    ctx->pc = 0x3A2D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D28u, 0x3A621Cu, 0x3A6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6224u;
label_3a6224:
    // 0x3a6224: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3a6224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6228: 0x3631fff6  ori         $s1, $s1, 0xFFF6
    ctx->pc = 0x3a6228u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65526);
    // 0x3a622c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A622Cu;
    {
        const bool branch_taken_0x3a622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A622Cu;
        // 0x3a6230: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a622c) {
            ctx->pc = 0x3A6240u;
            goto label_3a6240;
        }
    }
    ctx->pc = 0x3A6234u;
    // 0x3a6234: 0x0  nop
    ctx->pc = 0x3a6234u;
    // NOP
label_3a6238:
    // 0x3a6238: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x3A6238u;
    SET_GPR_U32(ctx, 31, 0x3A6240u);
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x3A6238u, 0x3A6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6240u;
label_3a6240:
    // 0x3a6240: 0xc0e8ca4  jal         func_3A3290
    ctx->pc = 0x3A6240u;
    SET_GPR_U32(ctx, 31, 0x3A6248u);
    ctx->pc = 0x3A3290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3290u, 0x3A6240u, 0x3A6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6248u;
label_3a6248:
    // 0x3a6248: 0xc0e9676  jal         func_3A59D8
    ctx->pc = 0x3A6248u;
    SET_GPR_U32(ctx, 31, 0x3A6250u);
    ctx->pc = 0x3A59D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A59D8u, 0x3A6248u, 0x3A6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6250u;
label_3a6250:
    // 0x3a6250: 0xc0e98aa  jal         func_3A62A8
    ctx->pc = 0x3A6250u;
    SET_GPR_U32(ctx, 31, 0x3A6258u);
    ctx->pc = 0x3A6254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6250u;
    // 0x3a6254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A62A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A62A8u, 0x3A6250u, 0x3A6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6258u;
label_3a6258:
    // 0x3a6258: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x3a6258u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a625c: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A625Cu;
    {
        const bool branch_taken_0x3a625c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3a625c) {
            ctx->pc = 0x3A6260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A625Cu;
            // 0x3a6260: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6280u;
            goto label_3a6280;
        }
    }
    ctx->pc = 0x3A6264u;
    // 0x3a6264: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a6264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a6268: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3a6268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3a626c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A626Cu;
    {
        const bool branch_taken_0x3a626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a626c) {
            ctx->pc = 0x3A6238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6238;
        }
    }
    ctx->pc = 0x3A6274u;
    // 0x3a6274: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A6274u;
    SET_GPR_U32(ctx, 31, 0x3A627Cu);
    ctx->pc = 0x3A6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6274u;
    // 0x3a6278: 0x2684de48  addiu       $a0, $s4, -0x21B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A6274u, 0x3A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A627Cu;
label_3a627c:
    // 0x3a627c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3a627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3a6280:
    // 0x3a6280: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a6280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6288:
    // 0x3a6288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a6288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a628c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a628cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6290: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a6290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a6294: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a6294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6298: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a6298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a629c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A629Cu;
        // 0x3a62a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A629Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A62A4u;
    // 0x3a62a4: 0x0  nop
    ctx->pc = 0x3a62a4u;
    // NOP
    ctx->pc = 0x3a62a8u;
}
