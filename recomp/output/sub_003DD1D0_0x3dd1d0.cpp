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

// Function: sub_003DD1D0
// Address: 0x3dd1d0 - 0x3dd2f8
void sub_003DD1D0_0x3dd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD1D0_0x3dd1d0");
#endif

    switch (ctx->pc) {
        case 0x3dd22cu: goto label_3dd22c;
        case 0x3dd244u: goto label_3dd244;
        case 0x3dd258u: goto label_3dd258;
        case 0x3dd260u: goto label_3dd260;
        case 0x3dd2d0u: goto label_3dd2d0;
        default: break;
    }

    ctx->pc = 0x3dd1d0u;

    // 0x3dd1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dd1d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dd1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dd1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dd1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd1e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3dd1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3dd1e4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3dd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3dd1e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dd1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dd1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dd1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dd1f0: 0x248413c8  addiu       $a0, $a0, 0x13C8
    ctx->pc = 0x3dd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5064));
    // 0x3dd1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dd1f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dd1f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd1fc: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x3dd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x3dd200: 0xae040394  sw          $a0, 0x394($s0)
    ctx->pc = 0x3dd200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 4));
    // 0x3dd204: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dd204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd208: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x3dd208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
    // 0x3dd20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd210: 0xae020498  sw          $v0, 0x498($s0)
    ctx->pc = 0x3dd210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
    // 0x3dd214: 0xae020468  sw          $v0, 0x468($s0)
    ctx->pc = 0x3dd214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 2));
    // 0x3dd218: 0x26110310  addiu       $s1, $s0, 0x310
    ctx->pc = 0x3dd218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x3dd21c: 0xae020438  sw          $v0, 0x438($s0)
    ctx->pc = 0x3dd21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 2));
    // 0x3dd220: 0xae020408  sw          $v0, 0x408($s0)
    ctx->pc = 0x3dd220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
    // 0x3dd224: 0xc06fa74  jal         func_1BE9D0
    ctx->pc = 0x3DD224u;
    SET_GPR_U32(ctx, 31, 0x3DD22Cu);
    ctx->pc = 0x3DD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD224u;
    // 0x3dd228: 0xae0203d8  sw          $v0, 0x3D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9D0u, 0x3DD224u, 0x3DD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD22Cu;
label_3dd22c:
    // 0x3dd22c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dd230: 0x26040328  addiu       $a0, $s0, 0x328
    ctx->pc = 0x3dd230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
    // 0x3dd234: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x3dd234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x3dd238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dd238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dd23c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DD23Cu;
    SET_GPR_U32(ctx, 31, 0x3DD244u);
    ctx->pc = 0x3DD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD23Cu;
    // 0x3dd240: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DD23Cu, 0x3DD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD244u;
label_3dd244:
    // 0x3dd244: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dd244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dd248: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DD248u;
    {
        const bool branch_taken_0x3dd248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD248u;
        // 0x3dd24c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd248) {
            ctx->pc = 0x3DD270u;
            goto label_3dd270;
        }
    }
    ctx->pc = 0x3DD250u;
    // 0x3dd250: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3dd250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dd254: 0x0  nop
    ctx->pc = 0x3dd254u;
    // NOP
label_3dd258:
    // 0x3dd258: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x3DD258u;
    SET_GPR_U32(ctx, 31, 0x3DD260u);
    ctx->pc = 0x3DD25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD258u;
    // 0x3dd25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x3DD258u, 0x3DD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD260u;
label_3dd260:
    // 0x3dd260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dd260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dd264: 0x0  nop
    ctx->pc = 0x3dd264u;
    // NOP
    // 0x3dd268: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DD268u;
    {
        const bool branch_taken_0x3dd268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd268) {
            ctx->pc = 0x3DD26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD268u;
            // 0x3dd26c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd258;
        }
    }
    ctx->pc = 0x3DD270u;
label_3dd270:
    // 0x3dd270: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3dd270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3dd274: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3dd274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3dd278: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3dd278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3dd27c: 0x26620f90  addiu       $v0, $s3, 0xF90
    ctx->pc = 0x3dd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3984));
    // 0x3dd280: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3dd280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3dd284: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x3dd284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x3dd288: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3dd288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3dd28c: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x3dd28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3dd290: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x3dd290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x3dd294: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x3dd294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x3dd298: 0xae0302f4  sw          $v1, 0x2F4($s0)
    ctx->pc = 0x3dd298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 3));
    // 0x3dd29c: 0xae0302a4  sw          $v1, 0x2A4($s0)
    ctx->pc = 0x3dd29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
    // 0x3dd2a0: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x3dd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x3dd2a4: 0xae0201d8  sw          $v0, 0x1D8($s0)
    ctx->pc = 0x3dd2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 2));
    // 0x3dd2a8: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x3dd2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x3dd2ac: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x3dd2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x3dd2b0: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x3dd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x3dd2b4: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3dd2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3dd2b8: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x3dd2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x3dd2bc: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3dd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x3dd2c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD2C0u;
    {
        const bool branch_taken_0x3dd2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2C0u;
        // 0x3dd2c4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd2c0) {
            ctx->pc = 0x3DD2D0u;
            goto label_3dd2d0;
        }
    }
    ctx->pc = 0x3DD2C8u;
    // 0x3dd2c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DD2C8u;
    SET_GPR_U32(ctx, 31, 0x3DD2D0u);
    ctx->pc = 0x3DD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD2C8u;
    // 0x3dd2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DD2C8u, 0x3DD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD2D0u;
label_3dd2d0:
    // 0x3dd2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dd2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd2d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dd2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dd2d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dd2d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd2dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3dd2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dd2e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dd2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2E4u;
        // 0x3dd2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD2ECu;
    // 0x3dd2ec: 0x0  nop
    ctx->pc = 0x3dd2ecu;
    // NOP
    // 0x3dd2f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dd2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dd2f4: 0x0  nop
    ctx->pc = 0x3dd2f4u;
    // NOP
    ctx->pc = 0x3dd2f8u;
}
