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

// Function: sub_00143E20
// Address: 0x143e20 - 0x143ea8
void sub_00143E20_0x143e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143E20_0x143e20");
#endif

    switch (ctx->pc) {
        case 0x143e38u: goto label_143e38;
        case 0x143e4cu: goto label_143e4c;
        case 0x143e84u: goto label_143e84;
        case 0x143e94u: goto label_143e94;
        default: break;
    }

    ctx->pc = 0x143e20u;

    // 0x143e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143e28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e30: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x143E30u;
    SET_GPR_U32(ctx, 31, 0x143E38u);
    ctx->pc = 0x143E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E30u;
    // 0x143e34: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x143E30u, 0x143E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E38u;
label_143e38:
    // 0x143e38: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x143E38u;
    {
        const bool branch_taken_0x143e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e38) {
            ctx->pc = 0x143E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143E38u;
            // 0x143e3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E98u;
            goto label_143e98;
        }
    }
    ctx->pc = 0x143E40u;
    // 0x143e40: 0x8e050ab0  lw          $a1, 0xAB0($s0)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x143e44: 0xc04da68  jal         func_1369A0
    ctx->pc = 0x143E44u;
    SET_GPR_U32(ctx, 31, 0x143E4Cu);
    ctx->pc = 0x143E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E44u;
    // 0x143e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369A0u, 0x143E44u, 0x143E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E4Cu;
label_143e4c:
    // 0x143e4c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x143E4Cu;
    {
        const bool branch_taken_0x143e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143e4c) {
            ctx->pc = 0x143E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143E4Cu;
            // 0x143e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E98u;
            goto label_143e98;
        }
    }
    ctx->pc = 0x143E54u;
    // 0x143e54: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x143e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143e58: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x143e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x143e5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x143e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x143e60: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x143e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x143e64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143e70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143e78: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x143e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x143e7c: 0xc04398a  jal         func_10E628
    ctx->pc = 0x143E7Cu;
    SET_GPR_U32(ctx, 31, 0x143E84u);
    ctx->pc = 0x143E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E7Cu;
    // 0x143e80: 0x8cc4020c  lw          $a0, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x143E7Cu, 0x143E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E84u;
label_143e84:
    // 0x143e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e8c: 0xc04d91a  jal         func_136468
    ctx->pc = 0x143E8Cu;
    SET_GPR_U32(ctx, 31, 0x143E94u);
    ctx->pc = 0x143E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E8Cu;
    // 0x143e90: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x143E8Cu, 0x143E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E94u;
label_143e94:
    // 0x143e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143e98:
    // 0x143e98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x143E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E9Cu;
        // 0x143ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143EA4u;
    // 0x143ea4: 0x0  nop
    ctx->pc = 0x143ea4u;
    // NOP
    ctx->pc = 0x143ea8u;
}
