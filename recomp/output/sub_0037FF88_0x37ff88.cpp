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

// Function: sub_0037FF88
// Address: 0x37ff88 - 0x380010
void sub_0037FF88_0x37ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FF88_0x37ff88");
#endif

    switch (ctx->pc) {
        case 0x37ff88u: goto label_37ff88;
        case 0x37ff8cu: goto label_37ff8c;
        case 0x37ff90u: goto label_37ff90;
        case 0x37ff94u: goto label_37ff94;
        case 0x37ff98u: goto label_37ff98;
        case 0x37ff9cu: goto label_37ff9c;
        case 0x37ffa0u: goto label_37ffa0;
        case 0x37ffa4u: goto label_37ffa4;
        case 0x37ffa8u: goto label_37ffa8;
        case 0x37ffacu: goto label_37ffac;
        case 0x37ffb0u: goto label_37ffb0;
        case 0x37ffb4u: goto label_37ffb4;
        case 0x37ffb8u: goto label_37ffb8;
        case 0x37ffbcu: goto label_37ffbc;
        case 0x37ffc0u: goto label_37ffc0;
        case 0x37ffc4u: goto label_37ffc4;
        case 0x37ffc8u: goto label_37ffc8;
        case 0x37ffccu: goto label_37ffcc;
        case 0x37ffd0u: goto label_37ffd0;
        case 0x37ffd4u: goto label_37ffd4;
        case 0x37ffd8u: goto label_37ffd8;
        case 0x37ffdcu: goto label_37ffdc;
        case 0x37ffe0u: goto label_37ffe0;
        case 0x37ffe4u: goto label_37ffe4;
        case 0x37ffe8u: goto label_37ffe8;
        case 0x37ffecu: goto label_37ffec;
        case 0x37fff0u: goto label_37fff0;
        case 0x37fff4u: goto label_37fff4;
        case 0x37fff8u: goto label_37fff8;
        case 0x37fffcu: goto label_37fffc;
        case 0x380000u: goto label_380000;
        case 0x380004u: goto label_380004;
        case 0x380008u: goto label_380008;
        case 0x38000cu: goto label_38000c;
        default: break;
    }

    ctx->pc = 0x37ff88u;

label_37ff88:
    // 0x37ff88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37ff8c:
    // 0x37ff8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_37ff90:
    // 0x37ff90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_37ff94:
    // 0x37ff94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37ff94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37ff98:
    // 0x37ff98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_37ff9c:
    // 0x37ff9c: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x37ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_37ffa0:
    // 0x37ffa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37ffa4:
    // 0x37ffa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37ffa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ffa8:
    // 0x37ffa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_37ffac:
    // 0x37ffac: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x37ffacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_37ffb0:
    // 0x37ffb0: 0x1212000e  beq         $s0, $s2, . + 4 + (0xE << 2)
label_37ffb4:
    if (ctx->pc == 0x37FFB4u) {
        ctx->pc = 0x37FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFB0u;
        // 0x37ffb4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FFB8u;
        goto label_37ffb8;
    }
    ctx->pc = 0x37FFB0u;
    {
        const bool branch_taken_0x37ffb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x37FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFB0u;
        // 0x37ffb4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ffb0) {
            ctx->pc = 0x37FFECu;
            goto label_37ffec;
        }
    }
    ctx->pc = 0x37FFB8u;
label_37ffb8:
    // 0x37ffb8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x37ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_37ffbc:
    // 0x37ffbc: 0x0  nop
    ctx->pc = 0x37ffbcu;
    // NOP
label_37ffc0:
    // 0x37ffc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_37ffc4:
    if (ctx->pc == 0x37FFC4u) {
        ctx->pc = 0x37FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFC0u;
        // 0x37ffc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FFC8u;
        goto label_37ffc8;
    }
    ctx->pc = 0x37FFC0u;
    {
        const bool branch_taken_0x37ffc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFC0u;
        // 0x37ffc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ffc0) {
            ctx->pc = 0x37FFD4u;
            goto label_37ffd4;
        }
    }
    ctx->pc = 0x37FFC8u;
label_37ffc8:
    // 0x37ffc8: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x37ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_37ffcc:
    // 0x37ffcc: 0x40f809  jalr        $v0
label_37ffd0:
    if (ctx->pc == 0x37FFD0u) {
        ctx->pc = 0x37FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFCCu;
        // 0x37ffd0: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FFD4u;
        goto label_37ffd4;
    }
    ctx->pc = 0x37FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37FFD4u);
        ctx->pc = 0x37FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFCCu;
        // 0x37ffd0: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FFCCu, 0x37FFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37FFD4u;
label_37ffd4:
    // 0x37ffd4: 0x8e100064  lw          $s0, 0x64($s0)
    ctx->pc = 0x37ffd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_37ffd8:
    // 0x37ffd8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37ffd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37ffdc:
    // 0x37ffdc: 0x2121826  xor         $v1, $s0, $s2
    ctx->pc = 0x37ffdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 18));
label_37ffe0:
    // 0x37ffe0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x37ffe0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_37ffe4:
    // 0x37ffe4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_37ffe8:
    if (ctx->pc == 0x37FFE8u) {
        ctx->pc = 0x37FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FFE4u;
        // 0x37ffe8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37FFECu;
        goto label_37ffec;
    }
    ctx->pc = 0x37FFE4u;
    {
        const bool branch_taken_0x37ffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ffe4) {
            ctx->pc = 0x37FFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FFE4u;
            // 0x37ffe8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ffc0;
        }
    }
    ctx->pc = 0x37FFECu;
label_37ffec:
    // 0x37ffec: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x37ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_37fff0:
    // 0x37fff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37fff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37fff4:
    // 0x37fff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37fff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_37fff8:
    // 0x37fff8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x37fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_37fffc:
    // 0x37fffc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37fffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_380000:
    // 0x380000: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x380000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_380004:
    // 0x380004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_380008:
    // 0x380008: 0x3e00008  jr          $ra
label_38000c:
    if (ctx->pc == 0x38000Cu) {
        ctx->pc = 0x38000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380008u;
        // 0x38000c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380010u;
        goto label_fallthrough_0x380008;
    }
    ctx->pc = 0x380008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380008u;
        // 0x38000c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x380008:
    ctx->pc = 0x380010u;
}
