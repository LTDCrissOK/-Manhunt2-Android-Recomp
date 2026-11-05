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

// Function: sub_002D6278
// Address: 0x2d6278 - 0x2d6338
void sub_002D6278_0x2d6278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6278_0x2d6278");
#endif

    switch (ctx->pc) {
        case 0x2d62b8u: goto label_2d62b8;
        case 0x2d62e8u: goto label_2d62e8;
        default: break;
    }

    ctx->pc = 0x2d6278u;

    // 0x2d6278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d627c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6284: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d6284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6288: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d6288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d628c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d628cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6294: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d6294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d6298: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d6298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d629c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d62a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d62a4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D62A4u;
    {
        const bool branch_taken_0x2d62a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62A4u;
        // 0x2d62a8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d62a4) {
            ctx->pc = 0x2D6308u;
            goto label_2d6308;
        }
    }
    ctx->pc = 0x2D62ACu;
    // 0x2d62ac: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2d62acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d62b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d62b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d62b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d62b8:
    // 0x2d62b8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2d62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d62bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d62bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d62c4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2d62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d62c8: 0x14750002  bne         $v1, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D62C8u;
    {
        const bool branch_taken_0x2d62c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62C8u;
        // 0x2d62cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d62c8) {
            ctx->pc = 0x2D62D4u;
            goto label_2d62d4;
        }
    }
    ctx->pc = 0x2D62D0u;
    // 0x2d62d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d62d4:
    // 0x2d62d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d62d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d62d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D62D8u;
    {
        const bool branch_taken_0x2d62d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D62DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62D8u;
        // 0x2d62dc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d62d8) {
            ctx->pc = 0x2D62F0u;
            goto label_2d62f0;
        }
    }
    ctx->pc = 0x2D62E0u;
    // 0x2d62e0: 0xc0b5320  jal         func_2D4C80
    ctx->pc = 0x2D62E0u;
    SET_GPR_U32(ctx, 31, 0x2D62E8u);
    ctx->pc = 0x2D62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D62E0u;
    // 0x2d62e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C80u, 0x2D62E0u, 0x2D62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62E8u;
label_2d62e8:
    // 0x2d62e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D62E8u;
    {
        const bool branch_taken_0x2d62e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62E8u;
        // 0x2d62ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d62e8) {
            ctx->pc = 0x2D630Cu;
            goto label_2d630c;
        }
    }
    ctx->pc = 0x2D62F0u;
label_2d62f0:
    // 0x2d62f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d62f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d62f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d62f8: 0x267301c4  addiu       $s3, $s3, 0x1C4
    ctx->pc = 0x2d62f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 452));
    // 0x2d62fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d62fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d6300: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D6300u;
    {
        const bool branch_taken_0x2d6300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6300u;
        // 0x2d6304: 0x265201c4  addiu       $s2, $s2, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6300) {
            ctx->pc = 0x2D62B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d62b8;
        }
    }
    ctx->pc = 0x2D6308u;
label_2d6308:
    // 0x2d6308: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d6308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d630c:
    // 0x2d630c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d630cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d631c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d631cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6320: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d6320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d6324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d6324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6328: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6328u;
        // 0x2d632c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6330u;
    // 0x2d6330: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d6334: 0x0  nop
    ctx->pc = 0x2d6334u;
    // NOP
    ctx->pc = 0x2d6338u;
}
