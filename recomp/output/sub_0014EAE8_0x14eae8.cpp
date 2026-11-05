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

// Function: sub_0014EAE8
// Address: 0x14eae8 - 0x14eb80
void sub_0014EAE8_0x14eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EAE8_0x14eae8");
#endif

    switch (ctx->pc) {
        case 0x14eb04u: goto label_14eb04;
        case 0x14eb3cu: goto label_14eb3c;
        case 0x14eb4cu: goto label_14eb4c;
        default: break;
    }

    ctx->pc = 0x14eae8u;

    // 0x14eae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14eae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14eaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14eaf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14eaf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14eaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eaf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14eafc: 0xc053dc2  jal         func_14F708
    ctx->pc = 0x14EAFCu;
    SET_GPR_U32(ctx, 31, 0x14EB04u);
    ctx->pc = 0x14EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAFCu;
    // 0x14eb00: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F708u, 0x14EAFCu, 0x14EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB04u;
label_14eb04:
    // 0x14eb04: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14EB04u;
    {
        const bool branch_taken_0x14eb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb04) {
            ctx->pc = 0x14EB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EB04u;
            // 0x14eb08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EB6Cu;
            goto label_14eb6c;
        }
    }
    ctx->pc = 0x14EB0Cu;
    // 0x14eb0c: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14eb0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14eb10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14eb14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14eb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14eb1c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14eb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14eb20: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14EB20u;
    {
        const bool branch_taken_0x14eb20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb20) {
            ctx->pc = 0x14EB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EB20u;
            // 0x14eb24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EB6Cu;
            goto label_14eb6c;
        }
    }
    ctx->pc = 0x14EB28u;
    // 0x14eb28: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14eb2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14eb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb30: 0x2451a080  addiu       $s1, $v0, -0x5F80
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x14eb34: 0xc049844  jal         func_126110
    ctx->pc = 0x14EB34u;
    SET_GPR_U32(ctx, 31, 0x14EB3Cu);
    ctx->pc = 0x14EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB34u;
    // 0x14eb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126110u, 0x14EB34u, 0x14EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB3Cu;
label_14eb3c:
    // 0x14eb3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EB3Cu;
    {
        const bool branch_taken_0x14eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB3Cu;
        // 0x14eb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb3c) {
            ctx->pc = 0x14EB4Cu;
            goto label_14eb4c;
        }
    }
    ctx->pc = 0x14EB44u;
    // 0x14eb44: 0xc04973e  jal         func_125CF8
    ctx->pc = 0x14EB44u;
    SET_GPR_U32(ctx, 31, 0x14EB4Cu);
    ctx->pc = 0x14EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB44u;
    // 0x14eb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CF8u, 0x14EB44u, 0x14EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB4Cu;
label_14eb4c:
    // 0x14eb4c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14eb50: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14eb54: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14eb58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14eb5c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x14eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14eb60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14EB60u;
    {
        const bool branch_taken_0x14eb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eb60) {
            ctx->pc = 0x14EB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EB60u;
            // 0x14eb64: 0xac400238  sw          $zero, 0x238($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EB68u;
            goto label_14eb68;
        }
    }
    ctx->pc = 0x14EB68u;
label_14eb68:
    // 0x14eb68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14eb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14eb6c:
    // 0x14eb6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14eb6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14eb70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eb74: 0x3e00008  jr          $ra
    ctx->pc = 0x14EB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB74u;
        // 0x14eb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EB7Cu;
    // 0x14eb7c: 0x0  nop
    ctx->pc = 0x14eb7cu;
    // NOP
    ctx->pc = 0x14eb80u;
}
