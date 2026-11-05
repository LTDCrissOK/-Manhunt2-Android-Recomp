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

// Function: sub_0012BC58
// Address: 0x12bc58 - 0x12bcc0
void sub_0012BC58_0x12bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BC58_0x12bc58");
#endif

    switch (ctx->pc) {
        case 0x12bc74u: goto label_12bc74;
        case 0x12bcacu: goto label_12bcac;
        default: break;
    }

    ctx->pc = 0x12bc58u;

    // 0x12bc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bc5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bc60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bc6c: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BC6Cu;
    SET_GPR_U32(ctx, 31, 0x12BC74u);
    ctx->pc = 0x12BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC6Cu;
    // 0x12bc70: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BC6Cu, 0x12BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC74u;
label_12bc74:
    // 0x12bc74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bc74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc78: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bc7c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12BC7Cu;
    {
        const bool branch_taken_0x12bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC7Cu;
        // 0x12bc80: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc7c) {
            ctx->pc = 0x12BCACu;
            goto label_12bcac;
        }
    }
    ctx->pc = 0x12BC84u;
    // 0x12bc84: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x12bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12bc88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bc8c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bc90: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x12bc94: 0x90620085  lbu         $v0, 0x85($v1)
    ctx->pc = 0x12bc94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 133)));
    // 0x12bc98: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BC98u;
    {
        const bool branch_taken_0x12bc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC98u;
        // 0x12bc9c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc98) {
            ctx->pc = 0x12BCACu;
            goto label_12bcac;
        }
    }
    ctx->pc = 0x12BCA0u;
    // 0x12bca0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12bca4: 0xc05f5a4  jal         func_17D690
    ctx->pc = 0x12BCA4u;
    SET_GPR_U32(ctx, 31, 0x12BCACu);
    ctx->pc = 0x12BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCA4u;
    // 0x12bca8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D690u, 0x12BCA4u, 0x12BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCACu;
label_12bcac:
    // 0x12bcac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bcb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bcb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCB8u;
        // 0x12bcbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BCC0u;
}
