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

// Function: sub_001659C0
// Address: 0x1659c0 - 0x165a80
void sub_001659C0_0x1659c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001659C0_0x1659c0");
#endif

    switch (ctx->pc) {
        case 0x1659f8u: goto label_1659f8;
        case 0x165a10u: goto label_165a10;
        case 0x165a4cu: goto label_165a4c;
        case 0x165a5cu: goto label_165a5c;
        case 0x165a6cu: goto label_165a6c;
        default: break;
    }

    ctx->pc = 0x1659c0u;

    // 0x1659c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1659c4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1659c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1659c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1659cc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1659d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1659d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1659d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1659d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1659d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1659dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1659e0: 0xae110304  sw          $s1, 0x304($s0)
    ctx->pc = 0x1659e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 17));
    // 0x1659e4: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x1659e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1659e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1659e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1659ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1659ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1659f0: 0xc043996  jal         func_10E658
    ctx->pc = 0x1659F0u;
    SET_GPR_U32(ctx, 31, 0x1659F8u);
    ctx->pc = 0x1659F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659F0u;
    // 0x1659f4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1659F0u, 0x1659F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659F8u;
label_1659f8:
    // 0x1659f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1659F8u;
    {
        const bool branch_taken_0x1659f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1659f8) {
            ctx->pc = 0x165A08u;
            goto label_165a08;
        }
    }
    ctx->pc = 0x165A00u;
    // 0x165a00: 0xae1103ac  sw          $s1, 0x3AC($s0)
    ctx->pc = 0x165a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 17));
    // 0x165a04: 0xae1103b0  sw          $s1, 0x3B0($s0)
    ctx->pc = 0x165a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 17));
label_165a08:
    // 0x165a08: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x165A08u;
    SET_GPR_U32(ctx, 31, 0x165A10u);
    ctx->pc = 0x165A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A08u;
    // 0x165a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x165A08u, 0x165A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A10u;
label_165a10:
    // 0x165a10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x165a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a14: 0x10710013  beq         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x165A14u;
    {
        const bool branch_taken_0x165a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x165A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A14u;
        // 0x165a18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a14) {
            ctx->pc = 0x165A64u;
            goto label_165a64;
        }
    }
    ctx->pc = 0x165A1Cu;
    // 0x165a1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165A1Cu;
    {
        const bool branch_taken_0x165a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a1c) {
            ctx->pc = 0x165A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A1Cu;
            // 0x165a20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A34u;
            goto label_165a34;
        }
    }
    ctx->pc = 0x165A24u;
    // 0x165a24: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x165A24u;
    {
        const bool branch_taken_0x165a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a24) {
            ctx->pc = 0x165A44u;
            goto label_165a44;
        }
    }
    ctx->pc = 0x165A2Cu;
    // 0x165a2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x165A2Cu;
    {
        const bool branch_taken_0x165a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A2Cu;
        // 0x165a30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a2c) {
            ctx->pc = 0x165A70u;
            goto label_165a70;
        }
    }
    ctx->pc = 0x165A34u;
label_165a34:
    // 0x165a34: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165A34u;
    {
        const bool branch_taken_0x165a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x165A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A34u;
        // 0x165a38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a34) {
            ctx->pc = 0x165A54u;
            goto label_165a54;
        }
    }
    ctx->pc = 0x165A3Cu;
    // 0x165a3c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x165A3Cu;
    {
        const bool branch_taken_0x165a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165a3c) {
            ctx->pc = 0x165A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A3Cu;
            // 0x165a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A70u;
            goto label_165a70;
        }
    }
    ctx->pc = 0x165A44u;
label_165a44:
    // 0x165a44: 0xc05993e  jal         func_1664F8
    ctx->pc = 0x165A44u;
    SET_GPR_U32(ctx, 31, 0x165A4Cu);
    ctx->pc = 0x165A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A44u;
    // 0x165a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664F8u, 0x165A44u, 0x165A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A4Cu;
label_165a4c:
    // 0x165a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165A4Cu;
    {
        const bool branch_taken_0x165a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A4Cu;
        // 0x165a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a4c) {
            ctx->pc = 0x165A70u;
            goto label_165a70;
        }
    }
    ctx->pc = 0x165A54u;
label_165a54:
    // 0x165a54: 0xc05998e  jal         func_166638
    ctx->pc = 0x165A54u;
    SET_GPR_U32(ctx, 31, 0x165A5Cu);
    ctx->pc = 0x165A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A54u;
    // 0x165a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166638u, 0x165A54u, 0x165A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A5Cu;
label_165a5c:
    // 0x165a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165A5Cu;
    {
        const bool branch_taken_0x165a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A5Cu;
        // 0x165a60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a5c) {
            ctx->pc = 0x165A70u;
            goto label_165a70;
        }
    }
    ctx->pc = 0x165A64u;
label_165a64:
    // 0x165a64: 0xc05998e  jal         func_166638
    ctx->pc = 0x165A64u;
    SET_GPR_U32(ctx, 31, 0x165A6Cu);
    ctx->pc = 0x165A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A64u;
    // 0x165a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166638u, 0x165A64u, 0x165A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A6Cu;
label_165a6c:
    // 0x165a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165a70:
    // 0x165a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165a78: 0x3e00008  jr          $ra
    ctx->pc = 0x165A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A78u;
        // 0x165a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165A80u;
}
