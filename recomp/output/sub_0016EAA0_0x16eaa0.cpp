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

// Function: sub_0016EAA0
// Address: 0x16eaa0 - 0x16eb30
void sub_0016EAA0_0x16eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EAA0_0x16eaa0");
#endif

    switch (ctx->pc) {
        case 0x16ead0u: goto label_16ead0;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb1cu: goto label_16eb1c;
        default: break;
    }

    ctx->pc = 0x16eaa0u;

    // 0x16eaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16eaa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16eaa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16eaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16eaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eab0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x16eab4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x16eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16eab8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16EAB8u;
    {
        const bool branch_taken_0x16eab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAB8u;
        // 0x16eabc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eab8) {
            ctx->pc = 0x16EB04u;
            goto label_16eb04;
        }
    }
    ctx->pc = 0x16EAC0u;
    // 0x16eac0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16EAC0u;
    {
        const bool branch_taken_0x16eac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAC0u;
        // 0x16eac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eac0) {
            ctx->pc = 0x16EB1Cu;
            goto label_16eb1c;
        }
    }
    ctx->pc = 0x16EAC8u;
    // 0x16eac8: 0xc05a618  jal         func_169860
    ctx->pc = 0x16EAC8u;
    SET_GPR_U32(ctx, 31, 0x16EAD0u);
    ctx->pc = 0x16EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAC8u;
    // 0x16eacc: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16EAC8u, 0x16EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAD0u;
label_16ead0:
    // 0x16ead0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16ead0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ead4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16EAD4u;
    {
        const bool branch_taken_0x16ead4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD4u;
        // 0x16ead8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead4) {
            ctx->pc = 0x16EB0Cu;
            goto label_16eb0c;
        }
    }
    ctx->pc = 0x16EADCu;
    // 0x16eadc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16eae0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16eae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16eae8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16eaec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EAECu;
    {
        const bool branch_taken_0x16eaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eaec) {
            ctx->pc = 0x16EB0Cu;
            goto label_16eb0c;
        }
    }
    ctx->pc = 0x16EAF4u;
    // 0x16eaf4: 0xc043996  jal         func_10E658
    ctx->pc = 0x16EAF4u;
    SET_GPR_U32(ctx, 31, 0x16EAFCu);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x16EAF4u, 0x16EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAFCu;
label_16eafc:
    // 0x16eafc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EAFCu;
    {
        const bool branch_taken_0x16eafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eafc) {
            ctx->pc = 0x16EB0Cu;
            goto label_16eb0c;
        }
    }
    ctx->pc = 0x16EB04u;
label_16eb04:
    // 0x16eb04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16EB04u;
    {
        const bool branch_taken_0x16eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB04u;
        // 0x16eb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb04) {
            ctx->pc = 0x16EB1Cu;
            goto label_16eb1c;
        }
    }
    ctx->pc = 0x16EB0Cu;
label_16eb0c:
    // 0x16eb0c: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x16eb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x16eb10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16eb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16eb14: 0xc05bacc  jal         func_16EB30
    ctx->pc = 0x16EB14u;
    SET_GPR_U32(ctx, 31, 0x16EB1Cu);
    ctx->pc = 0x16EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB14u;
    // 0x16eb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EB30u, 0x16EB14u, 0x16EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB1Cu;
label_16eb1c:
    // 0x16eb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16eb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16eb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16eb24: 0x3e00008  jr          $ra
    ctx->pc = 0x16EB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB24u;
        // 0x16eb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EB2Cu;
    // 0x16eb2c: 0x0  nop
    ctx->pc = 0x16eb2cu;
    // NOP
    ctx->pc = 0x16eb30u;
}
