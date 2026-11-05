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

// Function: sub_00275ED8
// Address: 0x275ed8 - 0x275f68
void sub_00275ED8_0x275ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275ED8_0x275ed8");
#endif

    switch (ctx->pc) {
        case 0x275f18u: goto label_275f18;
        case 0x275f24u: goto label_275f24;
        case 0x275f3cu: goto label_275f3c;
        case 0x275f50u: goto label_275f50;
        default: break;
    }

    ctx->pc = 0x275ed8u;

    // 0x275ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275edc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275ee0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x275ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x275ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275eec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x275eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x275ef0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x275ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275ef4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x275EF4u;
    {
        const bool branch_taken_0x275ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EF4u;
        // 0x275ef8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ef4) {
            ctx->pc = 0x275F3Cu;
            goto label_275f3c;
        }
    }
    ctx->pc = 0x275EFCu;
    // 0x275efc: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x275efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x275f00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x275f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x275f04: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x275f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275f08: 0x5070000a  beql        $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x275F08u;
    {
        const bool branch_taken_0x275f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x275f08) {
            ctx->pc = 0x275F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F08u;
            // 0x275f0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F34u;
            goto label_275f34;
        }
    }
    ctx->pc = 0x275F10u;
    // 0x275f10: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x275f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x275f14: 0x0  nop
    ctx->pc = 0x275f14u;
    // NOP
label_275f18:
    // 0x275f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f1c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x275F1Cu;
    SET_GPR_U32(ctx, 31, 0x275F24u);
    ctx->pc = 0x275F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F1Cu;
    // 0x275f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x275F1Cu, 0x275F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F24u;
label_275f24:
    // 0x275f24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275f28: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x275F28u;
    {
        const bool branch_taken_0x275f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x275F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F28u;
        // 0x275f2c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f28) {
            ctx->pc = 0x275F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275f18;
        }
    }
    ctx->pc = 0x275F30u;
    // 0x275f30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275f34:
    // 0x275f34: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x275F34u;
    SET_GPR_U32(ctx, 31, 0x275F3Cu);
    ctx->pc = 0x275F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F34u;
    // 0x275f38: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x275F34u, 0x275F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F3Cu;
label_275f3c:
    // 0x275f3c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x275f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x275f40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F40u;
    {
        const bool branch_taken_0x275f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F40u;
        // 0x275f44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f40) {
            ctx->pc = 0x275F54u;
            goto label_275f54;
        }
    }
    ctx->pc = 0x275F48u;
    // 0x275f48: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x275F48u;
    SET_GPR_U32(ctx, 31, 0x275F50u);
    ctx->pc = 0x275F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F48u;
    // 0x275f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x275F48u, 0x275F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F50u;
label_275f50:
    // 0x275f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275f54:
    // 0x275f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275f58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x275f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x275f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275f60: 0x3e00008  jr          $ra
    ctx->pc = 0x275F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F60u;
        // 0x275f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F68u;
}
