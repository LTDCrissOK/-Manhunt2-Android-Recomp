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

// Function: sub_003DFE38
// Address: 0x3dfe38 - 0x3dfea0
void sub_003DFE38_0x3dfe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFE38_0x3dfe38");
#endif

    switch (ctx->pc) {
        case 0x3dfe78u: goto label_3dfe78;
        default: break;
    }

    ctx->pc = 0x3dfe38u;

    // 0x3dfe38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dfe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dfe3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dfe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dfe40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dfe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dfe44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dfe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dfe48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dfe48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3dfe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe50: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x3dfe50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3dfe54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3dfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dfe58: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3dfe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dfe5c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3dfe60: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x3dfe60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3dfe64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dfe64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe68: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x3dfe68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x3dfe6c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3dfe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3dfe70: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3DFE70u;
    SET_GPR_U32(ctx, 31, 0x3DFE78u);
    ctx->pc = 0x3DFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFE70u;
    // 0x3dfe74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3DFE70u, 0x3DFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFE78u;
label_3dfe78:
    // 0x3dfe78: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3dfe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3dfe7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dfe7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfe80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dfe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfe84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3dfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3dfe88: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3dfe88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x3dfe8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dfe8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfe90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dfe90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dfe94: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE94u;
        // 0x3dfe98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFE9Cu;
    // 0x3dfe9c: 0x0  nop
    ctx->pc = 0x3dfe9cu;
    // NOP
    ctx->pc = 0x3dfea0u;
}
