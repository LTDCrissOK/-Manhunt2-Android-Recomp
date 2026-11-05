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

// Function: sub_003A4C90
// Address: 0x3a4c90 - 0x3a4ce8
void sub_003A4C90_0x3a4c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4C90_0x3a4c90");
#endif

    switch (ctx->pc) {
        case 0x3a4cb4u: goto label_3a4cb4;
        case 0x3a4cc0u: goto label_3a4cc0;
        default: break;
    }

    ctx->pc = 0x3a4c90u;

    // 0x3a4c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4c94: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a4c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a4c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a4c9c: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x3a4c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3a4ca0: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x3a4ca0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x3a4ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a4ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a4cac: 0xc0e9316  jal         func_3A4C58
    ctx->pc = 0x3A4CACu;
    SET_GPR_U32(ctx, 31, 0x3A4CB4u);
    ctx->pc = 0x3A4CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CACu;
    // 0x3a4cb0: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4C58u, 0x3A4CACu, 0x3A4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CB4u;
label_3a4cb4:
    // 0x3a4cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4cb8: 0xc0e9316  jal         func_3A4C58
    ctx->pc = 0x3A4CB8u;
    SET_GPR_U32(ctx, 31, 0x3A4CC0u);
    ctx->pc = 0x3A4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CB8u;
    // 0x3a4cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4C58u, 0x3A4CB8u, 0x3A4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CC0u;
label_3a4cc0:
    // 0x3a4cc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a4cc4: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x3a4cc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x3a4cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ccc: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x3a4cccu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3a4cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CDCu;
        // 0x3a4ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CE4u;
    // 0x3a4ce4: 0x0  nop
    ctx->pc = 0x3a4ce4u;
    // NOP
    ctx->pc = 0x3a4ce8u;
}
