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

// Function: sub_0016DA18
// Address: 0x16da18 - 0x16dab0
void sub_0016DA18_0x16da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DA18_0x16da18");
#endif

    switch (ctx->pc) {
        case 0x16da2cu: goto label_16da2c;
        case 0x16da3cu: goto label_16da3c;
        case 0x16da44u: goto label_16da44;
        case 0x16da54u: goto label_16da54;
        case 0x16da64u: goto label_16da64;
        case 0x16da7cu: goto label_16da7c;
        case 0x16da8cu: goto label_16da8c;
        case 0x16da9cu: goto label_16da9c;
        default: break;
    }

    ctx->pc = 0x16da18u;

    // 0x16da18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16da18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16da1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16da20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16da24: 0xc05ba86  jal         func_16EA18
    ctx->pc = 0x16DA24u;
    SET_GPR_U32(ctx, 31, 0x16DA2Cu);
    ctx->pc = 0x16DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA24u;
    // 0x16da28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA18u, 0x16DA24u, 0x16DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA2Cu;
label_16da2c:
    // 0x16da2c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x16DA2Cu;
    {
        const bool branch_taken_0x16da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da2c) {
            ctx->pc = 0x16DA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DA2Cu;
            // 0x16da30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA34u;
    // 0x16da34: 0xc05b9d4  jal         func_16E750
    ctx->pc = 0x16DA34u;
    SET_GPR_U32(ctx, 31, 0x16DA3Cu);
    ctx->pc = 0x16DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA34u;
    // 0x16da38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E750u, 0x16DA34u, 0x16DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA3Cu;
label_16da3c:
    // 0x16da3c: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16DA3Cu;
    SET_GPR_U32(ctx, 31, 0x16DA44u);
    ctx->pc = 0x16DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA3Cu;
    // 0x16da40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16DA3Cu, 0x16DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA44u;
label_16da44:
    // 0x16da44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DA44u;
    {
        const bool branch_taken_0x16da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da44) {
            ctx->pc = 0x16DA5Cu;
            goto label_16da5c;
        }
    }
    ctx->pc = 0x16DA4Cu;
    // 0x16da4c: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16DA4Cu;
    SET_GPR_U32(ctx, 31, 0x16DA54u);
    ctx->pc = 0x16DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA4Cu;
    // 0x16da50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16DA4Cu, 0x16DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA54u;
label_16da54:
    // 0x16da54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16DA54u;
    {
        const bool branch_taken_0x16da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA54u;
        // 0x16da58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da54) {
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA5Cu;
label_16da5c:
    // 0x16da5c: 0xc05a618  jal         func_169860
    ctx->pc = 0x16DA5Cu;
    SET_GPR_U32(ctx, 31, 0x16DA64u);
    ctx->pc = 0x16DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA5Cu;
    // 0x16da60: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16DA5Cu, 0x16DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA64u;
label_16da64:
    // 0x16da64: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16da68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16da68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16da6c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16da70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da74: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16DA74u;
    SET_GPR_U32(ctx, 31, 0x16DA7Cu);
    ctx->pc = 0x16DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA74u;
    // 0x16da78: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16DA74u, 0x16DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA7Cu;
label_16da7c:
    // 0x16da7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DA7Cu;
    {
        const bool branch_taken_0x16da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA7Cu;
        // 0x16da80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da7c) {
            ctx->pc = 0x16DA94u;
            goto label_16da94;
        }
    }
    ctx->pc = 0x16DA84u;
    // 0x16da84: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16DA84u;
    SET_GPR_U32(ctx, 31, 0x16DA8Cu);
    ctx->pc = 0x16DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA84u;
    // 0x16da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16DA84u, 0x16DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA8Cu;
label_16da8c:
    // 0x16da8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16DA8Cu;
    {
        const bool branch_taken_0x16da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA8Cu;
        // 0x16da90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da8c) {
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA94u;
label_16da94:
    // 0x16da94: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16DA94u;
    SET_GPR_U32(ctx, 31, 0x16DA9Cu);
    ctx->pc = 0x16DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA94u;
    // 0x16da98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16DA94u, 0x16DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA9Cu;
label_16da9c:
    // 0x16da9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16da9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16daa0:
    // 0x16daa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAA4u;
        // 0x16daa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DAACu;
    // 0x16daac: 0x0  nop
    ctx->pc = 0x16daacu;
    // NOP
    ctx->pc = 0x16dab0u;
}
