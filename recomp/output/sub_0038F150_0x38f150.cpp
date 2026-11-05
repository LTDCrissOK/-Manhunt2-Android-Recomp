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

// Function: sub_0038F150
// Address: 0x38f150 - 0x38f248
void sub_0038F150_0x38f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F150_0x38f150");
#endif

    switch (ctx->pc) {
        case 0x38f1d0u: goto label_38f1d0;
        case 0x38f1d8u: goto label_38f1d8;
        case 0x38f1f0u: goto label_38f1f0;
        case 0x38f200u: goto label_38f200;
        case 0x38f214u: goto label_38f214;
        default: break;
    }

    ctx->pc = 0x38f150u;

    // 0x38f150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38f154: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f158: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38f15c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f160: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38f164: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38f168: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38f16c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38f16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38f170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f174: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x38f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x38f178: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F178u;
    {
        const bool branch_taken_0x38f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f178) {
            ctx->pc = 0x38F17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F178u;
            // 0x38f17c: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F19Cu;
            goto label_38f19c;
        }
    }
    ctx->pc = 0x38F180u;
    // 0x38f180: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x38f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x38f184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F184u;
    {
        const bool branch_taken_0x38f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F184u;
        // 0x38f188: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f184) {
            ctx->pc = 0x38F1A8u;
            goto label_38f1a8;
        }
    }
    ctx->pc = 0x38F18Cu;
    // 0x38f18c: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x38f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x38f190: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38f194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38F194u;
    {
        const bool branch_taken_0x38f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F194u;
        // 0x38f198: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f194) {
            ctx->pc = 0x38F1B8u;
            goto label_38f1b8;
        }
    }
    ctx->pc = 0x38F19Cu;
label_38f19c:
    // 0x38f19c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38f1a0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F1A0u;
    {
        const bool branch_taken_0x38f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f1a0) {
            ctx->pc = 0x38F1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F1A0u;
            // 0x38f1a4: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F1B0u;
            goto label_38f1b0;
        }
    }
    ctx->pc = 0x38F1A8u;
label_38f1a8:
    // 0x38f1a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38F1A8u;
    {
        const bool branch_taken_0x38f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1A8u;
        // 0x38f1ac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1a8) {
            ctx->pc = 0x38F1B8u;
            goto label_38f1b8;
        }
    }
    ctx->pc = 0x38F1B0u;
label_38f1b0:
    // 0x38f1b0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x38f1b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f1b4: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x38f1b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_38f1b8:
    // 0x38f1b8: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x38F1B8u;
    {
        const bool branch_taken_0x38f1b8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x38F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1B8u;
        // 0x38f1bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1b8) {
            ctx->pc = 0x38F220u;
            goto label_38f220;
        }
    }
    ctx->pc = 0x38F1C0u;
    // 0x38f1c0: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x38f1c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x38f1c4: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x38f1c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x38f1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f1cc: 0x0  nop
    ctx->pc = 0x38f1ccu;
    // NOP
label_38f1d0:
    // 0x38f1d0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F1D0u;
    SET_GPR_U32(ctx, 31, 0x38F1D8u);
    ctx->pc = 0x38F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1D0u;
    // 0x38f1d4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F1D0u, 0x38F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F1D8u;
label_38f1d8:
    // 0x38f1d8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x38f1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38f1dc: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x38f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x38f1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f1e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x38f1e8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F1E8u;
    SET_GPR_U32(ctx, 31, 0x38F1F0u);
    ctx->pc = 0x38F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1E8u;
    // 0x38f1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F1E8u, 0x38F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F1F0u;
label_38f1f0:
    // 0x38f1f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38f1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x38f1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f1f8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F1F8u;
    SET_GPR_U32(ctx, 31, 0x38F200u);
    ctx->pc = 0x38F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1F8u;
    // 0x38f1fc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F1F8u, 0x38F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F200u;
label_38f200:
    // 0x38f200: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x38f200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x38f204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38f208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38f20c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38F20Cu;
    SET_GPR_U32(ctx, 31, 0x38F214u);
    ctx->pc = 0x38F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F20Cu;
    // 0x38f210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38F20Cu, 0x38F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F214u;
label_38f214:
    // 0x38f214: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x38f214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x38f218: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x38F218u;
    {
        const bool branch_taken_0x38f218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F218u;
        // 0x38f21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f218) {
            ctx->pc = 0x38F1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f1d0;
        }
    }
    ctx->pc = 0x38F220u;
label_38f220:
    // 0x38f220: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38f220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38f224: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38f224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38f228: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38f228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38f22c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38f22cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38f230: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38f230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f234: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38f234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f23c: 0x3e00008  jr          $ra
    ctx->pc = 0x38F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F23Cu;
        // 0x38f240: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F244u;
    // 0x38f244: 0x0  nop
    ctx->pc = 0x38f244u;
    // NOP
    ctx->pc = 0x38f248u;
}
