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

// Function: sub_0017EE90
// Address: 0x17ee90 - 0x17ef70
void sub_0017EE90_0x17ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EE90_0x17ee90");
#endif

    switch (ctx->pc) {
        case 0x17eea8u: goto label_17eea8;
        case 0x17ef04u: goto label_17ef04;
        case 0x17ef24u: goto label_17ef24;
        case 0x17ef48u: goto label_17ef48;
        case 0x17ef5cu: goto label_17ef5c;
        default: break;
    }

    ctx->pc = 0x17ee90u;

    // 0x17ee90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ee94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ee98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ee98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17eea0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17EEA0u;
    SET_GPR_U32(ctx, 31, 0x17EEA8u);
    ctx->pc = 0x17EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEA0u;
    // 0x17eea4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17EEA0u, 0x17EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EEA8u;
label_17eea8:
    // 0x17eea8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x17eeac: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x17EEACu;
    {
        const bool branch_taken_0x17eeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEACu;
        // 0x17eeb0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeac) {
            ctx->pc = 0x17EF30u;
            goto label_17ef30;
        }
    }
    ctx->pc = 0x17EEB4u;
    // 0x17eeb4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17eeb8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x17eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17eebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17eec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17eec4: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x17eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17eec8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x17eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x17eecc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x17eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x17eed0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x17eed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x17eed4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x17EED4u;
    {
        const bool branch_taken_0x17eed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eed4) {
            ctx->pc = 0x17EED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EED4u;
            // 0x17eed8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF34u;
            goto label_17ef34;
        }
    }
    ctx->pc = 0x17EEDCu;
    // 0x17eedc: 0x8c630334  lw          $v1, 0x334($v1)
    ctx->pc = 0x17eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x17eee0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x17eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x17eee4: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x17eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
    // 0x17eee8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EEE8u;
    {
        const bool branch_taken_0x17eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eee8) {
            ctx->pc = 0x17EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EEE8u;
            // 0x17eeec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF30u;
            goto label_17ef30;
        }
    }
    ctx->pc = 0x17EEF0u;
    // 0x17eef0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17eef4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17EEF4u;
    {
        const bool branch_taken_0x17eef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEF4u;
        // 0x17eef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eef4) {
            ctx->pc = 0x17EF2Cu;
            goto label_17ef2c;
        }
    }
    ctx->pc = 0x17EEFCu;
    // 0x17eefc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x17EEFCu;
    SET_GPR_U32(ctx, 31, 0x17EF04u);
    ctx->pc = 0x17EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEFCu;
    // 0x17ef00: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x17EEFCu, 0x17EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF04u;
label_17ef04:
    // 0x17ef04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ef08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17ef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef0c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x17ef0cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x17ef10: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF10u;
    {
        const bool branch_taken_0x17ef10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef10) {
            ctx->pc = 0x17EF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF10u;
            // 0x17ef14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF18u;
            goto label_17ef18;
        }
    }
    ctx->pc = 0x17EF18u;
label_17ef18:
    // 0x17ef18: 0x2810  mfhi        $a1
    ctx->pc = 0x17ef18u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x17ef1c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17EF1Cu;
    SET_GPR_U32(ctx, 31, 0x17EF24u);
    ctx->pc = 0x17EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF1Cu;
    // 0x17ef20: 0x24a5000a  addiu       $a1, $a1, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17EF1Cu, 0x17EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF24u;
label_17ef24:
    // 0x17ef24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x17ef28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ef2c:
    // 0x17ef2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17ef30:
    // 0x17ef30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17ef34:
    // 0x17ef34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17EF34u;
    {
        const bool branch_taken_0x17ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF34u;
        // 0x17ef38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef34) {
            ctx->pc = 0x17EF54u;
            goto label_17ef54;
        }
    }
    ctx->pc = 0x17EF3Cu;
    // 0x17ef3c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17ef40: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17EF40u;
    SET_GPR_U32(ctx, 31, 0x17EF48u);
    ctx->pc = 0x17EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF40u;
    // 0x17ef44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17EF40u, 0x17EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF48u;
label_17ef48:
    // 0x17ef48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF48u;
    {
        const bool branch_taken_0x17ef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ef48) {
            ctx->pc = 0x17EF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF48u;
            // 0x17ef4c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF50u;
            goto label_17ef50;
        }
    }
    ctx->pc = 0x17EF50u;
label_17ef50:
    // 0x17ef50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17ef54:
    // 0x17ef54: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17EF54u;
    SET_GPR_U32(ctx, 31, 0x17EF5Cu);
    ctx->pc = 0x17EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF54u;
    // 0x17ef58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17EF54u, 0x17EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF5Cu;
label_17ef5c:
    // 0x17ef5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17ef5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ef60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17ef60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ef64: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF64u;
        // 0x17ef68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EF6Cu;
    // 0x17ef6c: 0x0  nop
    ctx->pc = 0x17ef6cu;
    // NOP
    ctx->pc = 0x17ef70u;
}
