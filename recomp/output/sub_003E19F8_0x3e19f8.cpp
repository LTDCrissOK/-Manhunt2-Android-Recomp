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

// Function: sub_003E19F8
// Address: 0x3e19f8 - 0x3e1a90
void sub_003E19F8_0x3e19f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E19F8_0x3e19f8");
#endif

    switch (ctx->pc) {
        case 0x3e1a28u: goto label_3e1a28;
        case 0x3e1a34u: goto label_3e1a34;
        case 0x3e1a4cu: goto label_3e1a4c;
        case 0x3e1a58u: goto label_3e1a58;
        case 0x3e1a64u: goto label_3e1a64;
        case 0x3e1a78u: goto label_3e1a78;
        default: break;
    }

    ctx->pc = 0x3e19f8u;

    // 0x3e19f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e19f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e19fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1a04: 0x24422e70  addiu       $v0, $v0, 0x2E70
    ctx->pc = 0x3e1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
    // 0x3e1a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1a18: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e1a1c: 0x262401f0  addiu       $a0, $s1, 0x1F0
    ctx->pc = 0x3e1a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x3e1a20: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1A20u;
    SET_GPR_U32(ctx, 31, 0x3E1A28u);
    ctx->pc = 0x3E1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A20u;
    // 0x3e1a24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1A20u, 0x3E1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A28u;
label_3e1a28:
    // 0x3e1a28: 0x262401e8  addiu       $a0, $s1, 0x1E8
    ctx->pc = 0x3e1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x3e1a2c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1A2Cu;
    SET_GPR_U32(ctx, 31, 0x3E1A34u);
    ctx->pc = 0x3E1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A2Cu;
    // 0x3e1a30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1A2Cu, 0x3E1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A34u;
label_3e1a34:
    // 0x3e1a34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1a38: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e1a3c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e1a40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e1a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e1a44: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1A44u;
    SET_GPR_U32(ctx, 31, 0x3E1A4Cu);
    ctx->pc = 0x3E1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A44u;
    // 0x3e1a48: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1A44u, 0x3E1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A4Cu;
label_3e1a4c:
    // 0x3e1a4c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e1a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e1a50: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1A50u;
    SET_GPR_U32(ctx, 31, 0x3E1A58u);
    ctx->pc = 0x3E1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A50u;
    // 0x3e1a54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1A50u, 0x3E1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A58u;
label_3e1a58:
    // 0x3e1a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1a5c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1A5Cu;
    SET_GPR_U32(ctx, 31, 0x3E1A64u);
    ctx->pc = 0x3E1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A5Cu;
    // 0x3e1a60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1A5Cu, 0x3E1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A64u;
label_3e1a64:
    // 0x3e1a64: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1a64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1a68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1A68u;
    {
        const bool branch_taken_0x3e1a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A68u;
        // 0x3e1a6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a68) {
            ctx->pc = 0x3E1A7Cu;
            goto label_3e1a7c;
        }
    }
    ctx->pc = 0x3E1A70u;
    // 0x3e1a70: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1A70u;
    SET_GPR_U32(ctx, 31, 0x3E1A78u);
    ctx->pc = 0x3E1A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A70u;
    // 0x3e1a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1A70u, 0x3E1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A78u;
label_3e1a78:
    // 0x3e1a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1a7c:
    // 0x3e1a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1a84: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A84u;
        // 0x3e1a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1A8Cu;
    // 0x3e1a8c: 0x0  nop
    ctx->pc = 0x3e1a8cu;
    // NOP
    ctx->pc = 0x3e1a90u;
}
