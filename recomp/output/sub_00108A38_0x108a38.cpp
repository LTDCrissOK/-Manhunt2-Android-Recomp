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

// Function: sub_00108A38
// Address: 0x108a38 - 0x108aa0
void sub_00108A38_0x108a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108A38_0x108a38");
#endif

    switch (ctx->pc) {
        case 0x108a68u: goto label_108a68;
        case 0x108a78u: goto label_108a78;
        default: break;
    }

    ctx->pc = 0x108a38u;

    // 0x108a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108a3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108a40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108a4c: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x108a50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x108a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x108a54: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108a58: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x108a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x108a5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x108a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108a60: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x108A60u;
    SET_GPR_U32(ctx, 31, 0x108A68u);
    ctx->pc = 0x108A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A60u;
    // 0x108a64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x108A60u, 0x108A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A68u;
label_108a68:
    // 0x108a68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x108a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x108a6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x108a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a70: 0xc04226a  jal         func_1089A8
    ctx->pc = 0x108A70u;
    SET_GPR_U32(ctx, 31, 0x108A78u);
    ctx->pc = 0x108A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A70u;
    // 0x108a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1089A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089A8u, 0x108A70u, 0x108A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A78u;
label_108a78:
    // 0x108a78: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x108a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x108a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108a84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a88: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x108a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x108a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108a90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108a94: 0x3e00008  jr          $ra
    ctx->pc = 0x108A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A94u;
        // 0x108a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A9Cu;
    // 0x108a9c: 0x0  nop
    ctx->pc = 0x108a9cu;
    // NOP
    ctx->pc = 0x108aa0u;
}
