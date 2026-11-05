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

// Function: sub_001AAD60
// Address: 0x1aad60 - 0x1aade8
void sub_001AAD60_0x1aad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAD60_0x1aad60");
#endif

    switch (ctx->pc) {
        case 0x1aad90u: goto label_1aad90;
        case 0x1aada4u: goto label_1aada4;
        default: break;
    }

    ctx->pc = 0x1aad60u;

    // 0x1aad60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aad64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aad68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aad6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aad6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aad74: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1aad78: 0x2a220462  slti        $v0, $s1, 0x462
    ctx->pc = 0x1aad78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1122) ? 1 : 0);
    // 0x1aad7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAD7Cu;
    {
        const bool branch_taken_0x1aad7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aad7c) {
            ctx->pc = 0x1AAD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAD7Cu;
            // 0x1aad80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAD98u;
            goto label_1aad98;
        }
    }
    ctx->pc = 0x1AAD84u;
    // 0x1aad84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aad88: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AAD88u;
    SET_GPR_U32(ctx, 31, 0x1AAD90u);
    ctx->pc = 0x1AAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD88u;
    // 0x1aad8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AAD88u, 0x1AAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD90u;
label_1aad90:
    // 0x1aad90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAD90u;
    {
        const bool branch_taken_0x1aad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD90u;
        // 0x1aad94: 0x2622fb9e  addiu       $v0, $s1, -0x462 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad90) {
            ctx->pc = 0x1AADA8u;
            goto label_1aada8;
        }
    }
    ctx->pc = 0x1AAD98u;
label_1aad98:
    // 0x1aad98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aad98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aad9c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AAD9Cu;
    SET_GPR_U32(ctx, 31, 0x1AADA4u);
    ctx->pc = 0x1AADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD9Cu;
    // 0x1aada0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AAD9Cu, 0x1AADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADA4u;
label_1aada4:
    // 0x1aada4: 0x2622fb9e  addiu       $v0, $s1, -0x462
    ctx->pc = 0x1aada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966174));
label_1aada8:
    // 0x1aada8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aada8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aadac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AADACu;
    {
        const bool branch_taken_0x1aadac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADACu;
        // 0x1aadb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadac) {
            ctx->pc = 0x1AADD0u;
            goto label_1aadd0;
        }
    }
    ctx->pc = 0x1AADB4u;
    // 0x1aadb4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1aadb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aadb8: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1aadb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1aadbc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1aadbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1aadc0: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1aadc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aadc4: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1aadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1aadc8: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1aadcc: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x1aadccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
label_1aadd0:
    // 0x1aadd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aadd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aadd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aadd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aadd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aadd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADDCu;
        // 0x1aade0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AADE4u;
    // 0x1aade4: 0x0  nop
    ctx->pc = 0x1aade4u;
    // NOP
    ctx->pc = 0x1aade8u;
}
