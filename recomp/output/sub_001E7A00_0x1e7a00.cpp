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

// Function: sub_001E7A00
// Address: 0x1e7a00 - 0x1e7af8
void sub_001E7A00_0x1e7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A00_0x1e7a00");
#endif

    switch (ctx->pc) {
        case 0x1e7a1cu: goto label_1e7a1c;
        case 0x1e7a48u: goto label_1e7a48;
        case 0x1e7a54u: goto label_1e7a54;
        case 0x1e7a68u: goto label_1e7a68;
        case 0x1e7aa8u: goto label_1e7aa8;
        case 0x1e7adcu: goto label_1e7adc;
        default: break;
    }

    ctx->pc = 0x1e7a00u;

    // 0x1e7a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7a08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7a14: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E7A14u;
    SET_GPR_U32(ctx, 31, 0x1E7A1Cu);
    ctx->pc = 0x1E7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A14u;
    // 0x1e7a18: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E7A14u, 0x1E7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A1Cu;
label_1e7a1c:
    // 0x1e7a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a20: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e7a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e7a2c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e7a30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7a34: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e7a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e7a38: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1e7a3c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e7a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1e7a40: 0xc079e5a  jal         func_1E7968
    ctx->pc = 0x1E7A40u;
    SET_GPR_U32(ctx, 31, 0x1E7A48u);
    ctx->pc = 0x1E7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A40u;
    // 0x1e7a44: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7968u, 0x1E7A40u, 0x1E7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A48u;
label_1e7a48:
    // 0x1e7a48: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1e7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7a4c: 0xc079e2e  jal         func_1E78B8
    ctx->pc = 0x1E7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7A54u);
    ctx->pc = 0x1E7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A4Cu;
    // 0x1e7a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78B8u, 0x1E7A4Cu, 0x1E7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A54u;
label_1e7a54:
    // 0x1e7a54: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e7a58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A58u;
    {
        const bool branch_taken_0x1e7a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A58u;
        // 0x1e7a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a58) {
            ctx->pc = 0x1E7A94u;
            goto label_1e7a94;
        }
    }
    ctx->pc = 0x1E7A60u;
    // 0x1e7a60: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e7a64: 0x0  nop
    ctx->pc = 0x1e7a64u;
    // NOP
label_1e7a68:
    // 0x1e7a68: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1e7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1e7a6c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e7a70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e7a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7a78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e7a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7a7c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e7a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e7a80: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e7a84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7a88: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1e7a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7a8c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7A8Cu;
    {
        const bool branch_taken_0x1e7a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a8c) {
            ctx->pc = 0x1E7A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7A8Cu;
            // 0x1e7a90: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7a68;
        }
    }
    ctx->pc = 0x1E7A94u;
label_1e7a94:
    // 0x1e7a94: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1e7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e7a98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A98u;
    {
        const bool branch_taken_0x1e7a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A98u;
        // 0x1e7a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a98) {
            ctx->pc = 0x1E7AD4u;
            goto label_1e7ad4;
        }
    }
    ctx->pc = 0x1E7AA0u;
    // 0x1e7aa0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e7aa4: 0x0  nop
    ctx->pc = 0x1e7aa4u;
    // NOP
label_1e7aa8:
    // 0x1e7aa8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e7aac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e7ab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e7ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7ab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7ab8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7abc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7ac0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e7ac4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1e7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e7ac8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1e7ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7acc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7ACCu;
    {
        const bool branch_taken_0x1e7acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7acc) {
            ctx->pc = 0x1E7AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7ACCu;
            // 0x1e7ad0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7aa8;
        }
    }
    ctx->pc = 0x1E7AD4u;
label_1e7ad4:
    // 0x1e7ad4: 0xc079ebe  jal         func_1E7AF8
    ctx->pc = 0x1E7AD4u;
    SET_GPR_U32(ctx, 31, 0x1E7ADCu);
    ctx->pc = 0x1E7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AD4u;
    // 0x1e7ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF8u, 0x1E7AD4u, 0x1E7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7ADCu;
label_1e7adc:
    // 0x1e7adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AECu;
        // 0x1e7af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7AF4u;
    // 0x1e7af4: 0x0  nop
    ctx->pc = 0x1e7af4u;
    // NOP
    ctx->pc = 0x1e7af8u;
}
