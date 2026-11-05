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

// Function: sub_00157E08
// Address: 0x157e08 - 0x157ea8
void sub_00157E08_0x157e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157E08_0x157e08");
#endif

    switch (ctx->pc) {
        case 0x157e2cu: goto label_157e2c;
        case 0x157e48u: goto label_157e48;
        case 0x157e54u: goto label_157e54;
        case 0x157e64u: goto label_157e64;
        case 0x157e74u: goto label_157e74;
        case 0x157e7cu: goto label_157e7c;
        case 0x157e90u: goto label_157e90;
        default: break;
    }

    ctx->pc = 0x157e08u;

    // 0x157e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157e10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157e14: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x157e14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x157e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157e20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x157e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157e24: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x157E24u;
    SET_GPR_U32(ctx, 31, 0x157E2Cu);
    ctx->pc = 0x157E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E24u;
    // 0x157e28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x157E24u, 0x157E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E2Cu;
label_157e2c:
    // 0x157e2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x157e34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x157e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157e40: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x157E40u;
    SET_GPR_U32(ctx, 31, 0x157E48u);
    ctx->pc = 0x157E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E40u;
    // 0x157e44: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x157E40u, 0x157E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E48u;
label_157e48:
    // 0x157e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e4c: 0xc04f12a  jal         func_13C4A8
    ctx->pc = 0x157E4Cu;
    SET_GPR_U32(ctx, 31, 0x157E54u);
    ctx->pc = 0x157E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E4Cu;
    // 0x157e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4A8u, 0x157E4Cu, 0x157E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E54u;
label_157e54:
    // 0x157e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e5c: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x157E5Cu;
    SET_GPR_U32(ctx, 31, 0x157E64u);
    ctx->pc = 0x157E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E5Cu;
    // 0x157e60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x157E5Cu, 0x157E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E64u;
label_157e64:
    // 0x157e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x157e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e6c: 0xc04f118  jal         func_13C460
    ctx->pc = 0x157E6Cu;
    SET_GPR_U32(ctx, 31, 0x157E74u);
    ctx->pc = 0x157E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E6Cu;
    // 0x157e70: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x157E6Cu, 0x157E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E74u;
label_157e74:
    // 0x157e74: 0xc04d7c0  jal         func_135F00
    ctx->pc = 0x157E74u;
    SET_GPR_U32(ctx, 31, 0x157E7Cu);
    ctx->pc = 0x157E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E74u;
    // 0x157e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F00u, 0x157E74u, 0x157E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E7Cu;
label_157e7c:
    // 0x157e7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157E7Cu;
    {
        const bool branch_taken_0x157e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E7Cu;
        // 0x157e80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e7c) {
            ctx->pc = 0x157E94u;
            goto label_157e94;
        }
    }
    ctx->pc = 0x157E84u;
    // 0x157e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e88: 0xc04f42e  jal         func_13D0B8
    ctx->pc = 0x157E88u;
    SET_GPR_U32(ctx, 31, 0x157E90u);
    ctx->pc = 0x157E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E88u;
    // 0x157e8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x157E88u, 0x157E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E90u;
label_157e90:
    // 0x157e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157e94:
    // 0x157e94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157e98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x157e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x157EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EA0u;
        // 0x157ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157EA8u;
}
