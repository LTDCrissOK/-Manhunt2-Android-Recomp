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

// Function: sub_002B8A20
// Address: 0x2b8a20 - 0x2b8ae8
void sub_002B8A20_0x2b8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8A20_0x2b8a20");
#endif

    switch (ctx->pc) {
        case 0x2b8a34u: goto label_2b8a34;
        case 0x2b8a44u: goto label_2b8a44;
        case 0x2b8a58u: goto label_2b8a58;
        case 0x2b8a70u: goto label_2b8a70;
        case 0x2b8a84u: goto label_2b8a84;
        case 0x2b8ab0u: goto label_2b8ab0;
        case 0x2b8ac8u: goto label_2b8ac8;
        default: break;
    }

    ctx->pc = 0x2b8a20u;

    // 0x2b8a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8a28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b8a2c: 0xc0ad896  jal         func_2B6258
    ctx->pc = 0x2B8A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A34u);
    ctx->pc = 0x2B8A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A2Cu;
    // 0x2b8a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6258u, 0x2B8A2Cu, 0x2B8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A34u;
label_2b8a34:
    // 0x2b8a34: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B8A34u;
    {
        const bool branch_taken_0x2b8a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8a34) {
            ctx->pc = 0x2B8A7Cu;
            goto label_2b8a7c;
        }
    }
    ctx->pc = 0x2B8A3Cu;
    // 0x2b8a3c: 0xc0ad844  jal         func_2B6110
    ctx->pc = 0x2B8A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A44u);
    ctx->pc = 0x2B8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A3Cu;
    // 0x2b8a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6110u, 0x2B8A3Cu, 0x2B8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A44u;
label_2b8a44:
    // 0x2b8a44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8A44u;
    {
        const bool branch_taken_0x2b8a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A44u;
        // 0x2b8a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a44) {
            ctx->pc = 0x2B8A64u;
            goto label_2b8a64;
        }
    }
    ctx->pc = 0x2B8A4Cu;
    // 0x2b8a4c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2b8a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b8a50: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8A50u;
    SET_GPR_U32(ctx, 31, 0x2B8A58u);
    ctx->pc = 0x2B8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A50u;
    // 0x2b8a54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8A50u, 0x2B8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A58u;
label_2b8a58:
    // 0x2b8a58: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b8a5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B8A5Cu;
    {
        const bool branch_taken_0x2b8a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A5Cu;
        // 0x2b8a60: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a5c) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B8A64u;
label_2b8a64:
    // 0x2b8a64: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b8a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b8a68: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8A68u;
    SET_GPR_U32(ctx, 31, 0x2B8A70u);
    ctx->pc = 0x2B8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A68u;
    // 0x2b8a6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8A68u, 0x2B8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A70u;
label_2b8a70:
    // 0x2b8a70: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b8a74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B8A74u;
    {
        const bool branch_taken_0x2b8a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A74u;
        // 0x2b8a78: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a74) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B8A7Cu;
label_2b8a7c:
    // 0x2b8a7c: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A84u);
    ctx->pc = 0x2B8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A7Cu;
    // 0x2b8a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8A7Cu, 0x2B8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A84u;
label_2b8a84:
    // 0x2b8a84: 0x8e045908  lw          $a0, 0x5908($s0)
    ctx->pc = 0x2b8a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22792)));
    // 0x2b8a88: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x2b8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b8a8c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2b8a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b8a90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b8a94: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b8a98: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b8a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2b8a9c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8A9Cu;
    {
        const bool branch_taken_0x2b8a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A9Cu;
        // 0x2b8aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a9c) {
            ctx->pc = 0x2B8ABCu;
            goto label_2b8abc;
        }
    }
    ctx->pc = 0x2B8AA4u;
    // 0x2b8aa4: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2b8aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b8aa8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8AA8u;
    SET_GPR_U32(ctx, 31, 0x2B8AB0u);
    ctx->pc = 0x2B8AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AA8u;
    // 0x2b8aac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8AA8u, 0x2B8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AB0u;
label_2b8ab0:
    // 0x2b8ab0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2b8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b8ab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8AB4u;
    {
        const bool branch_taken_0x2b8ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AB4u;
        // 0x2b8ab8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ab4) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B8ABCu;
label_2b8abc:
    // 0x2b8abc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2b8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b8ac0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8AC0u;
    SET_GPR_U32(ctx, 31, 0x2B8AC8u);
    ctx->pc = 0x2B8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AC0u;
    // 0x2b8ac4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8AC0u, 0x2B8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AC8u;
label_2b8ac8:
    // 0x2b8ac8: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x2b8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2b8acc: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2b8accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2b8ad0:
    // 0x2b8ad0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b8ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ADCu;
        // 0x2b8ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8AE4u;
    // 0x2b8ae4: 0x0  nop
    ctx->pc = 0x2b8ae4u;
    // NOP
    ctx->pc = 0x2b8ae8u;
}
