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

// Function: sub_00174FD0
// Address: 0x174fd0 - 0x1750a8
void sub_00174FD0_0x174fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174FD0_0x174fd0");
#endif

    switch (ctx->pc) {
        case 0x174ffcu: goto label_174ffc;
        case 0x175008u: goto label_175008;
        case 0x175020u: goto label_175020;
        case 0x175044u: goto label_175044;
        case 0x175070u: goto label_175070;
        default: break;
    }

    ctx->pc = 0x174fd0u;

    // 0x174fd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x174fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x174fd4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x174fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x174fd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fe0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x174fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x174fe4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x174fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x174fe8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x174fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x174fec: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x174fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x174ff0: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x174ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x174ff4: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x174FF4u;
    SET_GPR_U32(ctx, 31, 0x174FFCu);
    ctx->pc = 0x174FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FF4u;
    // 0x174ff8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x174FF4u, 0x174FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FFCu;
label_174ffc:
    // 0x174ffc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x174ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175000: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x175000u;
    SET_GPR_U32(ctx, 31, 0x175008u);
    ctx->pc = 0x175004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175000u;
    // 0x175004: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x175000u, 0x175008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175008u;
label_175008:
    // 0x175008: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x175008u;
    {
        const bool branch_taken_0x175008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175008u;
        // 0x17500c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175008) {
            ctx->pc = 0x175084u;
            goto label_175084;
        }
    }
    ctx->pc = 0x175010u;
    // 0x175010: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x175010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x175014: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x175014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x175018: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17501c: 0x0  nop
    ctx->pc = 0x17501cu;
    // NOP
label_175020:
    // 0x175020: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x175024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17502c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x17502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x175030: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x175030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175034: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x175034u;
    {
        const bool branch_taken_0x175034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x175038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175034u;
        // 0x175038: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175034) {
            ctx->pc = 0x175074u;
            goto label_175074;
        }
    }
    ctx->pc = 0x17503Cu;
    // 0x17503c: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x17503Cu;
    SET_GPR_U32(ctx, 31, 0x175044u);
    ctx->pc = 0x175040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17503Cu;
    // 0x175040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x17503Cu, 0x175044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175044u;
label_175044:
    // 0x175044: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x175044u;
    {
        const bool branch_taken_0x175044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175044u;
        // 0x175048: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175044) {
            ctx->pc = 0x175074u;
            goto label_175074;
        }
    }
    ctx->pc = 0x17504Cu;
    // 0x17504c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x17504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x175050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175050u;
    {
        const bool branch_taken_0x175050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175050u;
        // 0x175054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175050) {
            ctx->pc = 0x175064u;
            goto label_175064;
        }
    }
    ctx->pc = 0x175058u;
    // 0x175058: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x175058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x17505c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17505Cu;
    {
        const bool branch_taken_0x17505c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17505Cu;
        // 0x175060: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17505c) {
            ctx->pc = 0x175074u;
            goto label_175074;
        }
    }
    ctx->pc = 0x175064u;
label_175064:
    // 0x175064: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x175064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175068: 0xc04445e  jal         func_111178
    ctx->pc = 0x175068u;
    SET_GPR_U32(ctx, 31, 0x175070u);
    ctx->pc = 0x17506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175068u;
    // 0x17506c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x175068u, 0x175070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175070u;
label_175070:
    // 0x175070: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x175070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_175074:
    // 0x175074: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x175074u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175078: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x175078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17507c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17507Cu;
    {
        const bool branch_taken_0x17507c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17507Cu;
        // 0x175080: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17507c) {
            ctx->pc = 0x175020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175020;
        }
    }
    ctx->pc = 0x175084u;
label_175084:
    // 0x175084: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x175084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x175088: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x175088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17508c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x17508cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x175090: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x175090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x175094: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x175094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x175098: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x175098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x17509c: 0x3e00008  jr          $ra
    ctx->pc = 0x17509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1750A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17509Cu;
        // 0x1750a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1750A4u;
    // 0x1750a4: 0x0  nop
    ctx->pc = 0x1750a4u;
    // NOP
    ctx->pc = 0x1750a8u;
}
