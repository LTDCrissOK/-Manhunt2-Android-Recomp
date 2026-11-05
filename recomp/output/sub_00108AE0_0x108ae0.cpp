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

// Function: sub_00108AE0
// Address: 0x108ae0 - 0x108b68
void sub_00108AE0_0x108ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108AE0_0x108ae0");
#endif

    switch (ctx->pc) {
        case 0x108b0cu: goto label_108b0c;
        case 0x108b28u: goto label_108b28;
        case 0x108b44u: goto label_108b44;
        case 0x108b50u: goto label_108b50;
        default: break;
    }

    ctx->pc = 0x108ae0u;

    // 0x108ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108ae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108ae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108af0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108af8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x108af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x108afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b00: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x108b04: 0xc045edc  jal         func_117B70
    ctx->pc = 0x108B04u;
    SET_GPR_U32(ctx, 31, 0x108B0Cu);
    ctx->pc = 0x108B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B04u;
    // 0x108b08: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x108B04u, 0x108B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B0Cu;
label_108b0c:
    // 0x108b0c: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x108b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x108b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108b18: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x108b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108b1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108b20: 0xc046138  jal         func_1184E0
    ctx->pc = 0x108B20u;
    SET_GPR_U32(ctx, 31, 0x108B28u);
    ctx->pc = 0x108B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B20u;
    // 0x108b24: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x108B20u, 0x108B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B28u;
label_108b28:
    // 0x108b28: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x108b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x108b2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108b34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x108b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108b38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108b3c: 0xc046154  jal         func_118550
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B3Cu;
    // 0x108b40: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x108B3Cu, 0x108B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b48: 0xc046256  jal         func_118958
    ctx->pc = 0x108B48u;
    SET_GPR_U32(ctx, 31, 0x108B50u);
    ctx->pc = 0x108B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B48u;
    // 0x108b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x108B48u, 0x108B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B50u;
label_108b50:
    // 0x108b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108b54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108b58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108b60: 0x3e00008  jr          $ra
    ctx->pc = 0x108B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B60u;
        // 0x108b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B68u;
}
